/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 04fafd50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  param_1 = param_1 + 0x18;
  while( true ) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_w21) break;
    unaff_x20 = unaff_x20 + -1;
    *(undefined8 *)(lVar1 + param_1) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(lVar1 + param_1),0);
    unaff_w21 = unaff_w21 - 1;
    param_1 = param_1 + -8;
    if (unaff_x20 <= *(int *)(unaff_x19 + 0x18)) {
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


