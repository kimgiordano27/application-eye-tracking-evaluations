/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0477e638
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void *param_1)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  memcpy(unaff_x23,param_1,unaff_x22);
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_070f42e8 + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_070f42e8))
      {
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058();
        }
        goto LAB_0477e700;
      }
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
LAB_0477e700:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


