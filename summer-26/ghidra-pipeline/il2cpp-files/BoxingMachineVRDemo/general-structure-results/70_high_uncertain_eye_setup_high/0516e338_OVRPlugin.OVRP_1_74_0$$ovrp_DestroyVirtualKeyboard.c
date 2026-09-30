/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_DestroyVirtualKeyboard
ENTRY_POINT: 0516e338
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_DestroyVirtualKeyboard(long param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  *(long *)(param_1 + 0x18) = unaff_x19;
  thunk_FUN_02dd37b4();
  if (unaff_x21 != 0) {
                    /* try { // try from 0516e354 to 0526e357 has its CatchHandler @ 0516e364 */
    lVar2 = *(long *)(unaff_x21 + 0x10);
                    /* catch() { ... } // from try @ 0516e1e8 with catch @ 0516e358
                       try { // try from 0516e358 to 0526e393 has its CatchHandler @ 0516e0b0 */
                    /* catch() { ... } // from try @ 0516e248 with catch @ 0516e35c */
                    /* catch() { ... } // from try @ 0516e220 with catch @ 0516e360 */
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 0516e1e0 with catch @ 0516e364
                       catch() { ... } // from try @ 0516e354 with catch @ 0516e364 */
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0516e204 with catch @ 0516e368
                       catch() { ... } // from try @ 0516e240 with catch @ 0516e368
                       catch() { ... } // from try @ 0516e27c with catch @ 0516e368 */
      uVar1 = *(uint *)(unaff_x21 + 0x18);
                    /* catch() { ... } // from try @ 0516e1d4 with catch @ 0516e36c */
                    /* catch() { ... } // from try @ 0516e1c8 with catch @ 0516e370 */
                    /* catch() { ... } // from try @ 0516e1a4 with catch @ 0516e374 */
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                    /* catch() { ... } // from try @ 0516e194 with catch @ 0516e378 */
                    /* catch() { ... } // from try @ 0516e1b4 with catch @ 0516e37c */
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
        thunk_FUN_02dd37b4();
      }
      else {
                    /* try { // try from 0516e394 to 0526e397 has its CatchHandler @ 0516e3a8 */
        FUN_03aac494();
      }
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x10));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


