/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 07097fbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  uint unaff_w22;
  long unaff_x25;
  
  puVar1 = PTR_DAT_08e9b410;
  if (*(char *)(unaff_x25 + 0x3fe) == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    *(undefined1 *)(unaff_x25 + 0x3fe) = 1;
  }
  uVar3 = System_Convert__ToInt16();
  uVar2 = FUN_07102b88(uVar3,*(undefined4 *)(unaff_x20 + 0x10));
  lVar4 = *(long *)puVar1;
  if (unaff_w22 < uVar2) {
    FUN_07122110(0);
  }
  FUN_088d7068(*(undefined1 *)(*(long *)(lVar4 + 0x20) + 0x135));
  return;
}


