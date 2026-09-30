/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 06dd8540
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dd85c4) */
/* WARNING: Removing unreachable block (ram,0x06dd85d0) */

void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  ulong uVar1;
  long unaff_x20;
  long in_stack_00000048;
  undefined8 in_stack_00000058;
  
  while( true ) {
                    /* try { // try from 06dd8550 to 06ed8583 has its CatchHandler @ 06dd82fc */
    uVar1 = FUN_06e45d10(&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 06dd8584 to 06ed8587 has its CatchHandler @ 06dd8594 */
                    /* try { // try from 06dd8588 to 06ed858b has its CatchHandler @ 06dd8590 */
      FUN_06e45e34(&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
                    /* try { // try from 06dd858c to 06ed85b7 has its CatchHandler @ 06dd82fc */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06dd8588 with catch @ 06dd8590
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06dd8584 with catch @ 06dd8594
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06dd84f4 with catch @ 06dd8598
                        */
      if (in_stack_00000058._4_1_ != '\0') {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06dd8528 with catch @ 06dd859c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06dd84c8 with catch @ 06dd85a0
                        */
        thunk_FUN_03d180a8();
      }
                    /* try { // try from 06dd85b8 to 06ed85bb has its CatchHandler @ 06dd85e4 */
                    /* try { // try from 06dd85bc to 06ed85f3 has its CatchHandler @ 06dd82fc */
      return;
    }
    if (in_stack_00000048 == 0) break;
    FUN_05ff2198(in_stack_00000048,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


