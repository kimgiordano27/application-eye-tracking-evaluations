/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0531d044
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(void)

{
  undefined8 *unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  
  FUN_060fda18(unaff_s8,unaff_s9,&stack0x00000030,0);
  FUN_0531d0f8(&stack0x00000010);
  unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *unaff_x19 = in_stack_00000010;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return 1;
}


