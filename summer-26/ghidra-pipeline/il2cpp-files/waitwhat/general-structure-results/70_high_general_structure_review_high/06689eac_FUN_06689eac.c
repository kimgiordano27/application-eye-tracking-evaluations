/*
FUNCTION_NAME: FUN_06689eac
ENTRY_POINT: 06689eac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_3
*/


void FUN_06689eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,ulong param_10)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  
  if ((DAT_07557ea1 & 1) == 0) {
    FUN_03188a78(System_Runtime_Remoting_Activation_IActivator_TypeInfo);
    FUN_03188a78(PTR_DAT_070f7080);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HostSettingsManager_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
    FUN_03188a78(Best_HTTP_HostSetting_HostVariant_TypeInfo);
    FUN_03188a78(PTR_DAT_070f7070);
    FUN_03188a78(Oculus_Interaction_IActiveState_TypeInfo);
    FUN_03188a78(Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_IAdvancedLineRenderable_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    DAT_07557ea1 = 1;
  }
  local_68._8_8_ = 0;
  local_58 = 0;
  local_70 = 0;
  local_68._0_8_ = 0;
  local_80 = 0;
  local_78 = 0;
  local_98._8_8_ = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98._0_8_ = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  if ((int)param_5 == 0 && (int)param_10 == 0) {
    return;
  }
  lVar7 = FUN_0668a338(param_1,param_4,param_5,param_6,param_7,3);
  auVar10._8_8_ = local_68._8_8_;
  auVar10._0_8_ = local_68._0_8_;
  auVar9._8_8_ = local_98._8_8_;
  auVar9._0_8_ = local_98._0_8_;
  local_58 = lVar7;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), local_98 = auVar9, local_68 = auVar10,
     lVar8 != 0)) {
    local_68 = FUN_06695c04(lVar8,param_4,param_5,param_6,param_7,0);
    if (lVar7 == 0) goto LAB_0668a31c;
    if ((*(int *)(lVar7 + 0x20) == 0) && ((param_10 & 0xffffffff) == 0)) {
      FUN_04607dc8(&local_58,
                   *(undefined8 *)Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo)
      ;
      FUN_0697eb4c(local_68,0);
      return;
    }
    FUN_0456d398(&local_78,param_2,param_3,3,*(undefined8 *)Oculus_Interaction_IActiveState_TypeInfo
                );
    if (0 < (int)local_70) {
      local_98 = FUN_066ad908(local_78,local_70,0);
      FUN_0697eb4c(local_98,0);
    }
    auVar9 = FUN_0668a41c(param_1,local_78,local_70,local_58,param_9,param_10,3);
    lVar7 = auVar9._0_8_;
    local_88 = auVar9._8_8_;
    local_80 = lVar7;
    FUN_04607dc8(&local_58,
                 *(undefined8 *)Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo);
    puVar4 = PTR_DAT_070f7080;
    FUN_0456d550(&local_78,*(undefined8 *)PTR_DAT_070f7080);
    FUN_0697eb4c(local_68,0);
    puVar5 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    lVar8 = *(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
      lVar8 = *(long *)puVar5;
    }
    if (*(int *)(lVar7 + 8) == 0) {
      if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (*(int *)(auVar9._8_8_ + 8) == 0) goto LAB_0668a2e0;
      lVar8 = *(long *)puVar5;
      lVar7 = local_80;
    }
    uVar3 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_031c09d4();
      uVar3 = *(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135);
    }
    lVar8 = local_88;
    iVar1 = *(int *)(lVar7 + 8);
    if ((uVar3 & 1) == 0) {
      FUN_031c09d4();
    }
    iVar2 = *(int *)(lVar8 + 8);
    FUN_04568da0(&local_a8,iVar2 + iVar1,3,0,
                 *(undefined8 *)Best_HTTP_HostSetting_HostVariant_TypeInfo);
    FUN_0456d268(&local_b8,iVar2 + iVar1,3,0,*(undefined8 *)PTR_DAT_070f7070);
    puVar5 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
    auVar9 = FUN_0460e8d4(&local_80,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    puVar6 = System_Runtime_Remoting_Activation_IActivator_TypeInfo;
    FUN_0456dce8(auVar9._0_8_,auVar9._8_8_,local_b8,local_b0,iVar1,
                 *(undefined8 *)System_Runtime_Remoting_Activation_IActivator_TypeInfo);
    auVar9 = FUN_0460e8d4(&local_88,*(undefined8 *)puVar5);
    auVar10 = FUN_0456e194(&local_b8,iVar1,iVar2,
                           *(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
    FUN_0456dce8(auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_,iVar2,*(undefined8 *)puVar6);
    if (*(long *)(param_1 + 0x38) != 0) {
      auVar9 = FUN_066acca0(*(long *)(param_1 + 0x38),local_b8,local_b0,local_a8,local_a0,0);
      local_98 = auVar9;
      FUN_0697eb4c(local_98,0);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
        FUN_06694d38(lVar7,local_a8,local_a0,0);
        lVar7 = *(long *)(param_1 + 0x40);
        auVar9 = FUN_0460e8d4(&local_80,*(undefined8 *)puVar5);
        if (lVar7 != 0) {
          FUN_066872e8(lVar7,auVar9._0_8_,auVar9._8_8_,1);
          lVar7 = *(long *)(param_1 + 0x40);
          auVar9 = FUN_0460e8d4(&local_88,*(undefined8 *)puVar5);
          if (lVar7 != 0) {
            FUN_066872e8(lVar7,auVar9._0_8_,auVar9._8_8_,0);
            FUN_04569088(&local_a8,
                         *(undefined8 *)Best_HTTP_Hosts_Settings_HostSettingsManager_TypeInfo);
            FUN_0456d550(&local_b8,*(undefined8 *)puVar4);
LAB_0668a2e0:
            puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
            FUN_0460e7ac(&local_80,
                         *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
            FUN_0460e7ac(&local_88,*(undefined8 *)puVar4);
            return;
          }
        }
      }
    }
  }
LAB_0668a31c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


