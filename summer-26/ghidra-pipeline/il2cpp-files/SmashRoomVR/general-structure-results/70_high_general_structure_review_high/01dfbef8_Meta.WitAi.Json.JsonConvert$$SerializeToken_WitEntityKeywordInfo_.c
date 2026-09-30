/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken<WitEntityKeywordInfo>
ENTRY_POINT: 01dfbef8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeToken<WitEntityKeywordInfo>(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x23;
  
  lVar1 = thunk_FUN_01afa70c();
                    /* try { // try from 01dfbefc to 01efbf07 has its CatchHandler @ 01dfe340 */
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_01afa9e0(lVar1,*(undefined8 *)(*unaff_x23 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar3,0);
  }
                    /* try { // try from 01dfbf18 to 01efbf1b has its CatchHandler @ 01dfe348 */
                    /* try { // try from 01dfbf1c to 01efbf27 has its CatchHandler @ 01dfe2e0 */
  if (unaff_w19 < *(uint *)(unaff_x23 + 3)) {
    unaff_x23[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_01b4f09c(unaff_x23 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


