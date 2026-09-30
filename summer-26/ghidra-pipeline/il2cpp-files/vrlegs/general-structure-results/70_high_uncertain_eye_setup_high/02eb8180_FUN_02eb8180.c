/*
FUNCTION_NAME: FUN_02eb8180
ENTRY_POINT: 02eb8180
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02eb8848) */
/* WARNING: Removing unreachable block (ram,0x02eb868c) */
/* WARNING: Removing unreachable block (ram,0x02eb8600) */
/* WARNING: Removing unreachable block (ram,0x02eb8880) */

void FUN_02eb8180(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auVar13 [16];
  char local_74 [4];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  int local_4c;
  int local_48 [2];
  
  if ((DAT_0412a677 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1fcd8);
    FUN_01ab69ac(PTR_DAT_03d1fce0);
    FUN_01ab69ac(PTR_DAT_03cf0d08);
    FUN_01ab69ac(PTR_DAT_03cf0c78);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03d1fce8);
    FUN_01ab69ac(PTR_DAT_03cf6670);
    FUN_01ab69ac(PTR_DAT_03d1fcf0);
    FUN_01ab69ac(PTR_DAT_03cf6678);
    FUN_01ab69ac(PTR_DAT_03d1fcf8);
    FUN_01ab69ac(PTR_DAT_03cf6680);
    FUN_01ab69ac(PTR_DAT_03cf6688);
    FUN_01ab69ac(PTR_DAT_03d1fd00);
    FUN_01ab69ac(PTR_DAT_03d1fb50);
    FUN_01ab69ac(PTR_DAT_03d1fc08);
    FUN_01ab69ac(PTR_DAT_03d1fab8);
    DAT_0412a677 = 1;
  }
  puVar2 = PTR_DAT_03cc9e10;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74[0] = '\0';
  iVar12 = *param_1;
  lVar8 = *(long *)(param_1 + 0xe);
  if (iVar12 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
    iVar12 = -1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    goto LAB_02eb84e8;
  }
  auVar13 = ZEXT816(0);
  if (iVar12 != 1) {
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(param_1 + 8,0);
    if (*(long *)(param_1 + 10) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdbae0);
      FUN_026a44fc(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    iVar3 = param_1[0xc];
    if ((iVar3 < 0) || (iVar1 = *(int *)(*(long *)(param_1 + 10) + 0x18), iVar1 < iVar3)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
      FUN_026b3fc8(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    if ((param_1[0xd] < 0) || (iVar1 - iVar3 < param_1[0xd])) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cd7270);
      FUN_026b3fc8(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = thunk_FUN_01aa519c(lVar8 + 0x78,1,0,0);
    if (iVar3 != 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d14098);
      FUN_0276a4a8(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1fab8);
    FUN_02fa0644(uVar4,0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x10,uVar4);
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_027d75b4(param_1 + 8,0);
      if ((uVar5 & 1) != 0) break;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_01aa50f0(lVar8 + 0x68,*(undefined8 *)(param_1 + 0x10),0);
      if (lVar9 == 0) break;
      lVar9 = FUN_02132fd0(lVar9,*(undefined8 *)PTR_DAT_03d1fc08);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar13 = FUN_020a2c64(lVar9,0,*(undefined8 *)PTR_DAT_03d1fd00);
      local_60 = auVar13;
      uVar5 = FUN_02189a30(local_60,*(undefined8 *)PTR_DAT_03d1fcf8);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,0);
        if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(param_1 + 2,local_60,param_1,*(undefined8 *)PTR_DAT_03d1fcd8);
        return;
      }
LAB_02eb84e8:
      FUN_02189a7c(local_60,local_48,*(undefined8 *)PTR_DAT_03d1fcf0);
    }
    piVar6 = param_1 + 0x14;
    piVar6[0] = 0;
    piVar6[1] = 0;
    param_1[0x12] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
    auVar13 = local_60;
    if (iVar12 != 1) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_02eb6a30(lVar8,*(undefined8 *)(param_1 + 10),param_1[0xc],param_1[0xd],
                           *(undefined8 *)(param_1 + 8));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_70 = FUN_020a2c64(lVar9,0,*(undefined8 *)PTR_DAT_03cf6688);
      uVar5 = FUN_02189a30(local_70,*(undefined8 *)PTR_DAT_03cf6680);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x1a,0);
        if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(param_1 + 2,local_70,param_1,*(undefined8 *)PTR_DAT_03d1fce0);
        return;
      }
      goto LAB_02eb8550;
    }
  }
  local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
  iVar12 = -1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = -1;
  local_60 = auVar13;
LAB_02eb8550:
  FUN_02189a7c(local_70,local_48,*(undefined8 *)PTR_DAT_03cf6678);
  param_1[0x12] = local_48[0];
  plVar11 = (long *)(param_1 + 0x14);
  if (*plVar11 != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x70);
    local_74[0] = '\0';
    FUN_027e0bd8(uVar4,local_74,0);
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x14);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
    FUN_02132e78(lVar9,uVar10,uVar7);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar8 + 0x68),0);
    *(undefined4 *)(lVar8 + 0x78) = 0;
    if ((iVar12 < 0) && (local_74[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    *(undefined1 *)(lVar8 + 0x28) = 1;
    if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02eb0484(*(long *)(lVar8 + 0x50),0,*plVar11);
    lVar8 = *plVar11;
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(lVar8,uVar4);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = *(undefined8 *)(lVar8 + 0x70);
  local_74[0] = '\0';
  FUN_027e0bd8(uVar4,local_74,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_02132ca8(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_03d1fb50);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar8 + 0x68),0);
    *(undefined4 *)(lVar8 + 0x78) = 0;
    if ((iVar12 < 0) && (local_74[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    iVar12 = param_1[0x12];
    if (((iVar12 < 1) && (*(char *)(lVar8 + 0x7c) == '\0')) &&
       (*(undefined1 *)(lVar8 + 0x7c) = 1, *(char *)(lVar8 + 0x60) == '\0')) {
      *(undefined1 *)(lVar8 + 0x60) = 1;
      if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02eb0484(*(long *)(lVar8 + 0x50),1,0);
      iVar12 = param_1[0x12];
    }
    *param_1 = -2;
    piVar6 = param_1 + 0x10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,0);
    if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    local_4c = iVar12;
    FUN_02145584(param_1 + 2,&local_4c,*(undefined8 *)PTR_DAT_03cf0d08);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


