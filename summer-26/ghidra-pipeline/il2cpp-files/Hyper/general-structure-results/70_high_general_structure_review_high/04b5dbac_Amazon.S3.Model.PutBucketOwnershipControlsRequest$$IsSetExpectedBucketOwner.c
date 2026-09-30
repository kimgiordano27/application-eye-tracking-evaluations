/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketOwnershipControlsRequest$$IsSetExpectedBucketOwner
ENTRY_POINT: 04b5dbac
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


long Amazon_S3_Model_PutBucketOwnershipControlsRequest__IsSetExpectedBucketOwner
               (undefined8 param_1,long param_2)

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
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 unaff_w19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar11 = thunk_FUN_04983f60(param_1);
  FUN_06b7f60c(lVar11,*unaff_x22);
  plVar12 = (long *)thunk_FUN_04983f60(*unaff_x23);
  FUN_08be6d48(plVar12,0);
  puVar4 = PTR_DAT_0ac09fa8;
  puVar3 = PTR_DAT_0ac09b28;
  if (param_2 != 0) {
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar17 = 0;
      uVar13 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        if (plVar12 == (long *)0x0) goto LAB_04b5deb8;
        uVar16 = *(undefined8 *)(param_2 + 0x20 + uVar17 * 8);
        iVar10 = FUN_08be0f4c(plVar12,0);
        if (0 < iVar10) {
          FUN_08be0754(plVar12,*(undefined8 *)puVar3,0);
        }
        FUN_08be0754(plVar12,uVar16,0);
        uVar16 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        if (lVar11 == 0) goto LAB_04b5deb8;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar4;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_04b5deb8;
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
          thunk_FUN_049ee3d8();
        }
        else {
          FUN_06b7fe74(lVar11,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        uVar13 = (ulong)*(uint *)(param_2 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    puVar9 = PTR_DAT_0ac12eb8;
    puVar8 = PTR_DAT_0ac12ea8;
    puVar7 = PTR_DAT_0ac0fe98;
    puVar6 = PTR_DAT_0ac0c4a8;
    puVar5 = PTR_DAT_0ac0bc90;
    puVar4 = PTR_DAT_0ac0bc48;
    puVar3 = PTR_DAT_0ac0bc40;
    if (lVar11 != 0) {
      FUN_06b81794(lVar11,*(undefined8 *)PTR_DAT_0ac12eb0);
      FUN_06b8097c(&stack0x00000008,lVar11,*(undefined8 *)puVar5);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess:
      do {
        uVar17 = FUN_05fefd38(&stack0x00000020,*(undefined8 *)puVar4);
        uVar16 = in_stack_00000030;
        if ((uVar17 & 1) == 0) {
          lVar11 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
          FUN_05fefd34(&stack0x00000020,*(undefined8 *)puVar3);
          return lVar11;
        }
        lVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar9);
        FUN_09ae769c(lVar11,uVar16,unaff_w19,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar14 = FUN_09ae8eec(lVar11,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar16 = FUN_04b0c80c(uVar16,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c(uVar16,uVar16);
        }
        FUN_09ae6be8(lVar14,uVar16,0);
        lVar14 = FUN_09ae8eec(lVar11,0);
        if (lVar14 != 0) {
          lVar14 = FUN_09ae8eec(lVar11,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          iVar10 = FUN_09ae6ad8(lVar14,0);
          if (iVar10 != 0) {
            lVar14 = FUN_09ae8eec(lVar11,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            iVar10 = FUN_09ae6ad8(lVar14,0);
            if (1 < iVar10) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            lVar14 = FUN_09ae8eec(lVar11,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            plVar12 = (long *)FUN_09ae676c(lVar14,0,0);
            if (plVar12 == (long *)0x0)
            goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            lVar14 = *plVar12;
            bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
            if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8))
            goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            uVar16 = (**(code **)(lVar14 + 0x1a8))(plVar12,*(undefined8 *)(lVar14 + 0x1b0));
            uVar17 = FUN_08bd7cd8(uVar16,*(undefined8 *)puVar6,4,0);
            if ((uVar17 & 1) == 0)
            goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
            FUN_09ae8034(lVar11,0);
            goto Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess;
          }
        }
        FUN_09ae8034(lVar11,0);
      } while( true );
    }
  }
LAB_04b5deb8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


