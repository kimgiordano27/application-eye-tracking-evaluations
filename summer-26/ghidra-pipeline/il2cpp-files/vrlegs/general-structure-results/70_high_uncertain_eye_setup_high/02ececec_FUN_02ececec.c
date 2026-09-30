/*
FUNCTION_NAME: FUN_02ececec
ENTRY_POINT: 02ececec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ecee48) */

void FUN_02ececec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char local_24 [4];
  
  if ((DAT_0412a73a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d20678);
    FUN_01ab69ac(PTR_DAT_03d20680);
    FUN_01ab69ac(PTR_DAT_03d20688);
    FUN_01ab69ac(PTR_DAT_03d08748);
    FUN_01ab69ac(PTR_DAT_03d1f708);
    DAT_0412a73a = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar5,local_24,0);
  uVar3 = FUN_027df29c(0);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_02218bd8(*(long *)(param_1 + 0x20),uVar3,*(undefined8 *)PTR_DAT_03d20688);
    puVar1 = PTR_DAT_03d1f708;
    lVar4 = *(long *)PTR_DAT_03d1f708;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    if (**(char **)(lVar4 + 0xb8) != '\0') {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar2 = FUN_02217a2c(*(long *)(param_1 + 0x20),uVar3,*(undefined8 *)PTR_DAT_03d20680);
      if (iVar2 == -1) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0219eaf8(*(long *)(param_1 + 0x28),uVar3,*(undefined8 *)PTR_DAT_03d20678);
      }
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
        FUN_027e10a8(lVar4,0);
      }
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


