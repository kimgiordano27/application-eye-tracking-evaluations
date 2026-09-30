/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketIsConverted
ENTRY_POINT: 045ee210
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketIsConverted
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x23;
  
  **(undefined8 **)(*unaff_x23 + 0xb8) = 0;
  puVar3 = PTR_DAT_092a0eb8;
  puVar2 = PTR_DAT_09298118;
  puVar1 = PTR_DAT_09287cd8;
  thunk_FUN_040ec700(*(undefined8 *)(*unaff_x23 + 0xb8),0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar4,uVar10,*(undefined8 *)puVar3,0);
  lVar5 = FUN_076c071c(uVar9,uVar4,0);
  if (lVar5 == 0) {
    lVar6 = 0;
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  }
  else {
    uVar4 = *(undefined8 *)puVar1;
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar4);
    if (lVar6 == 0) goto LAB_045ee44c;
    **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
    uVar9 = *(undefined8 *)puVar1;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar9);
    if (lVar6 == 0) goto LAB_045ee458;
  }
  puVar2 = PTR_DAT_0928f5c8;
  thunk_FUN_040ec700(uVar4,lVar6);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar4,uVar10,*(undefined8 *)puVar3,0);
  lVar5 = FUN_076c071c(uVar9,uVar4,0);
  if (lVar5 == 0) {
    lVar6 = 0;
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  }
  else {
    uVar4 = *(undefined8 *)puVar1;
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar4);
    if (lVar6 == 0) {
LAB_045ee44c:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar5,uVar4);
    }
    **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
    uVar9 = *(undefined8 *)puVar1;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar9);
    if (lVar6 == 0) {
LAB_045ee458:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar5,uVar9);
    }
  }
  puVar3 = PTR_DAT_092a0eb0;
  puVar1 = PTR_DAT_09285e40;
  thunk_FUN_040ec700(uVar4,lVar6);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_075d444c(uVar4,uVar9,*(undefined8 *)puVar3,0);
  plVar7 = (long *)FUN_076c071c(uVar10,uVar4,0);
  if (plVar7 == (long *)0x0) {
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = 0;
LAB_045ee428:
    thunk_FUN_040ec700(plVar8,plVar7);
    return;
  }
  lVar5 = *(long *)puVar1;
  if (*plVar7 == lVar5) {
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = (long)plVar7;
    if (*plVar7 == lVar5) goto LAB_045ee428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(plVar7);
}


