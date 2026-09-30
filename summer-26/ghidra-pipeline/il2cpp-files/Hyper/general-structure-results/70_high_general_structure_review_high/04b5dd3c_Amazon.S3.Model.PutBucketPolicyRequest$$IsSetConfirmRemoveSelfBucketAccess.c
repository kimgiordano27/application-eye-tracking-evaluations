/*
FUNCTION_NAME: Amazon.S3.Model.PutBucketPolicyRequest$$IsSetConfirmRemoveSelfBucketAccess
ENTRY_POINT: 04b5dd3c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


long Amazon_S3_Model_PutBucketPolicyRequest__IsSetConfirmRemoveSelfBucketAccess(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 unaff_w19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000030;
  
code_r0x04b5dd3c:
  do {
    uVar3 = FUN_05fefd38(&stack0x00000020,*unaff_x24);
    uVar6 = in_stack_00000030;
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration:
      FUN_05fefd34(&stack0x00000020,*unaff_x23);
      return lVar4;
    }
    lVar4 = thunk_FUN_04983f60(*unaff_x25);
    FUN_09ae769c(lVar4,uVar6,unaff_w19,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = FUN_09ae8eec(lVar4,0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_04b0c80c(uVar6,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar6,uVar6);
    }
    FUN_09ae6be8(lVar5,uVar6,0);
    lVar5 = FUN_09ae8eec(lVar4,0);
    if (lVar5 != 0) {
      lVar5 = FUN_09ae8eec(lVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar2 = FUN_09ae6ad8(lVar5,0);
      if (iVar2 != 0) {
        lVar5 = FUN_09ae8eec(lVar4,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        iVar2 = FUN_09ae6ad8(lVar5,0);
        if (1 < iVar2) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        lVar5 = FUN_09ae8eec(lVar4,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar7 = (long *)FUN_09ae676c(lVar5,0,0);
        if (plVar7 == (long *)0x0)
        goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        lVar5 = *plVar7;
        bVar1 = *(byte *)(*unaff_x27 + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
        goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        uVar6 = (**(code **)(lVar5 + 0x1a8))(plVar7,*(undefined8 *)(lVar5 + 0x1b0));
        uVar3 = FUN_08bd7cd8(uVar6,*unaff_x28,4,0);
        if ((uVar3 & 1) == 0) goto Amazon_S3_Model_PutBucketReplicationRequest__set_Configuration;
        FUN_09ae8034(lVar4,0);
        goto code_r0x04b5dd3c;
      }
    }
    FUN_09ae8034(lVar4,0);
  } while( true );
}


