/*
FUNCTION_NAME: FUN_021ae4c0
ENTRY_POINT: 021ae4c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021ae590) */

void FUN_021ae4c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char local_38 [4];
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38[0] = '\0';
  FUN_027e0bd8(param_1,local_38,0);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(long *)(param_1 + 0x20) == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_30 = **(undefined8 **)(lVar1 + 0xb8);
    uStack_28 = (*(undefined8 **)(lVar1 + 0xb8))[1];
    local_34[0] = 8;
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),&local_30,local_34,*(undefined8 *)(lVar2 + 0x28));
  }
  if (local_38[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return;
}


