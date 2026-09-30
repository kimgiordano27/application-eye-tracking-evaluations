/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 07a36c5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRelativePose(void)

{
  int in_w8;
  undefined8 *unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_089d99f0(unaff_s8,unaff_s9,&stack0x00000030,0);
  FUN_07a36d18(&stack0x00000010);
  unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *unaff_x19 = in_stack_00000010;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
                    /* try { // try from 07a36ccc to 07b36ceb has its CatchHandler @ 07a36db0 */
  return 1;
}


