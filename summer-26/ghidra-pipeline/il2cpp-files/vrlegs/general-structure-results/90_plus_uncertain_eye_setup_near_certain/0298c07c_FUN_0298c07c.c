/*
FUNCTION_NAME: FUN_0298c07c
ENTRY_POINT: 0298c07c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298c1dc) */
/* WARNING: Removing unreachable block (ram,0x0298c214) */

int FUN_0298c07c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  char local_48 [4];
  char local_44 [4];
  
  if ((DAT_04127ccd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d078e0);
    DAT_04127ccd = 1;
  }
  local_48[0] = '\0';
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar2,local_44,0);
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 != 0) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
        if (local_44[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
        }
        return iVar3;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar1 = *(long *)(lVar1 + uVar4 * 8 + 0x20);
      local_48[0] = '\0';
      FUN_027e0bd8(lVar1,local_48,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar3 = *(int *)(*(long *)(lVar1 + 0x40) + 0x20) +
              *(int *)(*(long *)(lVar1 + 0x38) + 0x20) + iVar3;
      if (local_48[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar1,0);
      }
      lVar1 = *(long *)(param_1 + 0x188);
      uVar4 = uVar4 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


