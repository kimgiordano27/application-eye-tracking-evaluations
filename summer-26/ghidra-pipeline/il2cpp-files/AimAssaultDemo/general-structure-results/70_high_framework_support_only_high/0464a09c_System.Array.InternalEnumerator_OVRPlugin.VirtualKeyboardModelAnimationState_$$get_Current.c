/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 0464a09c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
                (undefined8 param_1)

{
  void *__src;
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar5;
  long unaff_x27;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  (**(code **)(*(long *)(in_x9 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(in_x9 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar1 = (long *)thunk_FUN_03799158();
    if (*plVar1 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar5 = 0;
      do {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        piVar2 = (int *)thunk_FUN_03799158();
        if ((long)(*piVar2 + -1) <= (long)uVar5) {
          uVar5 = 0xffffffff;
          break;
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar1 = (long *)thunk_FUN_03799158();
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(plVar1 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        memcpy(unaff_x23,(void *)((long)plVar1 + uVar5 * *(uint *)(*plVar1 + 0x104) + 0x20),
               unaff_x22);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        lVar3 = lVar6;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678(lVar6);
          lVar3 = *(long *)(unaff_x19 + 0x20);
        }
        __src = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,__src,unaff_x22);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678(lVar3);
        }
        puVar7 = unaff_x23;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x23;
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678();
        }
        puVar4 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x24;
        }
        lVar3 = *unaff_x25;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
        uVar5 = uVar5 + 1;
      } while (*(char *)(unaff_x29 + -0xc) == '\0');
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
    }
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}


