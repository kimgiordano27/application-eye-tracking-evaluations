/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<UserReviewList>
ENTRY_POINT: 04cd9838
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<UserReviewList>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_044bb4b4();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
    thunk_FUN_044bb4b4();
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar1 = thunk_FUN_0448520c();
                    /* try { // try from 04cd987c to 04dd9883 has its CatchHandler @ 04cd9a00 */
                    /* try { // try from 04cd9888 to 04dd9897 has its CatchHandler @ 04cd99f4 */
    FUN_055574c4();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


