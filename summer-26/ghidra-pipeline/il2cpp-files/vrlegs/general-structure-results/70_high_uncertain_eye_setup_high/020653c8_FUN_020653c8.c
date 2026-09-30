/*
FUNCTION_NAME: FUN_020653c8
ENTRY_POINT: 020653c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0206579c) */
/* WARNING: Removing unreachable block (ram,0x02065818) */

undefined1  [16]
FUN_020653c8(long param_1,int param_2,ulong param_3,ulong param_4,undefined1 *param_5,long param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  char local_54 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04121d67 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbf0c0);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cd9b10);
    FUN_01ab69ac(PTR_DAT_03cd9b18);
    FUN_01ab69ac(PTR_DAT_03cd9b20);
    DAT_04121d67 = 1;
  }
  local_54[0] = '\0';
  local_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x48) < (long)param_2) {
    *param_5 = 1;
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x98);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar3 = (long *)FUN_0277b678(uVar9,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      local_74 = param_2;
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_74);
      local_88 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbf0c0,&local_88);
      uVar9 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03cd9b18,uVar9,uVar4,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar9,0);
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8();
    }
    uVar9 = FUN_01ab6a94(lVar6,param_2);
    local_50 = 0;
    uStack_48 = 0;
    FUN_02099760(&local_50,uVar9,param_2,
                 *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x80));
    goto LAB_020657a8;
  }
  if (param_2 == 0) {
    *param_5 = 1;
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x10);
    goto LAB_020657a8;
  }
  if (param_2 < 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar9 = thunk_FUN_01a89e68();
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd9b28);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cd9b08);
    FUN_026ade84(uVar9,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,param_6);
  }
  local_54[0] = '\0';
  FUN_027e0bd8(param_1,local_54,0);
  uVar2 = FUN_020659cc(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38),param_2);
  if ((int)uVar2 < 0) {
    if ((param_3 & 1) == 0) {
      uVar2 = ~uVar2;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x38);
    }
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x38)) {
    lVar6 = FUN_0206591c(param_1);
    if ((param_4 & 1) != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793a34(lVar6,0,*(undefined4 *)(lVar6 + 0x18),0);
      goto LAB_02065744;
    }
    uVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar9 = *(undefined8 *)(lVar6 + 0x98);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar3 = (long *)FUN_0277b678(uVar9,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      local_88 = CONCAT44(local_88._4_4_,param_2);
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_88);
      uVar5 = *(undefined8 *)PTR_DAT_03cd9b20;
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03cd9b10;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = *(int *)(param_1 + 0x38) - 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar7 = FUN_0276793c(lVar6 + (long)(int)uVar2 * 4 + 0x20,0);
      }
      uVar9 = FUN_025be8b0(uVar5,uVar9,uVar4,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(uVar9,0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8();
    }
    lVar6 = FUN_01ab6a94(lVar6,param_2);
LAB_02065744:
    uVar8 = 1;
  }
  *param_5 = uVar8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_02099760(&local_88,lVar6,param_2,
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x80));
  uStack_68 = uStack_80;
  local_70 = local_88;
  local_50 = local_70;
  uStack_48 = uStack_68;
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    local_50 = local_70;
    uStack_48 = uStack_68;
  }
LAB_020657a8:
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}


