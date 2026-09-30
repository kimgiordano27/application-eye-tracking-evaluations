/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketNotificationRequest$$IsSetLambdaFunctionConfigurations
ENTRY_POINT: 04b5da7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


long Amazon_S3_Model_PutBucketNotificationRequest__IsSetLambdaFunctionConfigurations
               (long param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar3 = PTR_DAT_0ac0fa70;
  if ((*(byte *)(unaff_x22 + 0xadd) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac0fe98);
    FUN_04947ee4(PTR_DAT_0ac0fa70);
    FUN_04947ee4(PTR_DAT_0ac12ea8);
    FUN_04947ee4(PTR_DAT_0ac0bc40);
    FUN_04947ee4(PTR_DAT_0ac0bc48);
    FUN_04947ee4(PTR_DAT_0ac0bc50);
    FUN_04947ee4(PTR_DAT_0ac09fa8);
    FUN_04947ee4(PTR_DAT_0ac0bc90);
    FUN_04947ee4(PTR_DAT_0ac12eb0);
    FUN_04947ee4(PTR_DAT_0ac09e98);
    FUN_04947ee4(PTR_DAT_0ac09ea0);
    FUN_04947ee4(PTR_DAT_0ac0b1e8);
    FUN_04947ee4(PTR_DAT_0ac12eb8);
    FUN_04947ee4(PTR_DAT_0ac0c4a8);
    FUN_04947ee4(PTR_DAT_0ac09b28);
    *(undefined1 *)(unaff_x22 + 0xadd) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar11 = FUN_04947fd0(*(undefined8 *)puVar3,1);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 0) {
LAB_04b5debc:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined2 *)(lVar11 + 0x20) = 0x2e;
    puVar5 = PTR_DAT_0ac0b1e8;
    puVar4 = PTR_DAT_0ac09ea0;
    puVar3 = PTR_DAT_0ac09e98;
    if (param_1 != 0) {
      lVar11 = FUN_08bdc828(param_1,lVar11,0,0);
      lVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
      FUN_06b7f60c(lVar12,*(undefined8 *)puVar3);
      plVar13 = (long *)thunk_FUN_04983f60(*(undefined8 *)puVar5);
      FUN_08be6d48(plVar13,0);
      puVar4 = PTR_DAT_0ac09fa8;
      puVar3 = PTR_DAT_0ac09b28;
      if (lVar11 != 0) {
        if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
          uVar18 = 0;
          uVar14 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
          do {
            if (uVar14 <= uVar18) goto LAB_04b5debc;
            if (plVar13 == (long *)0x0) goto LAB_04b5deb8;
            uVar17 = *(undefined8 *)(lVar11 + 0x20 + uVar18 * 8);
            iVar10 = FUN_08be0f4c(plVar13,0);
            if (0 < iVar10) {
              FUN_08be0754(plVar13,*(undefined8 *)puVar3,0);
            }
            FUN_08be0754(plVar13,uVar17,0);
            uVar17 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
            if (lVar12 == 0) goto LAB_04b5deb8;
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar4;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_04b5deb8;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar17;
              thunk_FUN_049ee3d8();
            }
            else {
              FUN_06b7fe74(lVar12,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((long)uVar18 < (long)(int)*(uint *)(lVar11 + 0x18));
        }
        puVar9 = PTR_DAT_0ac12eb8;
        puVar8 = PTR_DAT_0ac12ea8;
        puVar7 = PTR_DAT_0ac0fe98;
        puVar6 = PTR_DAT_0ac0c4a8;
        puVar5 = PTR_DAT_0ac0bc90;
        puVar4 = PTR_DAT_0ac0bc48;
        puVar3 = PTR_DAT_0ac0bc40;
        if (lVar12 != 0) {
          FUN_06b81794(lVar12,*(undefined8 *)PTR_DAT_0ac12eb0);
          FUN_06b8097c(&stack0x00000008,lVar12,*(undefined8 *)puVar5);
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000020;
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
          do {
            uVar18 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar4);
            uVar17 = in_stack_00000030;
            if ((uVar18 & 1) == 0) {
              lVar11 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
              FUN_05fefd34(&stack0x00000020,*(undefined8 *)puVar3);
              return lVar11;
            }
            lVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar9);
            FUN_09ae769c(lVar11,uVar17,param_2,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            lVar12 = FUN_09ae8eec(lVar11,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar17 = FUN_04b0c80c(uVar17,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c(uVar17,uVar17);
            }
            FUN_09ae6be8(lVar12,uVar17,0);
            lVar12 = FUN_09ae8eec(lVar11,0);
            if (lVar12 != 0) {
              lVar12 = FUN_09ae8eec(lVar11,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              iVar10 = FUN_09ae6ad8(lVar12,0);
              if (iVar10 != 0) {
                lVar12 = FUN_09ae8eec(lVar11,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0494818c();
                }
                iVar10 = FUN_09ae6ad8(lVar12,0);
                if (1 < iVar10) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
                lVar12 = FUN_09ae8eec(lVar11,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0494818c();
                }
                plVar13 = (long *)FUN_09ae676c(lVar12,0,0);
                if (plVar13 == (long *)0x0)
                goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
                lVar12 = *plVar13;
                bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
                if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8))
                goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
                uVar17 = (**(code **)(lVar12 + 0x1a8))(plVar13,*(undefined8 *)(lVar12 + 0x1b0));
                uVar18 = FUN_08bd7cd8(uVar17,*(undefined8 *)puVar6,4,0);
                if ((uVar18 & 1) == 0)
                goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
                FUN_09ae8034(lVar11,0);
                goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
              }
            }
            FUN_09ae8034(lVar11,0);
          } while( true );
        }
      }
    }
  }
LAB_04b5deb8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


