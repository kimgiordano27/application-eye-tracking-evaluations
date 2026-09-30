/*
FUNCTION_NAME: Cysharp.Threading.Tasks.UniTask.WaitWhilePromise$$TryReturn
ENTRY_POINT: 02fc7fa0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc84b8) */

void Cysharp_Threading_Tasks_UniTask_WaitWhilePromise__TryReturn(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined4 in_w8;
  int iVar17;
  long in_x10;
  long unaff_x19;
  long *plVar18;
  undefined1 uVar19;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar20;
  int iStack0000000000000014;
  long lStack0000000000000018;
  long lStack0000000000000028;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000058;
  float fStack000000000000005c;
  short sStack0000000000000060;
  undefined6 uStack0000000000000062;
  undefined3 uStack0000000000000068;
  undefined1 uStack000000000000006b;
  char cStack000000000000006c;
  
  *(undefined4 *)(unaff_x19 + 0x1c) = in_w8;
  uVar14 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 200));
  if ((uVar14 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
  }
  else {
    iVar3 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    if (0 < iVar3) {
      FUN_02793a34(*(undefined8 *)(unaff_x19 + 0x10),0,iVar3,0);
    }
  }
  if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar15 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0xd0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_022158dc(lVar15,unaff_w21,*(undefined8 *)PTR_DAT_03d26d30);
  iStack0000000000000014 = unaff_w21 + -1;
  if (unaff_w21 < 1) {
    *(undefined8 *)(in_stack_00000038 + 0x38) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000038 + 0x38),0);
    *(undefined8 *)(in_stack_00000038 + 0x30) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000038 + 0x30),0);
    *(undefined8 *)(in_stack_00000038 + 0x28) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000038 + 0x28),0);
    *(undefined8 *)(in_stack_00000038 + 0x20) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000038 + 0x20),0);
