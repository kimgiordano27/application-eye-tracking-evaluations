/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MetadataPropertyHandling
ENTRY_POINT: 0760fe9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  
  if (param_2 != 0) {
    lVar2 = *(long *)PTR_DAT_092d00b0;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
      *(long **)(unaff_x19 + 0x10) = param_1;
      if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) goto LAB_0760ff08;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(param_1);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
LAB_0760ff08:
  thunk_FUN_040ec700(unaff_x19 + 0x10,param_1);
  return;
}


