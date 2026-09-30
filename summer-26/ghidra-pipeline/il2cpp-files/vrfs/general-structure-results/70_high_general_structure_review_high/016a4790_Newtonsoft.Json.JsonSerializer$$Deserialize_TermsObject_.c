/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<TermsObject>
ENTRY_POINT: 016a4790
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize<TermsObject>
               (long param_1,undefined8 param_2,int *param_3,ulong param_4,long param_5)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong in_x10;
  int *piVar5;
  
  if ((param_5 == 0) || (in_x10 <= param_4)) {
    return -1;
  }
  piVar3 = (int *)(param_1 + param_4 * 4);
  piVar1 = (int *)(param_1 + in_x10 * 4);
  do {
    lVar2 = param_5 << 2;
    piVar5 = param_3;
    do {
      piVar4 = piVar3;
      if (*piVar3 == *piVar5) goto LAB_016a4778;
      lVar2 = lVar2 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar2 != 0);
    piVar3 = piVar3 + 1;
    piVar4 = piVar1;
  } while (piVar3 != piVar1);
LAB_016a4778:
  lVar2 = (long)piVar4 - param_1 >> 2;
  if (piVar4 == piVar1) {
    lVar2 = -1;
  }
  return lVar2;
}


