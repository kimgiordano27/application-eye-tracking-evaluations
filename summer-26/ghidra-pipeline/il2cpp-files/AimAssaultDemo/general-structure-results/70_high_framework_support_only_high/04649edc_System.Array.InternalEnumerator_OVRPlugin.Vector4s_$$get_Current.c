/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 04649edc
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


ulong System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current
                (undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  code *pcVar11;
  undefined8 *puVar12;
  long unaff_x29;
  undefined8 auStack_30 [6];
  
  lVar7 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar7 + 0x28);
  *(void **)(unaff_x29 + -0x28) = param_2;
  lVar8 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar2 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_03775678(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar2 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)auStack_30 - uVar10);
  __dest_00 = (undefined8 *)((long)__dest - uVar10);
  lVar8 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar8 = *(long *)(param_3 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x80);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_03775678(lVar8);
  }
  plVar3 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x80));
  lVar2 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  piVar4 = (int *)thunk_FUN_03799158(param_1,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80));
  if (0 < *piVar4) {
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    pvVar5 = (void *)thunk_FUN_03799158(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
    memcpy(__dest,pvVar5,__n);
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    pvVar5 = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(__dest_00,pvVar5,__n);
    if (plVar3 == (long *)0x0) {
LAB_0464a29c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    puVar12 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar12 = (undefined8 *)*__dest;
    }
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    puVar9 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar9 = (undefined8 *)*__dest_00;
    }
    lVar2 = *plVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    lVar2 = *(long *)(lVar2 + 0x1c0);
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(lVar2 + 8),lVar2,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar10 = 0;
      goto FUN_0464a268;
    }
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    plVar6 = (long *)thunk_FUN_03799158(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40);
    if (*plVar6 != 0) {
      *(long *)(unaff_x29 + -0x30) = lVar7;
      uVar10 = 0;
      do {
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        piVar4 = (int *)thunk_FUN_03799158(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80)
                                          );
        if ((long)(*piVar4 + -1) <= (long)uVar10) {
          uVar10 = 0xffffffff;
          break;
        }
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        plVar6 = (long *)thunk_FUN_03799158(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                    0x40);
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_0464a29c;
        if (*(uint *)(plVar6 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        memcpy(__dest,(void *)((long)plVar6 + uVar10 * *(uint *)(*plVar6 + 0x104) + 0x20),__n);
        lVar2 = *(long *)(param_3 + 0x20);
        lVar7 = lVar2;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678(lVar2);
          lVar7 = *(long *)(param_3 + 0x20);
        }
        pvVar5 = param_2;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(__dest_00,pvVar5,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678(lVar7);
        }
        puVar12 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          puVar12 = (undefined8 *)*__dest;
        }
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        puVar9 = __dest_00;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          puVar9 = (undefined8 *)*__dest_00;
        }
        lVar7 = *plVar3;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
        lVar7 = *(long *)(lVar7 + 0x1c0);
        (**(code **)(lVar7 + 0x10))
                  (*(undefined8 *)(lVar7 + 8),lVar7,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
        uVar10 = uVar10 + 1;
      } while (*(char *)(unaff_x29 + -0xc) == '\0');
      lVar7 = *(long *)(unaff_x29 + -0x30);
      goto FUN_0464a268;
    }
  }
  uVar10 = 0xffffffff;
FUN_0464a268:
  if (*(long *)(lVar7 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}


