/*
FUNCTION_NAME: OVR.OpenVR.CVRChaperoneSetup$$GetWorkingStandingZeroPoseToRawTrackingPose
ENTRY_POINT: 02db4070
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_CVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose(Il2CppClass *param_1)

{
  byte bVar1;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  uStack000000000000004c =
       OVRP_1_84_0_ovrp_UpdatePassthroughColorLut_m79ADC74EA655FD287F6E5988EEE5D1EDF3E749D8
                 (*(undefined8 *)(unaff_x29 + -0x48),in_stack_00000050,in_stack_00000058);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  bVar1 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(uStack000000000000004c,0);
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


