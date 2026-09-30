/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithGuidInputSocket_WhenConvert_GuidInputSocketIsConverted
ENTRY_POINT: 045eeb84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithGuidInputSocket_WhenConvert_GuidInputSocketIsConverted
          (long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *unaff_x19;
  int unaff_w22;
  int unaff_w23;
  byte unaff_w25;
  
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09285e28 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_09285e28) {
        unaff_x19 = (long *)0x0;
      }
      goto LAB_045eebd4;
    }
  }
  unaff_x19 = (long *)0x0;
LAB_045eebd4:
  if (unaff_w22 == 0 && unaff_w23 == 0) {
    if ((*(byte *)(param_1 + 0x21) & unaff_w25) != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar2 = FUN_042f7238();
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


