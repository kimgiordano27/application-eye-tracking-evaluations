/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractor$$set_DistanceThreshold
ENTRY_POINT: 03545af8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_SnapInteractor__set_DistanceThreshold
               (ulong param_1,long param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    *(undefined1 *)(unaff_x22 + 0x133) = 1;
  }
  puVar3 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_34__);
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_s16__);
    FUN_034f7d10(uVar6,uVar7,uVar8,0);
  }
  else {
    if ((-1 < param_3) && (param_3 <= *(int *)(param_2 + 0x18))) {
      lVar9 = *unaff_x21;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
          {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03545b90;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03545b90:
      iVar4 = (*(code *)*puVar5)();
      puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      if (0 < iVar4) {
        FUN_03545568(param_2,*(int *)(param_2 + 0x18) + iVar4);
        iVar1 = *(int *)(param_2 + 0x18) - param_3;
        if (iVar1 != 0 && param_3 <= *(int *)(param_2 + 0x18)) {
          FUN_0358d498(*(undefined8 *)(param_2 + 0x10),param_3,*(undefined8 *)(param_2 + 0x10),
                       iVar4 + param_3,iVar1,0);
        }
        lVar9 = FUN_01f08890(*(undefined8 *)puVar2,iVar4);
        lVar10 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03545c40;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03545c40:
        (*(code *)*puVar5)();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0358d3e4(lVar9,*(undefined8 *)(param_2 + 0x10),param_3,0);
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + iVar4;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      }
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                              );
    FUN_034f3578(uVar6,uVar7,uVar8,0);
  }
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_high_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


