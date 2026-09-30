/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFlowsComponent_WhenConvert_FlowsComponentIsConverted
ENTRY_POINT: 045ee058
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFlowsComponent_WhenConvert_FlowsComponentIsConverted
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x22;
  long *unaff_x23;
  
  if ((in_ZR) &&
     (**(long **)(*unaff_x23 + 0xb8) = (long)param_1, puVar2 = PTR_DAT_092a0e80,
     puVar1 = PTR_DAT_0928b5d0, *param_1 == *unaff_x22)) {
    thunk_FUN_040ec700(*(undefined8 *)(*unaff_x23 + 0xb8),param_1);
    uVar10 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_04456614();
    param_1 = (long *)FUN_076c071c(uVar10,uVar6,0);
    if (param_1 == (long *)0x0) {
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
    }
    else if ((*param_1 != *(long *)puVar2) ||
            (**(long **)(*(long *)puVar1 + 0xb8) = (long)param_1, *param_1 != *(long *)puVar2))
    goto LAB_045ee414;
    puVar5 = PTR_DAT_092a0ec0;
    puVar4 = PTR_DAT_092a0e78;
    puVar3 = PTR_DAT_09293998;
    puVar2 = PTR_DAT_092890e0;
    thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar1 + 0xb8),param_1);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_0468b188();
    FUN_0468a7e0(uVar6,0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
    FUN_06f2e6cc(uVar6,uVar11,*(undefined8 *)puVar5,0);
    lVar7 = FUN_076c071c(uVar10,uVar6,0);
    if (lVar7 == 0) {
      lVar8 = 0;
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = 0;
      uVar6 = *(undefined8 *)(*(long *)puVar3 + 0xb8);
    }
    else {
      uVar6 = *(undefined8 *)puVar4;
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar6);
      if (lVar8 == 0) goto LAB_045ee44c;
      **(long **)(*(long *)puVar3 + 0xb8) = lVar8;
      uVar10 = *(undefined8 *)puVar4;
      uVar6 = *(undefined8 *)(*(long *)puVar3 + 0xb8);
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar10);
      if (lVar8 == 0) goto LAB_045ee458;
    }
    puVar3 = PTR_DAT_092a0eb8;
    puVar2 = PTR_DAT_09298118;
    puVar1 = PTR_DAT_09287cd8;
    thunk_FUN_040ec700(uVar6,lVar8);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_06e5721c(uVar6,uVar11,*(undefined8 *)puVar3,0);
    lVar7 = FUN_076c071c(uVar10,uVar6,0);
    if (lVar7 == 0) {
      lVar8 = 0;
      **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
      uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar6);
      if (lVar8 == 0) goto LAB_045ee44c;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
      uVar10 = *(undefined8 *)puVar1;
      uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar10);
      if (lVar8 == 0) goto LAB_045ee458;
    }
    puVar2 = PTR_DAT_0928f5c8;
    thunk_FUN_040ec700(uVar6,lVar8);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_06e5721c(uVar6,uVar11,*(undefined8 *)puVar3,0);
    lVar7 = FUN_076c071c(uVar10,uVar6,0);
    if (lVar7 == 0) {
      lVar8 = 0;
      **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
      uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar6);
      if (lVar8 == 0) {
LAB_045ee44c:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(lVar7,uVar6);
      }
      **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
      uVar10 = *(undefined8 *)puVar1;
      uVar6 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
      lVar8 = thunk_FUN_040b4e00(lVar7,uVar10);
      if (lVar8 == 0) {
LAB_045ee458:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(lVar7,uVar10);
      }
    }
    puVar3 = PTR_DAT_092a0eb0;
    puVar1 = PTR_DAT_09285e40;
    thunk_FUN_040ec700(uVar6,lVar8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_075d444c(uVar6,uVar10,*(undefined8 *)puVar3,0);
    param_1 = (long *)FUN_076c071c(uVar11,uVar6,0);
    if (param_1 == (long *)0x0) {
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar9 = 0;
LAB_045ee428:
      thunk_FUN_040ec700(plVar9,param_1);
      return;
    }
    lVar7 = *(long *)puVar1;
    if (*param_1 == lVar7) {
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar9 = (long)param_1;
      if (*param_1 == lVar7) goto LAB_045ee428;
    }
  }
LAB_045ee414:
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(param_1);
}


