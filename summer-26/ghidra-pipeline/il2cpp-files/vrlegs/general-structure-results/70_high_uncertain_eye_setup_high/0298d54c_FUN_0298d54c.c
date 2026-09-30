/*
FUNCTION_NAME: FUN_0298d54c
ENTRY_POINT: 0298d54c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298d630) */

void FUN_0298d54c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char local_24 [4];
  
  if ((DAT_04127ce0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d078d8);
    DAT_04127ce0 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = FUN_0298d23c(param_1,*(undefined1 *)(param_2 + 0x12));
  local_24[0] = '\0';
  FUN_027e0bd8(lVar2,local_24,0);
  if (*(int *)(param_2 + 0x14) == 0) {
    if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(lVar2 + 0x50) + 1;
      *(int *)(lVar2 + 0x50) = iVar1;
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(lVar2 + 0x58) + 1;
      *(int *)(lVar2 + 0x58) = iVar1;
    }
    *(int *)(param_2 + 0x14) = iVar1;
  }
  else if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02265dfc(*(long *)(lVar2 + 0x38),param_2,*(undefined8 *)PTR_DAT_03d078d8);
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar2,0);
  }
  return;
}


