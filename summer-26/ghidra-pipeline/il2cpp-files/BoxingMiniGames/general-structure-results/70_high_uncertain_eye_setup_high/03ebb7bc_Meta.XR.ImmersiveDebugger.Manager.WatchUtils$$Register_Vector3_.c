/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 03ebb7bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0367ca58();
    puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar2 = PTR_DAT_079f4610;
  uVar7 = *puVar6;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar3 = FUN_05e26f18(uVar7,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar4 = FUN_05e32698(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar5 = (long *)FUN_05e26f18(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_079fd458 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_079fd458) {
      plVar5 = (long *)0x0;
    }
  }
  uVar7 = thunk_FUN_036563c8(plVar5,0);
  return uVar7;
}


