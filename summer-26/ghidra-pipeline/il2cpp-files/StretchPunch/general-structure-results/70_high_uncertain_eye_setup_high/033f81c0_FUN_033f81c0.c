/*
FUNCTION_NAME: FUN_033f81c0
ENTRY_POINT: 033f81c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_033f81c0(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 0x30);
  if (*plVar3 == param_2) {
    if (param_2 == 0) goto OVRPlugin_OVRP_1_79_0__ovrp_DeclareUser;
    bVar1 = true;
  }
  else {
    if (param_2 == 0) {
OVRPlugin_OVRP_1_79_0__ovrp_DeclareUser:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    bVar1 = *(long *)(param_2 + 0x58) != 0;
  }
  plVar2 = (long *)(param_2 + 0x60);
  if (*plVar2 != 0) {
    *(undefined8 *)(*plVar2 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    thunk_FUN_01e10808();
  }
  plVar4 = (long *)(param_2 + 0x58);
  if (*plVar4 != 0) {
    *(long *)(*plVar4 + 0x60) = *plVar2;
    thunk_FUN_01e10808();
  }
  if (*plVar3 == param_2) {
    *plVar3 = *plVar2;
    thunk_FUN_01e10808(plVar3);
  }
  plVar3 = (long *)(param_1 + 0x38);
  if (*plVar3 == param_2) {
    *plVar3 = *plVar4;
    thunk_FUN_01e10808(plVar3);
  }
  *plVar4 = 0;
  thunk_FUN_01e10808(plVar4,0);
  *plVar2 = 0;
  thunk_FUN_01e10808(plVar2,0);
  return bVar1;
}


