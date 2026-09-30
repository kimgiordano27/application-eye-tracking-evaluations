/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketKeyIsConverted
ENTRY_POINT: 045ee2ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketKeyIsConverted
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar9;
  undefined8 *unaff_x25;
  
  plVar9 = *(long **)(unaff_x24 + 0x5c8);
  thunk_FUN_040ec700();
  uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar7 = **(undefined8 **)(*plVar9 + 0xb8);
  uVar3 = thunk_FUN_040b4efc(*unaff_x23);
  FUN_06e5721c(uVar3,uVar8,*unaff_x25,0);
  lVar4 = FUN_076c071c(uVar7,uVar3,0);
  if (lVar4 == 0) {
    lVar5 = 0;
    **(undefined8 **)(*plVar9 + 0xb8) = 0;
    uVar3 = *(undefined8 *)(*plVar9 + 0xb8);
  }
  else {
    uVar3 = *unaff_x23;
    lVar5 = thunk_FUN_040b4e00(lVar4,uVar3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar4,uVar3);
    }
    **(long **)(*plVar9 + 0xb8) = lVar5;
    uVar7 = *unaff_x23;
    uVar3 = *(undefined8 *)(*plVar9 + 0xb8);
    lVar5 = thunk_FUN_040b4e00(lVar4,uVar7);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar4,uVar7);
    }
  }
  puVar2 = PTR_DAT_092a0eb0;
  puVar1 = PTR_DAT_09285e40;
  thunk_FUN_040ec700(uVar3,lVar5);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(*plVar9 + 0xb8) + 8);
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_075d444c(uVar3,uVar7,*(undefined8 *)puVar2,0);
  plVar6 = (long *)FUN_076c071c(uVar8,uVar3,0);
  if (plVar6 == (long *)0x0) {
    plVar9 = (long *)(*(long *)(*plVar9 + 0xb8) + 8);
    *plVar9 = 0;
LAB_045ee428:
    thunk_FUN_040ec700(plVar9,plVar6);
    return;
  }
  lVar4 = *(long *)puVar1;
  if (*plVar6 == lVar4) {
    plVar9 = (long *)(*(long *)(*plVar9 + 0xb8) + 8);
    *plVar9 = (long)plVar6;
    if (*plVar6 == lVar4) goto LAB_045ee428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(plVar6);
}


