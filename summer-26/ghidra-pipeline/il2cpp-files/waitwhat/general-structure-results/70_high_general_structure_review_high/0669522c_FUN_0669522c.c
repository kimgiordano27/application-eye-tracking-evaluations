/*
FUNCTION_NAME: FUN_0669522c
ENTRY_POINT: 0669522c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0669522c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  
  puVar7 = Oculus_Interaction_IGrabbable_TypeInfo;
  puVar6 = Fusion_IAfterRender_TypeInfo;
  puVar2 = UnityEngine_InputSystem_HumiditySensor_TypeInfo;
  puVar5 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
  if ((DAT_07557f06 & 1) == 0) {
    FUN_03188a78(Oculus_Interaction_IGrabbable_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_TypeInfo);
    FUN_03188a78(PTR_DAT_070c22f8);
    FUN_03188a78(UnityEngine_UIElements_IGroupBox_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_IGroupBoxOption_TypeInfo);
    FUN_03188a78(Best_HTTP_HostSetting_HostProtocolSupport_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_IGroupManager_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(Fusion_IAfterRender_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Connections_IHTTPRequestHandler_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_IHand_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_IHandGrabInteractable_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_IHandGrabInteractor_TypeInfo);
    DAT_07557f06 = 1;
  }
  puVar9 = UnityEngine_UIElements_IGroupManager_TypeInfo;
  puVar8 = UnityEngine_UIElements_IGroupBoxOption_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
  puVar3 = Best_HTTP_HostSetting_HostProtocolSupport_TypeInfo;
  uStack_b0 = 0;
  local_a8 = 0;
  local_c8._8_8_ = 0;
  local_b8 = 0;
  local_c8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_d8._0_8_ = 0;
  uVar10 = FUN_064b5b9c(3,0);
  FUN_0460e36c(&local_a8,param_3 & 0xffffffff,uVar10,*(undefined8 *)puVar2);
  uVar14 = *(undefined8 *)(param_1 + 0x1e8);
  uVar13 = *(undefined8 *)(param_1 + 0x1e0);
  local_80._0_8_ = FUN_0460eabc(&local_a8,*(undefined8 *)puVar6);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_a0._0_8_ = param_2;
  local_a0._8_8_ = param_3;
  local_90 = uVar13;
  uStack_88 = uVar14;
  local_c8 = FUN_03ad4628(local_a0,param_3 & 0xffffffff,0x80,0,0,*(undefined8 *)puVar7);
  FUN_0697eb4c(local_c8,0);
  lVar12 = local_a8;
  if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_04545750(&local_b8,*(undefined4 *)(lVar12 + 8),3,0,*(undefined8 *)puVar8);
  lVar12 = *(long *)(param_1 + 0x20);
  local_d8 = FUN_0460e8d4(&local_a8,*(undefined8 *)puVar4);
  auVar16 = FUN_0456e320(local_d8,*(undefined8 *)puVar3);
  auVar17 = FUN_045467d0(&local_b8,*(undefined8 *)puVar9);
  puVar6 = Oculus_Interaction_HandGrab_IHandGrabInteractable_TypeInfo;
  puVar2 = Oculus_Interaction_Input_IHand_TypeInfo;
  if (lVar12 != 0) {
    FUN_06a16800(lVar12,auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    iVar11 = FUN_0461eaf4(param_1 + 0x1e0,*(undefined8 *)puVar2);
    iVar1 = (int)uStack_b0;
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4(*(long *)(*(long *)puVar6 + 0x20));
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar15 = DAT_012e3d5c;
    if (*(long *)(param_1 + 0x1e0) != 0) {
      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x1e0) + 0x20);
      if (DAT_07546c88 == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546c88 = '\x01';
      }
      puVar7 = Oculus_Interaction_HandGrab_IHandGrabInteractor_TypeInfo;
      puVar6 = Best_HTTP_Hosts_Connections_IHTTPRequestHandler_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
      }
      puVar8 = UnityEngine_UIElements_IGroupBox_TypeInfo;
      puVar3 = UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_TypeInfo;
      puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
      fVar15 = (float)(int)((float)(iVar1 + iVar11) / fVar15);
      iVar1 = 0;
      if (fVar15 != INFINITY) {
        iVar1 = (int)fVar15 << 10;
      }
      uVar10 = FUN_059306e4(uVar10,iVar1,0);
      FUN_0461eb64(param_1 + 0x1e0,uVar10,*(undefined8 *)puVar7);
      auVar16 = FUN_0460e8d4(&local_a8,*(undefined8 *)puVar4);
      uVar14 = uStack_b0;
      uVar13 = local_b8;
      auVar17 = FUN_0461eeb0(param_1 + 0x1e0,*(undefined8 *)puVar6);
      lVar12 = local_a8;
      if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      local_c8._0_8_ = 0;
      local_c8._8_8_ = 0;
      uStack_88 = uVar14;
      local_90 = uVar13;
      local_a0 = auVar16;
      local_80 = auVar17;
      local_c8 = FUN_03ad7044(local_a0,*(undefined4 *)(lVar12 + 8),0x80,0,0,*(undefined8 *)puVar3);
      FUN_0697eb4c(local_c8,0);
      FUN_0460e7ac(&local_a8,*(undefined8 *)puVar2);
      FUN_04545a38(&local_b8,*(undefined8 *)puVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


