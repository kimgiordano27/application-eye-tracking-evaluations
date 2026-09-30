/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartResponse$$IsSetBucketKeyEnabled
ENTRY_POINT: 047bf2bc
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


void Amazon_S3_Model_UploadPartResponse__IsSetBucketKeyEnabled(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *unaff_x22;
  long lVar8;
  long *plVar9;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar1 = PTR_DAT_092a9fc0;
  if ((param_1 & 1) == 0) {
    plVar9 = *(long **)(unaff_x20 + 0x20);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092a9fc0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_047bf400;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092a9fc0,0);
LAB_047bf400:
    uVar5 = (*(code *)*puVar2)(plVar9);
    if ((uVar5 & 1) != 0) {
      plVar9 = *(long **)(unaff_x20 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_047bf550;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar1,4);
LAB_047bf550:
      lVar4 = (*(code *)*puVar2)(plVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      _in_stack_00000020 = FUN_06649f48(lVar4,0,*(undefined8 *)PTR_DAT_092a5288);
      uVar5 = FUN_06c9cd6c(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5278);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000020;
        thunk_FUN_040ec700(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_049b7760(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar3 = FUN_06c9cdb4(&stack0x00000020,*(undefined8 *)PTR_DAT_092a5250);
      lVar4 = *(long *)(unaff_x19 + 0x10);
      uVar3 = FUN_047bec44(uVar3,1);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      puVar2 = (undefined8 *)(lVar4 + 0x18);
      *puVar2 = uVar3;
      thunk_FUN_040ec700(puVar2);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x10) = 1;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar7 = *(long *)(unaff_x20 + 0x10);
      lVar8 = *(long *)PTR_DAT_09288f08;
      lVar4 = *(long *)(lVar8 + 0x38);
      if (lVar4 == 0) {
        FUN_040b1b28(lVar8);
        lVar4 = *(long *)(lVar8 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0480cc7c(lVar7,*(undefined8 *)PTR_DAT_092a9fc8,**(undefined8 **)(lVar4 + 0xb8),0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
      goto FUN_047bf4e4;
    }
  }
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)PTR_DAT_09288f08;
  lVar4 = *(long *)(lVar8 + 0x38);
  if (lVar4 == 0) {
    FUN_040b1b28(lVar8);
    lVar4 = *(long *)(lVar8 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_0480cc7c(lVar7,*(undefined8 *)PTR_DAT_092a9fd0,**(undefined8 **)(lVar4 + 0xb8),0);
  uVar3 = *unaff_x22;
FUN_047bf4e4:
  puVar1 = PTR_DAT_092aa118;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_040ec700(unaff_x19 + 0x10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
  return;
}


