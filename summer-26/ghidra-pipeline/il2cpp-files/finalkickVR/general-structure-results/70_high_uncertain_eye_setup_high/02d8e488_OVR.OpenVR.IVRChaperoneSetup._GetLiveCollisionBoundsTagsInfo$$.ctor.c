/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveCollisionBoundsTagsInfo$$.ctor
ENTRY_POINT: 02d8e488
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo___ctor(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 uStack0000000000000044;
  
  *(undefined4 *)(unaff_x29 + -0x24) = param_1;
  bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68
                    (*(undefined4 *)(unaff_x29 + -0x24));
  *(byte *)(unaff_x29 + -0x25) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x25) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    uVar2 = OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B(0);
    *(undefined4 *)(unaff_x29 + -0x2c) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x10) = 0x40;
  }
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -0x10);
  *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x34);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x10);
  *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x44);
  uStack0000000000000044 = *(undefined4 *)(unaff_x29 + -0x10);
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_3__
                             );
  PassthroughCapabilities__ctor_m968699248C8F4D30B39B64036A32FA4997807118
            (pvVar3,(*(uint *)(unaff_x29 + -0x3c) & 1) == 1,(*(uint *)(unaff_x29 + -0x4c) & 2) == 2,
             uStack0000000000000044,0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(void **)(lVar4 + 0x1d8) = pvVar3;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x1d8),pvVar3);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  return *(undefined8 *)(lVar4 + 0x1d8);
}


