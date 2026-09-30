/*
FUNCTION_NAME: FUN_02db9918
ENTRY_POINT: 02db9918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long * FUN_02db9918(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_048316cd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<PointerEventData>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<float>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<string>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Vector2>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_EventDispatcher_ProcessEventQueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_EventDispatcherGate__ctor__);
    thunk_FUN_01efb3a4(Method_System_Reflection_EventInfo_GetEventFromHandle__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<TMP_SpriteCharacter,_uint>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_EventInterestReflectionUtils_GetEventCategory__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__)
    ;
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048316cd = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  puVar3 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  plVar6 = (long *)FUN_03579868(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_02db9f38;
  }
  uVar12 = FUN_03579868(*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                        ,0);
  uVar7 = FUN_03582560(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar7 = FUN_03582560(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventDispatcher_ProcessEventQueue__
                                         );
      FUN_0354b200(plVar6,0);
      goto LAB_02db9b1c;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_03579868(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_02db9f40:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_02db9f40;
      uVar7 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
      if ((uVar7 & 1) == 0) {
LAB_02db9e1c:
        uVar7 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
        if ((uVar7 & 1) == 0) {
switchD_02db9e9c_default:
          lVar5 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          plVar6 = (long *)thunk_FUN_01f117cc();
          lVar5 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          FUN_025c0ec0(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_0359deb8(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar4 = FUN_03585170(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)
                    Method_UnityEngine_UIElements_EventInterestReflectionUtils_GetEventCategory__;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)Method_Unity_VisualScripting_EventBus_Trigger<float>__;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)
                    Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)Method_UnityEngine_UIElements_EventDispatcherGate__ctor__;
          break;
        default:
          goto switchD_02db9e9c_default;
        }
        goto LAB_02db9b94;
      }
      uVar12 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      uVar13 = *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteCharacter,_uint>__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar7 = FUN_03582560(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_02db9e1c;
      lVar5 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
      if (lVar5 == 0) goto LAB_02db9f40;
      if (*(int *)(lVar5 + 0x18) == 0) {
System_Collections_Generic_ArraySortHelper<InputDeviceDescription>__BinarySearch:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
      }
      uVar12 = *(undefined8 *)Method_Unity_VisualScripting_EventBus_Trigger<Vector2>__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar8 = (long *)FUN_03579868(uVar12,0);
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,1);
      if (plVar9 == (long *)0x0) goto LAB_02db9f40;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,0);
      }
      if ((int)plVar9[3] == 0)
      goto System_Collections_Generic_ArraySortHelper<InputDeviceDescription>__BinarySearch;
      plVar9[4] = (long)plVar10;
      thunk_FUN_01f51358(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x928))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x930)),
         plVar8 == (long *)0x0)) goto LAB_02db9f40;
      uVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2b0));
      if ((uVar7 & 1) == 0) goto LAB_02db9e1c;
      uVar12 = *(undefined8 *)Method_System_Reflection_EventInfo_GetEventFromHandle__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)Method_Unity_VisualScripting_EventBus_Trigger<string>__;
LAB_02db9b94:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_035aba80(uVar12,plVar6,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Unity_VisualScripting_EventBus_Trigger<PointerEventData>__
                                       );
    FUN_0354b100(plVar6,0);
LAB_02db9b1c:
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_02db9f38:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
  }
  return plVar6;
}


