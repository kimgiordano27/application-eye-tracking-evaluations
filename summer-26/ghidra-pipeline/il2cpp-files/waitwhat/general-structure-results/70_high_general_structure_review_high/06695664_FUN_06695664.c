/*
FUNCTION_NAME: FUN_06695664
ENTRY_POINT: 06695664
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06695664(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  
  puVar6 = Fusion_IAfterRender_TypeInfo;
  puVar2 = System_Runtime_Serialization_HybridObjectCache_TypeInfo;
  puVar5 = UnityEngine_InputSystem_HumiditySensor_TypeInfo;
  if ((DAT_07557f07 & 1) == 0) {
    FUN_03188a78(Oculus_Interaction_HandGrab_IHandGrabState_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_IHandGrabUseDelegate_TypeInfo);
    FUN_03188a78(PTR_DAT_070c22f8);
    FUN_03188a78(Oculus_Interaction_Input_IHandSkeletonProvider_TypeInfo);
    FUN_03188a78(Oculus_Interaction_IHandSphereMap_TypeInfo);
    FUN_03188a78(Best_HTTP_HostSetting_HostProtocolSupport_TypeInfo);
    FUN_03188a78(Oculus_Interaction_IHandVisual_TypeInfo);
    FUN_03188a78(System_Net_HttpVersion_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_Haptics_IHaptics_TypeInfo);
    FUN_03188a78(Fusion_IAfterRender_TypeInfo);
    FUN_03188a78(System_Net_HttpWebRequest_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_HybridObjectCache_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(Sentry_IHasData_TypeInfo);
    FUN_03188a78(Sentry_IHasExtra_TypeInfo);
    FUN_03188a78(Sentry_IHasTags_TypeInfo);
    FUN_03188a78(System_Collections_IHashCodeProvider_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
    FUN_03188a78(Oisoi_Animation_IHideable_TypeInfo);
    DAT_07557f07 = 1;
  }
  puVar8 = Oculus_Interaction_IHandVisual_TypeInfo;
  puVar7 = Oculus_Interaction_IHandSphereMap_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
  puVar3 = Best_HTTP_HostSetting_HostProtocolSupport_TypeInfo;
  local_d0 = 0;
  local_c8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uVar15 = param_2[1];
  local_f0._0_8_ = *param_2;
  local_130._8_8_ = 0;
  local_130._0_8_ = 0;
  local_f0._8_8_ = uVar15;
  uVar10 = FUN_064b5b9c(3,0);
  FUN_0460e36c(&local_c8,uVar15 & 0xffffffff,uVar10,*(undefined8 *)puVar5);
  uVar15 = param_2[1];
  local_f0._0_8_ = *param_2;
  local_f0._8_8_ = uVar15;
  uVar10 = FUN_064b5b9c(3,0);
  FUN_0460abac(&local_d0,uVar15 & 0xffffffff,uVar10,*(undefined8 *)puVar2);
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_3[1];
  uStack_110 = *param_3;
  uStack_f8 = *(undefined8 *)(param_1 + 0x1c8);
  local_100 = *(undefined8 *)(param_1 + 0x1c0);
  uVar12 = FUN_0460eabc(&local_c8,*(undefined8 *)puVar6);
  local_90._8_8_ =
       FUN_0460b2fc(&local_d0,*(undefined8 *)UnityEngine_InputSystem_Haptics_IHaptics_TypeInfo);
  local_f0._8_8_ = param_2[1];
  local_f0._0_8_ = *param_2;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  local_c0._8_8_ = uStack_118;
  local_c0._0_8_ = local_120;
  local_b0._8_8_ = uStack_108;
  local_b0._0_8_ = uStack_110;
  uStack_98 = uStack_f8;
  local_a0 = local_100;
  local_90._0_8_ = uVar12;
  local_130 = FUN_03ad45a4(local_c0,local_f0._8_8_ & 0xffffffff,0x80,0,0,
                           *(undefined8 *)Oculus_Interaction_HandGrab_IHandGrabState_TypeInfo);
  FUN_0697eb4c(local_130,0);
  lVar14 = local_c8;
  puVar5 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
  if ((*(ushort *)
        (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135) & 1)
      == 0) {
    FUN_031c09d4();
  }
  FUN_04544660(&local_e0,*(undefined4 *)(lVar14 + 8),3,0,*(undefined8 *)puVar7);
  lVar14 = *(long *)(param_1 + 0x20);
  local_f0 = FUN_0460e8d4(&local_c8,*(undefined8 *)puVar4);
  auVar17 = FUN_0456e320(local_f0,*(undefined8 *)puVar3);
  auVar18 = FUN_045456e0(&local_e0,*(undefined8 *)puVar8);
  puVar6 = System_Collections_IHashCodeProvider_TypeInfo;
  puVar2 = Sentry_IHasTags_TypeInfo;
  if (lVar14 != 0) {
    FUN_06a165cc(lVar14,auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
    iVar11 = FUN_0461e5c4(param_1 + 0x1c0,*(undefined8 *)puVar2);
    lVar14 = local_c8;
    lVar13 = *(long *)(*(long *)puVar5 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar13);
    }
    iVar1 = *(int *)(lVar14 + 8);
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar16 = DAT_012e3d5c;
    if (*(long *)(param_1 + 0x1c0) != 0) {
      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x20);
      if (DAT_07546c88 == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546c88 = '\x01';
      }
      puVar3 = Oisoi_Animation_IHideable_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
      }
      fVar16 = (float)(int)((float)(iVar1 + iVar11) / fVar16);
      iVar11 = 0;
      if (fVar16 != INFINITY) {
        iVar11 = (int)fVar16 << 10;
      }
      uVar10 = FUN_059306e4(uVar10,iVar11,0);
      FUN_0461e634(param_1 + 0x1c0,uVar10,*(undefined8 *)puVar3);
      if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar8 = Sentry_IHasExtra_TypeInfo;
      puVar7 = Sentry_IHasData_TypeInfo;
      puVar3 = Oculus_Interaction_HandGrab_IHandGrabUseDelegate_TypeInfo;
      puVar6 = System_Net_HttpVersion_TypeInfo;
      puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
      if (*(long *)(param_1 + 0x1c0) != 0) {
        FUN_0461f094(param_1 + 0x1d0,*(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x20),
                     *(undefined8 *)Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
        auVar17 = FUN_0460e8d4(&local_c8,*(undefined8 *)puVar4);
        auVar18 = FUN_0460b114(&local_d0,*(undefined8 *)puVar6);
        uVar9 = uStack_d8;
        uVar12 = local_e0;
        auVar19 = FUN_0461e980(param_1 + 0x1c0,*(undefined8 *)puVar8);
        local_80 = FUN_0461f3e0(param_1 + 0x1d0,*(undefined8 *)puVar7);
        lVar14 = local_c8;
        if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        local_130._0_8_ = 0;
        local_130._8_8_ = 0;
        uStack_98 = uVar9;
        local_a0 = uVar12;
        local_c0 = auVar17;
        local_b0 = auVar18;
        local_90 = auVar19;
        local_130 = FUN_03ad6fa4(local_c0,*(undefined4 *)(lVar14 + 8),0x80,0,0,*(undefined8 *)puVar3
                                );
        FUN_0697eb4c(local_130,0);
        FUN_0460e7ac(&local_c8,*(undefined8 *)puVar2);
        FUN_0460afec(&local_d0,*(undefined8 *)System_Net_HttpWebRequest_TypeInfo);
        FUN_04544948(&local_e0,
                     *(undefined8 *)Oculus_Interaction_Input_IHandSkeletonProvider_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


