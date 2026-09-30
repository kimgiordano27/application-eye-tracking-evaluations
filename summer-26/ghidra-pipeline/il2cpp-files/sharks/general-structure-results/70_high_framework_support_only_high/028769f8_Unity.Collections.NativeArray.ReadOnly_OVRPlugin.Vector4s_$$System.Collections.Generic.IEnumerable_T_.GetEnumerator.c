/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 028769f8
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  void *__src;
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long lVar5;
  long unaff_x25;
  undefined8 uVar6;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    if (*(uint *)(unaff_x21 + 3) <= unaff_w24) {
LAB_02876af0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar6 = *(undefined8 *)(param_1 + 0xe0);
    thunk_FUN_018445e8((long)unaff_x21 + (ulong)*(uint *)(*unaff_x21 + 0x104) * unaff_x27 + 0x20,
                       *(long *)(*(long *)(param_1 + 0xa0) + 0x80) + 0x60);
    puVar3 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    FUN_017fce8c(unaff_x25,uVar6);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_02876ab8:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return unaff_w24;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    do {
      plVar4 = *(long **)(unaff_x20 + 0x28);
      if (plVar4 == (long *)0x0)
      goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
      if (*(uint *)(plVar4 + 3) <= unaff_w24) goto LAB_02876af0;
      puVar2 = (uint *)thunk_FUN_018445e8((long)plVar4 +
                                          (ulong)*(uint *)(*plVar4 + 0x104) * unaff_x27 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
      unaff_w24 = *puVar2;
      if (unaff_w24 == 0) goto LAB_02876ab8;
      plVar4 = *(long **)(unaff_x20 + 0x28);
      if (plVar4 == (long *)0x0)
      goto Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length;
      if (*(uint *)(plVar4 + 3) <= unaff_w24) goto LAB_02876af0;
      unaff_x27 = (long)(int)unaff_w24;
      piVar1 = (int *)thunk_FUN_018445e8((long)plVar4 +
                                         (ulong)*(uint *)(*plVar4 + 0x104) * unaff_x27 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                      0xc0) + 0xa0) + 0x80) + 0x40);
    } while (*piVar1 != unaff_w28);
    unaff_x21 = *(long **)(unaff_x20 + 0x28);
    if (unaff_x21 == (long *)0x0) {
Unity_Collections_NativeArray_ReadOnly<OVRTriangleMesh_Triangle>__get_Length:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    __src = *(void **)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x60) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,__src,*(size_t *)(unaff_x29 + -0x28));
    param_1 = *(long *)(lVar5 + 0xc0);
    unaff_x25 = *(long *)(param_1 + 0x60);
    if ((*(byte *)(unaff_x25 + 0x135) & 1) == 0) {
      unaff_x25 = FUN_0185daa4(unaff_x25);
      param_1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
  } while( true );
}


