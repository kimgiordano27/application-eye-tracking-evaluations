/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Projects.JSON.JSONProjectDeserializationTest$$GivenSerializedProjectWithProjectAsset_WhenConvert_ProjectAssetIsConverted
ENTRY_POINT: 045ff428
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Projects_JSON_JSONProjectDeserializationTest__GivenSerializedProjectWithProjectAsset_WhenConvert_ProjectAssetIsConverted
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 in_stack_00000018;
  
  FUN_04077588(PTR_DAT_092a1408);
  FUN_04077588(PTR_DAT_09285a68);
  FUN_04077588(PTR_DAT_09295880);
  FUN_04077588(PTR_DAT_092a11e8);
  FUN_04077588(PTR_DAT_092a1410);
  FUN_04077588(PTR_DAT_09296440);
  FUN_04077588(PTR_DAT_09296448);
  FUN_04077588(PTR_DAT_09296450);
  *(undefined1 *)(unaff_x20 + 0x4b0) = 1;
  puVar1 = PTR_DAT_09285a68;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar10 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar6 = *(long **)(lVar10 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar6;
    uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x60) + 0x60);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092a11e8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_045ff534;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092a11e8,2);
LAB_045ff534:
    uVar7 = (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    uVar8 = *(undefined8 *)(lVar10 + 0x60);
    lVar9 = *(long *)PTR_DAT_092a1400;
    lVar3 = *(long *)(lVar9 + 0x38);
    if (lVar3 == 0) {
      FUN_040b1b28(lVar9);
      lVar3 = *(long *)(lVar9 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_051fe31c(uVar7,uVar8,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_092a1410);
    if (*(long *)(lVar10 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar6 = *(long **)(lVar10 + 0x68);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar6;
    uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x60) + 0x60);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09295880) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_045ff630;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09295880,5);
LAB_045ff630:
    lVar10 = (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_06649f2c(lVar10,*(undefined8 *)PTR_DAT_09296450);
    uVar4 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09296448);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e441cc(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar7 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09296440);
  FUN_0789187c(uVar7,0);
  lVar10 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


