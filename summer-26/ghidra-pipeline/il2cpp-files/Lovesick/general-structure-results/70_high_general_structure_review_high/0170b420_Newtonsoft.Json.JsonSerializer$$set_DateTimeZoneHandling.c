/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 0170b420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(void)

{
  undefined *puVar1;
  bool in_CY;
  long lVar2;
  long lVar3;
  uint in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  long unaff_x25;
  
  if ((!in_CY) || (in_w8 < unaff_w23)) {
    FUN_01792dd4(0x18,0);
  }
  lVar2 = FUN_015fd038();
  if (*(char *)(unaff_x25 + 0xa2) == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    *(undefined1 *)(unaff_x25 + 0xa2) = 1;
  }
  puVar1 = System_Func<Spectrum_Point,_float>_TypeInfo;
  if (unaff_x21 == 0) {
    if (unaff_w19 != 0 || unaff_w20 != 0) {
      FUN_01792dd4(0x18,0);
    }
    lVar3 = 0;
    unaff_w19 = 0;
  }
  else {
    if ((*(uint *)(unaff_x21 + 0x10) < unaff_w20) ||
       (*(uint *)(unaff_x21 + 0x10) - unaff_w20 < unaff_w19)) {
      FUN_01792dd4(0x18,0);
    }
    lVar3 = FUN_015fd038();
    lVar3 = lVar3 + (long)(int)unaff_w20 * 2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0170a540(lVar2 + (long)unaff_w22 * 2,unaff_w23,lVar3,unaff_w19);
  return;
}


