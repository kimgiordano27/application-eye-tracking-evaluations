/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 028763d8
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined4 *puVar1;
  void *__s;
  long *plVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w28;
  long unaff_x29;
  
  puVar1 = (undefined4 *)
           thunk_FUN_018445e8((long)unaff_x23 + (ulong)*(uint *)(in_x9 + 0x104) * unaff_x21 + 0x20,
                              *(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xa0) + 0x80) + 0x20);
  if (unaff_w22 < *(uint *)(unaff_x23 + 3)) {
    FUN_015d7e34((long)unaff_x23 +
                 (ulong)*(uint *)(*unaff_x23 + 0x104) * (long)(int)unaff_w22 + 0x20,
                 *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80) +
                 0x20,*puVar1);
    plVar2 = *(long **)(unaff_x19 + 0x28);
    if (plVar2 == (long *)0x0) {
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (unaff_w28 < *(uint *)(plVar2 + 3)) {
      FUN_015d6fa0((long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * unaff_x21 + 0x20,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
      plVar2 = *(long **)(unaff_x19 + 0x28);
      if (plVar2 == (long *)0x0) goto LAB_028765c4;
      if (unaff_w28 < *(uint *)(plVar2 + 3)) {
        FUN_015d7e34((long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * unaff_x21 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                              0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
        plVar2 = *(long **)(unaff_x19 + 0x28);
        if (plVar2 == (long *)0x0) goto LAB_028765c4;
        if (unaff_w28 < *(uint *)(plVar2 + 3)) {
          __s = (void *)thunk_FUN_018445e8((long)plVar2 +
                                           (ulong)*(uint *)(*plVar2 + 0x104) * unaff_x21 + 0x20,
                                           *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                        + 0xc0) + 0xa0) + 0x80) +
                                           0x80);
          memset(__s,0,*(size_t *)(unaff_x29 + -0x40));
          *(uint *)(unaff_x19 + 0x10) = unaff_w28;
          *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
          if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


