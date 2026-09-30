/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 01a14338
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 *unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  fVar1 = (float)FUN_02699088();
  fVar2 = (float)FUN_02698d50(0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_02666aac(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
               (unaff_s14 * fVar1 + unaff_s8 * param_3 + unaff_s15 * fVar2) - unaff_s13 * param_2,
               (unaff_s8 * param_2 + unaff_s13 * param_3 + unaff_s15 * fVar1) - unaff_s14 * fVar2,
               (unaff_s13 * fVar2 + unaff_s14 * param_3 + unaff_s15 * param_2) - unaff_s8 * fVar1,
               ((unaff_s15 * param_3 - unaff_s8 * fVar2) - unaff_s13 * fVar1) - unaff_s14 * param_2)
  ;
  return;
}


