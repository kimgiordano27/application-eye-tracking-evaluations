/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketOwnershipControlsRequest$$set_ChecksumAlgorithm
ENTRY_POINT: 04b5dbe4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


long Amazon_S3_Model_PutBucketOwnershipControlsRequest__set_ChecksumAlgorithm(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char in_NG;
  char in_OV;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong uVar14;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_NG == in_OV) {
    uVar14 = 0;
    param_1 = param_1 & 0xffffffff;
    do {
      if (param_1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x22 == (long *)0x0) goto LAB_04b5deb8;
      iVar9 = FUN_08be0f4c();
      if (0 < iVar9) {
        FUN_08be0754();
      }
      FUN_08be0754();
      uVar10 = (**(code **)(*unaff_x22 + 0x168))();
      if (unaff_x20 == 0) goto LAB_04b5deb8;
      lVar13 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_04b5deb8;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
        thunk_FUN_049ee3d8();
      }
      else {
        FUN_06b7fe74();
      }
      param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
  puVar8 = PTR_DAT_0ac12eb8;
  puVar7 = PTR_DAT_0ac12ea8;
  puVar6 = PTR_DAT_0ac0fe98;
  puVar5 = PTR_DAT_0ac0c4a8;
  puVar4 = PTR_DAT_0ac0bc48;
  puVar3 = PTR_DAT_0ac0bc40;
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
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
  do {
    uVar14 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar4);
    uVar10 = in_stack_00000030;
    if ((uVar14 & 1) == 0) {
      lVar13 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
      FUN_05fefd34(&stack0x00000020,*(undefined8 *)puVar3);
      return lVar13;
    }
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)puVar8);
    FUN_09ae769c(lVar13,uVar10,unaff_w19,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar11 = FUN_09ae8eec(lVar13,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar10 = FUN_04b0c80c(uVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar10,uVar10);
    }
    FUN_09ae6be8(lVar11,uVar10,0);
    lVar11 = FUN_09ae8eec(lVar13,0);
    if (lVar11 != 0) {
      lVar11 = FUN_09ae8eec(lVar13,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar9 = FUN_09ae6ad8(lVar11,0);
      if (iVar9 != 0) {
        lVar11 = FUN_09ae8eec(lVar13,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar9 = FUN_09ae6ad8(lVar11,0);
        if (1 < iVar9) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        lVar11 = FUN_09ae8eec(lVar13,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar12 = (long *)FUN_09ae676c(lVar11,0,0);
        if (plVar12 == (long *)0x0)
        goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        lVar11 = *plVar12;
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7))
        goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        uVar10 = (**(code **)(lVar11 + 0x1a8))(plVar12,*(undefined8 *)(lVar11 + 0x1b0));
        uVar14 = FUN_08bd7cd8(uVar10,*(undefined8 *)puVar5,4,0);
        if ((uVar14 & 1) == 0) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        FUN_09ae8034(lVar13,0);
        goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
      }
    }
    FUN_09ae8034(lVar13,0);
  } while( true );
}


