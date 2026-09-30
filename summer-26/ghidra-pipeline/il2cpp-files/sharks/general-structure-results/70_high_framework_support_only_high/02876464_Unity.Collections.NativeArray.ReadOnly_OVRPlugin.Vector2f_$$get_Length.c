/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$get_Length
ENTRY_POINT: 02876464
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *__s;
  long *plVar3;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  
  puVar2 = (undefined4 *)
           thunk_FUN_018445e8(param_1 + (ulong)*(uint *)(in_x10 + 0x104) * unaff_x21 + 0x20,
                              *(long *)(*(long *)(*(long *)(in_x9 + 0xc0) + 0xa0) + 0x80) + 0x20);
  if (unaff_x22 != 0) {
    uVar1 = 0;
    if (unaff_w23 != 0) {
      uVar1 = unaff_w27 / unaff_w23;
    }
    uVar1 = unaff_w27 - uVar1 * unaff_w23;
    if (uVar1 < *(uint *)(unaff_x22 + 0x18)) {
      *(undefined4 *)(unaff_x22 + (long)(int)uVar1 * 4 + 0x20) = *puVar2;
      plVar3 = *(long **)(unaff_x19 + 0x28);
      if (plVar3 == (long *)0x0) goto LAB_028765c4;
      if (unaff_w28 < *(uint *)(plVar3 + 3)) {
        FUN_015d6fa0((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x21 + 0x20,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
        plVar3 = *(long **)(unaff_x19 + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_028765c4;
        if (unaff_w28 < *(uint *)(plVar3 + 3)) {
          FUN_015d7e34((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x21 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
          plVar3 = *(long **)(unaff_x19 + 0x28);
          if (plVar3 == (long *)0x0) goto LAB_028765c4;
          if (unaff_w28 < *(uint *)(plVar3 + 3)) {
            __s = (void *)thunk_FUN_018445e8((long)plVar3 +
                                             (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x21 + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                    0x20) + 0xc0) +
                                                                0xa0) + 0x80) + 0x80);
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
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


