/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 028764a4
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__GetEnumerator(void)

{
  void *__s;
  int in_w8;
  long *plVar1;
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w28;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x22 + (long)in_w8 * 4 + 0x20) = in_w9;
  plVar1 = *(long **)(unaff_x19 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (unaff_w28 < *(uint *)(plVar1 + 3)) {
      FUN_015d6fa0((long)plVar1 + (ulong)*(uint *)(*plVar1 + 0x104) * unaff_x21 + 0x20,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
      plVar1 = *(long **)(unaff_x19 + 0x28);
      if (plVar1 == (long *)0x0) goto LAB_028765c4;
      if (unaff_w28 < *(uint *)(plVar1 + 3)) {
        FUN_015d7e34((long)plVar1 + (ulong)*(uint *)(*plVar1 + 0x104) * unaff_x21 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                              0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
        plVar1 = *(long **)(unaff_x19 + 0x28);
        if (plVar1 == (long *)0x0) goto LAB_028765c4;
        if (unaff_w28 < *(uint *)(plVar1 + 3)) {
          __s = (void *)thunk_FUN_018445e8((long)plVar1 +
                                           (ulong)*(uint *)(*plVar1 + 0x104) * unaff_x21 + 0x20,
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
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


