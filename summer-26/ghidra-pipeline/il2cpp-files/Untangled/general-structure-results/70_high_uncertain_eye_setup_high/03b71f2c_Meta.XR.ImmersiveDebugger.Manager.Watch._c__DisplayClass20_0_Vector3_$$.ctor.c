/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 03b71f2c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor(void)

{
  byte bVar1;
  long *plVar2;
  int in_w9;
  
  if (in_w9 == 0) {
    thunk_FUN_02f12b58();
  }
  plVar2 = (long *)FUN_056109c0();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d36e98 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_06d36e98) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_02f100e4(plVar2,0);
  return;
}


