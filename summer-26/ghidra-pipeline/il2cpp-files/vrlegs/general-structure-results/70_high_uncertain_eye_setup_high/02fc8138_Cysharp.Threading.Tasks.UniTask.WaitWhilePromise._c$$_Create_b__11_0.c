/*
FUNCTION_NAME: Cysharp.Threading.Tasks.UniTask.WaitWhilePromise.<>c$$<Create>b__11_0
ENTRY_POINT: 02fc8138
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc84b8) */

void Cysharp_Threading_Tasks_UniTask_WaitWhilePromise_<>c__<Create>b__11_0
               (undefined8 param_1,ulong param_2)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x27;
  short unaff_w28;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  short sStack0000000000000030;
  int iStack0000000000000034;
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
  
  do {
    sVar5 = FUN_02fc43a4(unaff_w24,param_2,unaff_w21,0);
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_02fc4410(unaff_w25,unaff_w21,unaff_w23 != 0,unaff_w22,iStack0000000000000034 == 4,
                         *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
    sVar1 = (short)unaff_w24;
    if ((sStack0000000000000060 == -1) && (((uVar6 ^ 1) & 1) != 0)) {
      uVar10 = 0;
      bVar2 = false;
joined_r0x02fc8228:
      if (unaff_w22 == 0) goto LAB_02fc822c;
LAB_02fc81cc:
      if ((unaff_w24 & 0xffff) == 0) {
        iVar7 = 0;
      }
      else if (iStack0000000000000014 == unaff_w25) {
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar7 = FUN_0276c0cc(0,uStack0000000000000010,0);
      }
      else {
        iVar7 = unaff_w25 + -1;
      }
    }
    else {
      if (sVar5 == -1) {
        uVar10 = 1;
        bVar2 = true;
        goto joined_r0x02fc8228;
      }
      bVar2 = unaff_w28 == -1;
      uVar10 = 1;
      if (unaff_w22 != 0) goto LAB_02fc81cc;
LAB_02fc822c:
      iVar7 = (int)sVar1;
    }
    if (unaff_w28 == -1) {
      bVar3 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar3 = FUN_02fc4410((int)unaff_w28,unaff_w21,unaff_w23 != 0,unaff_w22,
                           iStack0000000000000034 == 4,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar3 = bVar3 & 1;
    }
    if (sVar5 == -1) {
      bVar4 = 0;
    }
    else {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar4 = FUN_02fc4410((int)sVar5,unaff_w21,unaff_w23 != 0,unaff_w22,iStack0000000000000034 == 4
                           ,*(undefined4 *)(*(long *)(in_stack_00000038 + 0x10) + 0x5c),0);
      bVar4 = bVar4 & 1;
    }
    fStack000000000000005c = unaff_s8 * (float)iVar7;
    uStack0000000000000058 = CONCAT31(uStack0000000000000058._1_3_,uVar10);
    sStack0000000000000060 = sStack0000000000000030;
    if ((uVar6 & 1) == 0) {
      sStack0000000000000060 = -1;
    }
    uStack0000000000000068 = CONCAT12(bVar2,CONCAT11(bVar4,bVar3));
    in_stack_00000048 = CONCAT26(unaff_w28,CONCAT24(sVar5,CONCAT22(sVar1,sStack0000000000000060)));
    in_stack_00000040 = CONCAT44(fStack000000000000005c,uStack0000000000000058);
    in_stack_00000050 = _uStack0000000000000068;
    sStack0000000000000062 = sVar1;
    sStack0000000000000064 = sVar5;
    sStack0000000000000066 = unaff_w28;
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined4 *)(unaff_x27 + 0x120) = _uStack0000000000000068;
    *(undefined8 *)(unaff_x27 + 0x118) = in_stack_00000048;
    *(long *)(unaff_x27 + 0x110) = in_stack_00000040;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar8 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0xd0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar8,unaff_x27,*(undefined8 *)PTR_DAT_03d26938);
      sStack0000000000000030 = sStack0000000000000030 + 1;
      if ((in_stack_00000020._4_4_ & 1) == 0) {
        in_stack_00000028 = unaff_x27;
      }
      in_stack_00000020._4_4_ = 1;
      in_stack_00000018 = unaff_x27;
    }
    if (!bVar2) {
      *(undefined8 *)(unaff_x27 + 0x70) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x27 + 0x70),0);
      *(undefined4 *)(unaff_x27 + 0x78) = 2;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w21 <= (short)unaff_w24) {
      *(long *)(in_stack_00000038 + 0x20) = in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      plVar9 = (long *)(in_stack_00000038 + 0x28);
      *plVar9 = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9);
      *(undefined8 *)(in_stack_00000038 + 0x30) = *(undefined8 *)(in_stack_00000038 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*plVar9 == 0) {
        lVar8 = 0;
      }
      else {
        if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar8 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0x30);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(lVar8,(long)*(short *)(*plVar9 + 0x11c),&stack0x00000040,
                     *(undefined8 *)PTR_DAT_03d268d8);
        lVar8 = in_stack_00000040;
      }
      *(long *)(in_stack_00000038 + 0x38) = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(undefined1 *)(in_stack_00000038 + 0x40) = 1;
      if (cStack000000000000006c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
      }
      return;
    }
    unaff_w25 = (int)(short)unaff_w24;
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *(long *)(*(long *)(in_stack_00000038 + 0x10) + 0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(lVar8,unaff_w25,&stack0x00000040,*(undefined8 *)PTR_DAT_03d268d8);
    unaff_x27 = in_stack_00000040;
    unaff_w28 = FUN_02fc43d4(unaff_w24,unaff_w23 != 0,unaff_w21,0);
    param_2 = (ulong)(unaff_w23 != 0);
  } while( true );
}


