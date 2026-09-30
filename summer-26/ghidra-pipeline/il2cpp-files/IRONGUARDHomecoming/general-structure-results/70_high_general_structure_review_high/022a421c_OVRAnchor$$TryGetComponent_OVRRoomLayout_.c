/*
FUNCTION_NAME: OVRAnchor$$TryGetComponent<OVRRoomLayout>
ENTRY_POINT: 022a421c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 OVRAnchor__TryGetComponent<OVRRoomLayout>(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  long lVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
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
  puVar9 = *(undefined8 **)(unaff_x21 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_01ecafa0();
    puVar9 = *(undefined8 **)(unaff_x21 + 0x38);
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
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
  uVar3 = FUN_03916c60(uVar13,0);
  if ((uVar3 & 1) == 0) {
    uVar13 = **(undefined8 **)(unaff_x21 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar6 = (long *)FUN_03579868(uVar13,0);
    FUN_01bc50c0();
    uVar13 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar13 = FUN_0340ebc0(uVar4,uVar13,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar13,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4);
  }
  if ((char)unaff_x19[9] == '\0') {
    (**(code **)(*unaff_x19 + 0x498))();
  }
  if (((*(ushort *)(unaff_x19 + 9) & 0xff00) == 0xe00) && ((*(ushort *)(unaff_x19 + 9) & 0xff) != 0)
     ) {
    unaff_x19[10] = 0;
    *(undefined2 *)(unaff_x19 + 9) = 0;
    thunk_FUN_01f51358(unaff_x19 + 10,0);
    iVar8 = *(int *)((long)unaff_x19 + 0x44);
    *(undefined1 *)((long)unaff_x19 + 0x4a) = 0;
    if (iVar8 == 0) {
      FUN_038dd5c8();
      iVar8 = *(int *)((long)unaff_x19 + 0x44);
    }
    iVar10 = (int)unaff_x19[8] + 4;
    if (iVar10 <= iVar8) {
      lVar12 = unaff_x19[7];
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x18) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = lVar12 + 0x20;
        }
      }
      iVar1 = *(int *)(lVar12 + (int)unaff_x19[8]);
      *(int *)(unaff_x19 + 8) = iVar10;
      if (iVar8 == 0) {
        FUN_038dd5c8();
        iVar10 = (int)unaff_x19[8];
        iVar8 = *(int *)((long)unaff_x19 + 0x44);
      }
      iVar11 = iVar10 + 4;
      if (iVar11 <= iVar8) {
        lVar12 = unaff_x19[7];
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = lVar12 + 0x20;
          }
        }
        iVar10 = *(int *)(lVar12 + iVar10);
        *(int *)(unaff_x19 + 8) = iVar11;
        iVar10 = iVar10 * iVar1;
        if (iVar8 == 0) {
          FUN_038dd5c8();
          iVar11 = (int)unaff_x19[8];
          iVar8 = *(int *)((long)unaff_x19 + 0x44);
        }
        if (iVar11 + iVar10 <= iVar8) {
          uVar13 = **(undefined8 **)(unaff_x21 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar4 = FUN_03579868(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                               ,0);
          uVar3 = FUN_03582560(uVar13,uVar4,0);
          if ((uVar3 & 1) == 0) {
            lVar12 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44();
            }
            lVar12 = FUN_01f08890(lVar12,iVar1);
            *unaff_x20 = lVar12;
            thunk_FUN_01f51358();
            in_stack_00000010 = FUN_034a48dc(*unaff_x20,3,0);
            lVar12 = unaff_x19[7];
            if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) {
              lVar12 = 0;
            }
            else {
              lVar12 = lVar12 + 0x20;
            }
            lVar14 = unaff_x19[8];
            uVar13 = FUN_034a47ec(&stack0x00000010,0);
            FUN_03952c90(lVar12 + (int)lVar14,uVar13,iVar10,0);
            FUN_034a48f0(&stack0x00000010,0);
          }
          else {
            lVar12 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,iVar10);
            FUN_03596b60(unaff_x19[7],(int)unaff_x19[8],lVar12,0,iVar10,0);
            lVar14 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            if (lVar12 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = thunk_FUN_01f116d0(lVar12,lVar14);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar12,lVar14);
              }
            }
            *unaff_x20 = lVar5;
            lVar14 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            if ((lVar12 != 0) && (lVar5 = thunk_FUN_01f116d0(lVar12,lVar14), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar12,lVar14);
            }
            thunk_FUN_01f51358();
          }
          *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + iVar10;
          return 1;
        }
      }
    }
    *(int *)(unaff_x19 + 8) = iVar8;
  }
  else {
    (**(code **)(*unaff_x19 + 0x5e8))();
  }
  *unaff_x20 = 0;
  thunk_FUN_01f51358();
  return 0;
}


