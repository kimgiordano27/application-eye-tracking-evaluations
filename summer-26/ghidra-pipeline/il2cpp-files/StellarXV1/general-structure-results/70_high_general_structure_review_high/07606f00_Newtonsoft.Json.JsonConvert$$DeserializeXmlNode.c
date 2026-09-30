/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 07606f00
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  byte bVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_0928de30 + 0x130);
  if (((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
      (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0928de30))
     && (*(int *)((long)unaff_x19 + 0x14) == *(int *)(unaff_x20 + 0x14))) {
    uVar2 = thunk_FUN_074e4840(unaff_x19[9],*(undefined8 *)(unaff_x20 + 0x48),0);
    return uVar2;
  }
  return 0;
}


