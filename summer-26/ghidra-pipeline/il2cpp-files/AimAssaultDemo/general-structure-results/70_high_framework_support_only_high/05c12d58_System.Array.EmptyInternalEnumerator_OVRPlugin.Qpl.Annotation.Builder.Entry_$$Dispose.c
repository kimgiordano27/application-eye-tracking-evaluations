/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 05c12d58
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(void)

{
  undefined1 in_ZR;
  int *piVar1;
  void *pvVar2;
  void *__dest;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar4;
  void *unaff_x26;
  ulong unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  do {
    if ((bool)in_ZR) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(uint *)(unaff_x23 + 3) <= unaff_x24) goto LAB_05c12d90;
    piVar1 = (int *)thunk_FUN_03799158((long)unaff_x23 +
                                       unaff_x24 * *(uint *)(*unaff_x23 + 0x104) + 0x20,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                  0x68) + 0x80));
    if (-1 < *piVar1) {
      if (*(uint *)(unaff_x23 + 3) <= unaff_x24) {
LAB_05c12d90:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      pvVar2 = (void *)thunk_FUN_03799158((long)unaff_x23 +
                                          unaff_x24 * *(uint *)(*unaff_x23 + 0x104) + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20)
                                                                       + 0xc0) + 0x68) + 0x80) +
                                          0x40);
      memcpy(*(void **)(unaff_x29 + -0x10),pvVar2,*(size_t *)(unaff_x29 + -0x20));
      if (*(uint *)(unaff_x23 + 3) <= unaff_x24) goto LAB_05c12d90;
      pvVar2 = (void *)thunk_FUN_03799158((long)unaff_x23 +
                                          unaff_x24 * *(uint *)(*unaff_x23 + 0x104) + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20)
                                                                       + 0xc0) + 0x68) + 0x80) +
                                          0x60);
      memcpy(*(void **)(unaff_x29 + -0x18),pvVar2,*(size_t *)(unaff_x29 + -0x28));
      memset(unaff_x26,0,unaff_x28);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      lVar3 = *(long *)(lVar4 + 0xc0);
      if (*(int *)(*(long *)(lVar3 + 0x70) + 0x28) < 0) {
        pvVar2 = *(void **)(unaff_x29 + -0x38);
        memcpy(pvVar2,*(void **)(unaff_x29 + -0x10),*(size_t *)(unaff_x29 + -0x20));
        lVar3 = *(long *)(lVar4 + 0xc0);
      }
      else {
        pvVar2 = (void *)**(undefined8 **)(unaff_x29 + -0x10);
      }
      if (*(int *)(*(long *)(lVar3 + 0x78) + 0x28) < 0) {
        __dest = *(void **)(unaff_x29 + -0x40);
        memcpy(__dest,*(void **)(unaff_x29 + -0x18),*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *(long *)(lVar4 + 0xc0);
      }
      else {
        __dest = (void *)**(undefined8 **)(unaff_x29 + -0x18);
      }
      FUN_047f40e0(unaff_x26,pvVar2,__dest,*(undefined8 *)(lVar3 + 0x158));
      if (*(uint *)(unaff_x21 + 3) <= unaff_w20) goto LAB_05c12d90;
      unaff_x28 = *(size_t *)(unaff_x29 + -0x30);
      lVar4 = (long)(int)unaff_w20;
      memcpy((void *)((long)unaff_x21 + (ulong)*(uint *)(*unaff_x21 + 0x104) * lVar4 + 0x20),
             unaff_x26,unaff_x28);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678();
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w20) goto LAB_05c12d90;
      unaff_w20 = unaff_w20 + 1;
      FUN_0373b4c8(lVar3,(long)unaff_x21 + (ulong)*(uint *)(*unaff_x21 + 0x104) * lVar4 + 0x20,
                   unaff_x26);
    }
    unaff_x24 = unaff_x24 + 1;
    in_ZR = unaff_x27 == unaff_x24;
  } while( true );
}


