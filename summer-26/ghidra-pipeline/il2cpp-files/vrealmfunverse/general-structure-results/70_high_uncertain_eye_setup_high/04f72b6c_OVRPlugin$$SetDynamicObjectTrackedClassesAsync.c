/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 04f72b6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDynamicObjectTrackedClassesAsync
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_066c9b97 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IDragHandler>_TypeInfo);
    DAT_066c9b97 = 1;
  }
  puVar1 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IDragHandler>_TypeInfo;
  if (*(long *)(param_5 + 0x40) != 0) {
    lVar2 = thunk_FUN_05c564e4(*(long *)(param_5 + 0x40),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    if (lVar2 != 0) {
      thunk_FUN_05c5ba68(param_1,param_2,param_3,param_4,lVar2,
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      if ((*(long *)(param_5 + 0x40) != 0) &&
         (lVar2 = thunk_FUN_05c564e4(*(long *)(param_5 + 0x40),0), lVar2 != 0)) {
        thunk_FUN_05c5ba68(param_1,param_2,param_3,param_4,lVar2,
                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


