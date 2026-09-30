/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 0399a74c
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


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631caa0);
    *(undefined1 *)(unaff_x20 + 0xbc0) = 1;
  }
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631caa0);
    FUN_04dbdb8c(uVar2,0);
    FUN_02b75c08(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
                    /* try { // try from 0399a7a4 to 03a9a7ab has its CatchHandler @ 0399a800 */
  return lVar1;
}


