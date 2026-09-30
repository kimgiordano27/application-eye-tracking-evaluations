/*
FUNCTION_NAME: FUN_03000324
ENTRY_POINT: 03000324
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


/* WARNING: Removing unreachable block (ram,0x030004dc) */

void FUN_03000324(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long local_40 [2];
  char local_24 [4];
  
  puVar2 = PTR_DAT_03ce04a0;
  if ((DAT_0412b124 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce04d0);
    FUN_01ab69ac(PTR_DAT_03d267b8);
    FUN_01ab69ac(PTR_DAT_03ce04a0);
    FUN_01ab69ac(PTR_DAT_03ce04e8);
    DAT_0412b124 = 1;
  }
  local_24[0] = '\0';
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar3 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  pcVar4 = (char *)thunk_FUN_01a59484(puVar1,*(undefined8 *)
                                              (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  if (*pcVar4 != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    local_24[0] = '\0';
    FUN_027e0bd8(uVar5,local_24,0);
    lVar3 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    pcVar4 = (char *)thunk_FUN_01a59484(puVar1,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
    puVar2 = PTR_DAT_03d267b8;
    if (*pcVar4 != '\0') {
      if (*(int *)(*(long *)PTR_DAT_03d267b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412afe7 == '\0') {
        FUN_01ab69ac(PTR_DAT_03d267b8);
        DAT_0412afe7 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      FUN_022412e0(puVar1,local_40,*(undefined8 *)PTR_DAT_03ce04e8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (local_40[0] != 0) {
        FUN_02064b1c(lVar3,local_40[0],
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)PTR_DAT_03ce04d0 + 0x20) + 0xc0) + 0x48));
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
  }
  return;
}


