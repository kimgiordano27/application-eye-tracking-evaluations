/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ObjectCreationHandling
ENTRY_POINT: 058bae28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ObjectCreationHandling(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x25;
  
  if ((in_w8 < unaff_w22) || (in_w8 - unaff_w22 < unaff_w23)) {
    FUN_05943ee4(0x18,0);
  }
  lVar2 = System_Convert__ToSByte();
  if (*(char *)(unaff_x25 + 0x6c1) == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    *(undefined1 *)(unaff_x25 + 0x6c1) = 1;
  }
  puVar1 = PTR_DAT_07290a18;
  if (unaff_x21 == 0) {
    if (unaff_w19 != 0 || unaff_w20 != 0) {
      FUN_05943ee4(0x18,0);
    }
    lVar3 = 0;
    unaff_w19 = 0;
  }
  else {
    if ((*(uint *)(unaff_x21 + 0x10) < unaff_w20) ||
       (*(uint *)(unaff_x21 + 0x10) - unaff_w20 < unaff_w19)) {
      FUN_05943ee4(0x18,0);
    }
    lVar3 = System_Convert__ToSByte();
    lVar3 = lVar3 + (long)(int)unaff_w20 * 2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_058b9f68(lVar2 + (long)(int)unaff_w22 * 2,unaff_w23,lVar3,unaff_w19);
  return;
}


