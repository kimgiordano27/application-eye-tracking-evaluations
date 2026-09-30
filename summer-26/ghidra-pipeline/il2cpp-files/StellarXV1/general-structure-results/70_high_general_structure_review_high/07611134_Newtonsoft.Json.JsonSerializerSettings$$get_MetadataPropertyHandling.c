/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 07611134
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  
  while( true ) {
    lVar2 = param_1;
    if (lVar2 == 0) {
      return;
    }
    if (*(long **)(lVar2 + 0x10) == (long *)0x0) break;
    uVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x138))();
    if ((uVar1 & 1) != 0) {
      if (lVar2 == *unaff_x20) {
        *unaff_x20 = *(long *)(lVar2 + 0x20);
      }
      else {
        if (unaff_x23 == 0) break;
        *(undefined8 *)(unaff_x23 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      }
      thunk_FUN_040ec700();
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + -1;
      return;
    }
    param_1 = *(long *)(lVar2 + 0x20);
    unaff_x23 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


