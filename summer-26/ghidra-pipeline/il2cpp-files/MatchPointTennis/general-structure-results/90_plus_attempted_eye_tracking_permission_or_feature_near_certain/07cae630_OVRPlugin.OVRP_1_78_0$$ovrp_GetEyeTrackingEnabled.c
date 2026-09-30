/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 07cae630
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07cae6c4) */

void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  FUN_07aa2674(param_1,param_2,0);
  iVar1 = *(int *)(unaff_x19 + 0x38);
  if (iVar1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f511b8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    iVar1 = FUN_07cace14(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f51270,0);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_04455fec();
  }
  return;
}


