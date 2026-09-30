/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_SerializationBinder
ENTRY_POINT: 05010c9c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_SerializationBinder
               (ulong param_1,ulong param_2)

{
  long lVar1;
  int *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x23 + 0xa10);
  if ((*(byte *)(unaff_x22 + 0x9e) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06656a10);
    *(undefined1 *)(unaff_x22 + 0x9e) = 1;
  }
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar1 = ((param_2 & 0xffffffff) * (param_1 >> 0x20) >> 0x20) +
          (param_2 >> 0x20) * (param_1 >> 0x20) +
          ((param_2 >> 0x20) * (param_1 & 0xffffffff) >> 0x20);
  if (-1 < lVar1) {
    lVar1 = lVar1 * 2;
    *unaff_x19 = *unaff_x19 + -1;
  }
  return lVar1;
}


