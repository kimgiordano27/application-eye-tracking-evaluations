/*
FUNCTION_NAME: UniJSON.JsonNode$$get_Value
ENTRY_POINT: 02f455d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f4576c) */

long UniJSON_JsonNode__get_Value(long param_1)

{
  long lVar1;
  long lVar2;
  int in_w8;
  long *unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  char cStack000000000000000c;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x23;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x78);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *unaff_x23;
  }
  plVar5 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x30);
  thunk_FUN_01a4b338();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = (**(code **)(*plVar5 + 0x308))(plVar5);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)PTR_DAT_03ce45f0;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0277b678(uVar3,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar3,uVar3);
    }
    lVar1 = (**(code **)(*unaff_x19 + 0x278))();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_01ab6a94(*unaff_x22,*(undefined4 *)(lVar1 + 0x18));
    FUN_02793c34(lVar1,lVar2,0,0);
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x23;
    }
    plVar5 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x30);
    thunk_FUN_01a4b338();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar5 + 0x318))(plVar5);
  }
  else {
    uVar3 = *unaff_x22;
    lVar2 = thunk_FUN_01a89d6c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar1,uVar3);
    }
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return lVar2;
}


