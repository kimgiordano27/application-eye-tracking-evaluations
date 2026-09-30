/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 056a13f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode
               (float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000048;
  
                    /* try { // try from 056a13f8 to 057a13fb has its CatchHandler @ 056a14a0 */
                    /* try { // try from 056a13fc to 057a13ff has its CatchHandler @ 056a1498 */
  if (*unaff_x20 != 0) {
    fVar4 = param_2;
    fVar6 = param_3;
                    /* try { // try from 056a1400 to 057a1403 has its CatchHandler @ 056a1490 */
                    /* try { // try from 056a1404 to 057a1407 has its CatchHandler @ 056a1484 */
                    /* try { // try from 056a1408 to 057a140b has its CatchHandler @ 056a1428 */
                    /* try { // try from 056a140c to 057a140f has its CatchHandler @ 056a1424 */
                    /* try { // try from 056a1410 to 057a14ef has its CatchHandler @ 056a0b98 */
    fVar2 = (float)FUN_0635d920(*unaff_x20,0);
                    /* catch() { ... } // from try @ 056a0d64 with catch @ 056a141c */
                    /* catch() { ... } // from try @ 056a0d90 with catch @ 056a1420 */
                    /* catch() { ... } // from try @ 056a140c with catch @ 056a1424 */
                    /* catch() { ... } // from try @ 056a1408 with catch @ 056a1428 */
                    /* catch() { ... } // from try @ 056a0d68 with catch @ 056a142c */
                    /* catch() { ... } // from try @ 056a0d74 with catch @ 056a1430 */
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (fVar5 = fVar4, fVar7 = fVar6, lVar1 = FUN_0634ee08(*(long *)(unaff_x19 + 0x38),0),
       lVar1 != 0)) {
                    /* catch() { ... } // from try @ 056a0d48 with catch @ 056a1434 */
                    /* catch() { ... } // from try @ 056a0e30 with catch @ 056a1438 */
                    /* catch() { ... } // from try @ 056a0e50 with catch @ 056a143c */
                    /* catch() { ... } // from try @ 056a0e88 with catch @ 056a1440 */
                    /* catch() { ... } // from try @ 056a11a0 with catch @ 056a1444 */
                    /* catch() { ... } // from try @ 056a11d8 with catch @ 056a1448 */
      fVar3 = (float)FUN_0635d920(lVar1,0);
                    /* catch() { ... } // from try @ 056a1180 with catch @ 056a144c */
                    /* catch() { ... } // from try @ 056a1060 with catch @ 056a1450 */
                    /* catch() { ... } // from try @ 056a0fa0 with catch @ 056a1454 */
                    /* catch() { ... } // from try @ 056a0f68 with catch @ 056a1458 */
                    /* catch() { ... } // from try @ 056a12b8 with catch @ 056a145c */
                    /* catch() { ... } // from try @ 056a12f0 with catch @ 056a1460 */
                    /* catch() { ... } // from try @ 056a1080 with catch @ 056a1464 */
                    /* catch() { ... } // from try @ 056a1298 with catch @ 056a1468 */
      FUN_0633fa1c(unaff_s9 - param_1,unaff_s10 - param_2,in_stack_00000048._4_4_ - param_3,
                   fVar2 - fVar3,fVar4 - fVar5,fVar6 - fVar7,0);
                    /* catch() { ... } // from try @ 056a10b8 with catch @ 056a146c */
      if (unaff_x21 != 0) {
                    /* catch() { ... } // from try @ 056a0f48 with catch @ 056a1470 */
        FUN_0635dba8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 056a1084 with catch @ 056a149c */
  FUN_02d96860();
}


