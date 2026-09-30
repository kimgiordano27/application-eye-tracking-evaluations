/*
FUNCTION_NAME: Amazon.S3.Model.GetObjectMetadataRequest$$IsSetPartNumber
ENTRY_POINT: 047a6008
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void Amazon_S3_Model_GetObjectMetadataRequest__IsSetPartNumber(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092a94c0);
  *(undefined1 *)(unaff_x20 + 0x449) = 1;
  puVar2 = PTR_DAT_092a9240;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*unaff_x19 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar9 = *(long **)(unaff_x19 + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *plVar9;
    uVar10 = *(undefined8 *)(lVar7 + 0x48);
    uVar11 = *(undefined8 *)(lVar7 + 0x58);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xc);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092a9528) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto Amazon_S3_Model_GetObjectMetadataRequest__IsSetExpectedBucketOwner;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092a9528,0);
Amazon_S3_Model_GetObjectMetadataRequest__IsSetExpectedBucketOwner:
    lVar7 = (*(code *)*puVar4)(plVar9,uVar10,uVar11,uVar12,0,puVar4[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    _in_stack_00000010 = FUN_06649f48(lVar7,0,*(undefined8 *)PTR_DAT_092a94c0);
    uVar6 = FUN_06c9cd6c(&stack0x00000010,*(undefined8 *)PTR_DAT_092a94b0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_049b72d0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  uVar10 = FUN_06c9cdb4(&stack0x00000010,*(undefined8 *)PTR_DAT_092a94a8);
  puVar3 = PTR_DAT_092a9290;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
  return;
}


