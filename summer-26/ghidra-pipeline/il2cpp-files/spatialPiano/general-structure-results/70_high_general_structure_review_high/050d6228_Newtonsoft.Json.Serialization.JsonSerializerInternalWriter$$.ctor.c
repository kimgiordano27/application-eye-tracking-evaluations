/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 050d6228
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


float Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(void)

{
  undefined *puVar1;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  FUN_02f08768(PTR_DAT_067ce7a0);
  FUN_02f08768(PTR_DAT_067c8f80);
  *(undefined1 *)(unaff_x19 + 0xbb2) = 1;
  puVar1 = PTR_DAT_067ce7a0;
  if (unaff_s9 < unaff_s8) {
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0346cd94(*(undefined8 *)puVar1);
  }
  if ((unaff_s8 <= unaff_s10) && (unaff_s8 = unaff_s9, unaff_s10 <= unaff_s9)) {
    unaff_s8 = unaff_s10;
  }
  return unaff_s8;
}


