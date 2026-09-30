/*
FUNCTION_NAME: FUN_02992be8
ENTRY_POINT: 02992be8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02992cf8) */

void FUN_02992be8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char local_24 [4];
  
  if ((DAT_04127ce1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d078d8);
    DAT_04127ce1 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = FUN_0298d23c(param_1,*(undefined1 *)(param_2 + 0x12));
  local_24[0] = '\0';
  FUN_027e0bd8(lVar2,local_24,0);
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar2 + 0x50);
    iVar1 = *(int *)(lVar2 + 0x54) + 1;
    *(int *)(lVar2 + 0x54) = iVar1;
    *(int *)(param_2 + 0x18) = iVar1;
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = 0;
    iVar1 = *(int *)(param_1 + 0x148) + 1;
    *(int *)(param_1 + 0x148) = iVar1;
    *(int *)(param_2 + 0x1c) = iVar1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x5b) == '\0') {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02265dfc(*(long *)(lVar2 + 0x40),param_2,*(undefined8 *)PTR_DAT_03d078d8);
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02265dfc(*(long *)(lVar2 + 0x38),param_2,*(undefined8 *)PTR_DAT_03d078d8);
  }
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar2,0);
  }
  return;
}


