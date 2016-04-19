static const char* g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_0_GL =
"#version 150\n"
"struct vec1 {\n"
"	float x;\n"
"};\n"
"struct uvec1 {\n"
"	uint x;\n"
"};\n"
"struct ivec1 {\n"
"	int x;\n"
"};\n"
"layout(std140) uniform;\n"
"uniform GlobalConstantBuffer {\n"
" 	uvec4 GlobalConstantBuffer_0;\n"
"	vec2 GlobalConstantBuffer_1;\n"
"	vec2 GlobalConstantBuffer_2;\n"
"	vec2 GlobalConstantBuffer_3;\n"
"	vec2 GlobalConstantBuffer_4;\n"
"	float GlobalConstantBuffer_5;\n"
"	float GlobalConstantBuffer_6;\n"
"	float GlobalConstantBuffer_7;\n"
"	float GlobalConstantBuffer_8;\n"
"	float GlobalConstantBuffer_9;\n"
"	float GlobalConstantBuffer_10;\n"
"	float GlobalConstantBuffer_11;\n"
"	int GlobalConstantBuffer_12;\n"
"	float GlobalConstantBuffer_13;\n"
"	float GlobalConstantBuffer_14;\n"
"	float GlobalConstantBuffer_15;\n"
"	float GlobalConstantBuffer_16;\n"
"	float GlobalConstantBuffer_17;\n"
"	float GlobalConstantBuffer_18;\n"
"	float GlobalConstantBuffer_19;\n"
"	float GlobalConstantBuffer_20;\n"
"	vec2 GlobalConstantBuffer_21;\n"
"	float GlobalConstantBuffer_22;\n"
"	float GlobalConstantBuffer_23;\n"
"	float GlobalConstantBuffer_24;\n"
"	float GlobalConstantBuffer_25;\n"
"	int GlobalConstantBuffer_26;\n"
"	vec4 GlobalConstantBuffer_27[4];\n"
"	float GlobalConstantBuffer_28;\n"
"	float GlobalConstantBuffer_29;\n"
"};\n"
"uniform sampler2D g_t0;\n"
"vec4 Input0;\n"
"out  vec4 PixOutput0;\n"
"#define Output0 PixOutput0\n"
"vec4 Temp[5];\n"
"ivec4 Temp_int[5];\n"
"uvec4 Temp_uint[5];\n"
"void main()\n"
"{\n"
"    Input0.xy = gl_FragCoord.xy;\n"
"    Temp[0].y = vec4(GlobalConstantBuffer_2.xxxy.z).y;\n"
"    Temp[0].z = vec4(0.000000).z;\n"
"    Temp[0].xw = vec4(Input0.yyyx + -GlobalConstantBuffer_21.xyxx.yyyx).xw;\n"
"    Temp[0].yz = vec4(Temp[0].wwxw * GlobalConstantBuffer_2.xxxy.zzwz + Temp[0].yyzy).yz;\n"
"    Temp[1].xy = vec4(GlobalConstantBuffer_3.xyxx.xyxx * Temp[0].yzyy + GlobalConstantBuffer_4.xxxy.zwzz).xy;\n"
"    Temp[2].x = (textureLod(g_t0, Temp[0].yz, 0.000000)).x;\n"
"    Temp[2].yz = vec4(Temp[1].xxyx * Temp[2].xxxx).yz;\n"
"    Temp[0].yz = vec4(Temp[0].xxwx * GlobalConstantBuffer_2.xxxy.wwzw).yz;\n"
"    Temp[1].xy = vec4(GlobalConstantBuffer_3.xyxx.yxyy * Temp[0].yzyy + GlobalConstantBuffer_4.xxxy.wzww).xy;\n"
"    Temp[3].y = (textureLod(g_t0, Temp[0].zy, 0.000000).yxzw).y;\n"
"    Temp[3].xz = vec4(Temp[1].xxyx * Temp[3].yyyy).xz;\n"
"    Temp[1].xyz = vec4(Temp[2].xyzx + -Temp[3].yzxy).xyz;\n"
"    Temp[0].y = vec4(dot((Temp[1].xyzx).xyz, (Temp[1].xyzx).xyz)).y;\n"
"    Temp[2].y = vec4(-GlobalConstantBuffer_2.xxxy.z).y;\n"
"    Temp[2].z = vec4(0.000000).z;\n"
"    Temp[2].xy = vec4(Temp[0].wxww * GlobalConstantBuffer_2.xxxy.zwzz + Temp[2].yzyy).xy;\n"
"    Temp[2].zw = vec4(GlobalConstantBuffer_3.xyxx.xxxy * Temp[2].xxxy + GlobalConstantBuffer_4.xxxy.zzzw).zw;\n"
"    Temp[4].x = (textureLod(g_t0, Temp[2].xy, 0.000000)).x;\n"
"    Temp[4].yz = vec4(Temp[2].zzwz * Temp[4].xxxx).yz;\n"
"    Temp[2].xyz = vec4(Temp[3].yzxy + -Temp[4].xyzx).xyz;\n"
"    Temp[0].z = vec4(dot((Temp[2].xyzx).xyz, (Temp[2].xyzx).xyz)).z;\n"
"    Temp_uint[0].y = ((Temp[0].y)< (Temp[0].z)) ? 0xFFFFFFFFu : 0u;\n"
"    if(vec4(Temp_uint[0].yyyy).x != 0.0) {\n"
"        Temp[1].xyz = vec4(Temp[1].xyzx).xyz;\n"
"    } else {\n"
"        Temp[1].xyz = vec4(Temp[2].xyzx).xyz;\n"
"    }\n"
"    Temp[2].z = vec4(0.000000).z;\n"
"    Temp[2].x = vec4(GlobalConstantBuffer_2.xxxy.w).x;\n"
"    Temp[0].yz = vec4(Temp[0].xxwx * GlobalConstantBuffer_2.xxxy.wwzw + Temp[2].xxzx).yz;\n"
"    Temp[2].xy = vec4(GlobalConstantBuffer_3.xyxx.yxyy * Temp[0].yzyy + GlobalConstantBuffer_4.xxxy.wzww).xy;\n"
"    Temp[4].y = (textureLod(g_t0, Temp[0].zy, 0.000000).yxzw).y;\n"
"    Temp[4].xz = vec4(Temp[2].xxyx * Temp[4].yyyy).xz;\n"
"    Temp[2].xyz = vec4(-Temp[3].xyzx + Temp[4].xyzx).xyz;\n"
"    Temp[0].y = vec4(dot((Temp[2].xyzx).xyz, (Temp[2].xyzx).xyz)).y;\n"
"    Temp[4].z = vec4(0.000000).z;\n"
"    Temp[4].x = vec4(-GlobalConstantBuffer_2.xxxy.w).x;\n"
"    Temp[0].xz = vec4(Temp[0].xxwx * GlobalConstantBuffer_2.xxxy.wwzw + Temp[4].xxzx).xz;\n"
"    Temp[4].xy = vec4(GlobalConstantBuffer_3.xyxx.yxyy * Temp[0].xzxx + GlobalConstantBuffer_4.xxxy.wzww).xy;\n"
"    Temp[0].z = (textureLod(g_t0, Temp[0].zx, 0.000000).ywxz).z;\n"
"    Temp[0].xw = vec4(Temp[0].zzzz * Temp[4].xxxy).xw;\n"
"    Temp[0].xzw = vec4(-Temp[0].xxzw + Temp[3].xxyz).xzw;\n"
"    Temp[1].w = vec4(dot((Temp[0].xzwx).xyz, (Temp[0].xzwx).xyz)).w;\n"
"    Temp_uint[0].y = ((Temp[0].y)< (Temp[1].w)) ? 0xFFFFFFFFu : 0u;\n"
"    if(vec4(Temp_uint[0].yyyy).x != 0.0) {\n"
"        Temp[0].xyz = vec4(Temp[2].xyzx).xyz;\n"
"    } else {\n"
"        Temp[0].xyz = vec4(Temp[0].xzwx).xyz;\n"
"    }\n"
"    Temp[2].xyz = vec4(Temp[0].xyzx * Temp[1].xyzx).xyz;\n"
"    Temp[0].xyz = vec4(Temp[1].zxyz * Temp[0].yzxy + -Temp[2].xyzx).xyz;\n"
"    Temp[0].w = vec4(dot((Temp[0].xyzx).xyz, (Temp[0].xyzx).xyz)).w;\n"
"    Temp[0].w = vec4(inversesqrt(Temp[0].w)).w;\n"
"    Temp[0].xyz = vec4(Temp[0].wwww * Temp[0].xyzx).xyz;\n"
"    Temp_uint[1].xy = uvec2(equal(ivec4(GlobalConstantBuffer_26).xy, ivec4(ivec4(1, 2, 0, 0)).xy)) * 0xFFFFFFFFu;\n"
"    if(vec4(Temp_uint[1].yyyy).x != 0.0) {\n"
"        Temp[1].yzw = vec4(-Temp[0].zzzz).xyz;\n"
"    } else {\n"
"        Temp[1].yzw = vec4(-Temp[0].xxyz).xyz;\n"
"    }\n"
"    if(vec4(Temp_uint[1].xxxx).x != 0.0) {\n"
"        Temp[0].yzw = vec4(-Temp[0].yyyy).xyz;\n"
"    } else {\n"
"        Temp[0].yzw = vec4(Temp[1].yyzw).xyz;\n"
"    }\n"
"    if(vec4(GlobalConstantBuffer_26).x != 0.0) {\n"
"        Output0.xyz = vec4(Temp[0].yzwy).xyz;\n"
"    } else {\n"
"        Output0.xyz = vec4(-Temp[0].xxxx).xyz;\n"
"    }\n"
"    Output0.w = vec4(0.000000).w;\n"
"    return;\n"
"}\n"
;
static const char* g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_1_GL =
"#version 150\n"
"struct vec1 {\n"
"	float x;\n"
"};\n"
"struct uvec1 {\n"
"	uint x;\n"
"};\n"
"struct ivec1 {\n"
"	int x;\n"
"};\n"
"layout(std140) uniform;\n"
"uniform GlobalConstantBuffer {\n"
" 	uvec4 GlobalConstantBuffer_0;\n"
"	vec2 GlobalConstantBuffer_1;\n"
"	vec2 GlobalConstantBuffer_2;\n"
"	vec2 GlobalConstantBuffer_3;\n"
"	vec2 GlobalConstantBuffer_4;\n"
"	float GlobalConstantBuffer_5;\n"
"	float GlobalConstantBuffer_6;\n"
"	float GlobalConstantBuffer_7;\n"
"	float GlobalConstantBuffer_8;\n"
"	float GlobalConstantBuffer_9;\n"
"	float GlobalConstantBuffer_10;\n"
"	float GlobalConstantBuffer_11;\n"
"	int GlobalConstantBuffer_12;\n"
"	float GlobalConstantBuffer_13;\n"
"	float GlobalConstantBuffer_14;\n"
"	float GlobalConstantBuffer_15;\n"
"	float GlobalConstantBuffer_16;\n"
"	float GlobalConstantBuffer_17;\n"
"	float GlobalConstantBuffer_18;\n"
"	float GlobalConstantBuffer_19;\n"
"	float GlobalConstantBuffer_20;\n"
"	vec2 GlobalConstantBuffer_21;\n"
"	float GlobalConstantBuffer_22;\n"
"	float GlobalConstantBuffer_23;\n"
"	float GlobalConstantBuffer_24;\n"
"	float GlobalConstantBuffer_25;\n"
"	int GlobalConstantBuffer_26;\n"
"	vec4 GlobalConstantBuffer_27[4];\n"
"	float GlobalConstantBuffer_28;\n"
"	float GlobalConstantBuffer_29;\n"
"};\n"
"uniform sampler2D g_t1;\n"
"vec4 Input0;\n"
"out  vec4 PixOutput0;\n"
"#define Output0 PixOutput0\n"
"vec4 Temp[2];\n"
"ivec4 Temp_int[2];\n"
"uvec4 Temp_uint[2];\n"
"void main()\n"
"{\n"
"    Input0.xy = gl_FragCoord.xy;\n"
"    Temp_int[0].xy = ivec4(Input0.xyxx).xy;\n"
"    Temp[0].zw = vec4(vec4(0.000000, 0.000000, 0.000000, 0.000000)).zw;\n"
"    Temp[0].xyz = texelFetch(g_t1, ivec2((Temp_int[0]).xy), 0).xyz;\n"
"    Temp[0].xyz = vec4(Temp[0].xyzx * GlobalConstantBuffer_28 + GlobalConstantBuffer_29).xyz;\n"
"    Temp[1].xyz = vec4(Temp[0].yyyy * GlobalConstantBuffer_27[1].xyzx).xyz;\n"
"    Temp[0].xyw = vec4(Temp[0].xxxx * GlobalConstantBuffer_27[0].xyxz + Temp[1].xyxz).xyw;\n"
"    Temp[0].xyz = vec4(Temp[0].zzzz * GlobalConstantBuffer_27[2].xyzx + Temp[0].xywx).xyz;\n"
"    Temp[0].w = vec4(dot((Temp[0].xyzx).xyz, (Temp[0].xyzx).xyz)).w;\n"
"    Temp[0].w = vec4(inversesqrt(Temp[0].w)).w;\n"
"    Temp[0].xyz = vec4(Temp[0].wwww * Temp[0].xyzx).xyz;\n"
"    Temp_uint[1].xy = uvec2(equal(ivec4(GlobalConstantBuffer_26).xy, ivec4(ivec4(1, 2, 0, 0)).xy)) * 0xFFFFFFFFu;\n"
"    if(vec4(Temp_uint[1].yyyy).x != 0.0) {\n"
"        Temp[1].yzw = vec4(-Temp[0].zzzz).xyz;\n"
"    } else {\n"
"        Temp[1].yzw = vec4(-Temp[0].xxyz).xyz;\n"
"    }\n"
"    if(vec4(Temp_uint[1].xxxx).x != 0.0) {\n"
"        Temp[0].yzw = vec4(-Temp[0].yyyy).xyz;\n"
"    } else {\n"
"        Temp[0].yzw = vec4(Temp[1].yyzw).xyz;\n"
"    }\n"
"    if(vec4(GlobalConstantBuffer_26).x != 0.0) {\n"
"        Output0.xyz = vec4(Temp[0].yzwy).xyz;\n"
"    } else {\n"
"        Output0.xyz = vec4(-Temp[0].xxxx).xyz;\n"
"    }\n"
"    Output0.w = vec4(0.000000).w;\n"
"    return;\n"
"}\n"
;
static const char* g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_2_GL =
"#version 150\n"
"struct vec1 {\n"
"	float x;\n"
"};\n"
"struct uvec1 {\n"
"	uint x;\n"
"};\n"
"struct ivec1 {\n"
"	int x;\n"
"};\n"
"layout(std140) uniform;\n"
"uniform GlobalConstantBuffer {\n"
" 	uvec4 GlobalConstantBuffer_0;\n"
"	vec2 GlobalConstantBuffer_1;\n"
"	vec2 GlobalConstantBuffer_2;\n"
"	vec2 GlobalConstantBuffer_3;\n"
"	vec2 GlobalConstantBuffer_4;\n"
"	float GlobalConstantBuffer_5;\n"
"	float GlobalConstantBuffer_6;\n"
"	float GlobalConstantBuffer_7;\n"
"	float GlobalConstantBuffer_8;\n"
"	float GlobalConstantBuffer_9;\n"
"	float GlobalConstantBuffer_10;\n"
"	float GlobalConstantBuffer_11;\n"
"	int GlobalConstantBuffer_12;\n"
"	float GlobalConstantBuffer_13;\n"
"	float GlobalConstantBuffer_14;\n"
"	float GlobalConstantBuffer_15;\n"
"	float GlobalConstantBuffer_16;\n"
"	float GlobalConstantBuffer_17;\n"
"	float GlobalConstantBuffer_18;\n"
"	float GlobalConstantBuffer_19;\n"
"	float GlobalConstantBuffer_20;\n"
"	vec2 GlobalConstantBuffer_21;\n"
"	float GlobalConstantBuffer_22;\n"
"	float GlobalConstantBuffer_23;\n"
"	float GlobalConstantBuffer_24;\n"
"	float GlobalConstantBuffer_25;\n"
"	int GlobalConstantBuffer_26;\n"
"	vec4 GlobalConstantBuffer_27[4];\n"
"	float GlobalConstantBuffer_28;\n"
"	float GlobalConstantBuffer_29;\n"
"};\n"
"uniform sampler2DMS g_t1;\n"
"vec4 Input0;\n"
"out  vec4 PixOutput0;\n"
"#define Output0 PixOutput0\n"
"vec4 Temp[2];\n"
"ivec4 Temp_int[2];\n"
"uvec4 Temp_uint[2];\n"
"void main()\n"
"{\n"
"    Input0.xy = gl_FragCoord.xy;\n"
"    Temp_int[0].xy = ivec4(Input0.xyxx).xy;\n"
"    Temp[0].zw = vec4(vec4(0.000000, 0.000000, 0.000000, 0.000000)).zw;\n"
"    Temp[0].xyz = texelFetch(g_t1, ivec2((Temp_int[0]).xy), 0).xyz;\n"
"    Temp[0].xyz = vec4(Temp[0].xyzx * GlobalConstantBuffer_28 + GlobalConstantBuffer_29).xyz;\n"
"    Temp[1].xyz = vec4(Temp[0].yyyy * GlobalConstantBuffer_27[1].xyzx).xyz;\n"
"    Temp[0].xyw = vec4(Temp[0].xxxx * GlobalConstantBuffer_27[0].xyxz + Temp[1].xyxz).xyw;\n"
"    Temp[0].xyz = vec4(Temp[0].zzzz * GlobalConstantBuffer_27[2].xyzx + Temp[0].xywx).xyz;\n"
"    Temp[0].w = vec4(dot((Temp[0].xyzx).xyz, (Temp[0].xyzx).xyz)).w;\n"
"    Temp[0].w = vec4(inversesqrt(Temp[0].w)).w;\n"
"    Temp[0].xyz = vec4(Temp[0].wwww * Temp[0].xyzx).xyz;\n"
"    Temp_uint[1].xy = uvec2(equal(ivec4(GlobalConstantBuffer_26).xy, ivec4(ivec4(1, 2, 0, 0)).xy)) * 0xFFFFFFFFu;\n"
"    if(vec4(Temp_uint[1].yyyy).x != 0.0) {\n"
"        Temp[1].yzw = vec4(-Temp[0].zzzz).xyz;\n"
"    } else {\n"
"        Temp[1].yzw = vec4(-Temp[0].xxyz).xyz;\n"
"    }\n"
"    if(vec4(Temp_uint[1].xxxx).x != 0.0) {\n"
"        Temp[0].yzw = vec4(-Temp[0].yyyy).xyz;\n"
"    } else {\n"
"        Temp[0].yzw = vec4(Temp[1].yyzw).xyz;\n"
"    }\n"
"    if(vec4(GlobalConstantBuffer_26).x != 0.0) {\n"
"        Output0.xyz = vec4(Temp[0].yzwy).xyz;\n"
"    } else {\n"
"        Output0.xyz = vec4(-Temp[0].xxxx).xyz;\n"
"    }\n"
"    Output0.w = vec4(0.000000).w;\n"
"    return;\n"
"}\n"
;

namespace Generated
{
    void DebugNormals_PS::Create(DevicePointer Device)
    {
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_0].Create(Device, g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_0_GL, sizeof(g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_0_GL));
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_1].Create(Device, g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_1_GL, sizeof(g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_1_GL));
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_2].Create(Device, g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_2_GL, sizeof(g_DebugNormals_PS_FETCH_GBUFFER_NORMAL_2_GL));
    }

    void DebugNormals_PS::Release(DevicePointer Device)
    {
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_0].Release(Device);
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_1].Release(Device);
        m_Shader[ShaderPermutations::FETCH_GBUFFER_NORMAL_2].Release(Device);
    }
}