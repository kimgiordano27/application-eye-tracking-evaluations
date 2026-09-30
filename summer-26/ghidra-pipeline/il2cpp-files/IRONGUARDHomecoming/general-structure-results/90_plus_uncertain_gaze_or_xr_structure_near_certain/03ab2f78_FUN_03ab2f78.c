/*
FUNCTION_NAME: FUN_03ab2f78
ENTRY_POINT: 03ab2f78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 216
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_03ab2f78(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int local_34;
  
  local_34 = param_3;
  if ((DAT_04839002 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04839002 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_8840);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  iVar1 = thunk_FUN_01eca4a4(param_2,0);
  puVar6 = StringLiteral_8835;
  if (iVar1 == 1) {
    if (param_3 < 0) {
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar4 = FUN_01f08890(uVar4,1);
      thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
      FUN_01bc4c70();
      uVar5 = FUN_03532fe0(0);
      uVar5 = FUN_03568514(&local_34,uVar5,0);
      FUN_01bc50c0(uVar4);
      FUN_01bc56ec(uVar4,uVar5);
      FUN_01bc5408(uVar4,0,uVar5);
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_8836);
      uVar4 = FUN_033f1a90(uVar5,uVar4,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      FUN_034f3578(uVar7,uVar5,uVar4,0);
      goto LAB_03ab3260;
    }
    iVar1 = FUN_03582fa8(param_2,0);
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) {
LAB_03ab3114:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar2 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    puVar6 = Method_Unity_Collections_FixedString4096Bytes_CheckCapacityInRange__;
    if (iVar2 <= iVar1 - param_3) {
      plVar9 = (long *)FUN_03ab2ef8(param_1);
      puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 != (long *)0x0) {
        do {
          lVar10 = *plVar9;
          lVar8 = *(long *)puVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03ab3070;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_03ab3070:
          uVar11 = (*(code *)*puVar3)(plVar9,puVar3[1]);
          if ((uVar11 & 1) == 0) {
            return;
          }
          lVar10 = *plVar9;
          lVar8 = *(long *)puVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_03ab30d0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,1);
LAB_03ab30d0:
          uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
          local_34 = param_3 + 1;
          FUN_0358cf48(param_2,uVar4,param_3,0);
          param_3 = param_3 + 1;
        } while( true );
      }
      goto LAB_03ab3114;
    }
  }
  uVar4 = thunk_FUN_01efb3a4(puVar6);
  uVar4 = FUN_033f1b08(uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar7 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar7,uVar4,0);
LAB_03ab3260:
  uVar4 = thunk_FUN_01efb3a4(StringLiteral_8840);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar4);
}


