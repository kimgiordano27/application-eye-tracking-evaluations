/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02876a70
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  void *__src;
  int *piVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long lVar6;
  undefined8 uVar7;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    do {
      plVar5 = *(long **)(unaff_x20 + 0x28);
      if (plVar5 == (long *)0x0) {
Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(plVar5 + 3) <= unaff_w24) {
LAB_02876af0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      puVar2 = (uint *)thunk_FUN_018445e8((long)plVar5 +
                                          (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x27 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
      unaff_w24 = *puVar2;
      if (unaff_w24 == 0) goto LAB_02876ab8;
      plVar5 = *(long **)(unaff_x20 + 0x28);
      if (plVar5 == (long *)0x0)
      goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
      if (*(uint *)(plVar5 + 3) <= unaff_w24) goto LAB_02876af0;
      unaff_x27 = (long)(int)unaff_w24;
      piVar1 = (int *)thunk_FUN_018445e8((long)plVar5 +
                                         (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x27 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                      0xc0) + 0xa0) + 0x80) + 0x40);
    } while (*piVar1 != unaff_w28);
    plVar5 = *(long **)(unaff_x20 + 0x28);
    if (plVar5 == (long *)0x0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    __src = *(void **)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x60) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,__src,*(size_t *)(unaff_x29 + -0x28));
    lVar3 = *(long *)(lVar6 + 0xc0);
    lVar6 = *(long *)(lVar3 + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    if (*(uint *)(plVar5 + 3) <= unaff_w24) goto LAB_02876af0;
    uVar7 = *(undefined8 *)(lVar3 + 0xe0);
    thunk_FUN_018445e8((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x27 + 0x20,
                       *(long *)(*(long *)(lVar3 + 0xa0) + 0x80) + 0x60);
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    FUN_017fce8c(lVar6,uVar7);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
LAB_02876ab8:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


