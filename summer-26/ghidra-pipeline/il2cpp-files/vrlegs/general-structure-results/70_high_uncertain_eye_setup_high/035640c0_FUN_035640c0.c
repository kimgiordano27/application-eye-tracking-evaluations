/*
FUNCTION_NAME: FUN_035640c0
ENTRY_POINT: 035640c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035640c0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((DAT_0412df92 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412df92 = 1;
  }
  if ((*(long *)(param_1 + 0x368) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar1 != 0)) {
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_03564168:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_03595b9c(lVar1 + 0x20,param_2,0);
    if ((*(long *)(param_1 + 0x368) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_03564168;
      if (*(long *)(param_1 + 0x720) != 0) {
        FUN_0390f3a4(*(long *)(param_1 + 0x720),*(undefined8 *)(lVar1 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


