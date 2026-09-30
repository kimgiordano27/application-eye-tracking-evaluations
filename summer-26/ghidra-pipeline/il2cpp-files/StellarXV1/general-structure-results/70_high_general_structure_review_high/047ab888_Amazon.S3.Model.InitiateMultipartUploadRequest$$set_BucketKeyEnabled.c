/*
FUNCTION_NAME: Amazon.S3.Model.InitiateMultipartUploadRequest$$set_BucketKeyEnabled
ENTRY_POINT: 047ab888
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


void Amazon_S3_Model_InitiateMultipartUploadRequest__set_BucketKeyEnabled(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_04077588(PTR_DAT_092a9798);
  FUN_04077588(PTR_DAT_092a96d0);
  FUN_04077588(PTR_DAT_092a8088);
  FUN_04077588(PTR_DAT_092a8090);
  FUN_04077588(PTR_DAT_092a8098);
  FUN_04077588(PTR_DAT_092a80d0);
  *(undefined1 *)(unaff_x20 + 0x47a) = 1;
  puVar2 = PTR_DAT_092a96d0;
  lVar7 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = FUN_07dbbb8c(*(long *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x18),1,
                         *(undefined8 *)(unaff_x19 + 10),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    _in_stack_00000020 = FUN_06649f48(lVar4,0,*(undefined8 *)PTR_DAT_092a80d0);
    uVar5 = FUN_06c9cd6c(&stack0x00000020,*(undefined8 *)PTR_DAT_092a8098);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_049b5760(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  uVar6 = FUN_06c9cdb4(&stack0x00000020,*(undefined8 *)PTR_DAT_092a8090);
  if (lVar7 != 0) {
    uVar6 = FUN_047aa7a8(lVar7);
    puVar3 = PTR_DAT_092a9798;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_067119b4(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(uVar6,uVar6);
}


