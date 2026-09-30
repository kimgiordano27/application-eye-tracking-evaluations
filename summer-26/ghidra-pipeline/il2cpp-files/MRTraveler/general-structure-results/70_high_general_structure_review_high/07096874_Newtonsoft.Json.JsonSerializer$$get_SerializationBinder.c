/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_SerializationBinder
ENTRY_POINT: 07096874
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_SerializationBinder(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  long unaff_x25;
  
  *(undefined1 *)(unaff_x25 + 0xddb) = in_w8;
  if (DAT_0941b3fd == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941b3fd = '\x01';
  }
  if (unaff_x24 == 0) {
    if (unaff_w23 != 0 || unaff_w22 != 0) {
      FUN_07122188(0x18,0);
    }
    lVar2 = 0;
    unaff_w23 = 0;
  }
  else {
    if ((*(uint *)(unaff_x24 + 0x10) < unaff_w22) ||
       (*(uint *)(unaff_x24 + 0x10) - unaff_w22 < unaff_w23)) {
      FUN_07122188(0x18,0);
    }
    lVar2 = System_Convert__ToInt16();
    lVar2 = lVar2 + (long)(int)unaff_w22 * 2;
  }
  if (DAT_0941b3fd == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941b3fd = '\x01';
  }
  puVar1 = PTR_DAT_08e9bb60;
  if (unaff_x21 == 0) {
    if (unaff_w19 != 0 || unaff_w20 != 0) {
      FUN_07122188(0x18,0);
    }
    lVar3 = 0;
    unaff_w19 = 0;
  }
  else {
    if ((*(uint *)(unaff_x21 + 0x10) < unaff_w20) ||
       (*(uint *)(unaff_x21 + 0x10) - unaff_w20 < unaff_w19)) {
      FUN_07122188(0x18,0);
    }
    lVar3 = System_Convert__ToInt16();
    lVar3 = lVar3 + (long)(int)unaff_w20 * 2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070959cc(lVar2,unaff_w23,lVar3,unaff_w19);
  return;
}


