/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0531d1b0
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


void OVRPlugin__GetActionStatePose(undefined1 param_1 [16],float param_2,float param_3)

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
  undefined4 in_stack_00000078;
  
  fVar1 = (float)FUN_060dfb18(in_stack_00000078,0);
  fVar2 = (float)FUN_060df7e8(0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
               (unaff_s13 * fVar1 + unaff_s15 * param_3 + unaff_s8 * fVar2) - unaff_s14 * param_2,
               (unaff_s15 * param_2 + unaff_s14 * param_3 + unaff_s8 * fVar1) - unaff_s13 * fVar2,
               (unaff_s14 * fVar2 + unaff_s13 * param_3 + unaff_s8 * param_2) - unaff_s15 * fVar1,
               ((unaff_s8 * param_3 - unaff_s15 * fVar2) - unaff_s14 * fVar1) - unaff_s13 * param_2)
  ;
  return;
}


