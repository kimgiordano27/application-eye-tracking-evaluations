/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 047b94a8
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  
  lVar2 = FUN_0710fcf0();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = FUN_0711b738(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  plVar4 = (long *)FUN_0710fcf0(uVar5,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e82098 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_08e82098) {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = thunk_FUN_03c810e4(plVar4,0);
  return uVar5;
}


