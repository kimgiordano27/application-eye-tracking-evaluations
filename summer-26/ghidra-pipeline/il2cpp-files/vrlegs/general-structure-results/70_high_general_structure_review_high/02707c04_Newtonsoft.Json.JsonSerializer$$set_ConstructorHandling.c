/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ConstructorHandling
ENTRY_POINT: 02707c04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_ConstructorHandling(void)

{
  long lVar1;
  int in_w8;
  long *plVar2;
  uint in_w9;
  uint in_w10;
  uint unaff_w19;
  long *unaff_x20;
  uint unaff_w21;
  
  if ((in_w10 < in_w9) || (in_w8 % 400 == 0)) {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x20;
    }
    plVar2 = (long *)(*(long *)(lVar1 + 0xb8) + 8);
  }
  else {
    lVar1 = *unaff_x20;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x20;
    }
    plVar2 = *(long **)(lVar1 + 0xb8);
  }
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if ((unaff_w19 < *(uint *)(lVar1 + 0x18)) && (unaff_w21 < *(uint *)(lVar1 + 0x18))) {
      return *(int *)(lVar1 + 0x20 + (ulong)unaff_w19 * 4) -
             *(int *)(lVar1 + 0x20 + (ulong)unaff_w21 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


