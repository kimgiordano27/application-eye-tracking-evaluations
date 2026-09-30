/*
FUNCTION_NAME: FUN_019c1cd0
ENTRY_POINT: 019c1cd0
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


/* WARNING: Removing unreachable block (ram,0x019c1e28) */

void FUN_019c1cd0(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)param_1[2] = *(undefined8 *)(*(long *)param_1[1] + 0x20);
  pcVar5 = (char *)param_1[3];
  *pcVar5 = '\0';
  puVar7 = (undefined8 *)param_1[2];
  FUN_027e0bd8(*puVar7,pcVar5,0);
  lVar6 = *(long *)(*(long *)param_1[1] + 0x20);
  uVar2 = FUN_027df29c(0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar2,uVar2);
  }
  FUN_01b5f01c(lVar6,uVar2,*(undefined8 *)PTR_DAT_03d08738);
  puVar1 = PTR_DAT_03d1f708;
  lVar6 = *(long *)PTR_DAT_03d1f708;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar1;
  }
  if (**(char **)(lVar6 + 0xb8) != '\0') {
    lVar6 = *(long *)(*(long *)param_1[1] + 0x28);
    uVar2 = FUN_027df29c(0);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cca768);
    FUN_02725424(uVar3,1,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b9a4(lVar6,uVar2,uVar3,*(undefined8 *)PTR_DAT_03d20670);
  }
  if (*pcVar5 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*puVar7,0);
  }
  if (*(char *)param_1[4] != '\0') {
    FUN_026706bc(*(undefined8 *)param_1[1],0);
  }
  uVar4 = FUN_02670478(*(undefined8 *)param_1[1],0);
  if ((uVar4 & 1) == 0) {
    if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(*param_1);
    }
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cdc860);
  uVar2 = thunk_FUN_01a89e68();
  FUN_02ec8664(uVar2,0x2714);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d20ce0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2,uVar3);
}


