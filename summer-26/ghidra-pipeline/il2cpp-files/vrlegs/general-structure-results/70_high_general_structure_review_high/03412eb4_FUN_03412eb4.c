/*
FUNCTION_NAME: FUN_03412eb4
ENTRY_POINT: 03412eb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03412eb4(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar25;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar8 = Koenigz_PerfectCulling_PerfectCullingConstants_TypeInfo;
  puVar9 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  if ((DAT_0412d5a6 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_01ab69ac(Oculus_Platform_Models_NetSyncConnection_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo);
    FUN_01ab69ac(_Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd7b90);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingResourcesLocator_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingTemp_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingUtil_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolume_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_PerformDynamicRes_TypeInfo);
    FUN_01ab69ac(UnityEngine_Android_Permission_TypeInfo);
    FUN_01ab69ac(Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_TypeInfo);
    FUN_01ab69ac(UnityEngine_Android_PermissionCallbacks_TypeInfo);
    FUN_01ab69ac(System_Security_PermissionSet_TypeInfo);
    FUN_01ab69ac(System_Security_Permissions_PermissionState_TypeInfo);
    FUN_01ab69ac(UnityEngine_Events_PersistentCall_TypeInfo);
    FUN_01ab69ac(UnityApplicationInsights_MetricTelemetry_TypeInfo);
    FUN_01ab69ac(UnityEngine_Events_PersistentCallGroup_TypeInfo);
    FUN_01ab69ac(System_Xml_IXmlLineInfo_TypeInfo);
    FUN_01ab69ac(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    FUN_01ab69ac(OVRPlatformMenu_TypeInfo);
    FUN_01ab69ac(Fusion_NetworkObjectNestingKey_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(System_Threading_Tasks_ParallelEtwProvider_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingConstants_TypeInfo);
    FUN_01ab69ac(RootMotion_FinalIK_LegIK_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_PhotonAppSettings_TypeInfo);
    FUN_01ab69ac(Photon_Voice_Unity_MicWrapperPusher_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc8538);
    FUN_01ab69ac(System_Linq_Expressions_MethodCallExpression3_TypeInfo);
    FUN_01ab69ac(Photon_Realtime_PhotonAppSettings_TypeInfo);
    FUN_01ab69ac(OVRPermissionsRequester_TypeInfo);
    FUN_01ab69ac(Photon_Voice_PhotonAppSettings_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd9310);
    FUN_01ab69ac(ExitGames_Client_Photon_PhotonCodes_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_Async_PhotonConnectionCallbacks_TypeInfo);
    FUN_01ab69ac(Unity_Services_Authentication_IAuthenticationCache_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_Async_PhotonLobbyCallbacks_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_Async_PhotonMatchmakingCallbacks_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_LensFlareComponentSRP_TypeInfo);
    FUN_01ab69ac(ExitGames_Client_Photon_PhotonPeer_TypeInfo);
    DAT_0412d5a6 = 1;
  }
  puVar10 = System_Threading_Tasks_ParallelEtwProvider_TypeInfo;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_027b3d9c(uVar15,0);
  *(undefined8 *)(param_1 + 0x388) = uVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x388,uVar15);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar7 = Fusion_Photon_Realtime_Async_PhotonConnectionCallbacks_TypeInfo;
  puVar8 = System_Security_Permissions_PermissionState_TypeInfo;
  FUN_033e0d6c(param_1,param_2,0);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03424a94(0);
  uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_021de1ac(uVar15,0,*(undefined8 *)puVar7,0);
  if (((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) &&
     (lVar19 = *(long *)(*(long *)(param_2 + 0x48) + 0x18), lVar19 != 0)) {
    uVar22 = *(undefined8 *)(lVar19 + 0x10);
    uVar18 = *(undefined8 *)(lVar19 + 0x18);
    if (*(int *)(*(long *)Unity_Services_Authentication_IAuthenticationCache_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_01a58e78();
    }
    FUN_0338476c(uVar15,uVar22,uVar18,0);
    if (*(long *)(param_2 + 0x50) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x50);
      if (*(int *)(*(long *)PTR_DAT_03cd7b90 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_033ae3c0(uVar15,0);
      *(undefined8 *)(param_1 + 0x308) = uVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x308);
      if (*(long *)(param_2 + 0x50) != 0) {
        uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x60),0);
        *(undefined8 *)(param_1 + 0x310) = uVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x310);
        if (*(long *)(param_2 + 0x50) != 0) {
          uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x18),0);
          *(undefined8 *)(param_1 + 0x318) = uVar15;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x318);
          if (*(long *)(param_2 + 0x50) != 0) {
            uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x28),0);
            *(undefined8 *)(param_1 + 800) = uVar15;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 800);
            if (*(long *)(param_2 + 0x50) != 0) {
              uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x30),0);
              *(undefined8 *)(param_1 + 0x328) = uVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x328);
              if (*(long *)(param_2 + 0x50) != 0) {
                uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x68),0);
                *(undefined8 *)(param_1 + 0x330) = uVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x330);
                if (*(long *)(param_2 + 0x50) != 0) {
                  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2e5);
                  uVar15 = FUN_033ae3c0(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x70),0);
                  *(undefined8 *)(param_1 + 0x338) = uVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x338)
                  ;
                  lVar19 = *(long *)(param_2 + 0x68);
                  auVar24 = FUN_036f9f70(0);
                  *pauVar1 = auVar24;
                  puVar8 = PTR_DAT_03cd9310;
                  if (lVar19 != 0) {
                    FUN_03700b98(pauVar1,*(undefined1 *)(lVar19 + 0x10),0);
                    FUN_03700c24(pauVar1,*(undefined4 *)(lVar19 + 0x18),0);
                    FUN_03700c40(pauVar1,*(undefined4 *)(lVar19 + 0x1c),0);
                    FUN_03700c5c(pauVar1,*(undefined4 *)(lVar19 + 0x20),0);
                    FUN_03700c78(pauVar1,*(undefined4 *)(lVar19 + 0x24),0);
                    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x84);
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    puVar7 = PTR_DAT_03cbdf88;
                    lVar16 = FUN_03412404();
                    if ((lVar16 != 0) && (*(char *)(lVar16 + 0xeb) != '\0')) {
                      FUN_033ed4ec(&local_100,0);
                      uStack_88 = uStack_f8;
                      local_90 = local_100;
                      uStack_7c = uStack_ec;
                      local_78 = uStack_e8;
                      uStack_84 = uStack_f4;
                      local_80 = uStack_f0;
                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      lVar16 = FUN_03412404();
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)puVar7);
                      }
                      uVar17 = FUN_036d36b4(lVar16,0);
                      if ((uVar17 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_03414000;
                        uStack_88 = FUN_033cb890(lVar16,0);
                        local_90 = FUN_033cbac8(lVar16,0);
                      }
                      uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                 );
                      FUN_033ea7e8(uVar15,&local_90,0);
                      *(undefined8 *)(param_1 + 0x2f8) = uVar15;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x2f8,uVar15);
                    }
                    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    *(undefined2 *)(param_1 + 0x1a6) = 0x101;
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    if (DAT_0412d58c == '\0') {
                      FUN_01ab69ac(System_Threading_Tasks_ParallelEtwProvider_TypeInfo);
                      DAT_0412d58c = '\x01';
                    }
                    puVar11 = ExitGames_Client_Photon_PhotonCodes_TypeInfo;
                    puVar7 = System_Security_PermissionSet_TypeInfo;
                    puVar8 = OVRPlatformMenu_TypeInfo;
                    puVar9 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
                    lVar16 = *(long *)puVar10;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar16 = *(long *)puVar10;
                    }
                    puVar10 = Koenigz_PerfectCulling_PerfectCullingVolume_TypeInfo;
                    local_70 = *(undefined8 *)(param_1 + 0x2f8);
                    *(byte *)(param_1 + 0x1a7) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_70);
                    uVar15 = local_70;
                    bVar12 = *(int *)(param_2 + 0x74) == 2;
                    local_68 = CONCAT71(local_68._1_7_,bVar12);
                    uVar22 = local_68;
                    *(bool *)(param_1 + 0x1a8) = bVar12;
                    uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
                    FUN_0343047c(uVar18,uVar15,uVar22,0);
                    *(undefined8 *)(param_1 + 0x2c8) = uVar18;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x2c8,uVar18);
                    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x74);
                    uVar2 = *(undefined4 *)(param_2 + 0x7c);
                    *(undefined1 *)(param_1 + 0x2e4) = 0;
                    *(undefined4 *)(param_1 + 0x2e0) = uVar2;
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                    FUN_0343ece4(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d0) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x1d0,uVar15);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    FUN_0342c3e0(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d8) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x1d8,uVar15);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar11);
                    FUN_033fd734(uVar15,0xfa,0);
                    *(undefined8 *)(param_1 + 0x250) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x250,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x318);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                               );
                    FUN_03436b10(uVar15,0x3ea,uVar22,0,0,0,0);
                    *(undefined8 *)(param_1 + 600) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 600,uVar15);
                    if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_036f9ce4(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)puVar10);
                    FUN_034397b0(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b0) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x1b0,uVar22);
                    uVar15 = FUN_036f9ce4(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 Koenigz_PerfectCulling_PerfectCullingUtil_TypeInfo)
                    ;
                    FUN_03438678(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b8) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x1b8,uVar22);
                    uVar20 = *(uint *)(param_1 + 0x2d8);
                    if ((uVar20 | 2) == 2) {
                      uVar22 = *(undefined8 *)(param_1 + 0x318);
                      uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                                 );
                      FUN_03436b10(uVar15,200,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1c0) = uVar15;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x1c0,uVar15);
                      uVar20 = *(uint *)(param_1 + 0x2d8);
                    }
                    if (uVar20 == 1) {
                      local_a0 = *(undefined8 *)(param_1 + 0x328);
                      local_98 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_a0);
                      local_98 = *(undefined8 *)(param_1 + 0x2f8);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_98);
                      uVar22 = local_98;
                      uVar15 = local_a0;
                      uVar5 = *(undefined1 *)(param_1 + 0x1a4);
                      uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  Koenigz_PerfectCulling_PerfectCullingResourcesLocator_TypeInfo
                                                 );
                      FUN_034264a8(uVar18,uVar15,uVar22,uVar5,0);
                      *(undefined8 *)(param_1 + 0x2d0) = uVar18;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x2d0,uVar18);
                      if (*(long *)(param_1 + 0x2d0) == 0) goto LAB_03414000;
                      *(undefined1 *)(*(long *)(param_1 + 0x2d0) + 0x1a) =
                           *(undefined1 *)(param_2 + 0x80);
                      if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar15 = FUN_036f9ce4(0);
                      uVar14 = *(undefined4 *)(param_2 + 0x5c);
                      uVar18 = *(undefined8 *)*pauVar1;
                      uVar2 = *(undefined4 *)(param_1 + 0x2ed);
                      uVar3 = *(undefined4 *)(lVar19 + 0x14);
                      uVar23 = *(undefined8 *)(param_1 + 0x2d0);
                      uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                   UnityEngine_Events_PersistentCall_TypeInfo);
                      FUN_0343cf8c(uVar22,0xd2,uVar15,uVar14,uVar18,uVar2,uVar3,uVar23,0);
                      *(undefined8 *)(param_1 + 0x1e0) = uVar22;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x1e0,uVar22);
                      uVar15 = *(undefined8 *)*pauVar1;
                      uVar14 = *(undefined4 *)(param_1 + 0x2ed);
                      if (*(int *)(*(long *)
                                    Koenigz_PerfectCulling_PerfectCullingResourcesLocator_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_03427ffc(uVar15,uVar14,0x60,0);
                      lVar16 = FUN_01ab6a94(*(undefined8 *)
                                             Photon_Realtime_PhotonAppSettings_TypeInfo,3);
                      local_100 = (ulong)local_100._4_4_ << 0x20;
                      FUN_036ffd08(&local_100,
                                   *(undefined8 *)
                                    UnityEngine_Rendering_LensFlareComponentSRP_TypeInfo,0);
                      if (lVar16 == 0) goto LAB_03414000;
                      if (*(int *)(lVar16 + 0x18) == 0) {
LAB_03414004:
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      *(undefined4 *)(lVar16 + 0x20) = (undefined4)local_100;
                      local_b8[0] = 0;
                      FUN_036ffd08(local_b8,*(undefined8 *)
                                             UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo,0);
                      if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_03414004;
                      *(undefined4 *)(lVar16 + 0x24) = local_b8[0];
                      local_c0[0] = 0;
                      FUN_036ffd08(local_c0,*(undefined8 *)
                                             Fusion_Photon_Realtime_Async_PhotonLobbyCallbacks_TypeInfo
                                   ,0);
                      if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_03414004;
                      *(undefined4 *)(lVar16 + 0x28) = local_c0[0];
                      uVar22 = *(undefined8 *)(param_1 + 0x318);
                      uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                                 );
                      FUN_03436b10(uVar15,0xd3,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1e8) = uVar15;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x1e8,uVar15);
                      uVar22 = *(undefined8 *)(param_1 + 0x2d0);
                      uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  Koenigz_PerfectCulling_PerfectCullingTemp_TypeInfo
                                                 );
                      FUN_034380a8(uVar15,0xe6,uVar22,0);
                      *(undefined8 *)(param_1 + 0x1f0) = uVar15;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x1f0,uVar15);
                      uVar15 = FUN_036f9ce4(0);
                      uVar2 = *(undefined4 *)(param_2 + 0x5c);
                      uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo
                                                 );
                      uVar14 = extraout_var;
                      FUN_0343a658(uVar22,*(undefined8 *)ExitGames_Client_Photon_PhotonPeer_TypeInfo
                                   ,lVar16,1,0xfa,uVar15,uVar2);
                      *(undefined8 *)(param_1 + 0x1f8) = uVar22;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (param_1 + 0x1f8,uVar22);
                    }
                    puVar9 = UnityEngine_Rendering_PerformDynamicRes_TypeInfo;
                    if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_036f9ce4(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2ed);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo
                                               );
                    uVar23 = CONCAT44(uVar14,uVar25);
                    FUN_0343a344(uVar22,10,1,0xfa,uVar15,uVar2,uVar18,uVar3,uVar23,0);
                    uVar25 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x200) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x200,uVar22);
                    uVar15 = FUN_036f9ce4(0);
                    uVar14 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar2 = *(undefined4 *)(param_1 + 0x2ed);
                    uVar3 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    uVar23 = CONCAT44(uVar25,uVar3);
                    FUN_0343a258(uVar22,10,1,0xfa,uVar15,uVar14,uVar18,uVar2,uVar23,0);
                    uVar14 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x208) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x208,uVar22);
                    iVar4 = *(int *)(param_1 + 0x2e0);
                    uVar15 = *(undefined8 *)(param_1 + 0x318);
                    uVar20 = 500;
                    if (iVar4 != 1) {
                      uVar20 = 400;
                    }
                    if (*(int *)(*(long *)PTR_DAT_03cc8538 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    puVar8 = Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_TypeInfo;
                    puVar9 = Fusion_NetworkObjectNestingKey_TypeInfo;
                    uVar17 = FUN_03404fc4(0);
                    if ((uVar17 & 1) == 0) {
                      bVar13 = 0;
                    }
                    else {
                      bVar13 = FUN_036d8bc4(0);
                      bVar13 = bVar13 & 1;
                    }
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                               );
                    FUN_03436b10(uVar22,uVar20,uVar15,1,0,bVar13 & iVar4 == 1,0);
                    *(undefined8 *)(param_1 + 0x218) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x218,uVar22);
                    uVar22 = *(undefined8 *)(param_1 + 0x330);
                    uVar18 = *(undefined8 *)(param_1 + 0x338);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    FUN_033f3da4(uVar15,uVar20 | 1,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x1c8) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x1c8,uVar15);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                    FUN_033f233c(uVar15,0x15e,0);
                    *(undefined8 *)(param_1 + 0x210) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x210,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 800);
                    uVar18 = *(undefined8 *)(param_1 + 0x308);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo
                                               );
                    FUN_034357cc(uVar15,400,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x220) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x220,uVar15);
                    uVar5 = *(undefined1 *)(param_2 + 0x70);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
                    FUN_033fd400(uVar15,0x1c2,uVar5,0);
                    *(undefined8 *)(param_1 + 0x228) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x228,uVar15);
                    if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_036f9cec(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x60);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2ed);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo
                                               );
                    FUN_0343a344(uVar22,0xb,0,0x1c2,uVar15,uVar2,uVar18,uVar3,
                                 CONCAT44(uVar14,uVar25),0);
                    *(undefined8 *)(param_1 + 0x230) = uVar22;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x230,uVar22);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 UnityEngine_Events_PersistentCallGroup_TypeInfo);
                    FUN_033f3960(uVar15,0x226,0);
                    *(undefined8 *)(param_1 + 0x238) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x238,uVar15);
                    puVar9 = UnityEngine_Android_Permission_TypeInfo;
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                                 UnityEngine_Android_Permission_TypeInfo);
                    FUN_033f1bc0(uVar15,0x226,1,0);
                    *(undefined8 *)(param_1 + 0x260) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x260,uVar15);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    FUN_033f1bc0(uVar15,0x3ea,0,0);
                    *(undefined8 *)(param_1 + 0x268) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x268,uVar15);
                    FUN_033fdd20(0);
                    local_b0 = *(undefined8 *)(param_1 + 0x308);
                    local_a8 = extraout_x1;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_b0);
                    puVar9 = PTR_DAT_03cd9310;
                    local_a8 = CONCAT44(local_a8._4_4_,0x4a);
                    if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar19 = FUN_03412404();
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                    }
                    uVar17 = FUN_036d36b4(lVar19,0);
                    if ((uVar17 & 1) != 0) {
                      if (lVar19 == 0) goto LAB_03414000;
                      cVar6 = *(char *)(lVar19 + 0x55);
                      uVar14 = *(undefined4 *)(lVar19 + 0x58);
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar14 = FUN_03414010(cVar6 != '\0',uVar14,0);
                      local_a8 = CONCAT44(local_a8._4_4_,uVar14);
                    }
                    puVar11 = Fusion_Photon_Realtime_Async_PhotonMatchmakingCallbacks_TypeInfo;
                    puVar7 = Fusion_Photon_Realtime_PhotonAppSettings_TypeInfo;
                    puVar10 = UnityEngine_Android_PermissionCallbacks_TypeInfo;
                    puVar8 = Oculus_Platform_Models_NetSyncConnection_TypeInfo;
                    puVar9 = Photon_Voice_Unity_MicWrapperPusher_TypeInfo;
                    uStack_d8 = 0;
                    local_e0 = 0;
                    uStack_c8 = 0;
                    uStack_d0 = 0;
                    uStack_f8 = 0;
                    uStack_f4 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    uStack_e4 = 0;
                    uStack_f0 = 0;
                    uStack_ec = 0;
                    FUN_033fddcc(&local_100,*(undefined8 *)(param_2 + 0x40),&local_b0,0);
                    *(undefined8 *)(param_1 + 0x368) = uStack_d8;
                    *(undefined8 *)(param_1 + 0x360) = local_e0;
                    *(undefined8 *)(param_1 + 0x378) = uStack_c8;
                    *(undefined8 *)(param_1 + 0x370) = uStack_d0;
                    *(ulong *)(param_1 + 0x348) = CONCAT44(uStack_f4,uStack_f8);
                    *(long *)(param_1 + 0x340) = local_100;
                    *(ulong *)(param_1 + 0x358) = CONCAT44(uStack_e4,uStack_e8);
                    *(ulong *)(param_1 + 0x350) = CONCAT44(uStack_ec,uStack_f0);
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x340,0);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
                    FUN_033f1784(uVar15,1000,0);
                    *(undefined8 *)(param_1 + 0x248) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x248,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x308);
                    uVar18 = *(undefined8 *)(param_1 + 0x310);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar10);
                    FUN_0343ba24(uVar15,0x3e9,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x240) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x240,uVar15);
                    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
                    FUN_03440d00(uVar15,*(undefined8 *)puVar11,0);
                    *(undefined8 *)(param_1 + 0x270) = uVar15;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (param_1 + 0x270,uVar15);
                    lVar19 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
                    FUN_033e9a54(lVar19,0);
                    puVar9 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
                    if (*(int *)(*(long *)System_Linq_Expressions_MethodCallExpression3_TypeInfo +
                                0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    plVar21 = (long *)(param_1 + 0xe8);
                    *plVar21 = lVar19;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar21,lVar19);
                    if (*(int *)(param_1 + 0x2d8) == 1) {
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (*plVar21 == 0) goto LAB_03414000;
                      *(undefined1 *)(*plVar21 + 0x11) = 0;
                      uVar15 = FUN_01ab6a94(*(undefined8 *)
                                             UnityApplicationInsights_MetricTelemetry_TypeInfo,3);
                      FUN_0267b194(uVar15,*(undefined8 *)Photon_Voice_PhotonAppSettings_TypeInfo,0);
                      *(undefined8 *)(param_1 + 0xf0) = uVar15;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(param_1 + 0xf0),uVar15);
                    }
                    puVar9 = System_Xml_IXmlLineInfo_TypeInfo;
                    lVar19 = *(long *)System_Xml_IXmlLineInfo_TypeInfo;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar19 = *(long *)puVar9;
                    }
                    *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x24) = DAT_00d37d68;
                    FUN_033a2230(0);
                    bVar13 = FUN_036ef1e4(0x1d,0);
                    *(byte *)(param_1 + 0x304) = bVar13 & 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03414000:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


