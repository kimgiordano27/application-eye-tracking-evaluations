/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketIsConverted>d__13$$SetStateMachine
ENTRY_POINT: 045f8d54
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketIsConverted>d__13__SetStateMachine
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_09295880);
  *(undefined1 *)(unaff_x20 + 0x468) = 1;
  plVar7 = *(long **)(unaff_x19 + 0x68);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar3 = **(undefined8 **)(*(long *)PTR_DAT_09289148 + 0xb8);
  uVar1 = (*(undefined8 **)(*(long *)PTR_DAT_09289148 + 0xb8))[1];
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09295880) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_045f8de0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09295880,2);
LAB_045f8de0:
  uVar3 = (*(code *)*puVar2)(plVar7,uVar3,uVar1,puVar2[1]);
  FUN_07891a60(uVar3,0);
  return;
}


