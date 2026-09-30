/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 05df4994
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  
  lVar1 = FUN_08d895f0(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar2 = FUN_08d95ec0(lVar1,0);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  uVar4 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  plVar3 = (long *)FUN_08d895f0(uVar4,0);
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0ae9df30 + 0x130)) {
      plVar3 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0ae9df30 + 0x130) * 8 + -8)
             != DAT_0ae9df30) {
      plVar3 = (long *)0x0;
    }
  }
  uVar4 = thunk_FUN_04959ba4(plVar3,0);
  return uVar4;
}


