/*
FUNCTION_NAME: Amazon.S3.Model.CreateSessionResponse$$set_BucketKeyEnabled
ENTRY_POINT: 04b48a10
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_CreateSessionResponse__set_BucketKeyEnabled(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac123a0);
    FUN_04947ee4(PTR_DAT_0ac123a8);
    FUN_04947ee4(PTR_DAT_0ac11cb8);
    FUN_04947ee4(PTR_DAT_0ac11c90);
    FUN_04947ee4(PTR_DAT_0ac123b0);
    FUN_04947ee4(PTR_DAT_0ac12220);
    FUN_04947ee4(PTR_DAT_0ac123b8);
    FUN_04947ee4(PTR_DAT_0ac12228);
    FUN_04947ee4(PTR_DAT_0ac12230);
    FUN_04947ee4(PTR_DAT_0ac123c0);
    FUN_04947ee4(PTR_DAT_0ac11c40);
    FUN_04947ee4(PTR_DAT_0ac11de8);
    FUN_04947ee4(PTR_DAT_0ac12260);
    FUN_04947ee4(PTR_DAT_0ac12238);
    FUN_04947ee4(PTR_DAT_0ac123c8);
    *(undefined1 *)(unaff_x20 + 0xa26) = 1;
  }
  puVar2 = PTR_DAT_0ac11c90;
  in_stack_00000028 = 0;
  lVar6 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000010 = 0;
  if (*unaff_x19 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = -1;
      _in_stack_00000020 = ZEXT816(0);
      goto LAB_04b48c08;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_0ac12260 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar5 = FUN_04b45e8c(uVar8,uVar7);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    _in_stack_00000020 = FUN_07764824(lVar5,0,*(undefined8 *)PTR_DAT_0ac123c8);
    uVar3 = FUN_08471d74(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac123c0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05355b0c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  lVar5 = FUN_08471dbc(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac123b8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = FUN_08bd8f18(*(undefined8 *)(lVar5 + 0x18),0);
  if ((uVar3 & 1) == 0) {
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac0b718);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_08cf5044(0);
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac12268);
    uVar8 = FUN_08bda758(uVar8,uVar7,uVar4,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac10550);
    uVar7 = thunk_FUN_04983f60();
    FUN_04b30488(uVar7,uVar8,0);
    uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac123d0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar7,uVar8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = FUN_04b45fa8(lVar6,*(undefined8 *)(unaff_x19 + 10));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  _in_stack_00000010 = FUN_07764824(lVar6,0,*(undefined8 *)PTR_DAT_0ac12238);
  uVar3 = FUN_08471d74(&stack0x00000010,*(undefined8 *)PTR_DAT_0ac12230);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05355b0c(unaff_x19 + 2,&stack0x00000010);
    return;
  }
LAB_04b48c08:
  lVar6 = FUN_08471dbc(&stack0x00000010,*(undefined8 *)PTR_DAT_0ac12228);
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x38);
    uVar9 = *(undefined8 *)(lVar6 + 0x40);
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac11de8);
    Amazon_S3_Transfer_Internal_MultipartUploadCommand__AbortMultipartUpload
              (uVar4,uVar8,uVar7,uVar9,0);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac11c40);
    FUN_08dbf2f0(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = uVar4;
    thunk_FUN_049ee3d8((undefined8 *)(lVar6 + 0x10),uVar4);
    lVar5 = *(long *)puVar2;
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    puVar2 = PTR_DAT_0ac11cb8;
    iVar1 = *(int *)(lVar5 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(unaff_x19 + 2,lVar6,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


