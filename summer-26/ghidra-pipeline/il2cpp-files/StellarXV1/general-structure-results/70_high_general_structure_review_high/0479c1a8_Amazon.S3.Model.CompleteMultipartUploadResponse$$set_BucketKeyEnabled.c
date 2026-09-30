/*
FUNCTION_NAME: Amazon.S3.Model.CompleteMultipartUploadResponse$$set_BucketKeyEnabled
ENTRY_POINT: 0479c1a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


undefined8 Amazon_S3_Model_CompleteMultipartUploadResponse__set_BucketKeyEnabled(code *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 uVar11;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  lVar1 = (*param_1)();
  if (lVar1 == 0) {
    lVar1 = FUN_047e29fc(*unaff_x27,*(undefined8 *)PTR_DAT_092a8c30,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0478b518(lVar1);
    if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = FUN_0479c7a8();
    if (lVar7 != 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar4 = FUN_0479c7a8();
      *(undefined8 *)(lVar1 + 0x128) = uVar4;
      thunk_FUN_040ec700(lVar1 + 0x128);
    }
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a50a8);
    FUN_076bca34(uVar4,0);
    lVar1 = FUN_051e3bc0(*unaff_x27,*unaff_x29,uVar4,lVar1,*(undefined8 *)PTR_DAT_092a8c20);
    plVar2 = (long *)thunk_FUN_040b4e00(lVar1,*unaff_x25);
    if (lVar1 == 0) {
      thunk_FUN_040dedf8(PTR_DAT_09285a38);
      uVar4 = thunk_FUN_040b4efc();
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092a9030);
      FUN_0767bcbc(uVar4,uVar5,0);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092a9040);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,uVar5);
    }
  }
  else {
    plVar2 = (long *)thunk_FUN_040b4e00(lVar1,*unaff_x25);
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar3 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x28);
  in_stack_00000008 = *(undefined8 *)PTR_DAT_092a9028;
  in_stack_00000010 = 0xffffffffffffffff;
  uVar5 = FUN_076b01b4(&stack0x00000008,0);
  lVar1 = *unaff_x20;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar1 = *unaff_x20;
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  uVar11 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0479c340;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar2,*unaff_x25,0);
LAB_0479c340:
  lVar1 = (*(code *)*puVar6)(plVar2,uVar4,uVar5,uVar10,uVar11);
  FUN_0479c868();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a5138);
    FUN_047a0994(uVar4,lVar1,uVar5,0);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


