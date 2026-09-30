/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Inventory.InventoryApiBaseRequest$$.ctor
ENTRY_POINT: 03413a00
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


void Unity_Services_Economy_Internal_Inventory_InventoryApiBaseRequest___ctor(void)

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
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 extraout_x1;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  undefined8 *unaff_x21;
  undefined8 uVar18;
  undefined8 *unaff_x28;
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
  
  uVar12 = FUN_036f9ce4(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar18 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
  FUN_0343a344(uVar13,10,1,0xfa,uVar12,uVar11,uVar18,uVar1);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x200,uVar13);
  uVar12 = FUN_036f9ce4(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar18 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar13 = thunk_FUN_01a89e68(*unaff_x28);
  FUN_0343a258(uVar13,10,1,0xfa,uVar12,uVar11,uVar18,uVar1);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x208,uVar13);
  iVar2 = *(int *)(unaff_x19 + 0x2e0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar16 = 500;
  if (iVar2 != 1) {
    uVar16 = 400;
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
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                               _Common_Graphics_Scripts_BatchRenderGroup_PerfectCullingHelper_TypeInfo
                             );
  FUN_03436b10(uVar13,uVar16,uVar12,1,0,bVar10 & iVar2 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x218,uVar13);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x338);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
  FUN_033f3da4(uVar12,uVar16 | 1,uVar13,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c8,uVar12);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f233c(uVar12,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x210,uVar12);
  uVar13 = *(undefined8 *)(unaff_x19 + 800);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingExcludeVolume_TypeInfo);
  FUN_034357cc(uVar12,400,uVar13,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x220,uVar12);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
  FUN_033fd400(uVar12,0x1c2,uVar3,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x228,uVar12);
  if (*(int *)(*(long *)RootMotion_FinalIK_LegIK_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_036f9cec(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar18 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                               Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_TypeInfo);
  FUN_0343a344(uVar13,0xb,0,0x1c2,uVar12,uVar11,uVar18,uVar1);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x230,uVar13);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Events_PersistentCallGroup_TypeInfo);
  FUN_033f3960(uVar12,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x238,uVar12);
  puVar5 = UnityEngine_Android_Permission_TypeInfo;
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)UnityEngine_Android_Permission_TypeInfo);
  FUN_033f1bc0(uVar12,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x260,uVar12);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
  FUN_033f1bc0(uVar12,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x268,uVar12);
  FUN_033fdd20(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x308);
  in_stack_00000088 = extraout_x1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000080);
  puVar5 = PTR_DAT_03cd9310;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar15 = FUN_03412404();
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar14 = FUN_036d36b4(lVar15,0);
  if ((uVar14 & 1) != 0) {
    if (lVar15 == 0) goto LAB_03414000;
    cVar4 = *(char *)(lVar15 + 0x55);
    uVar11 = *(undefined4 *)(lVar15 + 0x58);
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
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_033f1784(uVar12,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x248,uVar12);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x308);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x310);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_0343ba24(uVar12,0x3e9,uVar13,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x240,uVar12);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_03440d00(uVar12,*(undefined8 *)puVar9,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar12;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x270,uVar12);
  lVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
  FUN_033e9a54(lVar15,0);
  puVar5 = System_Linq_Expressions_MethodCallExpression3_TypeInfo;
  if (*(int *)(*(long *)System_Linq_Expressions_MethodCallExpression3_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar17 = (long *)(unaff_x19 + 0xe8);
  *plVar17 = lVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar15);
  if (*(int *)(unaff_x19 + 0x2d8) == 1) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*plVar17 == 0) {
LAB_03414000:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined1 *)(*plVar17 + 0x11) = 0;
    uVar12 = FUN_01ab6a94(*(undefined8 *)UnityApplicationInsights_MetricTelemetry_TypeInfo,3);
    FUN_0267b194(uVar12,*(undefined8 *)Photon_Voice_PhotonAppSettings_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0xf0),uVar12);
  }
  puVar5 = System_Xml_IXmlLineInfo_TypeInfo;
  lVar15 = *(long *)System_Xml_IXmlLineInfo_TypeInfo;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar15 = *(long *)puVar5;
  }
  *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x24) = DAT_00d37d68;
  FUN_033a2230(0);
  bVar10 = FUN_036ef1e4(0x1d,0);
  *(byte *)(unaff_x19 + 0x304) = bVar10 & 1;
  return;
}


