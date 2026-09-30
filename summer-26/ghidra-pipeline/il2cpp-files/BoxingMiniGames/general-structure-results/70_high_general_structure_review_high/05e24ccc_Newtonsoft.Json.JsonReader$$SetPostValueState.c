/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 05e24ccc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(void)

{
  undefined1 in_w8;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x24;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long in_stack_00000018;
  
  *(undefined1 *)(unaff_x24 + 0xa89) = in_w8;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  if (0x1b < (int)unaff_w21) {
    unaff_w21 = 0x1c;
  }
  FUN_05e74048(&stack0x00000008,0,0,0,unaff_w20 & 1,
               unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU),0);
  unaff_x19[1] = uStack0000000000000010;
  *unaff_x19 = uStack0000000000000008;
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


