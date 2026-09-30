/*
FUNCTION_NAME: FUN_04f1e5b0
ENTRY_POINT: 04f1e5b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_04f1e5b0(undefined8 param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_066c98a8 & 1) == 0) {
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    DAT_066c98a8 = 1;
  }
  puVar1 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar2 = *(long *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
    }
    else {
      if (param_3 != 1) {
        return 0;
      }
      lVar2 = *(long *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    }
  }
  else if (param_3 == 2) {
    lVar2 = *(long *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  }
  else {
    if (param_3 != 3) {
      return 0;
    }
    lVar2 = *(long *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  }
  if (lVar2 != 0) {
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


