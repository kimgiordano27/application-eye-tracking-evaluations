/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<AvatarProperties>
ENTRY_POINT: 04cd88cc
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<AvatarProperties>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
                    /* try { // try from 04cd88d0 to 04dd88db has its CatchHandler @ 04cd89a0 */
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_044bb4b4();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* try { // try from 04cd88e8 to 04dd88ef has its CatchHandler @ 04cd898c */
    thunk_FUN_044bb4b4();
                    /* try { // try from 04cd88fc to 04dd891b has its CatchHandler @ 04cd8994 */
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar1 = thunk_FUN_0448520c();
                    /* try { // try from 04cd891c to 04dd8933 has its CatchHandler @ 04cd87e8 */
    FUN_055551d8();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04cd8934 to 04dd893f has its CatchHandler @ 04cd899c */
  FUN_04447e44();
}


