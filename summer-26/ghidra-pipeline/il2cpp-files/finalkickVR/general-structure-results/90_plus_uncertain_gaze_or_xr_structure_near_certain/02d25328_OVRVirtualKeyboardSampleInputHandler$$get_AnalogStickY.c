/*
FUNCTION_NAME: OVRVirtualKeyboardSampleInputHandler$$get_AnalogStickY
ENTRY_POINT: 02d25328
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_14;functionality_data_collection_or_telemetry_hits_1
*/


void OVRVirtualKeyboardSampleInputHandler__get_AnalogStickY(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *pRVar5;
  void *pvVar6;
  Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *pAVar7;
  undefined8 uVar8;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *pRVar9;
  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE *this;
  Il2CppArray *this_00;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  byte bStack00000000000000df;
  float fStack00000000000000ec;
  int iStack00000000000000fc;
  undefined4 in_stack_00000160;
  undefined4 uStack0000000000000164;
  Il2CppArray *in_stack_00000168;
  Il2CppObject *in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  int in_stack_00000180;
  byte bStack0000000000000187;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xb8) = param_1;
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0xb8),*(void **)(unaff_x29 + -0xf0));
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x10);
  *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x18);
  in_stack_00000198 = *(undefined8 *)(unaff_x29 + -0x20);
  OVRComposition__ctor_mC9F4DA32BAF2E785D3DBE178343CFEE8A1D90886
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0xf8),
             *(undefined8 *)(unaff_x29 + -0x100),in_stack_00000198,in_stack_00000038);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x71) = 0;
  Media_GetMrcFrameSize_m7762AC9F68059EE27CD7DB17E430347F008EEC2F
            (in_stack_00000028,in_stack_00000030,in_stack_00000038);
  in_stack_00000188 =
       SZArrayNew(*(Il2CppClass **)
                   Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                  ,in_stack_00000040._4_4_);
  bStack0000000000000187 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1;
  if (bStack0000000000000187 == 0) {
    *(undefined4 *)(unaff_x29 + -0x5c) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0x78) = *in_stack_00000068;
    in_stack_00000180 = *(int *)(unaff_x29 + -0x2c);
    *(int *)(unaff_x29 + -0x7c) = in_stack_00000180 / 2;
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x5c);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x78);
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x3c) = 0;
    *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0x58) = *in_stack_00000068;
    uStack000000000000017c = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x7c) = uStack000000000000017c;
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x3c);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x58);
  }
  uStack0000000000000178 = *(undefined4 *)(unaff_x29 + -0x7c);
  in_stack_00000190 = in_stack_00000188;
  in_stack_00000170 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000050,&stack0x00000178);
  NullCheck(*(void **)(unaff_x29 + -0x88));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x88),in_stack_00000170);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x88),
             (long)*(int *)(unaff_x29 + -0x80),in_stack_00000170);
  in_stack_00000168 = *(Il2CppArray **)(unaff_x29 + -0x90);
  in_stack_00000160 = *(undefined4 *)(unaff_x29 + -0x30);
  uStack0000000000000164 = in_stack_00000160;
  pIVar4 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000050,&stack0x00000160);
  NullCheck(in_stack_00000168);
  ArrayElementTypeCheck(in_stack_00000168,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_00000168,1,pIVar4);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)(unaff_x29 + -0x98),in_stack_00000168,0);
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  while (iStack00000000000000fc = *(int *)(unaff_x29 + -0x34), iStack00000000000000fc < 2) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x88);
    if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1) == 0) {
      *(undefined4 *)(unaff_x29 + -0xac) = *(undefined4 *)(unaff_x29 + -0x34);
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
      *(int *)(unaff_x29 + -0xbc) = *(int *)(unaff_x29 + -0x2c) / 2;
      *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0xac);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xb8);
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x34);
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
      *(undefined4 *)(unaff_x29 + -0xbc) = *(undefined4 *)(unaff_x29 + -0x2c);
      *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x9c);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xa8);
    }
    uVar3 = *(undefined4 *)(unaff_x29 + -0x30);
    pRVar5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *)
             il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
    RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4
              (pRVar5,*(undefined4 *)(unaff_x29 + -0xbc),uVar3,0x18,0);
    NullCheck(*(void **)(unaff_x29 + -200));
    ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -200),pRVar5);
    RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::SetAt
              (*(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)(unaff_x29 + -200)
               ,(long)*(int *)(unaff_x29 + -0xc0),pRVar5);
    pRVar9 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
              (*(long *)(unaff_x29 + -8) + 0x88);
    iVar1 = *(int *)(unaff_x29 + -0x34);
    NullCheck(pRVar9);
    pvVar6 = (void *)RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt
                               (pRVar9,(long)iVar1);
    NullCheck(pvVar6);
    RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(pvVar6,0);
    this = *(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE **)
            (*(long *)(unaff_x29 + -8) + 0xa0);
    iVar1 = *(int *)(unaff_x29 + -0x34);
    NullCheck(this);
    DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE::SetAt(this,(long)iVar1,0.0);
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x34),1);
    *(undefined4 *)(unaff_x29 + -0x34) = uVar3;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar6 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar6);
  fStack00000000000000ec =
       (float)OVRDisplay_get_displayFrequency_mEBAAEE931893607AEA59FEF00916CCEC79C8DF6B(pvVar6,0);
  uStack000000000000001c = 1;
  *(bool *)(*(long *)(unaff_x29 + -8) + 0x68) =
       *(float *)(*(long *)(unaff_x29 + -8) + 0x6c) < fStack00000000000000ec;
  pAVar7 = (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_System_IO_Stream_<>c_<BeginReadInternal>b__40_0__);
  Action_2__ctor_m8DB7FCC3AD997F665B9CD9BEC16DD4A0BA4BE89D
            (pAVar7,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)Method_System_IO_Stream_<>c_<EnsureAsyncActiveSemaphoreInitialized>b__4_0__,
             (MethodInfo *)0x0);
  OVRManager_add_DisplayRefreshRateChanged_m2E17B5AD96C76D2DDF81B8113DAE278D0B530D94(pAVar7,0);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x90) = 0;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 0xffffffff;
  bStack00000000000000df =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & (byte)uStack000000000000001c;
  if ((bStack00000000000000df & 1) == 0) {
    uVar8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                      (*(MethodInfo **)
                        Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__,uVar8,0);
    *(undefined4 *)(unaff_x29 + -0x38) = 0;
    while (*(int *)(unaff_x29 + -0x38) < 2) {
      this_00 = *(Il2CppArray **)(*(long *)(unaff_x29 + -8) + 0x98);
      iVar1 = *(int *)(unaff_x29 + -0x38);
      iVar2 = *(int *)(unaff_x29 + -0x2c);
      uVar3 = *(undefined4 *)(unaff_x29 + -0x30);
      pRVar5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *)
               il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
      RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(pRVar5,iVar2 / 2,uVar3,0x18,0);
      NullCheck(this_00);
      ArrayElementTypeCheck(this_00,pRVar5);
      RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::SetAt
                ((RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *)this_00,
                 (long)iVar1,pRVar5);
      pRVar9 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
                (*(long *)(unaff_x29 + -8) + 0x98);
      iVar1 = *(int *)(unaff_x29 + -0x38);
      NullCheck(pRVar9);
      pvVar6 = (void *)RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt
                                 (pRVar9,(long)iVar1);
      NullCheck(pvVar6);
      RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(pvVar6,0);
      uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x38),1);
      *(undefined4 *)(unaff_x29 + -0x38) = uVar3;
    }
  }
  OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
             *(undefined8 *)(unaff_x29 + -0x18),*(undefined8 *)(unaff_x29 + -0x20),0);
  return;
}


