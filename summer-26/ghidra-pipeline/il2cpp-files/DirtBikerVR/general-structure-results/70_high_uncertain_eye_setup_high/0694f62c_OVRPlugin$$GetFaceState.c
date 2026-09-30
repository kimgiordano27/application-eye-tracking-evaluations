/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0694f62c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  puVar1 = PTR_DAT_084883a0;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f528 with catch @ 0694f62c
                        */
  plVar4 = (long *)(unaff_x20 + 0x58);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f614 with catch @ 0694f630
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f610 with catch @ 0694f634
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f60c with catch @ 0694f638
                        */
  if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f4c4 with catch @ 0694f63c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0694f460 with catch @ 0694f640
                        */
    lVar3 = *(long *)(lVar3 + 0x50);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
                    /* try { // try from 0694f65c to 06a4f65f has its CatchHandler @ 0694f668 */
                    /* catch() { ... } // from try @ 0694f65c with catch @ 0694f668 */
    FUN_07cb26a0();
                    /* try { // try from 0694f66c to 06a4f673 has its CatchHandler @ 0694f67c */
    if (lVar3 != 0) {
                    /* try { // try from 0694f674 to 06a4f67f has its CatchHandler @ 0694f2b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0694f66c with catch @ 0694f67c
                        */
      FUN_07cb2800(lVar3,uVar2,0);
      if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
        lVar3 = *(long *)(lVar3 + 0x48);
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar3 != 0) {
          FUN_07cb2800(lVar3,uVar2,0);
          *(undefined8 *)(unaff_x19 + 0x58) = 0;
          thunk_FUN_03afed3c(plVar4,0);
          *(undefined1 *)(unaff_x19 + 0x21) = 0;
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_07cb2910(*(long *)(unaff_x19 + 0x40),0);
            FUN_0694fd08();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


