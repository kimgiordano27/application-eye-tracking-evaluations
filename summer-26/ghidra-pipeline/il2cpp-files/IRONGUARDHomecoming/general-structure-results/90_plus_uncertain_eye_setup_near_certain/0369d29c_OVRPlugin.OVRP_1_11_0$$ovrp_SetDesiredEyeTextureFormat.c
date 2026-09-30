/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_SetDesiredEyeTextureFormat
ENTRY_POINT: 0369d29c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_11_0__ovrp_SetDesiredEyeTextureFormat
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_01ecb238();
      goto LAB_0369d2cc;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
LAB_0369d2cc:
  iVar1 = (*(code *)*puVar2)();
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


