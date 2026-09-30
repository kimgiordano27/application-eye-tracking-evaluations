/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 03667074
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_cpuLevel(long param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_1 != 0) {
      FUN_0407de3c(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                   param_1,0);
      return;
    }
  }
  else if (param_1 != 0) {
    FUN_0407d6f4(param_2[3],param_2[4],param_2[5],param_2[6],param_1,0);
    FUN_0407c958(*param_2,param_2[1],param_2[2],param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


