/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 05696a88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_0297be94();
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000010,0);
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(lVar2);
}


