/*
FUNCTION_NAME: FUN_0221a878
ENTRY_POINT: 0221a878
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221a978) */

void FUN_0221a878(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char local_44 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar3,local_44,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar5 = 0;
    uVar2 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar4 = *(undefined8 *)(param_2 + 0x20 + uVar5 * 8);
      iVar1 = FUN_02217a2c(*(long *)(param_1 + 0x100),uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
      if (-1 < iVar1) {
        if (iVar1 < *(int *)(param_1 + 0xf8)) {
          *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
        }
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02218bd8(*(long *)(param_1 + 0x100),uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      }
      uVar2 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return;
}


