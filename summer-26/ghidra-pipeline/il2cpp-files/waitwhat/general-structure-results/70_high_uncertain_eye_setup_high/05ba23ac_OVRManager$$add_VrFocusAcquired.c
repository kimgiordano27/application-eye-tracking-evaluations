/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 05ba23ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x20 + 0x7aa) = unaff_w21;
  puVar1 = PTR_DAT_070c1a80;
  lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar5 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x20);
  FUN_06a63570(*(undefined4 *)(lVar2 + 0x18),fVar5,fVar6,unaff_x19 + 0xec,0);
                    /* try { // try from 05ba23e0 to 05ca23e7 has its CatchHandler @ 05ba2430 */
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
    fVar3 = (float)FUN_069e6fbc(lVar2,0);
                    /* try { // try from 05ba23f4 to 05ca23fb has its CatchHandler @ 05ba242c */
                    /* try { // try from 05ba23fc to 05ca241f has its CatchHandler @ 05ba22b4 */
    if (DAT_07547004 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_07547004 = '\x01';
    }
                    /* try { // try from 05ba2420 to 05ca2423 has its CatchHandler @ 05ba2428 */
                    /* try { // try from 05ba2424 to 05ca244b has its CatchHandler @ 05ba22b4 */
    if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba2420 with catch @ 05ba2428
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba23f4 with catch @ 05ba242c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba23e0 with catch @ 05ba2430
                        */
      lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar8 = *(float *)(lVar2 + 0x28);
      fVar7 = *(float *)(lVar2 + 0x2c);
      fVar9 = *(float *)(lVar2 + 0x24);
      fVar4 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 05ba244c to 05ca244f has its CatchHandler @ 05ba2468 */
                    /* try { // try from 05ba2450 to 05ca246b has its CatchHandler @ 05ba22b4 */
      fVar4 = fVar4 * 0.5 + *(float *)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 05ba244c with catch @ 05ba2468 */
                    /* try { // try from 05ba246c to 05ca2473 has its CatchHandler @ 05ba247c */
                    /* try { // try from 05ba2474 to 05ca247f has its CatchHandler @ 05ba22b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ba246c with catch @ 05ba247c
                        */
      FUN_06a63558(fVar3 + fVar9 * fVar4,fVar5 + fVar8 * fVar4,fVar6 + fVar7 * fVar4,
                   unaff_x19 + 0xec,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


