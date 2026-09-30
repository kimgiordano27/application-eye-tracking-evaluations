/*
FUNCTION_NAME: OVRVirtualKeyboardSampleControls$$.ctor
ENTRY_POINT: 02d25764
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void OVRVirtualKeyboardSampleControls___ctor
               (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *param_1,Il2CppObject *param_2,
               undefined8 param_3,MethodInfo *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *pRVar5;
  void *pvVar6;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *this;
  Il2CppArray *this_00;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000060;
  byte bStack00000000000000df;
  undefined8 in_stack_000000e0;
  
  Action_2__ctor_m8DB7FCC3AD997F665B9CD9BEC16DD4A0BA4BE89D
            (param_1,param_2,
             *(long *)Method_System_IO_Stream_<>c_<EnsureAsyncActiveSemaphoreInitialized>b__4_0__,
             param_4);
  OVRManager_add_DisplayRefreshRateChanged_m2E17B5AD96C76D2DDF81B8113DAE278D0B530D94
            (in_stack_000000e0,in_stack_00000010);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x90) = 0;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 0xffffffff;
  bStack00000000000000df = *(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & in_stack_00000018._4_1_;
  if ((bStack00000000000000df & 1) == 0) {
    uVar4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                      (*(MethodInfo **)
                        Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_IO_Stream_<>c_<FlushAsync>b__37_0__,uVar4,0);
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
      this = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
              (*(long *)(unaff_x29 + -8) + 0x98);
      iVar1 = *(int *)(unaff_x29 + -0x38);
      NullCheck(this);
      pvVar6 = (void *)RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt
                                 (this,(long)iVar1);
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


