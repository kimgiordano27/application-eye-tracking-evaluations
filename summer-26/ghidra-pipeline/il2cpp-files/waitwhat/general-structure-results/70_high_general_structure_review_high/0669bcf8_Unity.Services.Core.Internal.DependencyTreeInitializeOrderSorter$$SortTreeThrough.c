/*
FUNCTION_NAME: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter$$SortTreeThrough
ENTRY_POINT: 0669bcf8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Core_Internal_DependencyTreeInitializeOrderSorter__SortTreeThrough(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  int iVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  int iStack0000000000000058;
  int iStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  
  FUN_03188a78(System_Net_Http_IMonoHttpClientHandler_TypeInfo);
  FUN_03188a78(Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo);
  FUN_03188a78(PTR_DAT_07110880);
  FUN_03188a78(Fusion_INetworkRunnerCallbacks_TypeInfo);
  FUN_03188a78(Fusion_INetworkRunnerUpdater_TypeInfo);
  FUN_03188a78(Meta_XR_MultiplayerBlocks_Colocation_INetworkMessenger_TypeInfo);
  FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0xf54) = 1;
  puVar2 = Fusion_INetworkObjectProvider_TypeInfo;
  in_stack_000000a0 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  _iStack0000000000000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  FUN_0456d550();
  FUN_0460e7ac(unaff_x19 + 0x10,*unaff_x27);
  FUN_045bca24(unaff_x19 + 0x18,*unaff_x26);
  FUN_0456d550(unaff_x19 + 0x28,*unaff_x22);
  FUN_045befe8(&stack0x00000050,unaff_x19 + 0x38,*unaff_x25);
  iVar8 = iStack0000000000000060 + 1;
  lVar7 = *unaff_x23;
  _iStack0000000000000060 = CONCAT44(uStack0000000000000064,iVar8);
  if (iVar8 < iStack0000000000000058) {
    do {
      lVar5 = in_stack_00000050;
      if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar1 = (undefined8 *)(lVar5 + (long)iVar8 * 0x40);
      in_stack_00000038 = puVar1[5];
      in_stack_00000030 = puVar1[4];
      in_stack_00000048 = puVar1[7];
      in_stack_00000040 = puVar1[6];
      in_stack_00000018 = puVar1[1];
      in_stack_00000010 = *puVar1;
      in_stack_00000028 = puVar1[3];
      in_stack_00000020 = puVar1[2];
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000078 = in_stack_00000020;
      in_stack_00000080 = in_stack_00000028;
      in_stack_00000088 = in_stack_00000030;
      in_stack_00000090 = in_stack_00000038;
      in_stack_00000098 = in_stack_00000040;
      in_stack_000000a0 = in_stack_00000048;
      FUN_0669bf7c(&stack0x00000010);
      iVar8 = iStack0000000000000060 + 1;
      lVar7 = *unaff_x23;
      _iStack0000000000000060 = CONCAT44(uStack0000000000000064,iVar8);
    } while (iVar8 < iStack0000000000000058);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  in_stack_00000080 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000068 = 0;
  System_Collections_Generic_EqualityComparer<NativeArray<ConvertMeshJobData>>__get_Default
            (&stack0x00000050,uVar6);
  puVar4 = Fusion_INetworkRunnerCallbacks_TypeInfo;
  puVar3 = System_Net_Http_IMonoHttpClientHandler_TypeInfo;
  puVar2 = PTR_DAT_07110880;
  FUN_045bec68(unaff_x19 + 0x38,*(undefined8 *)Fusion_INetworkRunnerUpdater_TypeInfo);
  FUN_0456d550(unaff_x19 + 0x48,*unaff_x22);
  FUN_045414ec(unaff_x19 + 0x58,*(undefined8 *)puVar3);
  FUN_0454c0a8(unaff_x19 + 0x68,*(undefined8 *)puVar4);
  FUN_045c65ec(unaff_x19 + 0x78,*(undefined8 *)puVar2);
  FUN_0456d550(unaff_x19 + 0x88,*unaff_x22);
  FUN_0456d550(unaff_x19 + 0x98,*unaff_x22);
  if (*(long *)(unaff_x21 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


