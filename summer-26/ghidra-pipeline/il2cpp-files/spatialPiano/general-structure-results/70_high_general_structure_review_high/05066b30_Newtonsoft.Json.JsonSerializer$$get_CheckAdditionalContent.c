/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 05066b30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_06bb97b2 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d57e0);
    DAT_06bb97b2 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067d57e0 + 0x130);
    if ((((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067d57e0)
         ) && (*(int *)(param_1 + 0x24) == *(int *)((long)param_2 + 0x24))) &&
       ((*(int *)(param_1 + 0x20) == (int)param_2[4] &&
        (iVar2 = FUN_05066858(param_1,param_2), iVar2 == 0)))) {
      return 1;
    }
  }
  return 0;
}


