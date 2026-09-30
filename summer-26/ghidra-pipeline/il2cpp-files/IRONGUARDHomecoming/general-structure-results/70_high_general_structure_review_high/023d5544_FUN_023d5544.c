/*
FUNCTION_NAME: FUN_023d5544
ENTRY_POINT: 023d5544
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


undefined8 FUN_023d5544(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulong local_48;
  ushort local_34 [2];
  
                    /* try { // try from 023d554c to 024d5557 has its CatchHandler @ 023d55a4 */
  puVar8 = *(undefined8 **)(param_3 + 0x38);
                    /* try { // try from 023d5568 to 024d5577 has its CatchHandler @ 023d55a8 */
  if (puVar8 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
                    /* try { // try from 023d5578 to 024d559b has its CatchHandler @ 023d54a0 */
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                      );
                    /* try { // try from 023d559c to 024d559f has its CatchHandler @ 023d55a8 */
                    /* try { // try from 023d55a0 to 024d55bf has its CatchHandler @ 023d54a0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023d554c with catch @ 023d55a4
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023d5568 with catch @ 023d55a8
                       catch(type#1 @ 042b3198) { ... } // from try @ 023d559c with catch @ 023d55a8
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                      );
                    /* try { // try from 023d55c0 to 024d55db has its CatchHandler @ 023d5720 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<GeometryChangedEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
                    /* try { // try from 023d55dc to 024d5707 has its CatchHandler @ 023d54a0 */
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
  local_48 = 0;
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
LAB_023d575c:
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
    local_34[0] = *(ushort *)(param_1 + 7);
    if (((local_34[0] & 0xff00) == 0xe00) && ((local_34[0] & 0xff) != 0)) {
      lVar9 = param_1[8];
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03532f80(0);
      uVar3 = FUN_0356a664(lVar9,0x1ff,uVar11,&local_48,0);
      if ((uVar3 & 1) != 0) {
        FUN_038f09fc(param_1,0);
        FUN_038d84c4(param_1,0);
        uVar3 = local_48;
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
            if (0 < (long)local_48) goto LAB_023d5bb0;
          }
          else {
            lVar5 = thunk_FUN_01f116d0(lVar9,lVar12);
            if (lVar5 == 0) goto LAB_023d575c;
            if (0 < (long)local_48) {
              lVar9 = 0;
              iVar10 = 1;
              do {
                lVar12 = *param_2;
                bVar2 = (**(code **)(lVar5 + 0x18))
                                  (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                if (lVar12 == 0) goto LAB_023d5bb0;
                if (*(uint *)(lVar12 + 0x18) <= iVar10 - 1U) goto LAB_023d5bb4;
                *(byte *)(lVar12 + lVar9 + 0x20) = bVar2 & 1;
                lVar9 = (long)iVar10;
                lVar12 = (long)iVar10;
                iVar10 = iVar10 + 1;
              } while (lVar12 < (long)local_48);
            }
          }
          (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          return 1;
        }
        goto LAB_023d5bb0;
      }
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023d5bb0;
      lVar9 = FUN_0390b70c(lVar9,0);
      uVar11 = FUN_0340ebc0(*(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__,
                            param_1[8],
                            *(undefined8 *)
                             Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__,0);
    }
    else {
      lVar9 = FUN_038d7894(param_1,0);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_023d5bb0;
      lVar9 = FUN_0390b70c(lVar9,0);
      lVar12 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar12 == 0) goto LAB_023d5bb0;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_023d5bb4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x20) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_GetNotNull__;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x20));
      local_60 = *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      local_50 = 0xc;
      uStack_58 = 0xffffffffffffffff;
      uVar11 = FUN_0359ff90(&local_60,0);
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_023d5bb4;
      *(undefined8 *)(lVar12 + 0x28) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x28),uVar11);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_023d5bb4;
      *(undefined8 *)(lVar12 + 0x30) =
           *(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_OnStartElement__;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x30));
      local_34[0] = *(ushort *)(param_1 + 7);
      uVar11 = FUN_0332bb08(local_34,*(undefined8 *)
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                           );
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_023d5bb4;
      *(undefined8 *)(lVar12 + 0x38) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x38),uVar11);
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_023d5bb4;
      *(undefined8 *)(lVar12 + 0x40) =
           *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
      thunk_FUN_01f51358();
      uVar11 = FUN_0340efe8(lVar12,0);
    }
    if (lVar9 == 0) {
LAB_023d5bb0:
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


