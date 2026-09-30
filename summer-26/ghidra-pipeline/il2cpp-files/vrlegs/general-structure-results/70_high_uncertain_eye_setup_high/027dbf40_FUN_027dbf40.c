/*
FUNCTION_NAME: FUN_027dbf40
ENTRY_POINT: 027dbf40
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


/* WARNING: Removing unreachable block (ram,0x027dc1e8) */

undefined8 FUN_027dbf40(long param_1,int param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int local_38;
  char local_34 [4];
  
  if ((DAT_04125068 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cf0d88);
    FUN_01ab69ac(PTR_DAT_03cfcd80);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_04125068 = 1;
  }
  local_34[0] = '\0';
  FUN_027dbec4(param_1);
  puVar2 = PTR_DAT_03cc9e10;
  if (param_2 < -1) {
    local_38 = param_2;
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar6 = thunk_FUN_01a89a98(uVar6,&local_38);
    thunk_FUN_01a6ca08(PTR_DAT_03cf0d88);
    FUN_01876390();
    thunk_FUN_01a6ca08(PTR_DAT_03cfcd58);
    uVar8 = FUN_027db96c();
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar4 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcd60);
    FUN_026af104(uVar4,uVar5,uVar6,uVar8,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfcd88);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x20), thunk_FUN_01a4b338(), 1 < iVar1)) {
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_01ff0d00(param_3,*(undefined8 *)PTR_DAT_03cfcd80);
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar6,local_34,0);
  iVar1 = *(int *)(param_1 + 0x10);
  thunk_FUN_01a4b338();
  puVar3 = PTR_DAT_03cf0d88;
  if (iVar1 < 1) {
    if (param_2 == 0) {
      lVar7 = *(long *)PTR_DAT_03cf0d88;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    }
    else {
      uVar8 = FUN_027dc34c(param_1);
      if (param_2 == -1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (param_3 == 0) goto LAB_027dc128;
      }
      uVar8 = FUN_027dc3fc(param_1,uVar8,param_2,param_3);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    lVar7 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    thunk_FUN_01a4b338();
    if ((lVar7 != 0) && (iVar1 = *(int *)(param_1 + 0x10), thunk_FUN_01a4b338(), iVar1 == 0)) {
      lVar7 = *(long *)(param_1 + 0x28);
      thunk_FUN_01a4b338();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de7f8(lVar7,0);
    }
    puVar2 = PTR_DAT_03cf0d88;
    lVar7 = *(long *)PTR_DAT_03cf0d88;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar7 + 0xb8);
  }
LAB_027dc128:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return uVar8;
}


