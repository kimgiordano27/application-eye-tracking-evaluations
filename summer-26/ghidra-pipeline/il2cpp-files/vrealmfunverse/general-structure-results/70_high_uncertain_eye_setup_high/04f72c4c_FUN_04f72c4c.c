/*
FUNCTION_NAME: FUN_04f72c4c
ENTRY_POINT: 04f72c4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04f72c4c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06312520;
  if ((DAT_066c9b96 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066c9b96 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_05c8c45c(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto OVRPlugin__GetDynamicObjectTrackerSupported;
    FUN_05c56fc0(*(long *)(param_1 + 0x40),0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_05c8c45c(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_04f72168(*(long *)(param_1 + 0x28),0);
    return;
  }
OVRPlugin__GetDynamicObjectTrackerSupported:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


