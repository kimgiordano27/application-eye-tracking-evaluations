/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateTimeZoneHandling
ENTRY_POINT: 07112ba0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateTimeZoneHandling
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x21;
  
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08e83798);
    *(undefined1 *)(unaff_x21 + 0x18d) = 1;
  }
  uVar2 = System_Convert__ToInt16(param_1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_070b1710(param_2,0);
  FUN_07112c28(uVar2,uVar1,7,uVar3);
  return;
}


