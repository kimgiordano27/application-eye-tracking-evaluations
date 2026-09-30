/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketOwnershipControlsRequest$$set_OwnershipControls
ENTRY_POINT: 04b5dbd4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


long Amazon_S3_Model_PutBucketOwnershipControlsRequest__set_OwnershipControls(void)

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
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong uVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_08be6d48();
  if (unaff_x21 != 0) {
    if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
      uVar15 = 0;
      uVar13 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar15) {
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
        uVar13 = (ulong)*(uint *)(unaff_x21 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(unaff_x21 + 0x18));
    }
    puVar8 = PTR_DAT_0ac12eb8;
    puVar7 = PTR_DAT_0ac12ea8;
    puVar6 = PTR_DAT_0ac0fe98;
    puVar5 = PTR_DAT_0ac0c4a8;
    puVar4 = PTR_DAT_0ac0bc48;
    puVar3 = PTR_DAT_0ac0bc40;
    if (unaff_x20 != 0) {
      FUN_06b81794();
      FUN_06b8097c(&stack0x00000008);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
      do {
        uVar15 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar4);
        uVar10 = in_stack_00000030;
        if ((uVar15 & 1) == 0) {
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
        lVar11 = FUN_09ae8eec(lVar14,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar10 = FUN_04b0c80c(uVar10,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c(uVar10,uVar10);
        }
        FUN_09ae6be8(lVar11,uVar10,0);
        lVar11 = FUN_09ae8eec(lVar14,0);
        if (lVar11 != 0) {
          lVar11 = FUN_09ae8eec(lVar14,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          iVar9 = FUN_09ae6ad8(lVar11,0);
          if (iVar9 != 0) {
            lVar11 = FUN_09ae8eec(lVar14,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            iVar9 = FUN_09ae6ad8(lVar11,0);
            if (1 < iVar9) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            lVar11 = FUN_09ae8eec(lVar14,0);
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
            uVar15 = FUN_08bd7cd8(uVar10,*(undefined8 *)puVar5,4,0);
            if ((uVar15 & 1) == 0)
            goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            FUN_09ae8034(lVar14,0);
            goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
          }
        }
        FUN_09ae8034(lVar14,0);
      } while( true );
    }
  }
LAB_04b5deb8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


