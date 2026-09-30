/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 04d09584
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializer__get_Formatting(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  int unaff_w21;
  
  plVar2 = *(long **)(unaff_x19 + 0x170);
  lVar1 = *plVar2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *plVar2;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    if (unaff_w21 - 0x1e00U < *(uint *)(lVar1 + 0x18)) {
      return *(undefined2 *)(lVar1 + (ulong)(unaff_w21 - 0x1e00U) * 2 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


