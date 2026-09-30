/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.WebhookRejectedRequestData>
ENTRY_POINT: 044b9308
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_WebhookRejectedRequestData>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b9330 to 045b9357 has its CatchHandler @ 044b9400 */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar1 = thunk_FUN_03ac74bc();
    FUN_04960ac8();
                    /* try { // try from 044b9368 to 045b937b has its CatchHandler @ 044b93ec */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


