/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_account_channel_get_acl_t
ENTRY_POINT: 078dc7f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_account_channel_get_acl_t
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xe40));
  FUN_03a8a718(Unity_Services_CloudSave_Internal_Response<FileItem>_TypeInfo);
  FUN_03a8a718(Unity_Services_CloudSave_Internal_Response<FileList>_TypeInfo);
  FUN_03a8a718(Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo);
  FUN_03a8a718(Unity_Services_CloudSave_Internal_Response<GetKeysResponse>_TypeInfo);
  FUN_03a8a718(Unity_Services_CloudSave_Internal_Response<MemoryStream>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa87) = 1;
  puVar2 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078d988c(lVar10);
    uVar4 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar5 = thunk_FUN_03ac74bc();
      uVar11 = thunk_FUN_03af1434(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
      uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar5,uVar11,uVar7,0);
      uVar11 = thunk_FUN_03af1434(
                                 Unity_Services_CloudSave_Internal_Response<QueryIndexResponse>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar11);
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 10);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_CloudSave_Internal_Response<byte[]>_TypeInfo);
    FUN_078dcc0c(uVar5,uVar11,0);
    plVar12 = *(long **)(lVar10 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_084963c0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_078dc914;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)PTR_DAT_084963c0,2);
LAB_078dc914:
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
    uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool_ResourceLogInfo<object>_TypeInfo
                               );
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          lVar8 = lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138;
          goto LAB_078dc994;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    lVar8 = FUN_03ac43c4(plVar12,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,2);
LAB_078dc994:
    FUN_0496d698(uVar11,plVar12,*(undefined8 *)(lVar8 + 8),0);
    lVar10 = FUN_0481b0a4(lVar10,uVar11,uVar5,
                          *(undefined8 *)
                           Unity_Services_CloudSave_Internal_Response<MemoryStream>_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar10,*(undefined8 *)
                              Unity_Services_CloudSave_Internal_Response<GetKeysResponse>_TypeInfo);
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff7630(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar10 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)Unity_Services_CloudSave_Internal_Response<FileList>_TypeInfo
                       );
  puVar3 = Oculus_Platform_Request<UserProof>_TypeInfo;
  if (lVar10 != 0) {
    lVar8 = *(long *)puVar2;
    uVar5 = *(undefined8 *)(lVar10 + 0x20);
    iVar1 = *(int *)(lVar8 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar8);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


