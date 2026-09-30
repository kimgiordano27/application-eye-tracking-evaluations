/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadRequest$$IsSetBucketKeyEnabled
ENTRY_POINT: 047ab8f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_InitiateMultipartUploadRequest__IsSetBucketKeyEnabled(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (in_w8 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = FUN_07dbbb8c(*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x18),1,
                         *(undefined8 *)(unaff_x19 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    _in_stack_00000020 = FUN_06649f48(lVar3,0,*(undefined8 *)PTR_DAT_092a80d0);
    uVar4 = FUN_06c9cd6c(&stack0x00000020,*(undefined8 *)PTR_DAT_092a8098);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_049b5760(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  uVar5 = FUN_06c9cdb4(&stack0x00000020,*(undefined8 *)PTR_DAT_092a8090);
  if (unaff_x20 != 0) {
    uVar5 = FUN_047aa7a8();
    puVar2 = PTR_DAT_092a9798;
    iVar1 = *(int *)(*unaff_x21 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_067119b4(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(uVar5,uVar5);
}


