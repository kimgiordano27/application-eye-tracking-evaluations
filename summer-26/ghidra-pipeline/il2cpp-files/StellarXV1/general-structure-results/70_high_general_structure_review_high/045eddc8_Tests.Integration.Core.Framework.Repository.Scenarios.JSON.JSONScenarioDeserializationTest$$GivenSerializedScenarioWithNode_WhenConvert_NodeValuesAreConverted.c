/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithNode_WhenConvert_NodeValuesAreConverted
ENTRY_POINT: 045eddc8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithNode_WhenConvert_NodeValuesAreConverted
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x22;
  
  lVar10 = *(long *)(param_1 + 0x50);
  uVar6 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_0442bb20();
  if (lVar10 == 0) {
LAB_045ee448:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_044298d8(lVar10,uVar6,0);
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar10 == 0)) goto LAB_045ee448;
  lVar10 = *(long *)(lVar10 + 0x50);
  uVar6 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_0442bb20();
  puVar5 = PTR_DAT_092a0e70;
  puVar4 = PTR_DAT_09298500;
  puVar3 = PTR_DAT_092984f8;
  puVar2 = PTR_DAT_0928f300;
  puVar1 = PTR_DAT_0928f250;
  if (lVar10 == 0) goto LAB_045ee448;
  FUN_044297a0(lVar10,uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_042f3c18();
  FUN_042f32f4(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_04442d9c();
  FUN_04441f9c(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_04442e98();
  FUN_04442110(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092995d0);
  FUN_0447110c();
  FUN_04470214(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092995d8);
  FUN_04471254();
  FUN_04470388(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092994f0);
  FUN_0446f064();
  FUN_0446e298(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092994f8);
  FUN_0446f1ac();
  FUN_0446e40c(uVar6,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09296d78);
  FUN_043fd690();
  FUN_043fc9b0(uVar6,0);
  uVar11 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_0438b4c0();
  plVar7 = (long *)FUN_076c071c(uVar11,uVar6,0);
  if (plVar7 == (long *)0x0) {
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
  }
  else if ((*plVar7 != *(long *)puVar5) ||
          (**(long **)(*(long *)puVar2 + 0xb8) = (long)plVar7, *plVar7 != *(long *)puVar5))
  goto LAB_045ee414;
  puVar3 = PTR_DAT_092a0e80;
  puVar1 = PTR_DAT_0928b5d0;
  thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar7);
  uVar11 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_04456614();
  plVar7 = (long *)FUN_076c071c(uVar11,uVar6,0);
  if (plVar7 == (long *)0x0) {
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
  }
  else if ((*plVar7 != *(long *)puVar3) ||
          (**(long **)(*(long *)puVar1 + 0xb8) = (long)plVar7, *plVar7 != *(long *)puVar3))
  goto LAB_045ee414;
  puVar5 = PTR_DAT_092a0ec0;
  puVar4 = PTR_DAT_092a0e78;
  puVar3 = PTR_DAT_09293998;
  puVar2 = PTR_DAT_092890e0;
  thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar7);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_0468b188();
  FUN_0468a7e0(uVar6,0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar11 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_06f2e6cc(uVar6,uVar12,*(undefined8 *)puVar5,0);
  lVar10 = FUN_076c071c(uVar11,uVar6,0);
  if (lVar10 == 0) {
    lVar8 = 0;
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = 0;
    uVar6 = *(undefined8 *)(*(long *)puVar3 + 0xb8);
  }
  else {
    uVar6 = *(undefined8 *)puVar4;
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar6);
    if (lVar8 == 0) goto LAB_045ee44c;
    **(long **)(*(long *)puVar3 + 0xb8) = lVar8;
    uVar11 = *(undefined8 *)puVar4;
    uVar6 = *(undefined8 *)(*(long *)puVar3 + 0xb8);
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar11);
    if (lVar8 == 0) goto LAB_045ee458;
  }
  puVar3 = PTR_DAT_092a0eb8;
  puVar2 = PTR_DAT_09298118;
  puVar1 = PTR_DAT_09287cd8;
  thunk_FUN_040ec700(uVar6,lVar8);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar11 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar6,uVar12,*(undefined8 *)puVar3,0);
  lVar10 = FUN_076c071c(uVar11,uVar6,0);
  if (lVar10 == 0) {
    lVar8 = 0;
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  }
  else {
    uVar6 = *(undefined8 *)puVar1;
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar6);
    if (lVar8 == 0) goto LAB_045ee44c;
    **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
    uVar11 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar11);
    if (lVar8 == 0) goto LAB_045ee458;
  }
  puVar2 = PTR_DAT_0928f5c8;
  thunk_FUN_040ec700(uVar6,lVar8);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar11 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar6,uVar12,*(undefined8 *)puVar3,0);
  lVar10 = FUN_076c071c(uVar11,uVar6,0);
  if (lVar10 == 0) {
    lVar8 = 0;
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  }
  else {
    uVar6 = *(undefined8 *)puVar1;
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar6);
    if (lVar8 == 0) {
LAB_045ee44c:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar10,uVar6);
    }
    **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
    uVar11 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar8 = thunk_FUN_040b4e00(lVar10,uVar11);
    if (lVar8 == 0) {
LAB_045ee458:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar10,uVar11);
    }
  }
  puVar3 = PTR_DAT_092a0eb0;
  puVar1 = PTR_DAT_09285e40;
  thunk_FUN_040ec700(uVar6,lVar8);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_075d444c(uVar6,uVar11,*(undefined8 *)puVar3,0);
  plVar7 = (long *)FUN_076c071c(uVar12,uVar6,0);
  if (plVar7 == (long *)0x0) {
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = 0;
LAB_045ee428:
    thunk_FUN_040ec700(plVar9,plVar7);
    return;
  }
  lVar10 = *(long *)puVar1;
  if (*plVar7 == lVar10) {
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = (long)plVar7;
    if (*plVar7 == lVar10) goto LAB_045ee428;
  }
LAB_045ee414:
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(plVar7);
}


