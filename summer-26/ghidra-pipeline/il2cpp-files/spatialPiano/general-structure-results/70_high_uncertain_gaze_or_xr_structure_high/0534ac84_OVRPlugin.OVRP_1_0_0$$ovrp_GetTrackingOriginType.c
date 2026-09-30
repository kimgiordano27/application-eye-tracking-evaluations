/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 0534ac84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(void)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
                    /* try { // try from 0534ac84 to 0544acb3 has its CatchHandler @ 0534ab44 */
  uVar1 = FUN_052c251c();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
                    /* try { // try from 0534acb4 to 0544acb7 has its CatchHandler @ 0534acbc */
                    /* try { // try from 0534acb8 to 0544ace3 has its CatchHandler @ 0534ab44 */
    *(undefined4 *)(lVar2 + 0x38) = in_stack_00000078;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534acb4 with catch @ 0534acbc
                        */
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000070;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534ac80 with catch @ 0534acc0
                        */
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000060;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534ac0c with catch @ 0534acc4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0534ac50 with catch @ 0534acc8
                        */
    FUN_0534ad3c(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


