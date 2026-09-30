/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatParseHandling
ENTRY_POINT: 0170f740
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_FloatParseHandling(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_037789ff & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3287);
    DAT_037789ff = 1;
  }
  puVar1 = StringLiteral_3287;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar2 = FUN_0170f604(param_1);
    uVar3 = FUN_0170f694(param_1);
    uVar2 = FUN_01600424(uVar2,*(undefined8 *)puVar1,uVar3,0);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  return;
}


