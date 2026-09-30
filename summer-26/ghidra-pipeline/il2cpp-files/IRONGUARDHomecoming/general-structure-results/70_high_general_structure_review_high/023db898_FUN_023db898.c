/*
FUNCTION_NAME: FUN_023db898
ENTRY_POINT: 023db898
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_023db898(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *__src;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  ulong local_78;
  ushort local_6c [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
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
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(puVar8[6] + 0xfc);
  __src = auStack_a0 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  local_78 = 0;
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
    plVar13 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
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
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      if (lVar9 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01f116d0(lVar9,lVar10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar10);
        }
      }
      *param_2 = lVar5;
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      if (lVar9 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01f116d0(lVar9,lVar10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar10);
        }
      }
      thunk_FUN_01f51358(param_2,lVar5);
LAB_023dbeb4:
      uVar11 = 1;
      goto LAB_023dbf64;
    }
    (**(code **)(*param_1 + 0x628))(param_1,*(undefined8 *)(*param_1 + 0x630));
    local_6c[0] = *(ushort *)(param_1 + 7);
    if (((local_6c[0] & 0xff00) == 0xe00) && ((local_6c[0] & 0xff) != 0)) {
      lVar9 = param_1[8];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03532f80(0);
      uVar3 = FUN_0356a664(lVar9,0x1ff,uVar11,&local_78,0);
      if ((uVar3 & 1) != 0) {
        FUN_038f09fc(param_1,0);
        FUN_038d84c4(param_1,0);
        uVar3 = local_78;
        lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44();
        }
        lVar9 = FUN_01f08890(lVar9,uVar3 & 0xffffffff);
        *param_2 = lVar9;
        thunk_FUN_01f51358(param_2,lVar9);
        lVar9 = param_1[0xb];
        uVar11 = **(undefined8 **)(param_3 + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (lVar9 == 0) goto LAB_023dbfc0;
        lVar9 = FUN_02b6b264(lVar9,uVar11,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                            );
        lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
        local_98 = lVar6;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (lVar9 == 0) {
          if (0 < (long)local_78) goto LAB_023dbfc0;
        }
        else {
          lVar6 = thunk_FUN_01f116d0(lVar9,lVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar9,lVar10);
          }
          if (0 < (long)local_78) {
            lVar9 = 0;
            iVar12 = 1;
            do {
              plVar13 = (long *)*param_2;
              puVar8 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28);
              local_90 = __src;
              (*(code *)puVar8[2])(*puVar8,puVar8,lVar6,&local_90,__src);
              if (plVar13 == (long *)0x0) goto LAB_023dbfc0;
              if (*(uint *)(plVar13 + 3) <= iVar12 - 1U) goto LAB_023dbfbc;
              memcpy((void *)((long)plVar13 + lVar9 * (ulong)*(uint *)(*plVar13 + 0x104) + 0x20),
                     __src,(ulong)uVar1);
              lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x30);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44();
              }
              if (*(uint *)(plVar13 + 3) <= iVar12 - 1U) goto LAB_023dbfbc;
              FUN_01f087b0(lVar10,(long)plVar13 + lVar9 * (ulong)*(uint *)(*plVar13 + 0x104) + 0x20,
                           __src);
              lVar9 = (long)iVar12;
              lVar10 = (long)iVar12;
              iVar12 = iVar12 + 1;
            } while (lVar10 < (long)local_78);
          }
        }
        (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
        lVar6 = local_98;
        goto LAB_023dbeb4;
      }
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023dbfc0;
      lVar9 = FUN_0390b70c(lVar9,0);
      uVar11 = FUN_0340ebc0(*(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__,
                            param_1[8],
                            *(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
    }
    else {
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023dbfc0;
      lVar9 = FUN_0390b70c(lVar9,0);
      lVar10 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar10 == 0) goto LAB_023dbfc0;
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_023dbfbc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar10 + 0x20) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x20));
      local_90 = *(undefined1 **)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      local_80 = 0xc;
      uStack_88 = 0xffffffffffffffff;
      uVar11 = FUN_0359ff90(&local_90,0);
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_023dbfbc;
      *(undefined8 *)(lVar10 + 0x28) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar11);
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_023dbfbc;
      *(undefined8 *)(lVar10 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x30));
      local_6c[0] = *(ushort *)(param_1 + 7);
      uVar11 = FUN_0332bb08(local_6c,*(undefined8 *)
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                           );
      if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_023dbfbc;
      *(undefined8 *)(lVar10 + 0x38) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x38),uVar11);
      if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_023dbfbc;
      *(undefined8 *)(lVar10 + 0x40) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar11 = FUN_0340efe8(lVar10,0);
    }
    if (lVar9 == 0) {
LAB_023dbfc0:
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
  uVar11 = 0;
LAB_023dbf64:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


