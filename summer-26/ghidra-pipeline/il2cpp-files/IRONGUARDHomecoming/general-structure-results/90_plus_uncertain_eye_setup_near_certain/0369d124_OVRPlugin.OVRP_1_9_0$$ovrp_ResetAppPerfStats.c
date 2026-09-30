/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_ResetAppPerfStats
ENTRY_POINT: 0369d124
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_9_0__ovrp_ResetAppPerfStats(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  plVar6 = *(long **)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  if (plVar6 == (long *)0x0) goto LAB_0369d404;
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_0369d180;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,6);
LAB_0369d180:
  iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (iVar1 == 1) {
LAB_0369d1fc:
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 == (long *)0x0) goto LAB_0369d404;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0369d260;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                            ,0);
LAB_0369d260:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate();
    }
  }
  else {
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) goto LAB_0369d404;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0369d1ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,6);
LAB_0369d1ec:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 == 0) goto LAB_0369d1fc;
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0369d2cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x21,6);
LAB_0369d2cc:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x60) != '\0') {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x38);
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0369d3e8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                              ,0);
LAB_0369d3e8:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x40) != 1) {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0369d368;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                              ,0);
LAB_0369d368:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_0369d4b4();
        return;
      }
    }
  }
LAB_0369d404:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


