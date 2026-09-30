/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 0745cdf8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined1 *)(unaff_x21 + 0x7ee) = 1;
  puVar1 = PTR_StringLiteral_51754_09222a38;
                    /* try { // try from 0745ce04 to 0755ce0b has its CatchHandler @ 0745ce20 */
  lVar5 = *(long *)(unaff_x20 + 0x38);
  do {
                    /* try { // try from 0745ce0c to 0755ce17 has its CatchHandler @ 0745cc0c */
                    /* try { // try from 0745ce18 to 0755ce1f has its CatchHandler @ 0745ce20 */
    lVar3 = FUN_071bfe60(lVar5);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745ce04 with catch @ 0745ce20
                       catch(type#2 @ 00000000) { ... } // from try @ 0745ce18 with catch @ 0745ce20
                        */
      uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 0745ce24 to 0755cfbb has its CatchHandler @ 0745ce24
                       catch() { ... } // from try @ 0745ce24 with catch @ 0745ce24
                       catch() { ... } // from try @ 0745cfdc with catch @ 0745ce24
                       catch() { ... } // from try @ 0745d004 with catch @ 0745ce24
                       catch() { ... } // from try @ 0745d024 with catch @ 0745ce24
                       catch() { ... } // from try @ 0745d09c with catch @ 0745ce24 */
      lVar4 = thunk_FUN_03d2ee44(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar3,uVar6);
      }
    }
    lVar3 = FUN_03d703d8((long *)(unaff_x20 + 0x38),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


