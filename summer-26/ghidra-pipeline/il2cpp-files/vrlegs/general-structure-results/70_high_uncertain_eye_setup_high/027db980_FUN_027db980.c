/*
FUNCTION_NAME: FUN_027db980
ENTRY_POINT: 027db980
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027dbd4c) */
/* WARNING: Removing unreachable block (ram,0x027dbd54) */

bool FUN_027db980(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  int local_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  if ((DAT_04125066 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cf0d88);
    FUN_01ab69ac(PTR_DAT_03cd9c70);
    FUN_01ab69ac(PTR_DAT_03cc9ec8);
    FUN_01ab69ac(PTR_DAT_03cc9ed8);
    DAT_04125066 = 1;
  }
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70 = 0;
  FUN_027dbec4(param_1);
  puVar2 = PTR_DAT_03cc9e10;
  if (param_2 < -1) {
    local_74 = param_2;
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar13 = thunk_FUN_01a89a98(uVar13,&local_74);
    thunk_FUN_01a6ca08(PTR_DAT_03cf0d88);
    FUN_01876390();
    thunk_FUN_01a6ca08(PTR_DAT_03cfcd58);
    uVar9 = FUN_027db96c();
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar10 = thunk_FUN_01a89e68();
    uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cfcd60);
    FUN_026af104(uVar10,uVar11,uVar13,uVar9,0);
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfcd68);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,uVar13);
  }
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d7fa0(&uStack_38);
  if (param_2 == 0) {
    iVar12 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    uVar5 = 0;
    if (iVar12 == 0) {
      return false;
    }
  }
  else if (param_2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_01a4a380(0);
  }
  puVar3 = PTR_DAT_03cf0d88;
  local_44[0] = '\0';
  lVar7 = *(long *)PTR_DAT_03cf0d88;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_03cd9c70;
  FUN_027d7a1c(&local_60,&uStack_38,uVar13,param_1);
  local_68[0] = 0;
  while( true ) {
    iVar12 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (iVar12 != 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_027d95b8(local_68);
    if ((uVar8 & 1) != 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d94b8(local_68);
  }
  FUN_027e0bd8(*(undefined8 *)(param_1 + 0x20),local_44,0);
  if (local_44[0] != '\0') {
    iVar12 = *(int *)(param_1 + 0x18);
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    *(int *)(param_1 + 0x18) = iVar12 + 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    iVar12 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (iVar12 == 0) {
      if (param_2 == 0) {
        lVar7 = 0;
        bVar4 = false;
        iVar12 = 0xf;
        goto LAB_027dbc04;
      }
      uVar6 = FUN_027dc274(param_1,param_2,uVar5,param_3);
      uVar6 = uVar6 & 1;
    }
    else {
      uVar6 = 0;
    }
    iVar12 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (0 < iVar12) {
      iVar12 = *(int *)(param_1 + 0x10);
      thunk_FUN_01a4b338();
      thunk_FUN_01a4b338();
      uVar6 = 1;
      *(int *)(param_1 + 0x10) = iVar12 + -1;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    thunk_FUN_01a4b338();
    if ((lVar7 != 0) && (iVar12 = *(int *)(param_1 + 0x10), thunk_FUN_01a4b338(), iVar12 == 0)) {
      lVar7 = *(long *)(param_1 + 0x28);
      thunk_FUN_01a4b338();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de7f8(lVar7,0);
    }
    bVar4 = uVar6 != 0;
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_027dbf40(param_1,param_2,param_3);
    bVar4 = false;
  }
  iVar12 = 0xc;
LAB_027dbc04:
  if (local_44[0] != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    *(int *)(param_1 + 0x18) = iVar1 + -1;
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(param_1 + 0x20),0);
  }
  FUN_027d9a54(&local_60);
  if ((iVar12 != 0xc) && (iVar12 != 0)) {
    return false;
  }
  if (lVar7 != 0) {
    local_70 = FUN_020a2c44(lVar7,*(undefined8 *)PTR_DAT_03cc9ed8);
    FUN_0209f8cc(&local_70,&local_74,*(undefined8 *)PTR_DAT_03cc9ec8);
    return (char)local_74 != '\0';
  }
  return bVar4;
}


