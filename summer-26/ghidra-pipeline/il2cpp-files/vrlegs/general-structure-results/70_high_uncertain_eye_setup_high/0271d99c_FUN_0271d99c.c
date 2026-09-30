/*
FUNCTION_NAME: FUN_0271d99c
ENTRY_POINT: 0271d99c
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


/* WARNING: Removing unreachable block (ram,0x0271db38) */

undefined8 FUN_0271d99c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char local_34 [4];
  undefined8 local_28;
  
  if ((DAT_04124855 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03cf9228);
    DAT_04124855 = 1;
  }
  puVar1 = PTR_DAT_03cc41f8;
  local_28 = 0;
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cc9c00);
    FUN_026a44fc(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cf9230);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar5);
  }
  lVar2 = *(long *)PTR_DAT_03cc41f8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar2);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    uVar4 = FUN_0219f8b8(lVar3,param_1,&local_28,*(undefined8 *)PTR_DAT_03cf9228);
    if ((uVar4 & 1) != 0) goto LAB_0271dab8;
    lVar2 = *(long *)puVar1;
  }
  uVar5 = thunk_FUN_01a89e68(lVar2);
  FUN_0271f858(uVar5,param_1,0,1);
  local_28 = uVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0271fc4c(uVar5);
LAB_0271dab8:
  uVar5 = local_28;
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return uVar5;
}


