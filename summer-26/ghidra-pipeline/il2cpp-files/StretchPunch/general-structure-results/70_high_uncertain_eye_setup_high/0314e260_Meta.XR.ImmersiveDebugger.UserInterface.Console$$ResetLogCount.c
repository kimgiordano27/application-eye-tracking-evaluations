/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$ResetLogCount
ENTRY_POINT: 0314e260
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Console__ResetLogCount(long param_1,int param_2)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (unaff_w19 < 0) {
    FUN_033b3224(0x10,4,0);
  }
                    /* try { // try from 0314e26c to 0324e28f has its CatchHandler @ 0314dfd8 */
  if (*(int *)(param_1 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_033b2d60(0x17,0);
  }
                    /* try { // try from 0314e290 to 0324e29f has its CatchHandler @ 0314e2a0 */
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
                    /* catch() { ... } // from try @ 0314e254 with catch @ 0314e2a0
                       catch() { ... } // from try @ 0314e290 with catch @ 0314e2a0 */
  lVar1 = thunk_FUN_01de27b8();
                    /* try { // try from 0314e2a4 to 0324e2a7 has its CatchHandler @ 0314e2b0 */
                    /* try { // try from 0314e2a8 to 0324e2b3 has its CatchHandler @ 0314dfd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314e2a4 with catch @ 0314e2b0
                        */
  FUN_0314cf6c(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,unaff_w19
                 ,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


