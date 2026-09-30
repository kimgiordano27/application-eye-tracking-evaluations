/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$UpdateGameObjectState
ENTRY_POINT: 06dd8b88
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dd8be4) */
/* WARNING: Removing unreachable block (ram,0x06dd8bf0) */

void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__UpdateGameObjectState
               (long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  long in_stack_00000048;
  undefined8 in_stack_00000058;
  
  while( true ) {
    FUN_05ff2198(param_2,*(undefined8 *)(param_1 + 0xb8));
    uVar1 = FUN_06e45d10(&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
    if ((uVar1 & 1) == 0) {
      FUN_06e45e34(&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
                    /* try { // try from 06dd8bb8 to 06ed8bbf has its CatchHandler @ 06dd8c68 */
      if (in_stack_00000058._4_1_ != '\0') {
                    /* try { // try from 06dd8bc0 to 06ed8bc3 has its CatchHandler @ 06dd8bf0 */
                    /* try { // try from 06dd8bc4 to 06ed8bcb has its CatchHandler @ 06dd8898 */
        thunk_FUN_03d180a8();
      }
                    /* try { // try from 06dd8bcc to 06ed8bcf has its CatchHandler @ 06dd8bfc */
                    /* try { // try from 06dd8bd0 to 06ed8bd7 has its CatchHandler @ 06dd8bf8 */
                    /* try { // try from 06dd8bd8 to 06ed8bdb has its CatchHandler @ 06dd8be8 */
                    /* try { // try from 06dd8bdc to 06ed8be3 has its CatchHandler @ 06dd8bf4 */
      return;
    }
    if (in_stack_00000048 == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    param_2 = in_stack_00000048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


