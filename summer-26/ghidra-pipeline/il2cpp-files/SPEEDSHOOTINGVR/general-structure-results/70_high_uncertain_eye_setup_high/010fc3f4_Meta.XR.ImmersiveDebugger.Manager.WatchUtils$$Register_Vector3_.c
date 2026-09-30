/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 010fc3f4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong __n;
  long in_x3;
  undefined8 unaff_x20;
  undefined8 *__dest;
  void *unaff_x22;
  long unaff_x23;
  long *plVar3;
  long unaff_x29;
  
  FUN_0103c2a0(in_x3);
  plVar3 = *(long **)(in_x3 + 0x38);
  __n = (ulong)*(uint *)(*plVar3 + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(*plVar3 + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x22,__n);
  puVar1 = (undefined8 *)plVar3[1];
  uVar2 = *puVar1;
  if (-1 < *(int *)(*plVar3 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = __dest;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  (*(code *)puVar1[2])(uVar2);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


