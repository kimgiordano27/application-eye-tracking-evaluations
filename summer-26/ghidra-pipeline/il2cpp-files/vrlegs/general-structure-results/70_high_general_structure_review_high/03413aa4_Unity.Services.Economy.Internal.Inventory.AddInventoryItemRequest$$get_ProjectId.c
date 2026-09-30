/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Inventory.AddInventoryItemRequest$$get_ProjectId
ENTRY_POINT: 03413aa4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


void Unity_Services_Economy_Internal_Inventory_AddInventoryItemRequest__get_ProjectId
               (undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 extraout_x1;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  undefined8 *unaff_x21;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x29;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000008 = 0;
  FUN_0343a258();
  *(undefined8 *)(unaff_x19 + 0x208) = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x208,param_1);
  iVar1 = *(int *)(unaff_x19 + 0x2e0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar16 = 500;
  if (iVar1 != 1) {
    uVar16 = 400;
  }
  if (*(int *)(*(long *)PTR_DAT_03cc8538 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar7 = Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_TypeInfo;
  puVar6 = Fusion_NetworkObjectNestingKey_TypeInfo;
  uVar13 = FUN_03404fc4(0);
  if ((uVar13 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_036d8bc4(0);
    bVar11 = bVar11 & 1;
  }
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                             );
  FUN_03436b10(uVar14,uVar16,uVar18,1,0,bVar11 & iVar1 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x218,uVar14);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x338);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f3da4(uVar18,uVar16 | 1,uVar14,uVar19,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c8,uVar18);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_033f233c(uVar18,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x210,uVar18);
  uVar14 = *(undefined8 *)(unaff_x19 + 800);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo);
  FUN_034357cc(uVar18,400,uVar14,uVar19,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x220,uVar18);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
  FUN_033fd400(uVar18,0x1c2,uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x228,uVar18);
  if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar18 = FUN_036f9cec(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar19 = *unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x21 + 1);
  uVar3 = *(undefined4 *)(unaff_x29 + 0x14);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
  uStack0000000000000008 = 0;
  uStack0000000000000000 = uVar3;
  FUN_0343a344(uVar14,0xb,0,0x1c2,uVar18,uVar12,uVar19,uVar2);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x230,uVar14);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Events_PersistentCallGroup_TypeInfo);
  FUN_033f3960(uVar18,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x238,uVar18);
  puVar6 = UnityEngine_Android_Permission_TypeInfo;
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Android_Permission_TypeInfo);
  FUN_033f1bc0(uVar18,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x260,uVar18);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f1bc0(uVar18,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x268,uVar18);
  FUN_033fdd20(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x308);
  in_stack_00000088 = extraout_x1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080);
  puVar6 = PTR_DAT_03cd9310;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar15 = FUN_03412404();
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar13 = FUN_036d36b4(lVar15,0);
  if ((uVar13 & 1) != 0) {
    if (lVar15 == 0) goto LAB_03414000;
    cVar5 = *(char *)(lVar15 + 0x55);
    uVar12 = *(undefined4 *)(lVar15 + 0x58);
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
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_033fddcc(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,0);
  *(undefined8 *)(unaff_x19 + 0x368) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x360) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x378) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x370) = in_stack_00000060;
  *(undefined8 *)(unaff_x19 + 0x348) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x340) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x358) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x350) = in_stack_00000040;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x340,0);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_033f1784(uVar18,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x248,uVar18);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x310);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_0343ba24(uVar18,0x3e9,uVar14,uVar19,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x240,uVar18);
  uVar18 = thunk_FUN_01a89e68(*(undefined8 *)puVar9);
  FUN_03440d00(uVar18,*(undefined8 *)puVar10,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar18;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x270,uVar18);
  lVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033e9a54(lVar15,0);
  puVar6 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
  if (*(int *)(*(long *)System_Linq_Expressions_MethodCallExpression3_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar17 = (long *)(unaff_x19 + 0xe8);
  *plVar17 = lVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar15);
  if (*(int *)(unaff_x19 + 0x2d8) == 1) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*plVar17 == 0) {
LAB_03414000:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined1 *)(*plVar17 + 0x11) = 0;
    uVar18 = FUN_01ab6a94(*(undefined8 *)UnityApplicationInsights_MetricTelemetry_TypeInfo,3);
    FUN_0267b194(uVar18,*(undefined8 *)Photon_Voice_PhotonAppSettings_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar18;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0xf0),uVar18);
  }
  puVar6 = System_Xml_IXmlLineInfo_TypeInfo;
  lVar15 = *(long *)System_Xml_IXmlLineInfo_TypeInfo;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar15 = *(long *)puVar6;
  }
  *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x24) = DAT_00d37d68;
  FUN_033a2230(0);
  bVar11 = FUN_036ef1e4(0x1d,0);
  *(byte *)(unaff_x19 + 0x304) = bVar11 & 1;
  return;
}


