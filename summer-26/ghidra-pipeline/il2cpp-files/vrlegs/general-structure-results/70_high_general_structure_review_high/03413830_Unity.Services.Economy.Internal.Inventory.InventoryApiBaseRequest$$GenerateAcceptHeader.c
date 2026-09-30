/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Inventory.InventoryApiBaseRequest$$GenerateAcceptHeader
ENTRY_POINT: 03413830
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


void Unity_Services_Economy_Internal_Inventory_InventoryApiBaseRequest__GenerateAcceptHeader(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 *unaff_x21;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_03427ffc();
  lVar12 = FUN_01ab6a94(*(undefined8 *)Photon_Realtime_PhotonAppSettings_TypeInfo,3);
  _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
  FUN_036ffd08(&stack0x00000030,*(undefined8 *)UnityEngine_Rendering_LensFlareComponentSRP_TypeInfo,
               0);
  if (lVar12 == 0) {
LAB_03414000:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar12 + 0x18) != 0) {
    *(undefined4 *)(lVar12 + 0x20) = uStack0000000000000030;
    in_stack_00000078 = 0;
    FUN_036ffd08(&stack0x00000078,*(undefined8 *)UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo,0
                );
    if (1 < *(uint *)(lVar12 + 0x18)) {
      *(undefined4 *)(lVar12 + 0x24) = in_stack_00000078;
      in_stack_00000070 = 0;
      FUN_036ffd08(&stack0x00000070,
                   *(undefined8 *)Fusion_Photon_Realtime_Async_PhotonLobbyCallbacks_TypeInfo,0);
      if (2 < *(uint *)(lVar12 + 0x18)) {
        *(undefined4 *)(lVar12 + 0x28) = in_stack_00000070;
        uVar18 = *(undefined8 *)(unaff_x19 + 0x318);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                     _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                   );
        FUN_03436b10(uVar13,0xd3,uVar18,1,0,0,0);
        *(undefined8 *)(unaff_x19 + 0x1e8) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1e8,uVar13);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x2d0);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Koenigz_PerfectCulling_PerfectCullingTemp_TypeInfo);
        FUN_034380a8(uVar13,0xe6,uVar18,0);
        *(undefined8 *)(unaff_x19 + 0x1f0) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1f0,uVar13);
        uVar13 = FUN_036f9ce4(0);
        uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
        uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
        FUN_0343a658(uVar18,*(undefined8 *)ExitGames_Client_Photon_PhotonPeer_TypeInfo,lVar12,1,0xfa
                     ,uVar13,uVar11);
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1f8,uVar18);
        puVar5 = UnityEngine_Rendering_PerformDynamicRes_TypeInfo;
        if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_036f9ce4(0);
        uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
        uVar17 = *unaff_x21;
        uVar1 = *(undefined4 *)(unaff_x21 + 1);
        uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
        FUN_0343a344(uVar18,10,1,0xfa,uVar13,uVar11,uVar17,uVar1);
        *(undefined8 *)(unaff_x19 + 0x200) = uVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x200,uVar18);
        uVar13 = FUN_036f9ce4(0);
        uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
        uVar17 = *unaff_x21;
        uVar1 = *(undefined4 *)(unaff_x21 + 1);
        uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
        FUN_0343a258(uVar18,10,1,0xfa,uVar13,uVar11,uVar17,uVar1);
        *(undefined8 *)(unaff_x19 + 0x208) = uVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x208,uVar18);
        iVar2 = *(int *)(unaff_x19 + 0x2e0);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x318);
        uVar15 = 500;
        if (iVar2 != 1) {
          uVar15 = 400;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc8538 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        puVar6 = Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_TypeInfo;
        puVar5 = Fusion_NetworkObjectNestingKey_TypeInfo;
        uVar14 = FUN_03404fc4(0);
        if ((uVar14 & 1) == 0) {
          bVar10 = 0;
        }
        else {
          bVar10 = FUN_036d8bc4(0);
          bVar10 = bVar10 & 1;
        }
        uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                     _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                                   );
        FUN_03436b10(uVar18,uVar15,uVar13,1,0,bVar10 & iVar2 == 1,0);
        *(undefined8 *)(unaff_x19 + 0x218) = uVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x218,uVar18);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x330);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x338);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
        FUN_033f3da4(uVar13,uVar15 | 1,uVar18,uVar17,0);
        *(undefined8 *)(unaff_x19 + 0x1c8) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c8,uVar13);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
        FUN_033f233c(uVar13,0x15e,0);
        *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x210,uVar13);
        uVar18 = *(undefined8 *)(unaff_x19 + 800);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x308);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo);
        FUN_034357cc(uVar13,400,uVar18,uVar17,0);
        *(undefined8 *)(unaff_x19 + 0x220) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x220,uVar13);
        uVar3 = *(undefined1 *)(unaff_x20 + 0x70);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
        FUN_033fd400(uVar13,0x1c2,uVar3,0);
        *(undefined8 *)(unaff_x19 + 0x228) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x228,uVar13);
        if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_036f9cec(0);
        uVar11 = *(undefined4 *)(unaff_x20 + 0x60);
        uVar17 = *unaff_x21;
        uVar1 = *(undefined4 *)(unaff_x21 + 1);
        uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                     Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
        FUN_0343a344(uVar18,0xb,0,0x1c2,uVar13,uVar11,uVar17,uVar1);
        *(undefined8 *)(unaff_x19 + 0x230) = uVar18;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x230,uVar18);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Events_PersistentCallGroup_TypeInfo);
        FUN_033f3960(uVar13,0x226,0);
        *(undefined8 *)(unaff_x19 + 0x238) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x238,uVar13);
        puVar5 = UnityEngine_Android_Permission_TypeInfo;
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Android_Permission_TypeInfo);
        FUN_033f1bc0(uVar13,0x226,1,0);
        *(undefined8 *)(unaff_x19 + 0x260) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x260,uVar13);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
        FUN_033f1bc0(uVar13,0x3ea,0,0);
        *(undefined8 *)(unaff_x19 + 0x268) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x268,uVar13);
        FUN_033fdd20(0);
        in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x308);
        in_stack_00000088 = extraout_x1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080);
        puVar5 = PTR_DAT_03cd9310;
        in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
        if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar12 = FUN_03412404();
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar14 = FUN_036d36b4(lVar12,0);
        if ((uVar14 & 1) != 0) {
          if (lVar12 == 0) goto LAB_03414000;
          cVar4 = *(char *)(lVar12 + 0x55);
          uVar11 = *(undefined4 *)(lVar12 + 0x58);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_03414010(cVar4 != '\0',uVar11,0);
          in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar11);
        }
        puVar9 = Fusion_Photon_Realtime_Async_PhotonMatchmakingCallbacks_TypeInfo;
        puVar8 = Fusion_Photon_Realtime_PhotonAppSettings_TypeInfo;
        puVar7 = UnityEngine_Android_PermissionCallbacks_TypeInfo;
        puVar6 = Oculus_Platform_Models_NetSyncConnection_TypeInfo;
        puVar5 = Photon_Voice_Unity_MicWrapperPusher_TypeInfo;
        in_stack_00000058 = 0;
        in_stack_00000050 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000038 = 0;
        _uStack0000000000000030 = 0;
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        FUN_033fddcc(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,0);
        *(undefined8 *)(unaff_x19 + 0x368) = in_stack_00000058;
        *(undefined8 *)(unaff_x19 + 0x360) = in_stack_00000050;
        *(undefined8 *)(unaff_x19 + 0x378) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x370) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x348) = in_stack_00000038;
        *(ulong *)(unaff_x19 + 0x340) = _uStack0000000000000030;
        *(undefined8 *)(unaff_x19 + 0x358) = in_stack_00000048;
        *(undefined8 *)(unaff_x19 + 0x350) = in_stack_00000040;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x340,0);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
        FUN_033f1784(uVar13,1000,0);
        *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x248,uVar13);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x308);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x310);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
        FUN_0343ba24(uVar13,0x3e9,uVar18,uVar17,0);
        *(undefined8 *)(unaff_x19 + 0x240) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x240,uVar13);
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
        FUN_03440d00(uVar13,*(undefined8 *)puVar9,0);
        *(undefined8 *)(unaff_x19 + 0x270) = uVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x270,uVar13);
        lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
        FUN_033e9a54(lVar12,0);
        puVar5 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
        if (*(int *)(*(long *)System_Linq_Expressions_MethodCallExpression3_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar16 = (long *)(unaff_x19 + 0xe8);
        *plVar16 = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar12);
        if (*(int *)(unaff_x19 + 0x2d8) == 1) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*plVar16 == 0) goto LAB_03414000;
          *(undefined1 *)(*plVar16 + 0x11) = 0;
          uVar13 = FUN_01ab6a94(*(undefined8 *)UnityApplicationInsights_MetricTelemetry_TypeInfo,3);
          FUN_0267b194(uVar13,*(undefined8 *)Photon_Voice_PhotonAppSettings_TypeInfo,0);
          *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x19 + 0xf0),uVar13);
        }
        puVar5 = System_Xml_IXmlLineInfo_TypeInfo;
        lVar12 = *(long *)System_Xml_IXmlLineInfo_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *(long *)puVar5;
        }
        *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x24) = DAT_00d37d68;
        FUN_033a2230(0);
        bVar10 = FUN_036ef1e4(0x1d,0);
        *(byte *)(unaff_x19 + 0x304) = bVar10 & 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


