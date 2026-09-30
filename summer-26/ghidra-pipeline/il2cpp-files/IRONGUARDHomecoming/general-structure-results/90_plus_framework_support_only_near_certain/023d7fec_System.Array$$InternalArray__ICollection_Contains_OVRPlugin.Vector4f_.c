/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4f>
ENTRY_POINT: 023d7fec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4f>
          (long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar8 = *(undefined8 **)(param_3 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
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
    puVar8 = *(undefined8 **)(param_3 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar8 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  in_stack_00000018 = 0;
  uVar11 = *puVar8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar3 = FUN_03916c60(uVar11,0);
  if ((uVar3 & 1) == 0) {
    uVar11 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar6 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar11 = FUN_0340ebc0(uVar4,uVar11,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_3);
  }
  if (((*(ushort *)(param_1 + 7) & 0xff00) == 0xe00) && ((*(ushort *)(param_1 + 7) & 0xff) != 0)) {
    uVar11 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar4 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar3 = FUN_03582560(uVar11,uVar4,0);
    if ((uVar3 & 1) != 0) {
      lVar9 = param_1[8];
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_0391b5b8(lVar9,0);
      lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      if (lVar9 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01f116d0(lVar9,lVar12);
        if (lVar5 == 0) {
LAB_023d81f0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar12);
        }
      }
      *param_2 = lVar5;
      lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      if (lVar9 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01f116d0(lVar9,lVar12);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar12);
        }
      }
      thunk_FUN_01f51358(param_2,lVar5);
      return 1;
    }
    (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
    in_stack_00000028._4_2_ = *(ushort *)(param_1 + 7);
    if (((in_stack_00000028._4_2_ & 0xff00) == 0xe00) && ((in_stack_00000028._4_2_ & 0xff) != 0)) {
      lVar9 = param_1[8];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03532f80(0);
      uVar3 = FUN_0356a664(lVar9,0x1ff,uVar11,&stack0x00000018,0);
      if ((uVar3 & 1) != 0) {
        FUN_038f09fc(param_1,0);
        FUN_038d84c4(param_1,0);
        uVar3 = in_stack_00000018;
        lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
        }
        lVar9 = FUN_01f08890(lVar9,uVar3 & 0xffffffff);
        *param_2 = lVar9;
        thunk_FUN_01f51358(param_2,lVar9);
        lVar9 = param_1[0xb];
        uVar11 = **(undefined8 **)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (lVar9 != 0) {
          lVar9 = FUN_02b6b264(lVar9,uVar11,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                              );
          lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          if (lVar9 == 0) {
            if (0 < (long)in_stack_00000018) goto LAB_023d8640;
          }
          else {
            lVar5 = thunk_FUN_01f116d0(lVar9,lVar12);
            if (lVar5 == 0) goto LAB_023d81f0;
            if (0 < (long)in_stack_00000018) {
              lVar9 = 0;
              iVar10 = 1;
              do {
                lVar12 = *param_2;
                uVar2 = (**(code **)(lVar5 + 0x18))
                                  (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                if (lVar12 == 0) goto LAB_023d8640;
                if (*(uint *)(lVar12 + 0x18) <= iVar10 - 1U) goto LAB_023d8644;
                *(undefined2 *)(lVar12 + lVar9 * 2 + 0x20) = uVar2;
                lVar9 = (long)iVar10;
                lVar12 = (long)iVar10;
                iVar10 = iVar10 + 1;
              } while (lVar12 < (long)in_stack_00000018);
            }
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          return 1;
        }
        goto LAB_023d8640;
      }
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023d8640;
      lVar9 = FUN_0390b70c(lVar9,0);
      uVar11 = FUN_0340ebc0(*(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__,
                            param_1[8],
                            *(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
    }
    else {
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023d8640;
      lVar9 = FUN_0390b70c(lVar9,0);
      lVar12 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar12 == 0) goto LAB_023d8640;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_023d8644:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x20) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x20));
      uVar11 = FUN_0359ff90();
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_023d8644;
      *(undefined8 *)(lVar12 + 0x28) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x28),uVar11);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_023d8644;
      *(undefined8 *)(lVar12 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x30));
      in_stack_00000028._4_2_ = *(ushort *)(param_1 + 7);
      uVar11 = FUN_0332bb08((long)&stack0x00000028 + 4,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                           );
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_023d8644;
      *(undefined8 *)(lVar12 + 0x38) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x38),uVar11);
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_023d8644;
      *(undefined8 *)(lVar12 + 0x40) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar11 = FUN_0340efe8(lVar12,0);
    }
    if (lVar9 == 0) {
LAB_023d8640:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0390b840(lVar9,uVar11,0);
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    lVar9 = FUN_01f08890(lVar9,0);
    *param_2 = lVar9;
  }
  else {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
    *param_2 = 0;
    lVar9 = 0;
  }
  thunk_FUN_01f51358(param_2,lVar9);
  return 0;
}


