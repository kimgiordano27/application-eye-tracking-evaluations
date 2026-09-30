/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 05e90f5c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(unaff_x21 + 0x558);
  lVar2 = *plVar3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar2 = *plVar3;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e8e0d0();
  }
  thunk_FUN_03650fbc();
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_03650fbc();
  FUN_0367c5c0((uint *)(unaff_x19 + 0x38),uVar1 | 0x400000);
  lVar2 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_03650fbc();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x18);
    thunk_FUN_03650fbc();
    if (lVar4 != 0) {
      FUN_05e7c5e4(lVar4,0);
    }
    FUN_05e91428(lVar2);
  }
  FUN_05e9155c();
  return;
}


