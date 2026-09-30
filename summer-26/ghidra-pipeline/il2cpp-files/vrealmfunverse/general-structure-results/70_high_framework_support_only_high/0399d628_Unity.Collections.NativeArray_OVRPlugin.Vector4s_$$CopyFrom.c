/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 0399d628
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xbc3) = in_w8;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
                    /* catch() { ... } // from try @ 0399d5a0 with catch @ 0399d630 */
  if (lVar1 == 0) {
                    /* try { // try from 0399d634 to 03a9d63b has its CatchHandler @ 0399d644 */
                    /* try { // try from 0399d63c to 03a9d647 has its CatchHandler @ 0399d2c8 */
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631caa0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0399d634 with catch @ 0399d644
                        */
    FUN_04dbdb8c(uVar2,0);
    FUN_02b75c08(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


