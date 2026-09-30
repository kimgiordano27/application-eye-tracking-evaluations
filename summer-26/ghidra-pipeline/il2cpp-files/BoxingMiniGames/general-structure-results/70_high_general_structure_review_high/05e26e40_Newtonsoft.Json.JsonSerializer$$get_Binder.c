/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 05e26e40
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


void Newtonsoft_Json_JsonSerializer__get_Binder
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_07eded0d & 1) == 0) {
    FUN_03642964(PTR_DAT_07a153e8);
    DAT_07eded0d = 1;
  }
  FUN_05e50784(param_1,param_2,param_3,param_4,0);
  lVar2 = *(long *)(param_1 + 0x90);
  lVar3 = *(long *)(PTR_DAT_079f4610 + 0x90);
  if (lVar2 == 0) {
    lVar2 = **(long **)(lVar3 + 0xb8);
  }
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_05e26f18(lVar3 + 0x20);
  if (param_2 != 0) {
    FUN_05d19654(param_2,*(undefined8 *)PTR_DAT_07a153e8,lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


