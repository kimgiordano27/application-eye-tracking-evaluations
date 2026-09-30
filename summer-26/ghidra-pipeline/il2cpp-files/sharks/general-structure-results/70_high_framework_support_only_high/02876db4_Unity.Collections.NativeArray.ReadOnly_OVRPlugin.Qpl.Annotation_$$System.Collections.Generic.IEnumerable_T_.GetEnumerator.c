/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02876db4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  void *pvVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  long *unaff_x22;
  long *plVar3;
  long unaff_x23;
  ulong __n;
  ulong unaff_x24;
  long lVar4;
  void *pvVar5;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
  pvVar5 = *(void **)(unaff_x29 + -0x28);
  pvVar1 = *(void **)(unaff_x29 + -0x18);
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x23 + 0xc0) + 0x60) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(pvVar5,pvVar1,unaff_x24);
  if (unaff_w28 < *(uint *)(unaff_x22 + 3)) {
    FUN_017fc374((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x27 + 0x20,
                 *(long *)(*(long *)(*(long *)(unaff_x23 + 0xc0) + 0xa0) + 0x80) + 0x60,pvVar5,
                 unaff_x24 & 0xffffffff);
    plVar3 = *(long **)(unaff_x19 + 0x28);
    if (plVar3 == (long *)0x0) {
LAB_02876ee0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    pvVar5 = *(void **)(unaff_x29 + -0x40);
    __n = *(ulong *)(unaff_x29 + -0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x48);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0xa8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(pvVar5,pvVar1,__n);
    if (unaff_w28 < *(uint *)(plVar3 + 3)) {
      FUN_017fc374((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x27 + 0x20,
                   *(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0xa0) + 0x80) + 0x80,pvVar5,
                   __n & 0xffffffff);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 == 0) goto LAB_02876ee0;
      lVar4 = *(long *)(unaff_x29 + -0x30);
      if (unaff_w26 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(lVar2 + unaff_x20 * 4 + 0x20) = unaff_w28;
        if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


