/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 04c40458
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)FUN_03fe028c();
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x90))();
  if ((uVar2 & 1) == 0) {
    memcpy(unaff_x26,unaff_x28,unaff_x21);
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    fVar5 = 1.0;
  }
  else {
    unaff_x26 = *(void **)(unaff_x29 + -0x60);
    memcpy(unaff_x26,unaff_x28,unaff_x21);
    unaff_x19 = *(void **)(unaff_x29 + -0x68);
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    fVar5 = (float)FUN_075b6260(0);
  }
  memcpy(unaff_x24,unaff_x26,unaff_x21);
  memcpy(unaff_x25,unaff_x19,unaff_x21);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8) + 0x28)) {
    unaff_x25 = (undefined8 *)*unaff_x25;
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  *(float *)(unaff_x29 + -0x1c) = fVar4 * fVar5;
  lVar3 = *unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
  *(void **)(unaff_x29 + -0x28) = unaff_x22;
  __dest = *(void **)(unaff_x29 + -0x58);
  lVar1 = *(long *)(unaff_x29 + -0x50);
  (**(code **)(*(long *)(lVar3 + 0x600) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x600) + 8));
  memcpy(__dest,unaff_x22,unaff_x21);
  if (*(long *)(lVar1 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


