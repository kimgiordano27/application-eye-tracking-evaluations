/*
FUNCTION_NAME: FUN_02f72e98
ENTRY_POINT: 02f72e98
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f732f8) */
/* WARNING: Removing unreachable block (ram,0x02f731f4) */
/* WARNING: Removing unreachable block (ram,0x02f732ec) */
/* WARNING: Removing unreachable block (ram,0x02f73384) */

long FUN_02f72e98(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  char local_44 [4];
  undefined8 local_38;
  
  puVar3 = PTR_DAT_03d1fee8;
  if ((DAT_0412aca5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
                    /* try { // try from 02f72ed4 to 03072edb has its CatchHandler @ 02f733a4 */
    FUN_01ab69ac(PTR_DAT_03d24f40);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
                    /* try { // try from 02f72ef4 to 03072efb has its CatchHandler @ 02f733b0 */
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(PTR_DAT_03d25038);
                    /* try { // try from 02f72f14 to 03072f1f has its CatchHandler @ 02f733a8 */
    FUN_01ab69ac(PTR_DAT_03d1fcd0);
    DAT_0412aca5 = 1;
  }
                    /* try { // try from 02f72f20 to 030730cf has its CatchHandler @ 02f72888 */
  local_38 = 0;
  local_44[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02f651a8();
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_02f651a8();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f660a0(param_1,0,*(undefined8 *)PTR_DAT_03d1fcd0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_02f651a8();
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if ((param_1[10] == 0) || (plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = *(long *)(param_1[10] + 0x10);
      if ((lVar11 != 0) &&
         (lVar8 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar7[4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar11);
      uVar9 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25038,plVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar3);
      }
      FUN_02f6520c(param_1,uVar9,*(undefined8 *)PTR_DAT_03d1fcd0);
    }
  }
  if (param_1[0x15] != 0) {
    FUN_026779dc(param_1[0x15],0);
  }
  lVar11 = param_1[0x1d];
  if (lVar11 == 0) {
    if (*(char *)((long)param_1 + 0x61) != '\0') {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar9 = thunk_FUN_01a89e68();
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
      FUN_0276a4a8(uVar9,uVar10,0);
      uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d25040);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,uVar10);
    }
    *(undefined1 *)((long)param_1 + 0x61) = 1;
    puVar2 = PTR_DAT_03cbeeb0;
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar11 = FUN_02745e48(0);
    param_1[0xd] = lVar11;
    uVar4 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
    *(undefined4 *)((long)param_1 + 0x74) = uVar4;
    iVar5 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
    if (iVar5 != -1) {
      iVar5 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_02745e48(0);
      local_38 = FUN_027485e4(uVar9,param_1[0xd],0);
      if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      dVar12 = (double)FUN_02784978(&local_38,0);
      iVar1 = -0x80000000;
      if (dVar12 != INFINITY) {
        iVar1 = (int)dVar12;
      }
      *(int *)((long)param_1 + 0x74) = iVar5 - iVar1;
      if (iVar5 - iVar1 < 1) {
        uVar9 = FUN_02f79d4c(0);
        uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03d25040);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,uVar10);
      }
    }
    iVar5 = FUN_02f73644(param_1,1);
    if (iVar5 < 1) {
      FUN_02f73a88(param_1,0);
      if (param_1[10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(byte *)(param_1[10] + 0x1c) >> 1 & 1) == 0) {
        FUN_02f73644(param_1,3);
      }
      else {
        FUN_02f73644(param_1,2);
      }
      if (param_1[0x15] != 0) {
        FUN_026779dc(param_1[0x15],0);
      }
      FUN_02f7402c(param_1);
    }
    else if (iVar5 < 3) {
      lVar11 = param_1[7];
      local_44[0] = '\0';
      FUN_027e0bd8(lVar11,local_44,0);
      if ((int)param_1[0x1b] < 3) {
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f40);
        FUN_02f8321c(lVar8,0,0,0,0);
        param_1[0x20] = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x20,lVar8);
      }
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar11,0);
      }
      if (param_1[0x20] != 0) {
        FUN_02f83a1c(param_1[0x20],0);
      }
      if (param_1[0x15] != 0) {
        FUN_026779dc(param_1[0x15],0);
      }
    }
    lVar11 = 0;
    iVar5 = 0x13;
  }
  else {
    iVar5 = 5;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02f651a8();
  if ((uVar6 & 1) != 0) {
    lVar8 = param_1[0x1d];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66dc0(param_1,lVar8,*(undefined8 *)PTR_DAT_03d1fcd0);
  }
  if ((iVar5 == 0x13) || (iVar5 == 0)) {
    lVar11 = param_1[0x1d];
  }
  return lVar11;
}


