/*
FUNCTION_NAME: Amazon.S3.Model.CompleteMultipartUploadResponse$$get_BucketKeyEnabled
ENTRY_POINT: 0479c16c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


undefined8
Amazon_S3_Model_CompleteMultipartUploadResponse__get_BucketKeyEnabled
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_04761a7c(param_1,param_2,0);
  puVar1 = PTR_DAT_092a9020;
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = thunk_FUN_04096bb4(*(undefined8 *)
                              (*unaff_x22 +
                               (ulong)*(ushort *)(*(long *)PTR_DAT_092a8c08 + 0x50) * 0x10 + 0x140))
  ;
  lVar2 = (**(code **)(lVar2 + 8))();
  if (lVar2 == 0) {
    lVar2 = FUN_047e29fc(*unaff_x27,*(undefined8 *)PTR_DAT_092a8c30,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0478b518(lVar2);
    if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = FUN_0479c7a8();
    if (lVar8 != 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar5 = FUN_0479c7a8();
      *(undefined8 *)(lVar2 + 0x128) = uVar5;
      thunk_FUN_040ec700(lVar2 + 0x128);
    }
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a50a8);
    FUN_076bca34(uVar5,0);
    lVar2 = FUN_051e3bc0(*unaff_x27,*unaff_x29,uVar5,lVar2,*(undefined8 *)PTR_DAT_092a8c20);
    plVar3 = (long *)thunk_FUN_040b4e00(lVar2,*(undefined8 *)puVar1);
    if (lVar2 == 0) {
      thunk_FUN_040dedf8(PTR_DAT_09285a38);
      uVar5 = thunk_FUN_040b4efc();
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092a9030);
      FUN_0767bcbc(uVar5,uVar6,0);
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092a9040);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,uVar6);
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_040b4e00(lVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar4 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x20);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x28);
  in_stack_00000008 = *(undefined8 *)PTR_DAT_092a9028;
  in_stack_00000010 = 0xffffffffffffffff;
  uVar6 = FUN_076b01b4(&stack0x00000008,0);
  lVar2 = *unaff_x20;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x20;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar12 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0479c340;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)puVar1,0);
LAB_0479c340:
  lVar2 = (*(code *)*puVar7)(plVar3,uVar5,uVar6,uVar11,uVar12);
  FUN_0479c868();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a5138);
    FUN_047a0994(uVar5,lVar2,uVar6,0);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


