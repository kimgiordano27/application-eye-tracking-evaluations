/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Inventory.InventoryApiBaseRequest$$GetPathParamString
ENTRY_POINT: 0341366c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


void Unity_Services_Economy_Internal_Inventory_InventoryApiBaseRequest__GetPathParamString(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 extraout_x1;
  uint uVar18;
  long unaff_x19;
  long unaff_x20;
  long *plVar19;
  undefined8 *unaff_x21;
  undefined8 uVar20;
  long unaff_x29;
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
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  uVar13 = FUN_036f9ce4();
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)Koenigz_PerfectCulling_PerfectCullingUtil_TypeInfo);
  FUN_03438678(uVar14,0x96,uVar13,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1b8,uVar14);
  uVar18 = *(uint *)(unaff_x19 + 0x2d8);
  if ((uVar18 | 2) == 2) {
    uVar14 = *(undefined8 *)(unaff_x19 + 0x318);
    uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                               );
    FUN_03436b10(uVar13,200,uVar14,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1c0) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c0,uVar13);
    uVar18 = *(uint *)(unaff_x19 + 0x2d8);
  }
  if (uVar18 == 1) {
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x328);
    in_stack_00000098 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000090);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x2f8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000098);
    uVar14 = in_stack_00000098;
    uVar13 = in_stack_00000090;
    uVar4 = *(undefined1 *)(unaff_x19 + 0x1a4);
    uVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Koenigz_PerfectCulling_PerfectCullingResourcesLocator_TypeInfo);
    FUN_034264a8(uVar15,uVar13,uVar14,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x2d0,uVar15);
    if (*(long *)(unaff_x19 + 0x2d0) == 0) goto LAB_03414000;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x2d0) + 0x1a) = *(undefined1 *)(unaff_x20 + 0x80);
    if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_036f9ce4(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar15 = *unaff_x21;
    uVar1 = *(undefined4 *)(unaff_x21 + 1);
    uVar2 = *(undefined4 *)(unaff_x29 + 0x14);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar14 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Events_PersistentCall_TypeInfo);
    FUN_0343cf8c(uVar14,0xd2,uVar13,uVar12,uVar15,uVar1,uVar2,uVar20);
    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1e0,uVar14);
    uVar13 = *unaff_x21;
    uVar12 = *(undefined4 *)(unaff_x21 + 1);
    if (*(int *)(*(long *)Koenigz_PerfectCulling_PerfectCullingResourcesLocator_TypeInfo + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    FUN_03427ffc(uVar13,uVar12,0x60,0);
    lVar16 = FUN_01ab6a94(*(undefined8 *)Photon_Realtime_PhotonAppSettings_TypeInfo,3);
    _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
    FUN_036ffd08(&stack0x00000030,
                 *(undefined8 *)UnityEngine_Rendering_LensFlareComponentSRP_TypeInfo,0);
    if (lVar16 == 0) goto LAB_03414000;
    if (*(int *)(lVar16 + 0x18) == 0) {
LAB_03414004:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined4 *)(lVar16 + 0x20) = uStack0000000000000030;
    in_stack_00000078 = 0;
    FUN_036ffd08(&stack0x00000078,*(undefined8 *)UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo,0
                );
    if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_03414004;
    *(undefined4 *)(lVar16 + 0x24) = in_stack_00000078;
    in_stack_00000070 = 0;
    FUN_036ffd08(&stack0x00000070,
                 *(undefined8 *)Fusion_Photon_Realtime_Async_PhotonLobbyCallbacks_TypeInfo,0);
    if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_03414004;
    *(undefined4 *)(lVar16 + 0x28) = in_stack_00000070;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x318);
    uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                               );
    FUN_03436b10(uVar13,0xd3,uVar14,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1e8,uVar13);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar13 = thunk_FUN_01a89e68(*(undefined8 *)Koenigz_PerfectCulling_PerfectCullingTemp_TypeInfo);
    FUN_034380a8(uVar13,0xe6,uVar14,0);
    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1f0,uVar13);
    uVar13 = FUN_036f9ce4(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                 Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
    FUN_0343a658(uVar14,*(undefined8 *)ExitGames_Client_Photon_PhotonPeer_TypeInfo,lVar16,1,0xfa,
                 uVar13,uVar12);
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1f8,uVar14);
  }
  puVar6 = UnityEngine_Rendering_PerformDynamicRes_TypeInfo;
  if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar13 = FUN_036f9ce4(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar15 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
  FUN_0343a344(uVar14,10,1,0xfa,uVar13,uVar12,uVar15,uVar1);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x200,uVar14);
  uVar13 = FUN_036f9ce4(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar15 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_0343a258(uVar14,10,1,0xfa,uVar13,uVar12,uVar15,uVar1);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x208,uVar14);
  iVar3 = *(int *)(unaff_x19 + 0x2e0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar18 = 500;
  if (iVar3 != 1) {
    uVar18 = 400;
  }
  if (*(int *)(*(long *)PTR_DAT_03cc8538 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar7 = Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_TypeInfo;
  puVar6 = Fusion_NetworkObjectNestingKey_TypeInfo;
  uVar17 = FUN_03404fc4(0);
  if ((uVar17 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_036d8bc4(0);
    bVar11 = bVar11 & 1;
  }
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                             );
  FUN_03436b10(uVar14,uVar18,uVar13,1,0,bVar11 & iVar3 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x218,uVar14);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x338);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f3da4(uVar13,uVar18 | 1,uVar14,uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c8,uVar13);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_033f233c(uVar13,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x210,uVar13);
  uVar14 = *(undefined8 *)(unaff_x19 + 800);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo);
  FUN_034357cc(uVar13,400,uVar14,uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x220,uVar13);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
  FUN_033fd400(uVar13,0x1c2,uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x228,uVar13);
  if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar13 = FUN_036f9cec(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar15 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
  FUN_0343a344(uVar14,0xb,0,0x1c2,uVar13,uVar12,uVar15,uVar1);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x230,uVar14);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Events_PersistentCallGroup_TypeInfo);
  FUN_033f3960(uVar13,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x238,uVar13);
  puVar6 = UnityEngine_Android_Permission_TypeInfo;
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Android_Permission_TypeInfo);
  FUN_033f1bc0(uVar13,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x260,uVar13);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f1bc0(uVar13,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x268,uVar13);
  FUN_033fdd20(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x308);
  in_stack_00000088 = extraout_x1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080);
  puVar6 = PTR_DAT_03cd9310;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar16 = FUN_03412404();
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar17 = FUN_036d36b4(lVar16,0);
  if ((uVar17 & 1) != 0) {
    if (lVar16 == 0) goto LAB_03414000;
    cVar5 = *(char *)(lVar16 + 0x55);
    uVar12 = *(undefined4 *)(lVar16 + 0x58);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_03414010(cVar5 != '\0',uVar12,0);
    in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar12);
  }
  puVar10 = Fusion_Photon_Realtime_Async_PhotonMatchmakingCallbacks_TypeInfo;
  puVar9 = Fusion_Photon_Realtime_PhotonAppSettings_TypeInfo;
  puVar8 = UnityEngine_Android_PermissionCallbacks_TypeInfo;
  puVar7 = Oculus_Platform_Models_NetSyncConnection_TypeInfo;
  puVar6 = Photon_Voice_Unity_MicWrapperPusher_TypeInfo;
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
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_033f1784(uVar13,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x248,uVar13);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x310);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_0343ba24(uVar13,0x3e9,uVar14,uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x240,uVar13);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
  FUN_03440d00(uVar13,*(undefined8 *)puVar10,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x270,uVar13);
  lVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033e9a54(lVar16,0);
  puVar6 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
  if (*(int *)(*(long *)System_Linq_Expressions_MethodCallExpression3_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar19 = (long *)(unaff_x19 + 0xe8);
  *plVar19 = lVar16;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar16);
  if (*(int *)(unaff_x19 + 0x2d8) == 1) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*plVar19 == 0) {
LAB_03414000:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined1 *)(*plVar19 + 0x11) = 0;
    uVar13 = FUN_01ab6a94(*(undefined8 *)UnityApplicationInsights_MetricTelemetry_TypeInfo,3);
    FUN_0267b194(uVar13,*(undefined8 *)Photon_Voice_PhotonAppSettings_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0xf0),uVar13);
  }
  puVar6 = System_Xml_IXmlLineInfo_TypeInfo;
  lVar16 = *(long *)System_Xml_IXmlLineInfo_TypeInfo;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar16 = *(long *)puVar6;
  }
  *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x24) = DAT_00d37d68;
  FUN_033a2230(0);
  bVar11 = FUN_036ef1e4(0x1d,0);
  *(byte *)(unaff_x19 + 0x304) = bVar11 & 1;
  return;
}


