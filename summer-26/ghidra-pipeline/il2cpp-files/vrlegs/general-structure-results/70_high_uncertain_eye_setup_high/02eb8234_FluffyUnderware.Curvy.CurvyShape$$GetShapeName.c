/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvyShape$$GetShapeName
ENTRY_POINT: 02eb8234
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

void FluffyUnderware_Curvy_CurvyShape__GetShapeName(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auVar13 [16];
  char cStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000034;
  int in_stack_00000038;
  
  FUN_01ab69ac(PTR_DAT_03d1fd00);
  FUN_01ab69ac(PTR_DAT_03d1fb50);
  FUN_01ab69ac(PTR_DAT_03d1fc08);
  FUN_01ab69ac(PTR_DAT_03d1fab8);
  *(undefined1 *)(unaff_x20 + 0x677) = 1;
  puVar2 = PTR_DAT_03cc9e10;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  cStack000000000000000c = 0;
  iVar12 = *unaff_x19;
  lVar8 = *(long *)(unaff_x19 + 0xe);
  if (iVar12 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    iVar12 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
    goto LAB_02eb84e8;
  }
  auVar13 = ZEXT816(0);
  if (iVar12 != 1) {
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(unaff_x19 + 8,0);
    if (*(long *)(unaff_x19 + 10) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdbae0);
      FUN_026a44fc(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    iVar3 = unaff_x19[0xc];
    if ((iVar3 < 0) || (iVar1 = *(int *)(*(long *)(unaff_x19 + 10) + 0x18), iVar1 < iVar3)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
      FUN_026b3fc8(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fd08);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
    if ((unaff_x19[0xd] < 0) || (iVar1 - iVar3 < unaff_x19[0xd])) {
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
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,uVar4);
    while( true ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_027d75b4(unaff_x19 + 8,0);
      if ((uVar5 & 1) != 0) break;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_01aa50f0(lVar8 + 0x68,*(undefined8 *)(unaff_x19 + 0x10),0);
      if (lVar9 == 0) break;
      lVar9 = FUN_02132fd0(lVar9,*(undefined8 *)PTR_DAT_03d1fc08);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar13 = FUN_020a2c64(lVar9,0,*(undefined8 *)PTR_DAT_03d1fd00);
      _in_stack_00000020 = auVar13;
      uVar5 = FUN_02189a30(&stack0x00000020,*(undefined8 *)PTR_DAT_03d1fcf8);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,0);
        if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000020);
        return;
      }
LAB_02eb84e8:
      FUN_02189a7c(&stack0x00000020,&stack0x00000038,*(undefined8 *)PTR_DAT_03d1fcf0);
    }
    piVar6 = unaff_x19 + 0x14;
    piVar6[0] = 0;
    piVar6[1] = 0;
    unaff_x19[0x12] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
    auVar13 = _in_stack_00000020;
    if (iVar12 != 1) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_02eb6a30(lVar8,*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],unaff_x19[0xd],
                           *(undefined8 *)(unaff_x19 + 8));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _in_stack_00000010 = FUN_020a2c64(lVar9,0,*(undefined8 *)PTR_DAT_03cf6688);
      uVar5 = FUN_02189a30(&stack0x00000010,*(undefined8 *)PTR_DAT_03cf6680);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000010;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,0);
        if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_02eb8550;
    }
  }
  _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
  iVar12 = -1;
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  unaff_x19[0x1c] = 0;
  unaff_x19[0x1d] = 0;
  *unaff_x19 = -1;
  _in_stack_00000020 = auVar13;
LAB_02eb8550:
  FUN_02189a7c(&stack0x00000010,&stack0x00000038,*(undefined8 *)PTR_DAT_03cf6678);
  unaff_x19[0x12] = in_stack_00000038;
  plVar11 = (long *)(unaff_x19 + 0x14);
  if (*plVar11 != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x70);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar4,&stack0x0000000c,0);
    lVar9 = *(long *)(unaff_x19 + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x14);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
    FUN_02132e78(lVar9,uVar10,uVar7);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar8 + 0x68),0);
    *(undefined4 *)(lVar8 + 0x78) = 0;
    if ((iVar12 < 0) && (cStack000000000000000c != '\0')) {
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
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_02132ca8(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_03d1fb50);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar8 + 0x68),0);
    *(undefined4 *)(lVar8 + 0x78) = 0;
    if ((iVar12 < 0) && (cStack000000000000000c != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    iVar12 = unaff_x19[0x12];
    if (((iVar12 < 1) && (*(char *)(lVar8 + 0x7c) == '\0')) &&
       (*(undefined1 *)(lVar8 + 0x7c) = 1, *(char *)(lVar8 + 0x60) == '\0')) {
      *(undefined1 *)(lVar8 + 0x60) = 1;
      if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02eb0484(*(long *)(lVar8 + 0x50),1,0);
      iVar12 = unaff_x19[0x12];
    }
    *unaff_x19 = -2;
    piVar6 = unaff_x19 + 0x10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,0);
    if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iStack0000000000000034 = iVar12;
    FUN_02145584(unaff_x19 + 2,&stack0x00000034,*(undefined8 *)PTR_DAT_03cf0d08);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


