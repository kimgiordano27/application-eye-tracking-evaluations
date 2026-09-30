/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04649fc0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
                (long *param_1,undefined8 param_2)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
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
  
  piVar1 = (int *)thunk_FUN_03799158(param_2,*(undefined8 *)(*param_1 + 0x80));
  if (0 < *piVar1) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    pvVar2 = (void *)thunk_FUN_03799158();
    memcpy(unaff_x23,pvVar2,unaff_x22);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    pvVar2 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x24,pvVar2,unaff_x22);
    if (unaff_x25 == (long *)0x0) {
LAB_0464a29c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    puVar6 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x23;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    lVar3 = *unaff_x25;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar7 = 0;
      goto FUN_0464a268;
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar4 = (long *)thunk_FUN_03799158();
    if (*plVar4 != 0) {
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar7 = 0;
      do {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        piVar1 = (int *)thunk_FUN_03799158();
        if ((long)(*piVar1 + -1) <= (long)uVar7) {
          uVar7 = 0xffffffff;
          break;
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        plVar4 = (long *)thunk_FUN_03799158();
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_0464a29c;
        if (*(uint *)(plVar4 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        memcpy(unaff_x23,(void *)((long)plVar4 + uVar7 * *(uint *)(*plVar4 + 0x104) + 0x20),
               unaff_x22);
        lVar8 = *(long *)(unaff_x19 + 0x20);
        lVar3 = lVar8;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03775678(lVar8);
          lVar3 = *(long *)(unaff_x19 + 0x20);
        }
        pvVar2 = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,pvVar2,unaff_x22);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678(lVar3);
        }
        puVar6 = unaff_x23;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar6 = (undefined8 *)*unaff_x23;
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678();
        }
        puVar5 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x24;
        }
        lVar3 = *unaff_x25;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
        uVar7 = uVar7 + 1;
      } while (*(char *)(unaff_x29 + -0xc) == '\0');
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
      goto FUN_0464a268;
    }
  }
  uVar7 = 0xffffffff;
FUN_0464a268:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}


