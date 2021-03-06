static const uint8_t fs_texture_glsl[522] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, // _params.......s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd7, 0x01, // texColor........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ..varying vec4 v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // _color0;.varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  vec3 v_texcoord
	0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // 0;.uniform vec4 
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // u_params;.unifor
	0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, // m sampler2D s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // xColor;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x63, // n ().{.  vec4 _c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // olor_1;.  _color
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x4c, // _1 = (texture2DL
	0x6f, 0x64, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, // od (s_texColor, 
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x2c, 0x20, // v_texcoord0.xy, 
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x76, 0x5f, // u_params.x) * v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // color0);.  vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_2;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // ar_2.xyz = pow (
	0x61, 0x62, 0x73, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x70, // abs((.    mix (p
	0x6f, 0x77, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // ow (abs(_color_1
	0x2e, 0x78, 0x79, 0x7a, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x2c, // .xyz), vec3(2.2,
	0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x2c, 0x20, 0x5f, 0x63, 0x6f, //  2.2, 2.2)), _co
	0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, // lor_1.xyz, u_par
	0x61, 0x6d, 0x73, 0x2e, 0x7a, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, // ams.z).   * .   
	0x20, 0x65, 0x78, 0x70, 0x32, 0x28, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x77, //  exp2(u_params.w
	0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, // ).  )), vec3(0.4
	0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, // 545454, 0.454545
	0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, // 4, 0.4545454));.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x5f, //   tmpvar_2.w = _
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, // color_1.w;.  gl_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // FragColor = tmpv
	0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // ar_2;.}...
};
static const uint8_t fs_texture_spv[1957] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x80, 0x07, 0x00, // _params.........
	0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x31, 0x01, 0x00, // ...#.........1..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, // .....GLSL.std.45
	0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // 0...............
	0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, // n...............
	0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, // .main...........
	0x00, 0x42, 0x67, 0x66, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x00, 0x00, // .BgfxSampler2D..
	0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x73, // .............m_s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, // ampler..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, // .....m_texture..
	0x00, 0x05, 0x00, 0x05, 0x00, 0x38, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .....8...s_texCo
	0x6c, 0x6f, 0x72, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, // lor......:...s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, // exColorSampler..
	0x00, 0x05, 0x00, 0x07, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .....=...s_texCo
	0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, // lorTexture......
	0x00, 0x78, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, // .x...$Global....
	0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // .x.......u_param
	0x73, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // s........z......
	0x00, 0x05, 0x00, 0x05, 0x00, 0xae, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // .........v_color
	0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, // 0............v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xbd, 0x00, 0x00, // excoord0........
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, // .bgfx_FragData0.
	0x00, 0x47, 0x00, 0x04, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...=..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...=...!......
	0x00, 0x48, 0x00, 0x05, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...x.......#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x78, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....G...x......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...z..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0xae, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G..............
	0x00, 0x47, 0x00, 0x04, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .G..............
	0x00, 0x47, 0x00, 0x04, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G..............
	0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, // .........!......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, // ................
	0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, // ..... ..........
	0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, // ................
	0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, // ................
	0x00, 0x15, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // ............. ..
	0x00, 0x37, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .7...........;..
	0x00, 0x37, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .7...8....... ..
	0x00, 0x39, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .9...........;..
	0x00, 0x39, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .9...:....... ..
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .<...........;..
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, // .<...=..........
	0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .@... .......+..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, // .@...E..........
	0x00, 0x49, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .I.......+......
	0x00, 0x65, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .e......@+......
	0x00, 0x6d, 0x00, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x1e, 0x00, 0x03, 0x00, 0x78, 0x00, 0x00, // .m.../..>....x..
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ..... ...y......
	0x00, 0x78, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, // .x...;...y...z..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .........{... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, // .....+...{...|..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ..... ...}......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, // .....+..........
	0x00, 0x00, 0x00, 0x00, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, // ....@+...{......
	0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x7b, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, // .....+...{......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xad, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ..... ..........
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xad, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, // .....;..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ..... ..........
	0x00, 0x15, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, // .....;..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ..... ..........
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, // .....;..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x15, 0x00, 0x00, 0x00, 0x2f, 0x01, 0x00, // .....,......./..
	0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, // .e...e...e...,..
	0x00, 0x15, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, // .....0...m...m..
	0x00, 0x6d, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .m...6..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, // .=.......;...:..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, // .=.......>...=..
	0x00, 0x50, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, // .P.......?...;..
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, // .>...>...8...?..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, // .=..............
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, // .=..............
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // .=...........8..
	0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2b, 0x01, 0x00, 0x00, 0xd9, 0x00, 0x00, // .Q.......+......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2c, 0x01, 0x00, // .....Q.......,..
	0x00, 0xd9, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, // .........O......
	0x00, 0xdb, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7d, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, // .....A...}......
	0x00, 0x7a, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .z...E.......=..
	0x00, 0x07, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, // .............V..
	0x00, 0x49, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 0x2b, 0x01, 0x00, // .I.......,...+..
	0x00, 0x58, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, // .X..............
	0x00, 0xdb, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, // ................
	0x00, 0x0e, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, // ................
	0x00, 0x4f, 0x00, 0x08, 0x00, 0x15, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, // .O..............
	0x00, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x0c, 0x00, 0x06, 0x00, 0x15, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x15, 0x00, 0x00, // ................
	0x00, 0x13, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, // ................
	0x00, 0x2f, 0x01, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7d, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, // ./...A...}......
	0x00, 0x7a, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .z...E...|...=..
	0x00, 0x07, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x50, 0x00, 0x06, // .............P..
	0x00, 0x15, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, // ................
	0x00, 0xfd, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // .....O..........
	0x00, 0xe1, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x15, 0x00, 0x00, 0x00, 0x1d, 0x01, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x13, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0xfe, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, // .....A...}......
	0x00, 0x7a, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .z...E.......=..
	0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x07, // ................
	0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, // ................
	0x00, 0x88, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x15, 0x00, 0x00, // ................
	0x00, 0x06, 0x01, 0x00, 0x00, 0x1d, 0x01, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x06, // ................
	0x00, 0x15, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .....!..........
	0x00, 0x06, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x15, 0x00, 0x00, 0x00, 0x23, 0x01, 0x00, // .............#..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x30, 0x01, 0x00, // .........!...0..
	0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0xe1, 0x00, 0x00, // .Q..............
	0x00, 0x03, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x00, // .....Q..........
	0x00, 0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, // .#.......Q......
	0x00, 0x0b, 0x01, 0x00, 0x00, 0x23, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, // .....#.......Q..
	0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x23, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, // .........#......
	0x00, 0x50, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00, 0x0a, 0x01, 0x00, // .P..............
	0x00, 0x0b, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x3e, 0x00, 0x03, // .............>..
	0x00, 0xbd, 0x00, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, // .............8..
	0x00, 0x00, 0x00, 0x10, 0x00,                                                                   // .....
};
static const uint8_t fs_texture_dx9[615] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, // _texColor0......
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x34, 0x02, // u_params......4.
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x2c, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, // ........,.CTAB..
	0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, // ................
	0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, // ......|...D.....
	0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, // ......P.......`.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........l.....
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, // ..s_texColor....
	0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, // params..........
	0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, // ..........ps_3_0
	0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, // .Microsoft (R) H
	0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, // LSL Shader Compi
	0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, // ler 10.1..Q.....
	0x0f, 0xa0, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0x2f, 0xba, // .....?.......@/.
	0xe8, 0x3e, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, // .>..............
	0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, // ................
	0xd0, 0xa0, 0x01, 0x00, 0xc4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, // ................
	0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x08, // .._.............
	0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, // ................
	0xe4, 0x90, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x8b, 0x0f, 0x00, // ................
	0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x01, 0x00, 0x55, 0x8b, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, // ........U.......
	0x04, 0x80, 0x01, 0x00, 0xaa, 0x8b, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x80, 0x01, 0x00, // ................
	0xff, 0x80, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x01, 0x00, // ................
	0xaa, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x0e, 0x00, // ................
	0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x01, 0x00, 0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, // ........U.......
	0x04, 0x80, 0x01, 0x00, 0xaa, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, // ................
	0xe4, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x02, 0x00, 0xe4, 0x81, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x07, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x0e, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xff, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x07, 0x80, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, // ................
	0x01, 0x80, 0x00, 0x00, 0x00, 0x8b, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x02, 0x80, 0x00, 0x00, // ................
	0x55, 0x8b, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x8b, 0x05, 0x00, // U...............
	0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xff, 0xa0, 0x0e, 0x00, // ................
	0x00, 0x02, 0x00, 0x08, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, // ................
	0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x04, 0x80, 0x00, 0x00, // ....U...........
	0xaa, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,                                                       // .......
};
static const uint8_t fs_texture_dx11[770] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x75, // FSH............u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, // _params.......s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xcc, 0x02, // texColor0.......
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xab, 0xa0, 0x24, 0x5b, 0x96, 0x54, 0x64, 0xb7, 0x42, 0xe5, // ..DXBC..$[.Td.B.
	0xe8, 0xdd, 0xe9, 0x4c, 0x84, 0x1c, 0x01, 0x00, 0x00, 0x00, 0xcc, 0x02, 0x00, 0x00, 0x03, 0x00, // ...L............
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xf0, 0x01, 0x00, 0x00, 0x40, 0x00, // GET...SHDR....@.
	0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..|...Y...F. ...
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ......Z....`....
	0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, // ..X....p......UU
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, // ..b...........b.
	0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, // ..2.......e.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x48, 0x00, // ......h.......H.
	0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ..F~.......`....
	0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // .... .........8.
	0x00, 0x07, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x72, 0x00, // ..F......./...r.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x81, 0x00, 0x00, 0x00, 0x01, 0x00, // ......F.........
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, // ..6.... ......:.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, // ......8...r.....
	0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xcd, 0xcc, // ..F........@....
	0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, // .@...@...@......
	0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, // ..r.......F.....
	0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ..2...r.......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, // ......F.......F.
	0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, // ..A.......2...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x8a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, // ..F.......F.....
	0x00, 0x00, 0x19, 0x00, 0x00, 0x06, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, // ..............:.
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, //  .........8...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ..............F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, // ....../...r.....
	0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // ..F...........8.
	0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, // ..r.......F.....
	0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, // ...@../..>/..>/.
	0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, // .>........r ....
	0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, // ..F.......>.....
	0x10, 0x00,                                                                                     // ..
};
static const uint8_t fs_texture_mtl[938] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x03, // FSH.............
	0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // e metal;.struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, // xlatMtlShaderInp
	0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, // ut {.  float4 v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, // color0;.  float3
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, //  v_texcoord0;.};
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .struct xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, // haderOutput {.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // float4 gl_FragCo
	0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // lor;.};.struct x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, // latMtlShaderUnif
	0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, // orm {.  float4 u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, // _params;.};.frag
	0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // ment xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // erOutput xlatMtl
	0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // Main (xlatMtlSha
	0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, // derInput _mtl_i 
	0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, // [[stage_in]], co
	0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, // nstant xlatMtlSh
	0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, // aderUniform& _mt
	0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, // l_u [[buffer(0)]
	0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // ].  ,   texture2
	0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // d<float> s_texCo
	0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, // lor [[texture(0)
	0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // ]], sampler _mtl
	0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, // smp_s_texColor [
	0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, // [sampler(0)]]).{
	0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // .  xlatMtlShader
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, // Output _mtl_o;. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, //  float4 _color_1
	0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, //  = 0;.  _color_1
	0x20, 0x3d, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, //  = (s_texColor.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, // ample(_mtlsmp_s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, // texColor, (float
	0x32, 0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // 2)(_mtl_i.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x29, 0x2c, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, // oord0.xy), level
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, // (_mtl_u.u_params
	0x2e, 0x78, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, // .x)) * _mtl_i.v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // color0);.  float
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, // 4 tmpvar_2 = 0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, //   tmpvar_2.xyz =
	0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, //  pow (abs((.    
	0x6d, 0x69, 0x78, 0x20, 0x28, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x5f, 0x63, // mix (pow (abs(_c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // olor_1.xyz), flo
	0x61, 0x74, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, // at3(2.2, 2.2, 2.
	0x32, 0x29, 0x29, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, // 2)), _color_1.xy
	0x7a, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, // z, _mtl_u.u_para
	0x6d, 0x73, 0x2e, 0x7a, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, // ms.z).   * .    
	0x65, 0x78, 0x70, 0x32, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, // exp2(_mtl_u.u_pa
	0x72, 0x61, 0x6d, 0x73, 0x2e, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x2c, 0x20, 0x66, 0x6c, // rams.w).  )), fl
	0x6f, 0x61, 0x74, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, // oat3(0.4545454, 
	0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, // 0.4545454, 0.454
	0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 5454));.  tmpvar
	0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, // _2.w = _color_1.
	0x77, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, // w;.  _mtl_o.gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ragColor = tmpva
	0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, // r_2;.  return _m
	0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // tl_o;.}...
};
extern const uint8_t* fs_texture_pssl;
extern const uint32_t fs_texture_pssl_size;
