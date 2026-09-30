/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Populate
ENTRY_POINT: 05e8ebb8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Populate(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar1 = *unaff_x21;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) != unaff_x19) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    thunk_FUN_03650fbc();
    if ((lVar1 == 0) && (lVar1 = FUN_05e90070(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(long *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_036b7ad0((long *)(lVar1 + 0x10));
    return;
  }
  return;
}


