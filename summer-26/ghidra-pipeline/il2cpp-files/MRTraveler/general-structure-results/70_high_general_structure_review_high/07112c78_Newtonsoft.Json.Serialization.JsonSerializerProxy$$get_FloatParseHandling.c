/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_FloatParseHandling
ENTRY_POINT: 07112c78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_FloatParseHandling(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  uint unaff_w19;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_070fd1f8();
  if ((unaff_w19 >> 9 & 1) == 0) {
    if (uVar1 == (int)(char)uVar1) {
      return;
    }
  }
  else if (uVar1 < 0x100) {
    return;
  }
  thunk_FUN_03ce5214(PTR_DAT_08e6a810);
  uVar2 = thunk_FUN_03cf5234();
  uVar3 = thunk_FUN_03ce5214(PTR_DAT_08ea1c68);
  FUN_0711020c(uVar2,uVar3);
  uVar3 = thunk_FUN_03ce5214(PTR_DAT_08ea5a28);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar2,uVar3);
}


