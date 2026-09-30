/*
FUNCTION_NAME: FUN_0233c1bc
ENTRY_POINT: 0233c1bc
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


/* WARNING: Removing unreachable block (ram,0x0233c2ec) */

void FUN_0233c1bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char local_2c [4];
  long local_28;
  
  puVar1 = PTR_DAT_03cd8560;
  if ((DAT_04122aa6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8560);
    FUN_01ab69ac(PTR_DAT_03cdc7f0);
    FUN_01ab69ac(PTR_DAT_03cdc7f8);
    DAT_04122aa6 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  local_2c[0] = '\0';
  FUN_027e0bd8(uVar5,local_2c,0);
  puVar2 = PTR_DAT_03cdc7f0;
  while( true ) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar4 + 0x20) < 1) {
      if (local_2c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
      }
      return;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_022661a4(lVar4,&local_28,*(undefined8 *)puVar2);
    if (local_28 == 0) break;
    (**(code **)(local_28 + 0x18))
              (*(undefined8 *)(local_28 + 0x40),*(undefined8 *)(local_28 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


