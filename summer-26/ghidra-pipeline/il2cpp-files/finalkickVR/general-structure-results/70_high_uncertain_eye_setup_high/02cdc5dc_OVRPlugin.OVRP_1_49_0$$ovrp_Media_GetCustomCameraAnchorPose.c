/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 02cdc5dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(undefined4 param_1)

{
  void *pvVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000048;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  
  uStack00000000000000a4 = param_1;
  pvVar1 = (void *)il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  Error__ctor_m62F1438EC56B44EBC6CAEAC0B62CEEE9C98EF44A
            (pvVar1,in_stack_000000c0._4_4_,in_stack_000000b0,uStack00000000000000a4,
             in_stack_00000008);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x20) = pvVar1;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x20),pvVar1);
  return;
}


