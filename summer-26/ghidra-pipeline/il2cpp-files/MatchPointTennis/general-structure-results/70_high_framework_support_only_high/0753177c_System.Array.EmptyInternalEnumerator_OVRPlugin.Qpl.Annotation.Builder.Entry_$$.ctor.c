/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 0753177c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
               (long param_1)

{
  void *__src;
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong in_x9;
  ulong uVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  size_t unaff_x20;
  void *__dest;
  long unaff_x22;
  void *unaff_x23;
  void *__s;
  undefined8 *__dest_00;
  size_t unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  __dest_00 = (undefined8 *)(param_1 - (in_x9 & 0x1fffffff0));
  uVar5 = unaff_x20 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)__dest_00 - uVar5);
  __s = (void *)((long)__dest - uVar5);
  memset(__s,0,unaff_x20);
  __src = unaff_x23;
  if (-1 < *(int *)(unaff_x28 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest_00,__src,unaff_x26);
  puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0xc0) + 0x110);
  uVar2 = *puVar3;
  puVar4 = __dest_00;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0xc0) + 0x70) + 0x28)) {
    puVar4 = (undefined8 *)*__dest_00;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  (*(code *)puVar3[2])(uVar2);
  uVar1 = *(uint *)(unaff_x29 + -0xc);
  if ((int)uVar1 < 0) {
    lVar7 = *(long *)(unaff_x22 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x70) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest_00,unaff_x23,unaff_x26);
    uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70),__dest_00);
    FUN_07a5fa20(uVar2,0);
    memset(__s,0,unaff_x20);
  }
  else {
    plVar6 = *(long **)(unaff_x27 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(plVar6 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    __s = (void *)thunk_FUN_044a5a9c((long)plVar6 +
                                     (ulong)*(uint *)(*plVar6 + 0x104) * (ulong)uVar1 + 0x20,
                                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) +
                                                                  0xc0) + 0x68) + 0x80) + 0x60);
  }
  memcpy(__dest,__s,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x30),__dest,unaff_x20);
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


