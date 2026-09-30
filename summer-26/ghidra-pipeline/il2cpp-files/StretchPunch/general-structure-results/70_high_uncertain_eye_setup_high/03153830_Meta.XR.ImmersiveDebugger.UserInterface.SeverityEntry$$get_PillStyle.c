/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.SeverityEntry$$get_PillStyle
ENTRY_POINT: 03153830
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


long Meta_XR_ImmersiveDebugger_UserInterface_SeverityEntry__get_PillStyle(long param_1,int param_2)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
                    /* try { // try from 03153834 to 03253863 has its CatchHandler @ 031535d4 */
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (unaff_w19 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_033b2d60(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar1 = thunk_FUN_01de27b8();
  FUN_0315253c(lVar1,unaff_w19,
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


