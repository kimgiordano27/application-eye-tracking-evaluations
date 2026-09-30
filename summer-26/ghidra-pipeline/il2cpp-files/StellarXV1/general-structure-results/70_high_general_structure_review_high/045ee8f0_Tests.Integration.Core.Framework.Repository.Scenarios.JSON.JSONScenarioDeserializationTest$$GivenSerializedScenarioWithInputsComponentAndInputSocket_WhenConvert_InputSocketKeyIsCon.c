/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithInputsComponentAndInputSocket_WhenConvert_InputSocketKeyIsConverted
ENTRY_POINT: 045ee8f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithInputsComponentAndInputSocket_WhenConvert_InputSocketKeyIsConverted
               (long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  if ((param_2 != 0) && (lVar2 = *(long *)(param_2 + 0x88), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x90) == '\0') {
      FUN_044856d0(&stack0x00000038,lVar2,0);
    }
    else {
      FUN_0448567c(&stack0x00000038,lVar2,0);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_089c7534(param_2,0);
    if (lVar2 != 0) {
      FUN_044231cc(lVar2);
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_04422fb8(*(long *)(param_1 + 0x30),0);
        lVar2 = *(long *)(param_1 + 0x30);
        uVar1 = FUN_04482c64(param_2,0);
        if (lVar2 != 0) {
          FUN_04423450(lVar2,uVar1 & 1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


