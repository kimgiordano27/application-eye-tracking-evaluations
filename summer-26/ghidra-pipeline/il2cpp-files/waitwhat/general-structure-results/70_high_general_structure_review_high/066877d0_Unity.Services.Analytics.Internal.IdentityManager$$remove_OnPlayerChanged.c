/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.IdentityManager$$remove_OnPlayerChanged
ENTRY_POINT: 066877d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_IdentityManager__remove_OnPlayerChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  *(undefined1 *)(unaff_x20 + 0xe8a) = 1;
  uStack0000000000000050 = 0;
  lStack0000000000000058 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  auVar8 = ZEXT816(0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar4 = FUN_066ac9a0(*(long *)(unaff_x19 + 0x10),1,0);
    auVar8._8_8_ = uStack0000000000000040;
    auVar8._0_8_ = uStack0000000000000038;
    if (iVar4 == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_06695dd4(*(long *)(unaff_x19 + 0x30),0,0);
      uStack0000000000000068 = in_stack_00000008;
      uStack0000000000000060 = in_stack_00000000;
      uStack0000000000000078 = in_stack_00000018;
      uStack0000000000000070 = in_stack_00000010;
      uVar7 = FUN_066ad500(&stack0x00000060,0);
      auVar8._8_8_ = uStack0000000000000040;
      auVar8._0_8_ = uStack0000000000000038;
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        auVar8 = FUN_066abee4(*(long *)(unaff_x19 + 0x10),0);
        _uStack0000000000000038 = auVar8;
        uVar7 = FUN_066ad500(unaff_x19 + 0x38,0);
        if ((uVar7 & 1) == 0) {
          FUN_066ad544();
          *(undefined8 *)(unaff_x19 + 0x40) = 0;
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          *(undefined8 *)(unaff_x19 + 0x48) = 0;
        }
        else if (*(int *)(unaff_x19 + 0x50) < auVar8._8_4_) {
          FUN_066ad634(unaff_x19 + 0x38,auVar8._8_8_ & 0xffffffff,0);
        }
        if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar5 = FUN_06986514(0);
        uVar6 = FUN_064b5b9c(3,0);
        FUN_0460e320(&stack0x00000058,uVar6,
                     *(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
        uVar6 = FUN_064b5b9c(3,0);
        FUN_0460d31c(&stack0x00000050,uVar6,
                     *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
        auVar8 = _uStack0000000000000038;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_066ad04c(*(long *)(unaff_x19 + 0x10),&stack0x00000060,unaff_x19 + 0x38,
                       lStack0000000000000058,uStack0000000000000050,(uVar5 ^ 0xffffffff) & 1,
                       &stack0x0000004c,0);
          lVar3 = lStack0000000000000058;
          if ((*(ushort *)
                (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
          if (0 < *(int *)(lVar3 + 8)) {
            _uStack0000000000000028 =
                 FUN_0460e8d4(&stack0x00000058,
                              *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
            FUN_0456e194(&stack0x00000028,0,uStack000000000000004c,
                         *(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
            puVar1 = OVR_OpenVR_HmdQuad_t_TypeInfo;
            auVar8 = FUN_0460d8d0(&stack0x00000050,*(undefined8 *)OVR_OpenVR_HmdQuad_t_TypeInfo);
            _uStack0000000000000038 = auVar8;
            FUN_04569ccc(&stack0x00000038,0,uStack000000000000004c,
                         *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo)
            ;
            if (0 < extraout_w1) {
              FUN_06687a88();
            }
            FUN_0460e8d4(&stack0x00000058,*(undefined8 *)puVar2);
            FUN_0460d8d0(&stack0x00000050,*(undefined8 *)puVar1);
            FUN_06687a88();
          }
          FUN_0460e7ac(&stack0x00000058,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
          FUN_0460d7a8(&stack0x00000050,*(undefined8 *)OVR_OpenVR_HmdRect2_t_TypeInfo);
          return;
        }
      }
    }
  }
  _uStack0000000000000038 = auVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


