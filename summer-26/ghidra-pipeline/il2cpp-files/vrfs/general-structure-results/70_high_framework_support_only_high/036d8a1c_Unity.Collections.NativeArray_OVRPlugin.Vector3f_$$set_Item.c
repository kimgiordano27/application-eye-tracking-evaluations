/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 036d8a1c
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item(void)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_0159f088(PTR_DAT_06dd0a58);
  thunk_FUN_0159f088(PTR_DAT_06d8f138);
  thunk_FUN_0159f088(PTR_DAT_06e45640);
  *(undefined1 *)(unaff_x20 + 0x94b) = 1;
  if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  plVar3 = (long *)FUN_03fbac38();
  if (plVar3 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_06dd5fc0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    plVar3 = (long *)FUN_01c9c414();
    return plVar3;
  }
  bVar1 = *(byte *)(*plVar3 + 300);
  bVar2 = *(byte *)(*(long *)PTR_DAT_06e45640 + 300);
  if ((bVar2 <= bVar1) &&
     (lVar4 = *(long *)(*plVar3 + 200),
     *(long *)(lVar4 + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e45640)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06dd0a58 + 300);
    if ((bVar1 < bVar2) || (*(long *)(lVar4 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd0a58))
    {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06d8f138 + 300);
      if ((bVar1 < bVar2) || (*(long *)(lVar4 + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06d8f138)
         ) goto LAB_036d8b40;
      FUN_036d04e0();
    }
    else {
      FUN_036cf930();
    }
    return plVar3;
  }
LAB_036d8b40:
                    /* WARNING: Subroutine does not return */
  FUN_0160f170(plVar3);
}


