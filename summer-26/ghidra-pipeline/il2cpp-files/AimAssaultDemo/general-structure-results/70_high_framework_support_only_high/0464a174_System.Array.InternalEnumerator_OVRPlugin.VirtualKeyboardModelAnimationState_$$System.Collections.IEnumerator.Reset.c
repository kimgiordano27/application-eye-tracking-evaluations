/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0464a174
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
                (long *param_1)

{
  void *__src;
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long lVar4;
  undefined8 *puVar5;
  void *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    memcpy(unaff_x23,(void *)((long)param_1 + unaff_x26 * *(uint *)(*param_1 + 0x104) + 0x20),
           unaff_x22);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    lVar2 = lVar4;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
      __src = unaff_x28;
    }
    memcpy(unaff_x24,__src,unaff_x22);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
    }
    puVar5 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x23;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    puVar3 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x24;
    }
    lVar2 = *unaff_x25;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (**(code **)(*(long *)(lVar2 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 0x1c0) + 8));
    unaff_x26 = unaff_x26 + 1;
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    piVar1 = (int *)thunk_FUN_03799158();
    if ((long)(*piVar1 + -1) <= (long)unaff_x26) {
      unaff_x26 = 0xffffffff;
      break;
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    param_1 = (long *)thunk_FUN_03799158();
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(param_1 + 3) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x26 & 0xffffffff;
}


