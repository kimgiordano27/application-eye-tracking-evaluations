/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 03150db4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition
               (long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  
                    /* try { // try from 03150dc8 to 03250ddf has its CatchHandler @ 03150e20 */
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
                    /* try { // try from 03150de0 to 03250e0f has its CatchHandler @ 03150b80 */
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar1 = thunk_FUN_01de27b8();
                    /* try { // try from 03150e10 to 03250e1f has its CatchHandler @ 03150e20 */
                    /* catch() { ... } // from try @ 03150dc8 with catch @ 03150e20
                       catch() { ... } // from try @ 03150e10 with catch @ 03150e20 */
  FUN_0314f6ac(lVar1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148));
                    /* try { // try from 03150e24 to 03250e27 has its CatchHandler @ 03150e30 */
  if (lVar1 != 0) {
                    /* try { // try from 03150e28 to 03250e33 has its CatchHandler @ 03150b80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03150e24 with catch @ 03150e30
                        */
    FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x10),0,param_3,0);
    *(int *)(lVar1 + 0x18) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


