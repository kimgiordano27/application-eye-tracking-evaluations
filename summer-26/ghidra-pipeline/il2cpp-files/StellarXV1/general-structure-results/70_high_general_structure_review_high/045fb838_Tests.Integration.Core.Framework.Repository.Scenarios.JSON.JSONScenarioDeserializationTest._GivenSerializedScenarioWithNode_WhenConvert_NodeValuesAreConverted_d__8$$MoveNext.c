/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithNode_WhenConvert_NodeValuesAreConverted>d__8$$MoveNext
ENTRY_POINT: 045fb838
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithNode_WhenConvert_NodeValuesAreConverted>d__8__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x23;
  long *unaff_x25;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
      goto LAB_045fb874;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_045fb874:
  (*(code *)*puVar3)();
  plVar4 = (long *)FUN_051fcd04(*(undefined8 *)(unaff_x19 + 0x10),1,*unaff_x23);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *plVar4;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
        goto LAB_045fb8f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x25,0xe);
LAB_045fb8f4:
                    /* WARNING: Could not recover jumptable at 0x045fb914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar4,uVar1,uVar2,puVar3[1]);
  return;
}


