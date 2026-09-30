/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 06371df8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined4 unaff_w20;
  
  uVar1 = thunk_FUN_037788cc(*param_1);
  FUN_06ae967c(uVar1,4,unaff_w20,0);
  (**(code **)(*unaff_x19 + 0x618))();
  if (unaff_x19[8] != 0) {
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19dbc(uVar1,2);
                    /* WARNING: Could not recover jumptable at 0x06371e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


