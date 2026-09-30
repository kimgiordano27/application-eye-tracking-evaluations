/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05830b08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
               (void *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x27;
  ulong uVar9;
  long unaff_x29;
  
  memcpy(unaff_x23,param_1,unaff_x22);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  pvVar1 = unaff_x20;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x28);
  }
  plVar3 = memcpy(unaff_x24,pvVar1,unaff_x22);
  if (unaff_x25 == (long *)0x0) {
    lVar2 = *(long *)(unaff_x27 + 0x28);
LAB_05830df4:
    if (lVar2 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    puVar7 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    lVar2 = *unaff_x25;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (**(code **)(*(long *)(lVar2 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 0x1c0) + 8));
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      plVar3 = (long *)thunk_FUN_040d6b00();
      if (*plVar3 == 0) {
        plVar3 = (long *)0xffffffff;
      }
      else {
        *(long *)(unaff_x29 + -0x30) = unaff_x27;
        uVar9 = 0;
        while( true ) {
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_040b1acc();
          }
          piVar4 = (int *)thunk_FUN_040d6b00();
          if ((long)(*piVar4 + -1) <= (long)uVar9) {
            plVar3 = (long *)0xffffffff;
            goto FUN_05830d98;
          }
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_040b1acc();
          }
          plVar3 = (long *)thunk_FUN_040d6b00();
          plVar6 = (long *)*plVar3;
          if (plVar6 == (long *)0x0) {
            lVar2 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x28);
            goto LAB_05830df4;
          }
          if (*(uint *)(plVar6 + 3) <= uVar9) {
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
          }
          memcpy(unaff_x23,(void *)((long)plVar6 + uVar9 * *(uint *)(*plVar6 + 0x104) + 0x20),
                 unaff_x22);
          lVar8 = *(long *)(unaff_x19 + 0x20);
          lVar2 = lVar8;
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_040b1acc(lVar8);
            lVar2 = *(long *)(unaff_x19 + 0x20);
          }
          pvVar1 = unaff_x20;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x24,pvVar1,unaff_x22);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_040b1acc(lVar2);
          }
          puVar7 = unaff_x23;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
            puVar7 = (undefined8 *)*unaff_x23;
          }
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_040b1acc();
          }
          puVar5 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
            puVar5 = (undefined8 *)*unaff_x24;
          }
          lVar2 = *unaff_x25;
          *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
          (**(code **)(*(long *)(lVar2 + 0x1c0) + 0x10))
                    (*(undefined8 *)(*(long *)(lVar2 + 0x1c0) + 8));
          if (*(char *)(unaff_x29 + -0xc) != '\0') break;
          uVar9 = uVar9 + 1;
        }
        plVar3 = (long *)(ulong)((int)uVar9 + 1);
FUN_05830d98:
        unaff_x27 = *(long *)(unaff_x29 + -0x30);
      }
    }
    else {
      plVar3 = (long *)0x0;
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


