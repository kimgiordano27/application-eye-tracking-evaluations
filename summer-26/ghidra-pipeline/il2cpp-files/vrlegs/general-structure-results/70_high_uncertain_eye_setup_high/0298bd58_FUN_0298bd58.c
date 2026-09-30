/*
FUNCTION_NAME: FUN_0298bd58
ENTRY_POINT: 0298bd58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298be44) */

void FUN_0298bd58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char local_24 [4];
  
  if ((DAT_04127ccb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d078c0);
    FUN_01ab69ac(PTR_DAT_03d078c8);
    DAT_04127ccb = 1;
  }
  local_24[0] = '\0';
  FUN_027e0bd8(param_1,local_24,0);
  puVar1 = PTR_DAT_03d078c0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_0223fce0(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_03d078c0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_0223fce0(*(long *)(param_1 + 0x20),*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_03d078c8;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_022658ac(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_03d078c8);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0223fce0(*(long *)(param_1 + 0x30),*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_022658ac(*(long *)(param_1 + 0x38),*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_022658ac(*(long *)(param_1 + 0x40),*(undefined8 *)puVar2);
        if (local_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


