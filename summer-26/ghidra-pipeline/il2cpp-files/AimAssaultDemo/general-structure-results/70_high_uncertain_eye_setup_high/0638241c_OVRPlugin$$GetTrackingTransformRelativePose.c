/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 0638241c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRelativePose(void)

{
  undefined4 uVar1;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_061d52c8(0);
  if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
  }
  uVar1 = FUN_061b3f6c();
                    /* try { // try from 063824b0 to 064824d3 has its CatchHandler @ 0638144c */
  in_stack_00000008 = 0;
  FUN_04e6939c(&stack0x00000008,uVar1,*(undefined8 *)PTR_DAT_07da2d38);
                    /* try { // try from 063824d4 to 064824e3 has its CatchHandler @ 063824e8 */
  return in_stack_00000008;
}


