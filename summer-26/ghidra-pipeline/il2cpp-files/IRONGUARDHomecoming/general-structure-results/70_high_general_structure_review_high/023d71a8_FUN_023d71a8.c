/*
FUNCTION_NAME: FUN_023d71a8
ENTRY_POINT: 023d71a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_023d71a8(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulong local_48;
  ushort local_34 [2];
  
  puVar7 = *(undefined8 **)(param_3 + 0x38);
  if (puVar7 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<GeometryChangedEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__);
    puVar7 = *(undefined8 **)(param_3 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar7 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_48 = 0;
  uVar10 = *puVar7;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar10 = FUN_03579868(uVar10,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar2 = FUN_03916c60(uVar10,0);
  if ((uVar2 & 1) == 0) {
    uVar10 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar5 = (long *)FUN_03579868(uVar10,0);
    FUN_01bc50c0();
    uVar10 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar10 = FUN_0340ebc0(uVar3,uVar10,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar3,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,param_3);
  }
  if (((*(ushort *)(param_1 + 7) & 0xff00) == 0xe00) && ((*(ushort *)(param_1 + 7) & 0xff) != 0)) {
    uVar10 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03579868(uVar10,0);
    uVar3 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar2 = FUN_03582560(uVar10,uVar3,0);
    if ((uVar2 & 1) != 0) {
      lVar8 = param_1[8];
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0391b5b8(lVar8,0);
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      if (lVar8 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar8,lVar11);
        if (lVar4 == 0) {
LAB_023d73c0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar8,lVar11);
        }
      }
      *param_2 = lVar4;
      lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      if (lVar8 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar8,lVar11);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar8,lVar11);
        }
      }
      thunk_FUN_01f51358(param_2,lVar4);
      return 1;
    }
    (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
    local_34[0] = *(ushort *)(param_1 + 7);
    if (((local_34[0] & 0xff00) == 0xe00) && ((local_34[0] & 0xff) != 0)) {
      lVar8 = param_1[8];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03532f80(0);
      uVar2 = FUN_0356a664(lVar8,0x1ff,uVar10,&local_48,0);
      if ((uVar2 & 1) != 0) {
        FUN_038f09fc(param_1,0);
        FUN_038d84c4(param_1,0);
        uVar2 = local_48;
        lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        lVar8 = FUN_01f08890(lVar8,uVar2 & 0xffffffff);
        *param_2 = lVar8;
        thunk_FUN_01f51358(param_2,lVar8);
        lVar8 = param_1[0xb];
        uVar10 = **(undefined8 **)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        if (lVar8 != 0) {
          lVar8 = FUN_02b6b264(lVar8,uVar10,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                              );
          lVar11 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          if (lVar8 == 0) {
            if (0 < (long)local_48) goto LAB_023d7810;
          }
          else {
            lVar4 = thunk_FUN_01f116d0(lVar8,lVar11);
            if (lVar4 == 0) goto LAB_023d73c0;
            if (0 < (long)local_48) {
              lVar8 = 0;
              iVar9 = 1;
              do {
                lVar11 = *param_2;
                uVar10 = (**(code **)(lVar4 + 0x18))
                                   (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
                if (lVar11 == 0) goto LAB_023d7810;
                if (*(uint *)(lVar11 + 0x18) <= iVar9 - 1U) goto LAB_023d7814;
                *(undefined8 *)(lVar11 + lVar8 * 8 + 0x20) = uVar10;
                lVar8 = (long)iVar9;
                lVar11 = (long)iVar9;
                iVar9 = iVar9 + 1;
              } while (lVar11 < (long)local_48);
            }
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          return 1;
        }
        goto LAB_023d7810;
      }
      lVar8 = FUN_038d7894(param_1,0);
      if ((lVar8 == 0) || (lVar8 = FUN_0390b368(lVar8,0), lVar8 == 0)) goto LAB_023d7810;
      lVar8 = FUN_0390b70c(lVar8,0);
      uVar10 = FUN_0340ebc0(*(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__,
                            param_1[8],
                            *(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
    }
    else {
      lVar8 = FUN_038d7894(param_1,0);
      if ((lVar8 == 0) || (lVar8 = FUN_0390b368(lVar8,0), lVar8 == 0)) goto LAB_023d7810;
      lVar8 = FUN_0390b70c(lVar8,0);
      lVar11 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar11 == 0) goto LAB_023d7810;
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_023d7814:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar11 + 0x20) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
      thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x20));
      local_60 = *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      local_50 = 0xc;
      uStack_58 = 0xffffffffffffffff;
      uVar10 = FUN_0359ff90(&local_60,0);
      if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_023d7814;
      *(undefined8 *)(lVar11 + 0x28) = uVar10;
      thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28),uVar10);
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_023d7814;
      *(undefined8 *)(lVar11 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30));
      local_34[0] = *(ushort *)(param_1 + 7);
      uVar10 = FUN_0332bb08(local_34,*(undefined8 *)
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                           );
      if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_023d7814;
      *(undefined8 *)(lVar11 + 0x38) = uVar10;
      thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38),uVar10);
      if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_023d7814;
      *(undefined8 *)(lVar11 + 0x40) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar10 = FUN_0340efe8(lVar11,0);
    }
    if (lVar8 == 0) {
LAB_023d7810:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0390b840(lVar8,uVar10,0);
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    lVar8 = FUN_01f08890(lVar8,0);
    *param_2 = lVar8;
  }
  else {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    *param_2 = 0;
    lVar8 = 0;
  }
  thunk_FUN_01f51358(param_2,lVar8);
  return 0;
}


