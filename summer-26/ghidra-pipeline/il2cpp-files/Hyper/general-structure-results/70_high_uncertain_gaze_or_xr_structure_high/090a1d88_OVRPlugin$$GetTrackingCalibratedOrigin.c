/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 090a1d88
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  uStack000000000000004c = (undefined4)param_2;
  uStack0000000000000050 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000040 = param_1;
  FUN_0904d9c0(param_3,param_4,0);
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack000000000000001c;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
  return;
}


