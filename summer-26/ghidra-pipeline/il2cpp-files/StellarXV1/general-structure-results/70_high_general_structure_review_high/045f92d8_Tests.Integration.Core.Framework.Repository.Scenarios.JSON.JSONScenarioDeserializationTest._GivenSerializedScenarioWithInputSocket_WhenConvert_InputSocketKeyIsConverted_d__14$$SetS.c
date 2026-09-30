/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketKeyIsConverted>d__14$$SetStateMachine
ENTRY_POINT: 045f92d8
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithInputSocket_WhenConvert_InputSocketKeyIsConverted>d__14__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *in_x11;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  
  puVar1 = PTR_DAT_092a11d8;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x11) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_045f9334;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_045f9334:
  uVar3 = (*(code *)*puVar2)();
  FUN_05192de0(uVar3,*unaff_x26);
  uVar3 = thunk_FUN_040b4efc(*unaff_x24);
  FUN_078959d8();
  FUN_04e33ad8(uVar3,*(undefined8 *)puVar1);
  return;
}


