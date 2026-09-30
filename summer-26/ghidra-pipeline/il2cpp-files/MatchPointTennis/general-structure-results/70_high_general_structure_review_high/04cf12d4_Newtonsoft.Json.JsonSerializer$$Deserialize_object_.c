/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<object>
ENTRY_POINT: 04cf12d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16] Newtonsoft_Json_JsonSerializer__Deserialize<object>(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  int unaff_w23;
  undefined1 auVar2 [16];
  
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 04cf12b0 with catch @ 04cf12d4
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 04cf1298 with catch @ 04cf12d8
                        */
  puVar1 = (undefined8 *)FUN_044822ac();
                    /* try { // try from 04cf12f0 to 04df12f3 has its CatchHandler @ 04cf1314 */
                    /* try { // try from 04cf12f4 to 04df1317 has its CatchHandler @ 04cf123c */
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
    if ((unaff_w23 == 6) || (unaff_w23 == 0)) {
      unaff_x21 = 0;
      unaff_x22 = 0;
    }
                    /* catch() { ... } // from try @ 04cf12f0 with catch @ 04cf1314 */
    auVar2._8_8_ = unaff_x22;
    auVar2._0_8_ = unaff_x21;
                    /* try { // try from 04cf1318 to 04df1323 has its CatchHandler @ 04cf1338 */
                    /* try { // try from 04cf1324 to 04df132f has its CatchHandler @ 04cf123c */
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c();
}


