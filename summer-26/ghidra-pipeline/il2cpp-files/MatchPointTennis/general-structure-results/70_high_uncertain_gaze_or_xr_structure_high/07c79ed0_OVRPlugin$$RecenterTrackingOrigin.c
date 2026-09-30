/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 07c79ed0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x21;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uStack000000000000000c = (undefined4)param_2;
  uStack0000000000000010 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000000 = param_1;
  FUN_07c1de88();
  *(undefined8 *)((long)unaff_x21 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x21 + 0xc) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  unaff_x21[1] = in_stack_00000028;
  *unaff_x21 = in_stack_00000020;
  return;
}


