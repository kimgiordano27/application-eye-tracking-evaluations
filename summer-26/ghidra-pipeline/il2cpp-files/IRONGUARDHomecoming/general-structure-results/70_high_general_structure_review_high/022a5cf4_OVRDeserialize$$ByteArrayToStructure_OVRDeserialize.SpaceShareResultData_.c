/*
FUNCTION_NAME: OVRDeserialize$$ByteArrayToStructure<OVRDeserialize.SpaceShareResultData>
ENTRY_POINT: 022a5cf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 OVRDeserialize__ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x25;
  undefined8 in_stack_00000010;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  uVar2 = FUN_03916c60();
  if ((uVar2 & 1) == 0) {
    uVar11 = **(undefined8 **)(unaff_x21 + 0x38);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar5 = (long *)FUN_03579868(uVar11,0);
    FUN_01bc50c0();
    uVar11 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                              );
    uVar11 = FUN_0340ebc0(uVar3,uVar11,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar3,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3);
  }
  if ((char)unaff_x19[9] == '\0') {
    (**(code **)(*unaff_x19 + 0x498))();
  }
  if (((*(ushort *)(unaff_x19 + 9) & 0xff00) == 0xe00) && ((*(ushort *)(unaff_x19 + 9) & 0xff) != 0)
     ) {
    unaff_x19[10] = 0;
    *(undefined2 *)(unaff_x19 + 9) = 0;
    thunk_FUN_01f51358(unaff_x19 + 10,0);
    iVar7 = *(int *)((long)unaff_x19 + 0x44);
    *(undefined1 *)((long)unaff_x19 + 0x4a) = 0;
    if (iVar7 == 0) {
      FUN_038dd5c8();
      iVar7 = *(int *)((long)unaff_x19 + 0x44);
    }
    iVar8 = (int)unaff_x19[8] + 4;
    if (iVar8 <= iVar7) {
      lVar10 = unaff_x19[7];
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar10 + 0x20;
        }
      }
      iVar1 = *(int *)(lVar10 + (int)unaff_x19[8]);
      *(int *)(unaff_x19 + 8) = iVar8;
      if (iVar7 == 0) {
        FUN_038dd5c8();
        iVar8 = (int)unaff_x19[8];
        iVar7 = *(int *)((long)unaff_x19 + 0x44);
      }
      iVar9 = iVar8 + 4;
      if (iVar9 <= iVar7) {
        lVar10 = unaff_x19[7];
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = lVar10 + 0x20;
          }
        }
        iVar8 = *(int *)(lVar10 + iVar8);
        *(int *)(unaff_x19 + 8) = iVar9;
        iVar8 = iVar8 * iVar1;
        if (iVar7 == 0) {
          FUN_038dd5c8();
          iVar9 = (int)unaff_x19[8];
          iVar7 = *(int *)((long)unaff_x19 + 0x44);
        }
        if (iVar9 + iVar8 <= iVar7) {
          uVar11 = **(undefined8 **)(unaff_x21 + 0x38);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar3 = FUN_03579868(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                               ,0);
          uVar2 = FUN_03582560(uVar11,uVar3,0);
          if ((uVar2 & 1) == 0) {
            lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01ecaf44();
            }
            lVar10 = FUN_01f08890(lVar10,iVar1);
            *unaff_x20 = lVar10;
            thunk_FUN_01f51358();
            in_stack_00000010 = FUN_034a48dc(*unaff_x20,3,0);
            lVar10 = unaff_x19[7];
            if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
              lVar10 = 0;
            }
            else {
              lVar10 = lVar10 + 0x20;
            }
            lVar12 = unaff_x19[8];
            uVar11 = FUN_034a47ec(&stack0x00000010,0);
            FUN_03952c90(lVar10 + (int)lVar12,uVar11,iVar8,0);
            FUN_034a48f0(&stack0x00000010,0);
          }
          else {
            lVar10 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,iVar8);
            FUN_03596b60(unaff_x19[7],(int)unaff_x19[8],lVar10,0,iVar8,0);
            lVar12 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            if (lVar10 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = thunk_FUN_01f116d0(lVar10,lVar12);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar10,lVar12);
              }
            }
            *unaff_x20 = lVar4;
            lVar12 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            if ((lVar10 != 0) && (lVar4 = thunk_FUN_01f116d0(lVar10,lVar12), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar10,lVar12);
            }
            thunk_FUN_01f51358();
          }
          *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + iVar8;
          return 1;
        }
      }
    }
    *(int *)(unaff_x19 + 8) = iVar7;
  }
  else {
    (**(code **)(*unaff_x19 + 0x5e8))();
  }
  *unaff_x20 = 0;
  thunk_FUN_01f51358();
  return 0;
}


