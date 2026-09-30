/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.ctor
ENTRY_POINT: 0464a028
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
                (long param_1,void *param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x27;
  long lVar8;
  long unaff_x29;
  
  pvVar1 = unaff_x20;
  if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(param_2,pvVar1,unaff_x22);
  if (unaff_x25 == (long *)0x0) {
LAB_0464a29c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  puVar6 = unaff_x23;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
    puVar6 = (undefined8 *)*unaff_x23;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  puVar5 = unaff_x24;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x24;
  }
  lVar2 = *unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  (**(code **)(*(long *)(lVar2 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar3 = (long *)thunk_FUN_03799158();
    if (*plVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar7 = 0;
      do {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        piVar4 = (int *)thunk_FUN_03799158();
        if ((long)(*piVar4 + -1) <= (long)uVar7) {
          uVar7 = 0xffffffff;
          break;
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar3 = (long *)thunk_FUN_03799158();
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_0464a29c;
        if (*(uint *)(plVar3 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        memcpy(unaff_x23,(void *)((long)plVar3 + uVar7 * *(uint *)(*plVar3 + 0x104) + 0x20),
               unaff_x22);
        lVar8 = *(long *)(unaff_x19 + 0x20);
        lVar2 = lVar8;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03775678(lVar8);
          lVar2 = *(long *)(unaff_x19 + 0x20);
        }
        pvVar1 = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,pvVar1,unaff_x22);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678(lVar2);
        }
        puVar6 = unaff_x23;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
          puVar6 = (undefined8 *)*unaff_x23;
        }
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        puVar5 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x24;
        }
        lVar2 = *unaff_x25;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        (**(code **)(*(long *)(lVar2 + 0x1c0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar2 + 0x1c0) + 8));
        uVar7 = uVar7 + 1;
      } while (*(char *)(unaff_x29 + -0xc) == '\0');
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
    }
  }
  else {
    uVar7 = 0;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}


