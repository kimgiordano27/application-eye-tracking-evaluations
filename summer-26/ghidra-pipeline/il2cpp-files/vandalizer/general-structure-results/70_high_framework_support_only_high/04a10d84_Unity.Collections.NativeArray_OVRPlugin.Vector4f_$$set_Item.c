/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 04a10d84
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(void)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (iVar1 < 1) {
    return;
  }
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar2 = *unaff_x25;
    *unaff_x25 = *unaff_x26;
                    /* try { // try from 04a10dc8 to 04b10e07 has its CatchHandler @ 04a10dc8
                       catch() { ... } // from try @ 04a10dc8 with catch @ 04a10dc8
                       catch() { ... } // from try @ 04a10e1c with catch @ 04a10dc8
                       catch() { ... } // from try @ 04a10e58 with catch @ 04a10dc8
                       catch() { ... } // from try @ 04a10e98 with catch @ 04a10dc8 */
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      *unaff_x26 = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


