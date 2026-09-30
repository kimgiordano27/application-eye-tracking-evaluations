/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0477e7dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  long lVar1;
  uint in_w8;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  ulong uVar4;
  
  if (0 < (int)in_w8) {
    uVar4 = 0;
    plVar2 = (long *)(unaff_x22 + 0x20);
    do {
      if (in_w8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (lVar1 = FUN_031c05a4(plVar2,0,lVar3), lVar3 == lVar1)) {
        return lVar3;
      }
      in_w8 = *(uint *)(unaff_x22 + 0x18);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((long)uVar4 < (long)(int)in_w8);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0477e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


