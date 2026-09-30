/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpaceRotation
ENTRY_POINT: 05188524
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpaceRotation(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  puVar1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,param_2,0);
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02cbedc4();
}


