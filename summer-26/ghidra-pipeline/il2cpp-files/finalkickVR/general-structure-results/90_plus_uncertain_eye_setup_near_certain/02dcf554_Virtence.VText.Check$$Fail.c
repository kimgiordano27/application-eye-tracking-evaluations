/*
FUNCTION_NAME: Virtence.VText.Check$$Fail
ENTRY_POINT: 02dcf554
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte Virtence_VText_Check__Fail(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  undefined1 in_w8;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  byte bStack00000000000000f7;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  int iStack0000000000000184;
  int iStack0000000000000194;
  
  Media_EncodeMrcFrame_m494B203C4816A6DC6CB1C991F5ECB304F697332E::s_Il2CppMethodInitialized = in_w8;
  in_stack_00000040[0x2f] = 0;
  in_stack_00000040[0x2e] = 0;
  in_stack_00000040[0x2d] = 0;
  in_stack_00000040[0x2c] = 0;
  *(undefined4 *)(unaff_x29 + -100) = 0;
  *(undefined4 *)(unaff_x29 + -0x68) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  in_stack_00000040[0x2a] = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  in_stack_00000040[0x29] = *puVar5;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (in_stack_00000040[0x2a],in_stack_00000040[0x29],0);
  *(byte *)(unaff_x29 + -0x79) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x79) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02dcfc80;
  }
  in_stack_00000040[0x27] = in_stack_00000040[0x36];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
  bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000040[0x27],0);
  *(byte *)(unaff_x29 + -0x89) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
               ,0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02dcfc80;
  }
  uVar3 = Media_GetMrcInputVideoBufferType_m84171F6829839074E24610A3F0BC5AD9002DA353(0);
  *(undefined4 *)(unaff_x29 + -0x90) = uVar3;
  if (*(int *)(unaff_x29 + -0x90) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
               ,0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02dcfc80;
  }
  il2cpp_codegen_initobj((void *)(unaff_x29 + -0x48),8);
  in_stack_00000040[0x2e] = 0;
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  in_stack_00000040[0x25] = *puVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
  bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000040[0x25],0);
  *(byte *)(unaff_x29 + -0x99) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x99) & 1) == 0) {
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    in_stack_00000040[0x23] = *puVar5;
    NullCheck((void *)in_stack_00000040[0x23]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000040[0x23]);
    *(undefined4 *)(unaff_x29 + -0xac) = uVar3;
    in_stack_00000040[0x21] = in_stack_00000040[0x36];
    NullCheck((void *)in_stack_00000040[0x21]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000040[0x21]);
    *(undefined4 *)(unaff_x29 + -0xbc) = uVar3;
    if (*(int *)(unaff_x29 + -0xac) != *(int *)(unaff_x29 + -0xbc)) goto LAB_02dcf7e4;
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    in_stack_00000040[0x1f] = *puVar5;
    NullCheck((void *)in_stack_00000040[0x1f]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000040[0x1f]);
    *(undefined4 *)(unaff_x29 + -0xcc) = uVar3;
    in_stack_00000040[0x1d] = in_stack_00000040[0x36];
    NullCheck((void *)in_stack_00000040[0x1d]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000040[0x1d]);
    *(undefined4 *)(unaff_x29 + -0xdc) = uVar3;
    if (*(int *)(unaff_x29 + -0xcc) != *(int *)(unaff_x29 + -0xdc)) goto LAB_02dcf7e4;
  }
  else {
LAB_02dcf7e4:
    in_stack_00000040[0x1b] = in_stack_00000040[0x36];
    NullCheck((void *)in_stack_00000040[0x1b]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000040[0x1b]);
    *(undefined4 *)(unaff_x29 + -0xec) = uVar3;
    in_stack_00000040[0x19] = in_stack_00000040[0x36];
    NullCheck((void *)in_stack_00000040[0x19]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000040[0x19]);
    *(undefined4 *)(unaff_x29 + -0xfc) = uVar3;
    uVar4 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<int,_TreeItem>_Add__);
    in_stack_00000040[0x17] = uVar4;
    Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917
              (in_stack_00000040[0x17],*(undefined4 *)(unaff_x29 + -0xec),
               *(undefined4 *)(unaff_x29 + -0xfc),5,0,0);
    uVar4 = in_stack_00000040[0x17];
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    *puVar5 = uVar4;
    ppvVar6 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
    Il2CppCodeGenWriteBarrier(ppvVar6,(void *)in_stack_00000040[0x17]);
  }
  uVar4 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7();
  in_stack_00000040[0x16] = uVar4;
  in_stack_00000040[0x15] = in_stack_00000040[0x36];
  RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(in_stack_00000040[0x15],0);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  in_stack_00000040[0x14] = *puVar5;
  in_stack_00000040[0x13] = in_stack_00000040[0x36];
  NullCheck((void *)in_stack_00000040[0x13]);
  iStack0000000000000194 =
       VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000040[0x13]);
  in_stack_00000040[0x11] = in_stack_00000040[0x36];
  NullCheck((void *)in_stack_00000040[0x11]);
  iStack0000000000000184 =
       VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000040[0x11]);
  in_stack_00000040[0xe] = 0;
  in_stack_00000040[0xf] = 0;
  Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
            (&stack0x00000170,0.0,0.0,(float)iStack0000000000000194,(float)iStack0000000000000184,
             (MethodInfo *)0x0);
  NullCheck((void *)in_stack_00000040[0x14]);
  in_stack_00000040[0xd] = in_stack_00000040[0xf];
  in_stack_00000040[0xc] = in_stack_00000040[0xe];
  uStack000000000000001c = 0;
  Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9
            (uStack0000000000000160,uStack0000000000000164,uStack0000000000000168,
             uStack000000000000016c,in_stack_00000040[0x14],0,0,0);
  RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(in_stack_00000040[0x16],0);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  in_stack_00000040[0xb] = *puVar5;
  NullCheck((void *)in_stack_00000040[0xb]);
  uVar4 = Texture2D_GetPixels32_m16E5CE04A162EA1027A0D255CA0A303909915909
                    (in_stack_00000040[0xb],uStack000000000000001c,0);
  in_stack_00000040[10] = uVar4;
  uVar4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(in_stack_00000040[10],3,0);
  in_stack_00000040[8] = uVar4;
  in_stack_00000040[9] = in_stack_00000040[8];
  in_stack_00000040[0x2f] = in_stack_00000040[9];
  uVar4 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(unaff_x29 + -0x48,0)
  ;
  in_stack_00000040[7] = uVar4;
  in_stack_00000040[0x2e] = in_stack_00000040[7];
  il2cpp_codegen_initobj((void *)(unaff_x29 + -0x58),8);
  in_stack_00000040[0x2c] = 0;
  *(undefined4 *)(unaff_x29 + -100) = 0;
  in_stack_00000040[6] = in_stack_00000040[0x35];
  if (in_stack_00000040[6] != 0) {
    in_stack_00000040[5] = in_stack_00000040[0x35];
    uVar4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(in_stack_00000040[5],3);
    in_stack_00000040[3] = uVar4;
    in_stack_00000040[4] = in_stack_00000040[3];
    in_stack_00000040[0x2d] = in_stack_00000040[4];
    uVar4 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                      (unaff_x29 + -0x58,0);
    in_stack_00000040[2] = uVar4;
    in_stack_00000040[0x2c] = in_stack_00000040[2];
    uVar3 = il2cpp_codegen_multiply<int,int>(*(int *)(unaff_x29 + -0x1c),4);
    *(undefined4 *)(unaff_x29 + -100) = uVar3;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *in_stack_00000040 = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  bStack00000000000000f7 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*in_stack_00000040,*puVar5,0);
  bStack00000000000000f7 = bStack00000000000000f7 & 1;
  if (bStack00000000000000f7 == 0) {
    uVar8 = in_stack_00000040[0x2e];
    uVar9 = in_stack_00000040[0x2c];
    uVar3 = *(undefined4 *)(unaff_x29 + -100);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x20);
    uVar10 = in_stack_00000040[0x33];
    uVar4 = in_stack_00000040[0x31];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    uVar3 = OVRP_1_38_0_ovrp_Media_EncodeMrcFrame_mAC391EC4739792A81FA113F5E89B7488C8E4BD04
                      (uVar10,uVar8,uVar9,uVar3,uVar1,uVar4,0);
    *(undefined4 *)(unaff_x29 + -0x68) = uVar3;
  }
  else {
    uVar8 = in_stack_00000040[0x2e];
    uVar9 = in_stack_00000040[0x2c];
    uVar3 = *(undefined4 *)(unaff_x29 + -100);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x20);
    uVar10 = in_stack_00000040[0x33];
    uVar7 = in_stack_00000040[0x32];
    uVar4 = in_stack_00000040[0x31];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    uVar3 = OVRP_1_49_0_ovrp_Media_EncodeMrcFrameWithPoseTime_m66579ABD32CF065C6EEEBA2A86DBB4C4107BE64D
                      (uVar10,uVar7,uVar8,uVar9,uVar3,uVar1,uVar4,0);
    *(undefined4 *)(unaff_x29 + -0x68) = uVar3;
  }
  GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(unaff_x29 + -0x48,0);
  if (in_stack_00000040[0x35] != 0) {
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(unaff_x29 + -0x58,0);
  }
  *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x68) == 0;
LAB_02dcfc80:
  return *(byte *)(unaff_x29 + -1) & 1;
}


