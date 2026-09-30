/*
FUNCTION_NAME: FUN_022562c0
ENTRY_POINT: 022562c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02256394) */

void FUN_022562c0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar3 = thunk_FUN_01a89e68();
    uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cdc200);
    FUN_026a44fc(uVar3,uVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,param_3);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28))
    ;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar3,local_24,0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02265dfc(*(long *)(param_1 + 0x18),param_2,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40));
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return;
}


