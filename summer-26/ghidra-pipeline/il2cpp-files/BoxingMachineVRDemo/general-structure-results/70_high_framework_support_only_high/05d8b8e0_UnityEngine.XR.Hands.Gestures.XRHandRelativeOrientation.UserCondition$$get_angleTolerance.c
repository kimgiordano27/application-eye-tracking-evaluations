/*
FUNCTION_NAME: UnityEngine.XR.Hands.Gestures.XRHandRelativeOrientation.UserCondition$$get_angleTolerance
ENTRY_POINT: 05d8b8e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined1  [16]
UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition__get_angleTolerance
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_06b82d77 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676c2a8);
    FUN_02d6084c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    FUN_02d6084c(PTR_DAT_0676c2b0);
    FUN_02d6084c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    FUN_02d6084c(PTR_DAT_0676c2b8);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    DAT_06b82d77 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_04144f6c(*(long *)(param_1 + 0x18),param_3,param_4,
                 *(undefined8 *)
                  Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
  }
  if ((param_2 != 0) && (plVar3 = (long *)FUN_05dbc96c(param_2,0), plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
    uVar5 = FUN_05d8a780(param_1);
    if ((uVar5 & 1) == 0) {
LAB_05d8bbdc:
      auVar10._8_8_ = param_4;
      auVar10._0_8_ = param_3;
      return auVar10;
    }
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (plVar3 = (long *)FUN_033f6288(*(long *)(param_1 + 0x10),plVar3,
                                       *(undefined8 *)
                                        Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__
                                      ), lVar4 != 0)) && (*(long *)(param_1 + 0x10) != 0)) {
      plVar6 = (long *)FUN_033f6288(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar4 + 0x10),
                                    *(undefined8 *)PTR_DAT_0676c2b0);
      if (*(int *)(*(long *)PTR_DAT_0676c2a8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0676c2a8);
      }
      uVar2 = FUN_05cb97e8(0);
      puVar1 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__;
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05d8ba7c;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02d9a5d4(plVar3,*(long *)
                                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__
                              ,1);
LAB_05d8ba7c:
        (*(code *)*puVar7)(plVar3,uVar2,puVar7[1]);
        uVar9 = FUN_05cb98b4(0);
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_05d8bae8;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,3);
LAB_05d8bae8:
        (*(code *)*puVar7)(uVar9,plVar3,puVar7[1]);
        uVar2 = FUN_05cb97e8(0);
        puVar1 = PTR_DAT_0676c2b8;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0676c2b8) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto 
                UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition__CheckConditionBursted_BurstManaged
                ;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0676c2b8,1);

          UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition__CheckConditionBursted_BurstManaged
          :
          (*(code *)*puVar7)(plVar6,uVar2,puVar7[1]);
          uVar9 = FUN_05cb98b4(0);
          lVar4 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_05d8bbcc;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,3);
LAB_05d8bbcc:
          (*(code *)*puVar7)(uVar9,plVar6,puVar7[1]);
          goto LAB_05d8bbdc;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


