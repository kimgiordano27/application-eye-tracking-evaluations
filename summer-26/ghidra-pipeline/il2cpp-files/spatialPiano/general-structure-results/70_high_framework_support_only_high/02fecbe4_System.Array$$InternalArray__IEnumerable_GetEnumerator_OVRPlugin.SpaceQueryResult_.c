/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02fecbe4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (void *param_1)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long in_x9;
  undefined8 *unaff_x19;
  long unaff_x21;
  long lVar3;
  
  __size = in_x9 * 2;
  uVar1 = unaff_x21 + 0x3e1;
  if (__size < uVar1 || __size - uVar1 == 0) {
    __size = uVar1;
  }
  unaff_x19[2] = __size;
  pvVar2 = realloc(param_1,__size);
  *unaff_x19 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    lVar3 = unaff_x19[1];
    unaff_x19[1] = lVar3 + 1;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x7d;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


