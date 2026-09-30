/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_PreserveReferencesHandling
ENTRY_POINT: 05e2a110
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonSerializerSettings__set_PreserveReferencesHandling(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  
  FUN_05d97a28();
  if (unaff_x20 != 0) {
    if (DAT_07ed8f51 == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07ed8f51 = '\x01';
    }
                    /* try { // try from 05e2a138 to 05f2a143 has its CatchHandler @ 05e2a224 */
    uVar2 = FUN_05c94ef4();
                    /* try { // try from 05e2a144 to 05f2a23b has its CatchHandler @ 05e2a010 */
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar3 = FUN_05d97594(0);
    FUN_05e2a19c(uVar2,uVar1,unaff_w19,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x30);
}


