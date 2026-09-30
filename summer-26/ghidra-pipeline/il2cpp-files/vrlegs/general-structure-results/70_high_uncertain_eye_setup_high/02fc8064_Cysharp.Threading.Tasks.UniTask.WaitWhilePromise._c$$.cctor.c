/*
FUNCTION_NAME: Cysharp.Threading.Tasks.UniTask.WaitWhilePromise.<>c$$.cctor
ENTRY_POINT: 02fc8064
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc84b8) */

void Cysharp_Threading_Tasks_UniTask_WaitWhilePromise_<>c___cctor(long param_1)

{
  short sVar1;
  short sVar2;
  bool in_ZR;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined1 uVar14;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint uVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  uint uStack0000000000000024;
  long lStack0000000000000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000058;
  float fStack000000000000005c;
  short sStack0000000000000060;
  short sStack0000000000000062;
  short sStack0000000000000064;
  short sStack0000000000000066;
  undefined3 uStack0000000000000068;
  undefined1 uStack000000000000006b;
  char cStack000000000000006c;
  
  if (in_ZR) {
    iVar12 = unaff_w21;
    if (unaff_w23 != 0) goto LAB_02fc80c4;
    bVar3 = SBORROW4(unaff_w21,1);
    iVar12 = unaff_w21 + -1;
  }
  else {
    bVar3 = SBORROW4(unaff_w21,3);
    iVar12 = unaff_w21 + -3;
  }
  if (iVar12 == 0 || iVar12 < 0 != bVar3) {
    iVar12 = 1;
  }
LAB_02fc80c4:
  uVar15 = 0;
  iVar9 = 0;
  sVar2 = 0;
  lStack0000000000000018 = 0;
  uStack0000000000000024 = 0;
  lStack0000000000000028 = 0;
  do {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(*(long *)(param_1 + 0x30),iVar9,&stack0x00000040,*(undefined8 *)PTR_DAT_03d268d8);
    lVar11 = in_stack_00000040;
    sVar6 = FUN_02fc43d4(uVar15,unaff_w23 != 0,unaff_w21,0);
    sVar7 = FUN_02fc43a4(uVar15,unaff_w23 != 0,unaff_w21,0);
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = FUN_02fc4410(iVar9,unaff_w21,unaff_w23 != 0,unaff_w22,in_stack_00000030._4_4_ == 4,
                         *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
    sVar1 = (short)uVar15;
    if ((sStack0000000000000060 == -1) && (((uVar8 ^ 1) & 1) != 0)) {
      uVar14 = 0;
      bVar3 = false;
joined_r0x02fc8228:
      if (unaff_w22 == 0) goto LAB_02fc822c;
LAB_02fc81cc:
      if ((uVar15 & 0xffff) == 0) {
        iVar9 = 0;
      }
      else if (in_stack_00000010._4_4_ == iVar9) {
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar9 = FUN_0276c0cc(0,unaff_w21 + -3,0);
      }
      else {
        iVar9 = iVar9 + -1;
      }
    }
    else {
      if (sVar7 == -1) {
        uVar14 = 1;
        bVar3 = true;
        goto joined_r0x02fc8228;
      }
      bVar3 = sVar6 == -1;
      uVar14 = 1;
      if (unaff_w22 != 0) goto LAB_02fc81cc;
LAB_02fc822c:
      iVar9 = (int)sVar1;
    }
    if (sVar6 == -1) {
      bVar4 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar4 = FUN_02fc4410((int)sVar6,unaff_w21,unaff_w23 != 0,unaff_w22,
                           in_stack_00000030._4_4_ == 4,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar4 = bVar4 & 1;
    }
    if (sVar7 == -1) {
      bVar5 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar5 = FUN_02fc4410((int)sVar7,unaff_w21,unaff_w23 != 0,unaff_w22,
                           in_stack_00000030._4_4_ == 4,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar5 = bVar5 & 1;
    }
    fStack000000000000005c = (1.0 / (float)iVar12) * (float)iVar9;
    uStack0000000000000058 = CONCAT31(uStack0000000000000058._1_3_,uVar14);
    sStack0000000000000060 = sVar2;
    if ((uVar8 & 1) == 0) {
      sStack0000000000000060 = -1;
    }
    uStack0000000000000068 = CONCAT12(bVar3,CONCAT11(bVar5,bVar4));
    in_stack_00000048 = CONCAT26(sVar6,CONCAT24(sVar7,CONCAT22(sVar1,sStack0000000000000060)));
    in_stack_00000040 = CONCAT44(fStack000000000000005c,uStack0000000000000058);
    in_stack_00000050 = _uStack0000000000000068;
    sStack0000000000000062 = sVar1;
    sStack0000000000000064 = sVar7;
    sStack0000000000000066 = sVar6;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined4 *)(lVar11 + 0x120) = _uStack0000000000000068;
    *(undefined8 *)(lVar11 + 0x118) = in_stack_00000048;
    *(long *)(lVar11 + 0x110) = in_stack_00000040;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0xd0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar10,lVar11,*(undefined8 *)PTR_DAT_03d26938);
      lStack0000000000000018 = lVar11;
      sVar2 = sVar2 + 1;
      if ((uStack0000000000000024 & 1) == 0) {
        lStack0000000000000028 = lVar11;
      }
      uStack0000000000000024 = 1;
    }
    if (!bVar3) {
      *(undefined8 *)(lVar11 + 0x70) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar11 + 0x70),0);
      *(undefined4 *)(lVar11 + 0x78) = 2;
    }
    uVar15 = uVar15 + 1;
    if (unaff_w21 <= (short)uVar15) {
      *(long *)(in_stack_00000038 + 0x20) = lStack0000000000000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      plVar13 = (long *)(in_stack_00000038 + 0x28);
      *plVar13 = lStack0000000000000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13);
      *(undefined8 *)(in_stack_00000038 + 0x30) = *(undefined8 *)(in_stack_00000038 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*plVar13 == 0) {
        lVar11 = 0;
      }
      else {
        if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar11,(long)*(short *)(*plVar13 + 0x11c),&stack0x00000040,
                     *(undefined8 *)PTR_DAT_03d268d8);
        lVar11 = in_stack_00000040;
      }
      *(long *)(in_stack_00000038 + 0x38) = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(undefined1 *)(in_stack_00000038 + 0x40) = 1;
      if (cStack000000000000006c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
      }
      return;
    }
    iVar9 = (int)(short)uVar15;
    param_1 = *(long *)(in_stack_00000038 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
}


