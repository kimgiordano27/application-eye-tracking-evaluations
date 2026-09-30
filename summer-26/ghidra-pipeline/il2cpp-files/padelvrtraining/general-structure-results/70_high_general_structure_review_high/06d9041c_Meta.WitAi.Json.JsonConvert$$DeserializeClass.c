/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeClass
ENTRY_POINT: 06d9041c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Meta_WitAi_Json_JsonConvert__DeserializeClass(long param_1)

{
  undefined4 uVar1;
  long in_x9;
  long lVar2;
  long unaff_x19;
  
  lVar2 = *(long *)(in_x9 + 0x10);
                    /* try { // try from 06d90420 to 06e90423 has its CatchHandler @ 06d90430 */
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06d90470 to 06e90497 has its CatchHandler @ 06d904ac */
    FUN_03d2d548();
  }
  if ((uint)param_1 < *(uint *)(lVar2 + 0x18)) {
                    /* catch() { ... } // from try @ 06d90420 with catch @ 06d90430 */
    uVar1 = *(undefined4 *)(lVar2 + param_1 * 4 + 0x20);
    *(uint *)(unaff_x19 + 8) = (uint)param_1 + 1;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


