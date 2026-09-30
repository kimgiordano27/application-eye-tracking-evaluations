/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 08a63b84
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  uVar1 = FUN_08bd8f18();
                    /* catch() { ... } // from try @ 08a63b20 with catch @ 08a63b94 */
  if ((param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 08a63b24 with catch @ 08a63bb0 */
    uVar2 = FUN_08a3ae64();
    *(undefined8 *)(unaff_x19 + 0x178) = uVar2;
    thunk_FUN_049ee3d8(unaff_x19 + 0x178);
  }
  else if ((uVar1 & 1) == 0) {
                    /* try { // try from 08a63bd4 to 08b63bd7 has its CatchHandler @ 08a63be0 */
                    /* catch() { ... } // from try @ 08a63bd4 with catch @ 08a63be0 */
    uVar2 = FUN_08a3aef8();
                    /* try { // try from 08a63be8 to 08b63bef has its CatchHandler @ 08a63cac */
    *(undefined8 *)(unaff_x19 + 0x178) = uVar2;
                    /* try { // try from 08a63bf0 to 08b63c13 has its CatchHandler @ 08a63508 */
    thunk_FUN_049ee3d8(unaff_x19 + 0x178);
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x178) = 0;
                    /* catch() { ... } // from try @ 08a63aec with catch @ 08a63ba0
                       catch() { ... } // from try @ 08a63b80 with catch @ 08a63ba0 */
                    /* try { // try from 08a63ba8 to 08b63bab has its CatchHandler @ 08a63cac */
    thunk_FUN_049ee3d8(unaff_x19 + 0x178,0);
                    /* try { // try from 08a63bac to 08b63bd3 has its CatchHandler @ 08a63508 */
  }
                    /* catch() { ... } // from try @ 08a638dc with catch @ 08a63bf4
                       catch() { ... } // from try @ 08a63a34 with catch @ 08a63bf4 */
                    /* catch() { ... } // from try @ 08a63650 with catch @ 08a63bf8
                       catch() { ... } // from try @ 08a63a30 with catch @ 08a63bf8 */
  if (*(long *)(unaff_x19 + 0x178) != 0) {
    *(undefined1 *)(unaff_x19 + 0x180) = 1;
  }
  return;
}


