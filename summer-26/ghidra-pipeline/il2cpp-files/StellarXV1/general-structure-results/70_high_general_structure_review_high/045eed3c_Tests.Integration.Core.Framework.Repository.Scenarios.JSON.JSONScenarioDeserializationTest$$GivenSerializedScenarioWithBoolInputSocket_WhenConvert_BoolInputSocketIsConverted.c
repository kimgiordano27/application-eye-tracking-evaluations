/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithBoolInputSocket_WhenConvert_BoolInputSocketIsConverted
ENTRY_POINT: 045eed3c
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


undefined8
Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithBoolInputSocket_WhenConvert_BoolInputSocketIsConverted
          (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long *unaff_x21;
  
  if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = FUN_089c7534();
    uVar2 = FUN_043fee48();
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x21);
    }
    uVar3 = FUN_089cc398(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


