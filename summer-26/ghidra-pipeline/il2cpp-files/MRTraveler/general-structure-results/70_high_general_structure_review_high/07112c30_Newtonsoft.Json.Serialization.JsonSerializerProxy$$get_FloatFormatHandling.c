/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_FloatFormatHandling
ENTRY_POINT: 07112c30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_FloatFormatHandling
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_08ea1b30;
  if ((DAT_0941c249 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    DAT_0941c249 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_070fd1f8(param_1,param_2,param_3,param_4,0);
  if ((param_3 >> 9 & 1) == 0) {
    if (uVar2 == (int)(char)uVar2) {
      return;
    }
  }
  else if (uVar2 < 0x100) {
    return;
  }
  thunk_FUN_03ce5214(PTR_DAT_08e6a810);
  uVar3 = thunk_FUN_03cf5234();
  uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea1c68);
  FUN_0711020c(uVar3,uVar4);
  uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea5a28);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,uVar4);
}


