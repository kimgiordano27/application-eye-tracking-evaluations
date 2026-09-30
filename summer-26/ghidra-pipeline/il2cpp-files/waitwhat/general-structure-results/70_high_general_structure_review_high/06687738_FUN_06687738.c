/*
FUNCTION_NAME: FUN_06687738
ENTRY_POINT: 06687738
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_9;strong_file_logging_hits_4
*/


void FUN_06687738(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_07557e8a & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(OVR_OpenVR_HmdQuad_t_TypeInfo);
    FUN_03188a78(OVR_OpenVR_HmdRect2_t_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    DAT_07557e8a = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_64 = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  auVar8 = ZEXT816(0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = FUN_066ac9a0(*(long *)(param_1 + 0x10),1,0);
    auVar8._8_8_ = local_78._8_8_;
    auVar8._0_8_ = local_78._0_8_;
    if (iVar4 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_06695dd4(&local_b0,*(long *)(param_1 + 0x30),0,0);
      uStack_48 = uStack_a8;
      local_50 = local_b0;
      uStack_38 = uStack_98;
      uStack_40 = uStack_a0;
      uVar7 = FUN_066ad500(&local_50,0);
      auVar8._8_8_ = local_78._8_8_;
      auVar8._0_8_ = local_78._0_8_;
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        auVar8 = FUN_066abee4(*(long *)(param_1 + 0x10),0);
        local_78 = auVar8;
        uVar7 = FUN_066ad500(param_1 + 0x38,0);
        if ((uVar7 & 1) == 0) {
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          FUN_066ad544(&local_b0,auVar8._8_8_ & 0xffffffff,3,1,0);
          *(undefined8 *)(param_1 + 0x40) = uStack_a8;
          *(undefined8 *)(param_1 + 0x38) = local_b0;
          *(undefined8 *)(param_1 + 0x50) = uStack_98;
          *(undefined8 *)(param_1 + 0x48) = uStack_a0;
        }
        else if (*(int *)(param_1 + 0x50) < auVar8._8_4_) {
          FUN_066ad634(param_1 + 0x38,auVar8._8_8_ & 0xffffffff,0);
        }
        if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar5 = FUN_06986514(0);
        uVar6 = FUN_064b5b9c(3,0);
        FUN_0460e320(&local_58,uVar6,*(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
        uVar6 = FUN_064b5b9c(3,0);
        FUN_0460d31c(&local_60,uVar6,
                     *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
        auVar8 = local_78;
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_066ad04c(*(long *)(param_1 + 0x10),&local_50,param_1 + 0x38,local_58,local_60,
                       (uVar5 ^ 0xffffffff) & 1,&local_64,0);
          lVar3 = local_58;
          if ((*(ushort *)
                (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
          if (0 < *(int *)(lVar3 + 8)) {
            local_88 = FUN_0460e8d4(&local_58,
                                    *(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo
                                   );
            auVar8 = FUN_0456e194(local_88,0,local_64,
                                  *(undefined8 *)
                                   Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
            puVar1 = OVR_OpenVR_HmdQuad_t_TypeInfo;
            auVar9 = FUN_0460d8d0(&local_60,*(undefined8 *)OVR_OpenVR_HmdQuad_t_TypeInfo);
            local_78 = auVar9;
            auVar9 = FUN_04569ccc(local_78,0,local_64,
                                  *(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
            if (0 < auVar8._8_4_) {
              FUN_06687a88(param_1,auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,1);
            }
            auVar8 = FUN_0460e8d4(&local_58,*(undefined8 *)puVar2);
            auVar9 = FUN_0460d8d0(&local_60,*(undefined8 *)puVar1);
            FUN_06687a88(param_1,auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
          }
          FUN_0460e7ac(&local_58,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
          FUN_0460d7a8(&local_60,*(undefined8 *)OVR_OpenVR_HmdRect2_t_TypeInfo);
          return;
        }
      }
    }
  }
  local_78 = auVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