LAB_02fc844c:
    *(undefined1 *)(in_stack_00000038 + 0x40) = 1;
    if (cStack000000000000006c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x20,0);
    }
    return;
  }
  fStack000000000000005c = -1.0;
  uStack0000000000000058 = uStack0000000000000058 & 0xffffff00;
  _sStack0000000000000060 = 0xffffffffffffffff;
  _uStack0000000000000068 = _uStack0000000000000068 & 0xff000000;
  lVar15 = *(long *)(in_stack_00000038 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = *(int *)(lVar15 + 0x38);
  cVar4 = *(char *)(lVar15 + 0x44);
  bVar1 = iVar3 - 1U < 2 & (*(byte *)(lVar15 + 0x45) ^ 1);
  if (bVar1 == 0) {
    iVar17 = unaff_w21;
    if (cVar4 != '\0') goto LAB_02fc80c4;
    bVar6 = SBORROW4(unaff_w21,1);
    iVar17 = unaff_w21 + -1;
  }
  else {
    bVar6 = SBORROW4(unaff_w21,3);
    iVar17 = unaff_w21 + -3;
  }
  if (iVar17 == 0 || iVar17 < 0 != bVar6) {
    iVar17 = 1;
  }
LAB_02fc80c4:
  uVar20 = 0;
  iVar13 = 0;
  sVar5 = 0;
  lStack0000000000000018 = 0;
  bVar6 = false;
  lStack0000000000000028 = 0;
  do {
    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(*(long *)(lVar15 + 0x30),iVar13,&stack0x00000040,*(undefined8 *)PTR_DAT_03d268d8);
    lVar15 = in_stack_00000040;
    sVar10 = FUN_02fc43d4(uVar20,cVar4 != '\0',unaff_w21,0);
    sVar11 = FUN_02fc43a4(uVar20,cVar4 != '\0',unaff_w21,0);
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = FUN_02fc4410(iVar13,unaff_w21,cVar4 != '\0',bVar1,iVar3 == 4,
                          *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
    if ((sStack0000000000000060 == -1) && (((uVar12 ^ 1) & 1) != 0)) {
      uVar19 = 0;
      bVar7 = false;
joined_r0x02fc8228:
      if (bVar1 == 0) goto LAB_02fc822c;
LAB_02fc81cc:
      if ((uVar20 & 0xffff) == 0) {
        iVar13 = 0;
      }
      else if (iStack0000000000000014 == iVar13) {
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar13 = FUN_0276c0cc(0,unaff_w21 + -3,0);
      }
      else {
        iVar13 = iVar13 + -1;
      }
    }
    else {
      if (sVar11 == -1) {
        uVar19 = 1;
        bVar7 = true;
        goto joined_r0x02fc8228;
      }
      bVar7 = sVar10 == -1;
      uVar19 = 1;
      if (bVar1 != 0) goto LAB_02fc81cc;
LAB_02fc822c:
      iVar13 = (int)(short)uVar20;
    }
    if (sVar10 == -1) {
      bVar8 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar8 = FUN_02fc4410((int)sVar10,unaff_w21,cVar4 != '\0',bVar1,iVar3 == 4,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar8 = bVar8 & 1;
    }
    if (sVar11 == -1) {
      bVar9 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar9 = FUN_02fc4410((int)sVar11,unaff_w21,cVar4 != '\0',bVar1,iVar3 == 4,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar9 = bVar9 & 1;
    }
    fStack000000000000005c = (1.0 / (float)iVar17) * (float)iVar13;
    uStack0000000000000058 = CONCAT31(uStack0000000000000058._1_3_,uVar19);
    sVar2 = sVar5;
    if ((uVar12 & 1) == 0) {
      sVar2 = -1;
    }
    _sStack0000000000000060 = CONCAT26(sVar10,CONCAT24(sVar11,uVar20 << 0x10));
    uStack0000000000000068 = CONCAT12(bVar7,CONCAT11(bVar9,bVar8));
    _sStack0000000000000060 = CONCAT62(uStack0000000000000062,sVar2);
    in_stack_00000040 = CONCAT44(fStack000000000000005c,uStack0000000000000058);
    in_stack_00000048 = _sStack0000000000000060;
    in_stack_00000050 = _uStack0000000000000068;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(uint *)(lVar15 + 0x120) = _uStack0000000000000068;
    *(undefined8 *)(lVar15 + 0x118) = _sStack0000000000000060;
    *(long *)(lVar15 + 0x110) = in_stack_00000040;
    if ((uVar12 & 1) != 0) {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar16 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0xd0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar16,lVar15,*(undefined8 *)PTR_DAT_03d26938);
      lStack0000000000000018 = lVar15;
      sVar5 = sVar5 + 1;
      if (!bVar6) {
        lStack0000000000000028 = lVar15;
      }
      bVar6 = true;
    }
    if (!bVar7) {
      *(undefined8 *)(lVar15 + 0x70) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar15 + 0x70),0);
      *(undefined4 *)(lVar15 + 0x78) = 2;
    }
    uVar20 = uVar20 + 1;
    if (unaff_w21 <= (short)uVar20) {
      *(long *)(in_stack_00000038 + 0x20) = lStack0000000000000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      plVar18 = (long *)(in_stack_00000038 + 0x28);
      *plVar18 = lStack0000000000000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18);
      *(undefined8 *)(in_stack_00000038 + 0x30) = *(undefined8 *)(in_stack_00000038 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*plVar18 == 0) {
        lVar15 = 0;
      }
      else {
        if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar15 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0x30);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar15,(long)*(short *)(*plVar18 + 0x11c),&stack0x00000040,
                     *(undefined8 *)PTR_DAT_03d268d8);
        lVar15 = in_stack_00000040;
      }
      *(long *)(in_stack_00000038 + 0x38) = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_02fc844c;
    }
    iVar13 = (int)(short)uVar20;
    lVar15 = *(long *)(in_stack_00000038 + 0x10);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
}


