/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 0170f564
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x19 + 0x10);
  uVar1 = (**(code **)(param_1 + 0x1a8))(param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (lVar3 != 0) {
    uVar2 = FUN_0172adb0(lVar3,uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


