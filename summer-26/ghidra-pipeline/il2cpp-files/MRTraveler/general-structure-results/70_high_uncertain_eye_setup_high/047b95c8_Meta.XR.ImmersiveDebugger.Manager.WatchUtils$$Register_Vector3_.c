/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 047b95c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  int in_w9;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03cd7500();
  }
  plVar2 = (long *)FUN_0710fcf0(uVar3,0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e82098 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_08e82098) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_03c810e4(plVar2,0);
  return;
}


