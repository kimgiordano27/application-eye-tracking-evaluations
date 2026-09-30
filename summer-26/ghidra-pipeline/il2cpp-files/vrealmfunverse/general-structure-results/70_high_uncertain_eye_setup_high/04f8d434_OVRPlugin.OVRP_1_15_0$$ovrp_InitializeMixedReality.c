/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 04f8d434
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_066c9d8b & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_EventCallback<PointerLeaveEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_PointerModel_var);
    DAT_066c9d8b = 1;
  }
  if (param_1[0xe] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    lVar10 = param_1[0xe];
    if (lVar10 == 0) {
LAB_04f8d594:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (iVar1 != *(int *)(lVar10 + 0x10)) {
      uVar3 = FUN_04332268(param_1,*(undefined8 *)
                                    UnityEngine_UIElements_EventCallback<PointerLeaveEvent>_TypeInfo
                          );
      uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      plVar4 = (long *)FUN_04f89c80(param_1);
      if (plVar4 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04f8d558;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02b7654c(plVar4,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,0);
LAB_04f8d558:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) goto LAB_04f8d594;
      }
      FUN_04f8d598(lVar10,uVar3,uVar2,uVar6);
      return;
    }
  }
  return;
}


