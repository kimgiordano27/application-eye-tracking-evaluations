/*
FUNCTION_NAME: FUN_023f26a0
ENTRY_POINT: 023f26a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_023f26a0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_38;
  
                    /* try { // try from 023f26b4 to 024f26b7 has its CatchHandler @ 023f26c0 */
  puVar9 = *(undefined8 **)(param_3 + 0x38);
                    /* try { // try from 023f26b8 to 024f26ef has its CatchHandler @ 023f23b4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f26b4 with catch @ 023f26c0
                        */
  if (puVar9 == (undefined8 *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f268c with catch @ 023f26cc
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ParseElement__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    puVar9 = *(undefined8 **)(param_3 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar9 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_38 = 0;
  uVar13 = *puVar9;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar4 = FUN_03916c60(uVar13,0);
  uVar13 = **(undefined8 **)(param_3 + 0x38);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar7 = (long *)FUN_03579868(uVar13,0);
    FUN_01bc50c0();
    uVar13 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar13 = FUN_0340ebc0(uVar5,uVar13,uVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar5,uVar13,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  uVar5 = FUN_03579868(*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                       ,0);
  uVar4 = FUN_03582560(uVar13,uVar5,0);
  if ((uVar4 & 1) == 0) {
    lVar6 = FUN_038f3358(param_1,0);
    puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    uStack_90 = 0;
    local_88 = 0;
    local_98 = **(undefined8 **)
                 (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                 );
    thunk_FUN_01f51358(&local_98);
    uStack_90 = CONCAT71(uStack_90._1_7_,0xe);
    if (param_2 != 0) {
      local_38 = (long)*(int *)(param_2 + 0x18);
      if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03532f80(0);
      local_88 = FUN_03569988(&local_38,uVar13,0);
      thunk_FUN_01f51358(&local_88);
      if (lVar6 != 0) {
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = local_88;
            *(undefined8 *)(lVar10 + 0x28) = uStack_90;
            *(undefined8 *)(lVar10 + 0x20) = local_98;
            thunk_FUN_01f51358(lVar10 + 0x20,0);
          }
          else {
            uStack_58 = uStack_90;
            local_60 = local_98;
            local_50 = local_88;
            FUN_031433d8(lVar6,&local_60,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (param_1 != (long *)0x0) {
            FUN_038d84c4(param_1,0);
            lVar6 = param_1[7];
            uVar13 = **(undefined8 **)(param_3 + 0x38);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            if (lVar6 != 0) {
              lVar6 = FUN_02b6b264(lVar6,uVar13,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                                  );
              lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01ecaf44(lVar10);
              }
              if (lVar6 == 0) {
                lVar12 = 0;
              }
              else {
                lVar12 = thunk_FUN_01f116d0(lVar6,lVar10);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(lVar6,lVar10);
                }
              }
              if (0 < (int)*(ulong *)(param_2 + 0x18)) {
                uVar4 = 0;
                uVar11 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
                do {
                  if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  if (lVar12 == 0) goto LAB_023f2bbc;
                  (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),
                             **(undefined8 **)(*(long *)puVar3 + 0xb8),
                             *(undefined2 *)(param_2 + 0x20 + uVar4 * 2),
                             *(undefined8 *)(lVar12 + 0x28));
                  uVar11 = (ulong)*(uint *)(param_2 + 0x18);
                  uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
              }
              (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
              return;
            }
          }
        }
      }
    }
    goto LAB_023f2bbc;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0) == 0
     ) {
    thunk_FUN_01ee6d7c();
    if (param_2 != 0) goto LAB_023f2818;
LAB_023f2a1c:
    lVar6 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_023f2a1c;
LAB_023f2818:
    uVar13 = *(undefined8 *)Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    lVar6 = thunk_FUN_01f116d0(param_2,uVar13);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,uVar13);
    }
  }
  uVar13 = FUN_0391b48c(lVar6,1,0);
  lVar6 = FUN_038f3358(param_1,0);
  uStack_90 = 0;
  local_88 = 0;
  local_98 = **(undefined8 **)
               (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  thunk_FUN_01f51358(&local_98);
  uStack_90 = CONCAT71(uStack_90._1_7_,0xe);
  local_88 = uVar13;
  thunk_FUN_01f51358(&local_88,uVar13);
  if (lVar6 != 0) {
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar12 = *(long *)Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar10 + 0x30) = local_88;
        *(undefined8 *)(lVar10 + 0x28) = uStack_90;
        *(undefined8 *)(lVar10 + 0x20) = local_98;
        thunk_FUN_01f51358(lVar10 + 0x20,0);
      }
      else {
        uStack_58 = uStack_90;
        local_60 = local_98;
        local_50 = local_88;
        FUN_031433d8(lVar6,&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_023f2bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


