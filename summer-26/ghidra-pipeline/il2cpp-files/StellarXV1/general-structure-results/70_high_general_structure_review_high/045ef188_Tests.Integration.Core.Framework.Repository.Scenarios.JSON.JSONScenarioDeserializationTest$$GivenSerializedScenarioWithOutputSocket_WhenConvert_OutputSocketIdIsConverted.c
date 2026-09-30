/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketIdIsConverted
ENTRY_POINT: 045ef188
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketIdIsConverted
               (long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x30), lVar2 != 0)) &&
     (plVar1 = *(long **)(lVar2 + 0x70), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x045ef1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1f8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x200));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


