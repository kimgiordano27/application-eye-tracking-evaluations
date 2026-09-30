/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 0464a04c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
                (long param_1)

{
  void *__src;
  long lVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x27;
  long lVar7;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03775678();
  }
  puVar5 = unaff_x23;
  if (-1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x23;
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  puVar4 = unaff_x24;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
    puVar4 = (undefined8 *)*unaff_x24;
  }
  lVar1 = *unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  (**(code **)(*(long *)(lVar1 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar2 = (long *)thunk_FUN_03799158();
    if (*plVar2 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar6 = 0;
      do {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        piVar3 = (int *)thunk_FUN_03799158();
        if ((long)(*piVar3 + -1) <= (long)uVar6) {
          uVar6 = 0xffffffff;
          break;
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar2 = (long *)thunk_FUN_03799158();
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(plVar2 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        memcpy(unaff_x23,(void *)((long)plVar2 + uVar6 * *(uint *)(*plVar2 + 0x104) + 0x20),
               unaff_x22);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        lVar1 = lVar7;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678(lVar7);
          lVar1 = *(long *)(unaff_x19 + 0x20);
        }
        __src = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,__src,unaff_x22);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03775678(lVar1);
        }
        puVar5 = unaff_x23;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x23;
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03775678();
        }
        puVar4 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x24;
        }
        lVar1 = *unaff_x25;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        (**(code **)(*(long *)(lVar1 + 0x1c0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar1 + 0x1c0) + 8));
        uVar6 = uVar6 + 1;
      } while (*(char *)(unaff_x29 + -0xc) == '\0');
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
    }
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}


