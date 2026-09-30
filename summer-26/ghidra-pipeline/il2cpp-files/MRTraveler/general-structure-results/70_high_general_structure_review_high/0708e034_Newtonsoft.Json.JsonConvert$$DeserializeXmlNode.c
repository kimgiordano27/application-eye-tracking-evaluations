/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 0708e034
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


undefined1  [16] Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08ea13b0);
  *(undefined1 *)(unaff_x20 + 0xd91) = 1;
  uVar1 = FUN_05a23e84();
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x19);
  }
  lVar2 = FUN_0708d844(uVar1);
  if (DAT_0941b3fe == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941b3fe = '\x01';
  }
  if (lVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = System_Convert__ToInt16(lVar2,0);
    uVar3 = (ulong)*(uint *)(lVar2 + 0x10);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


