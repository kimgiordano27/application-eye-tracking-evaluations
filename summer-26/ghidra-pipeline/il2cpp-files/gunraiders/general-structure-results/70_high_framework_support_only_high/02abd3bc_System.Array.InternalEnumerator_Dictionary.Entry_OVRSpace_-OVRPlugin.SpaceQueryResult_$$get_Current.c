/*
FUNCTION_NAME: System.Array.InternalEnumerator<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$get_Current
ENTRY_POINT: 02abd3bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array_InternalEnumerator<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>__get_Current
                 (void)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  plVar1 = (long *)FUN_03312c94();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar1);
    }
  }
  return plVar1;
}


