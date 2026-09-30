/*
FUNCTION_NAME: FUN_022a6fbc
ENTRY_POINT: 022a6fbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_022a6fbc(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_98;
  undefined8 auStack_90 [5];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(param_3 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<DetachFromPanelEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<GeometryChangedEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    puVar10 = *(undefined8 **)(param_3 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar10 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_98 = 0;
  auStack_90[0] = 0;
  uVar15 = *puVar10;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar4 = FUN_03916c60(uVar15,0);
  if ((uVar4 & 1) == 0) {
    uVar15 = **(undefined8 **)(param_3 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar7 = (long *)FUN_03579868(uVar15,0);
    FUN_01bc50c0();
    uVar15 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar15 = FUN_0340ebc0(uVar5,uVar15,uVar8,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar5,uVar15,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_3);
  }
  if ((char)param_1[9] == '\0') {
    (**(code **)(*param_1 + 0x498))(param_1,auStack_90,*(undefined8 *)(*param_1 + 0x4a0));
  }
  if (((*(ushort *)(param_1 + 9) & 0xff00) == 0xe00) && ((*(ushort *)(param_1 + 9) & 0xff) != 0)) {
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    thunk_FUN_01f51358(param_1 + 10,0);
    iVar9 = *(int *)((long)param_1 + 0x44);
    *(undefined1 *)((long)param_1 + 0x4a) = 0;
    if (iVar9 == 0) {
      FUN_038dd5c8(param_1,0);
      iVar9 = *(int *)((long)param_1 + 0x44);
    }
    iVar11 = (int)param_1[8] + 4;
    if (iVar11 <= iVar9) {
      lVar13 = param_1[7];
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = lVar13 + 0x20;
        }
      }
      iVar1 = *(int *)(lVar13 + (int)param_1[8]);
      *(int *)(param_1 + 8) = iVar11;
      if (iVar9 == 0) {
        FUN_038dd5c8(param_1,0);
        iVar11 = (int)param_1[8];
        iVar9 = *(int *)((long)param_1 + 0x44);
      }
      iVar12 = iVar11 + 4;
      if (iVar12 <= iVar9) {
        lVar13 = param_1[7];
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x18) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = lVar13 + 0x20;
          }
        }
        iVar11 = *(int *)(lVar13 + iVar11);
        *(int *)(param_1 + 8) = iVar12;
        iVar11 = iVar11 * iVar1;
        if (iVar9 == 0) {
          FUN_038dd5c8(param_1,0);
          iVar12 = (int)param_1[8];
          iVar9 = *(int *)((long)param_1 + 0x44);
        }
        if (iVar12 + iVar11 <= iVar9) {
          uVar15 = **(undefined8 **)(param_3 + 0x38);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar15 = FUN_03579868(uVar15,0);
          uVar5 = FUN_03579868(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                               ,0);
          uVar4 = FUN_03582560(uVar15,uVar5,0);
          if ((uVar4 & 1) == 0) {
            lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01ecaf44();
            }
            lVar13 = FUN_01f08890(lVar13,iVar1);
            *param_2 = lVar13;
            thunk_FUN_01f51358(param_2,lVar13);
            local_98 = FUN_034a48dc(*param_2,3,0);
            lVar13 = param_1[7];
            if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) == 0)) {
              lVar13 = 0;
            }
            else {
              lVar13 = lVar13 + 0x20;
            }
            lVar14 = param_1[8];
            uVar15 = FUN_034a47ec(&local_98,0);
            FUN_03952c90(lVar13 + (int)lVar14,uVar15,iVar11,0);
            FUN_034a48f0(&local_98,0);
          }
          else {
            lVar13 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,iVar11);
            FUN_03596b60(param_1[7],(int)param_1[8],lVar13,0,iVar11,0);
            lVar14 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            if (lVar13 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01f116d0(lVar13,lVar14);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar13,lVar14);
              }
            }
            *param_2 = lVar6;
            lVar14 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            if (lVar13 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01f116d0(lVar13,lVar14);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar13,lVar14);
              }
            }
            thunk_FUN_01f51358(param_2,lVar6);
          }
          uVar15 = 1;
          *(int *)(param_1 + 8) = (int)param_1[8] + iVar11;
          goto LAB_022a7220;
        }
      }
    }
    *(int *)(param_1 + 8) = iVar9;
  }
  else {
    (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  }
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  uVar15 = 0;
LAB_022a7220:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}


