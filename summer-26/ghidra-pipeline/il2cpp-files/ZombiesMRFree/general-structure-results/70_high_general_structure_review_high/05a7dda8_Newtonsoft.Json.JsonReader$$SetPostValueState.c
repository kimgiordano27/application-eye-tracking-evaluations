/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 05a7dda8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonReader__SetPostValueState(void)

{
  short sVar1;
  long lVar2;
  long lVar3;
  short *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x21 + 0xce0);
  sVar1 = *unaff_x19;
  lVar2 = *plVar4;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *plVar4;
  }
  lVar3 = *(long *)(lVar2 + 0xb8);
  if (sVar1 != *(short *)(lVar3 + 10)) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *plVar4;
      lVar3 = *(long *)(lVar2 + 0xb8);
    }
    if (sVar1 != *(short *)(lVar3 + 8)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *plVar4;
        lVar3 = *(long *)(lVar2 + 0xb8);
      }
      if (unaff_w20 < 2) {
        return false;
      }
      if (*(char *)(lVar3 + 0x28) != '\0') {
        return false;
      }
      sVar1 = unaff_x19[1];
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar3 = *(long *)(*plVar4 + 0xb8);
      }
      return sVar1 == *(short *)(lVar3 + 0x18);
    }
  }
  return true;
}


