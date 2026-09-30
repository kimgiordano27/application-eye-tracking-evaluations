/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 04d672c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  
  FUN_04d67ba0();
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    uVar1 = 0;
  }
  else if (*(long *)(unaff_x19 + 0x30) == 0) {
    uVar1 = 1;
  }
  else {
    plVar2 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x10);
    if (plVar2 == (long *)0x0) {
      uVar1 = 2;
    }
    else {
      lVar3 = *plVar2;
                    /* try { // try from 04d672ec to 04e6732b has its CatchHandler @ 04d67354 */
      uVar1 = 2;
      if ((*(byte *)(DAT_083cfa08 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
         (uVar1 = 2,
         *(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_083cfa08 + 0x130) * 8 + -8) ==
         DAT_083cfa08)) {
        uVar1 = 3;
      }
    }
  }
                    /* try { // try from 04d6732c to 04e6734b has its CatchHandler @ 04d672b4 */
  return uVar1;
}


