/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 07a4fdf8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x21;
  
  FUN_079b92f4(param_1,0);
                    /* try { // try from 07a4fe04 to 07b4fe0b has its CatchHandler @ 07a500cc */
  if (unaff_x21 != 0) {
    if (DAT_0a51d028 == '\0') {
                    /* try { // try from 07a4fe14 to 07b4fe1b has its CatchHandler @ 07a500c4 */
      FUN_04447ba8(PTR_DAT_09f28738);
      DAT_0a51d028 = '\x01';
    }
    uVar2 = FUN_078b1c78();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
    uVar3 = FUN_079b8cc0(param_3,0);
    FUN_07a4fbd0(uVar2,uVar1,unaff_w19,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_07a4fbac(0x30);
}


