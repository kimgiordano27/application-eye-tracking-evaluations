/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<TicketResponse>
ENTRY_POINT: 04cd8c44
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<TicketResponse>(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  if (param_1 == (long *)0x0) {
    FUN_04482014();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(byte *)(*param_1 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  lVar1 = thunk_FUN_0448520c();
                    /* try { // try from 04cd8c6c to 04dd8c7b has its CatchHandler @ 04cd8c7c */
  FUN_05ca8070(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 04cd8c24 with catch @ 04cd8c7c
                       catch() { ... } // from try @ 04cd8c6c with catch @ 04cd8c7c */
                    /* try { // try from 04cd8c80 to 04dd8c83 has its CatchHandler @ 04cd8c8c */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* try { // try from 04cd8c84 to 04dd8c8f has its CatchHandler @ 04cd8a3c */
    thunk_FUN_044bb4b4();
                    /* catch() { ... } // from try @ 04cd8c80 with catch @ 04cd8c8c */
                    /* try { // try from 04cd8c90 to 04dd8cdb has its CatchHandler @ 04cd8c90
                       catch() { ... } // from try @ 04cd8c90 with catch @ 04cd8c90
                       catch() { ... } // from try @ 04cd8e2c with catch @ 04cd8c90
                       catch() { ... } // from try @ 04cd8e8c with catch @ 04cd8c90
                       catch() { ... } // from try @ 04cd8ed4 with catch @ 04cd8c90 */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_044bb4b4();
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
    FUN_05555610(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


