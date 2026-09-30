/*
FUNCTION_NAME: FUN_0369d0d4
ENTRY_POINT: 0369d0d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0369d0d4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_04833f3b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_RemoveDirectory__);
    DAT_04833f3b = 1;
  }
  puVar1 = Method_System_IO_FileSystem_RemoveDirectory__;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (plVar7 == (long *)0x0) goto LAB_0369d404;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0369d180;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,6);
LAB_0369d180:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 1) {
      plVar7 = *(long **)(param_1 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_0369d404;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_0369d1ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,6);
LAB_0369d1ec:
      iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_0369d274;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_0369d404;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0369d260;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                            ,0);
LAB_0369d260:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(param_1);
    }
  }
LAB_0369d274:
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0369d2cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,6);
LAB_0369d2cc:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(char *)(param_1 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x60) != '\0') {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0369d3e8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                              ,0);
LAB_0369d3e8:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(param_1);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x40) != 1) {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0369d368;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                              ,0);
LAB_0369d368:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_0369d4b4(param_1);
        return;
      }
    }
  }
LAB_0369d404:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


