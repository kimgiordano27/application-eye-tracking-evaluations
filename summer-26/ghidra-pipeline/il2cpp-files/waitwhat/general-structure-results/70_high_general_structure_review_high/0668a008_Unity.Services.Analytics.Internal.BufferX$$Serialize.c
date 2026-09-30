/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$Serialize
ENTRY_POINT: 0668a008
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_BufferX__Serialize(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000c0;
  
  if (unaff_w20 == 0) {
    FUN_04607dc8(&stack0x00000068,
                 *(undefined8 *)Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo);
    FUN_0697eb4c(&stack0x00000058,0);
    return;
  }
  FUN_0456d398(&stack0x00000048);
  if (0 < iStack0000000000000050) {
    _in_stack_00000028 =
         FUN_066ad908(in_stack_00000048,CONCAT44(uStack0000000000000054,iStack0000000000000050),0);
    FUN_0697eb4c(&stack0x00000028,0);
  }
  auVar9 = FUN_0668a41c();
  lVar7 = auVar9._0_8_;
  in_stack_00000038 = auVar9._8_8_;
  in_stack_00000040 = lVar7;
  FUN_04607dc8(&stack0x00000068,
               *(undefined8 *)Oculus_Interaction_PoseDetection_Debug_IActiveStateModel_TypeInfo);
  puVar4 = PTR_DAT_070f7080;
  FUN_0456d550(&stack0x00000048,*(undefined8 *)PTR_DAT_070f7080);
  FUN_0697eb4c(&stack0x00000058,0);
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
    lVar7 = in_stack_00000040;
  }
  uVar3 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_031c09d4();
    uVar3 = *(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135);
  }
  lVar8 = in_stack_00000038;
  iVar1 = *(int *)(lVar7 + 8);
  if ((uVar3 & 1) == 0) {
    FUN_031c09d4();
  }
  iVar2 = *(int *)(lVar8 + 8);
  FUN_04568da0(&stack0x00000018,iVar2 + iVar1,3,0,
               *(undefined8 *)Best_HTTP_HostSetting_HostVariant_TypeInfo);
  FUN_0456d268(&stack0x00000008,iVar2 + iVar1,3,0,*(undefined8 *)PTR_DAT_070f7070);
  puVar5 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
  auVar9 = FUN_0460e8d4(&stack0x00000040,
                        *(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
  puVar6 = System_Runtime_Remoting_Activation_IActivator_TypeInfo;
  FUN_0456dce8(auVar9._0_8_,auVar9._8_8_,in_stack_00000008,in_stack_00000010,iVar1,
               *(undefined8 *)System_Runtime_Remoting_Activation_IActivator_TypeInfo);
  auVar9 = FUN_0460e8d4(&stack0x00000038,*(undefined8 *)puVar5);
  auVar10 = FUN_0456e194(&stack0x00000008,iVar1,iVar2,
                         *(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
  FUN_0456dce8(auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_,iVar2,*(undefined8 *)puVar6);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    auVar9 = FUN_066acca0(*(long *)(unaff_x19 + 0x38),in_stack_00000008,in_stack_00000010,
                          in_stack_00000018,in_stack_00000020,0);
    _in_stack_00000028 = auVar9;
    FUN_0697eb4c(&stack0x00000028,0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x30), lVar7 != 0)) {
      FUN_06694d38(lVar7,in_stack_00000018,in_stack_00000020,0);
                    /* try { // try from 0668a264 to 0678a35b has its CatchHandler @ 0668a264
                       catch() { ... } // from try @ 0668a264 with catch @ 0668a264
                       catch() { ... } // from try @ 0668a3fc with catch @ 0668a264
                       catch() { ... } // from try @ 0668a4ec with catch @ 0668a264
                       catch() { ... } // from try @ 0668a54c with catch @ 0668a264 */
      lVar7 = *(long *)(unaff_x19 + 0x40);
      auVar9 = FUN_0460e8d4(&stack0x00000040,*(undefined8 *)puVar5);
      if (lVar7 != 0) {
        FUN_066872e8(lVar7,auVar9._0_8_,auVar9._8_8_,1);
        lVar7 = *(long *)(unaff_x19 + 0x40);
        auVar9 = FUN_0460e8d4(&stack0x00000038,*(undefined8 *)puVar5);
        if (lVar7 != 0) {
          FUN_066872e8(lVar7,auVar9._0_8_,auVar9._8_8_,0);
          FUN_04569088(&stack0x00000018,
                       *(undefined8 *)Best_HTTP_Hosts_Settings_HostSettingsManager_TypeInfo);
          FUN_0456d550(&stack0x00000008,*(undefined8 *)puVar4);
LAB_0668a2e0:
          puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
          FUN_0460e7ac(&stack0x00000040,
                       *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
          FUN_0460e7ac(&stack0x00000038,*(undefined8 *)puVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


