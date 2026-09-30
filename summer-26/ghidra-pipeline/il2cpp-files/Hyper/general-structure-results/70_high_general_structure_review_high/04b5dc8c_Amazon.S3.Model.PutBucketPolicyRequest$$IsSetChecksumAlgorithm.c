/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketPolicyRequest$$IsSetChecksumAlgorithm
ENTRY_POINT: 04b5dc8c
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_11
*/


long Amazon_S3_Model_PutBucketPolicyRequest__IsSetChecksumAlgorithm(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long in_x10;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x04b5dc8c:
  *(int *)(unaff_x20 + 0x18) = (int)in_x10 + 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_049ee3d8();
  do {
    puVar7 = PTR_DAT_0ac12eb8;
    puVar6 = PTR_DAT_0ac12ea8;
    puVar5 = PTR_DAT_0ac0fe98;
    puVar4 = PTR_DAT_0ac0c4a8;
    puVar3 = PTR_DAT_0ac0bc48;
    puVar2 = PTR_DAT_0ac0bc40;
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      if (unaff_x20 == 0) {
LAB_04b5deb8:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_06b81794();
      FUN_06b8097c(&stack0x00000008);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 == (long *)0x0) goto LAB_04b5deb8;
    iVar8 = FUN_08be0f4c();
    if (0 < iVar8) {
      FUN_08be0754();
    }
    FUN_08be0754();
    param_2 = (**(code **)(*unaff_x22 + 0x168))();
    if (unaff_x20 == 0) goto LAB_04b5deb8;
    param_1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_04b5deb8;
    in_x10 = (long)(int)*(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(unaff_x20 + 0x18) < *(uint *)(param_1 + 0x18)) break;
    FUN_06b7fe74();
  } while( true );
  param_1 = param_1 + in_x10 * 8;
  goto code_r0x04b5dc8c;
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
  uVar9 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar3);
  uVar12 = in_stack_00000030;
  if ((uVar9 & 1) == 0) {
    lVar10 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
    FUN_05fefd34(&stack0x00000020,*(undefined8 *)puVar2);
    return lVar10;
  }
  lVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar7);
  FUN_09ae769c(lVar10,uVar12,unaff_w19,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar11 = FUN_09ae8eec(lVar10,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar12 = FUN_04b0c80c(uVar12,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar12,uVar12);
  }
  FUN_09ae6be8(lVar11,uVar12,0);
  lVar11 = FUN_09ae8eec(lVar10,0);
  if (lVar11 != 0) {
    lVar11 = FUN_09ae8eec(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar8 = FUN_09ae6ad8(lVar11,0);
    if (iVar8 != 0) {
      lVar11 = FUN_09ae8eec(lVar10,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar8 = FUN_09ae6ad8(lVar11,0);
      if (1 < iVar8) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      lVar11 = FUN_09ae8eec(lVar10,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar13 = (long *)FUN_09ae676c(lVar11,0,0);
      if (plVar13 == (long *)0x0)
      goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      lVar11 = *plVar13;
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      uVar12 = (**(code **)(lVar11 + 0x1a8))(plVar13,*(undefined8 *)(lVar11 + 0x1b0));
      uVar9 = FUN_08bd7cd8(uVar12,*(undefined8 *)puVar4,4,0);
      if ((uVar9 & 1) == 0) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      FUN_09ae8034(lVar10,0);
      goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
    }
  }
  FUN_09ae8034(lVar10,0);
  goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
}


