/*
FUNCTION_NAME: thunk_FUN_051dc24c
ENTRY_POINT: 051dc248
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_051dc24c(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  
  if ((DAT_06a715b8 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a715b8 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c8c40)
      {
        plVar2 = (long *)0x0;
      }
      goto OVRPlugin_OVRP_1_38_0__ovrp_Media_Update;
    }
  }
  plVar2 = (long *)0x0;
OVRPlugin_OVRP_1_38_0__ovrp_Media_Update:
  *(long **)(param_1 + 0x20) = plVar2;
  *(long **)(param_1 + 0x28) = param_2;
  return;
}


