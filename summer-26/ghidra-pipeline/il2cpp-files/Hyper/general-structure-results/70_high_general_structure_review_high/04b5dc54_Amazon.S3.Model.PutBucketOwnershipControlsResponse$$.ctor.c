/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketOwnershipControlsResponse$$.ctor
ENTRY_POINT: 04b5dc54
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8
*/


long Amazon_S3_Model_PutBucketOwnershipControlsResponse___ctor(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  code *in_x9;
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
  
  do {
    uVar10 = (*in_x9)();
    if (unaff_x20 == 0) {
LAB_04b5deb8:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_04b5deb8;
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
      thunk_FUN_049ee3d8();
    }
    else {
      FUN_06b7fe74();
    }
    puVar8 = PTR_DAT_0ac12eb8;
    puVar7 = PTR_DAT_0ac12ea8;
    puVar6 = PTR_DAT_0ac0fe98;
    puVar5 = PTR_DAT_0ac0c4a8;
    puVar4 = PTR_DAT_0ac0bc48;
    puVar3 = PTR_DAT_0ac0bc40;
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      if (unaff_x20 != 0) {
        FUN_06b81794();
        FUN_06b8097c(&stack0x00000008);
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        break;
      }
      goto LAB_04b5deb8;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 == (long *)0x0) goto LAB_04b5deb8;
    iVar9 = FUN_08be0f4c();
    if (0 < iVar9) {
      FUN_08be0754();
    }
    FUN_08be0754();
    in_x9 = *(code **)(*unaff_x22 + 0x168);
  } while( true );
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
  uVar11 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar4);
  uVar10 = in_stack_00000030;
  if ((uVar11 & 1) == 0) {
    lVar14 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
    FUN_05fefd34(&stack0x00000020,*(undefined8 *)puVar3);
    return lVar14;
  }
  lVar14 = thunk_FUN_04983f60(*(undefined8 *)puVar8);
  FUN_09ae769c(lVar14,uVar10,unaff_w19,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar12 = FUN_09ae8eec(lVar14,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar10 = FUN_04b0c80c(uVar10,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar10,uVar10);
  }
  FUN_09ae6be8(lVar12,uVar10,0);
  lVar12 = FUN_09ae8eec(lVar14,0);
  if (lVar12 != 0) {
    lVar12 = FUN_09ae8eec(lVar14,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar9 = FUN_09ae6ad8(lVar12,0);
    if (iVar9 != 0) {
      lVar12 = FUN_09ae8eec(lVar14,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar9 = FUN_09ae6ad8(lVar12,0);
      if (1 < iVar9) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      lVar12 = FUN_09ae8eec(lVar14,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar13 = (long *)FUN_09ae676c(lVar12,0,0);
      if (plVar13 == (long *)0x0)
      goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      lVar12 = *plVar13;
      bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7))
      goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      uVar10 = (**(code **)(lVar12 + 0x1a8))(plVar13,*(undefined8 *)(lVar12 + 0x1b0));
      uVar11 = FUN_08bd7cd8(uVar10,*(undefined8 *)puVar5,4,0);
      if ((uVar11 & 1) == 0) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
      FUN_09ae8034(lVar14,0);
      goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
    }
  }
  FUN_09ae8034(lVar14,0);
  goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
}


