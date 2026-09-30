/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFlowsComponentIsTracked_WhenConvert_FlowsComponentIsTrackedIsConverted
ENTRY_POINT: 045ee134
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFlowsComponentIsTracked_WhenConvert_FlowsComponentIsTrackedIsConverted
               (undefined8 param_1)

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
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x22;
  
  puVar3 = PTR_DAT_092a0ec0;
  puVar2 = PTR_DAT_092a0e78;
  puVar1 = PTR_DAT_09293998;
  puVar9 = *(undefined8 **)(unaff_x20 + 0xe0);
  thunk_FUN_040ec700(*(undefined8 *)(*unaff_x22 + 0xb8),param_1);
  uVar4 = thunk_FUN_040b4efc(*puVar9);
  FUN_0468b188();
  FUN_0468a7e0(uVar4,0);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar10 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_06f2e6cc(uVar4,uVar11,*(undefined8 *)puVar3,0);
  lVar5 = FUN_076c071c(uVar10,uVar4,0);
  if (lVar5 == 0) {
    lVar6 = 0;
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
    uVar4 = *(undefined8 *)(*(long *)puVar1 + 0xb8);
  }
  else {
    uVar4 = *(undefined8 *)puVar2;
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar4);
    if (lVar6 == 0) goto LAB_045ee44c;
    **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
    uVar10 = *(undefined8 *)puVar2;
    uVar4 = *(undefined8 *)(*(long *)puVar1 + 0xb8);
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar10);
    if (lVar6 == 0) goto LAB_045ee458;
  }
  puVar3 = PTR_DAT_092a0eb8;
  puVar2 = PTR_DAT_09298118;
  puVar1 = PTR_DAT_09287cd8;
  thunk_FUN_040ec700(uVar4,lVar6);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar4,uVar11,*(undefined8 *)puVar3,0);
  lVar5 = FUN_076c071c(uVar10,uVar4,0);
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
    uVar10 = *(undefined8 *)puVar1;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar10);
    if (lVar6 == 0) goto LAB_045ee458;
  }
  puVar2 = PTR_DAT_0928f5c8;
  thunk_FUN_040ec700(uVar4,lVar6);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5721c(uVar4,uVar11,*(undefined8 *)puVar3,0);
  lVar5 = FUN_076c071c(uVar10,uVar4,0);
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
    uVar10 = *(undefined8 *)puVar1;
    uVar4 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    lVar6 = thunk_FUN_040b4e00(lVar5,uVar10);
    if (lVar6 == 0) {
LAB_045ee458:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar5,uVar10);
    }
  }
  puVar3 = PTR_DAT_092a0eb0;
  puVar1 = PTR_DAT_09285e40;
  thunk_FUN_040ec700(uVar4,lVar6);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_075d444c(uVar4,uVar10,*(undefined8 *)puVar3,0);
  plVar7 = (long *)FUN_076c071c(uVar11,uVar4,0);
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


