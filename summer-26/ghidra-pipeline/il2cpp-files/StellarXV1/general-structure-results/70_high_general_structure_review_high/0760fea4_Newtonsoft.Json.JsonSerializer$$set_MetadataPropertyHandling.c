/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MetadataPropertyHandling
ENTRY_POINT: 0760fea4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_MetadataPropertyHandling(long *param_1)

{
  byte bVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  
  lVar2 = **(long **)(in_x9 + 0xb0);
  bVar1 = *(byte *)(lVar2 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
    *(undefined8 *)(unaff_x19 + 0x10) = param_1;
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
      thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x10),param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0(param_1);
}


