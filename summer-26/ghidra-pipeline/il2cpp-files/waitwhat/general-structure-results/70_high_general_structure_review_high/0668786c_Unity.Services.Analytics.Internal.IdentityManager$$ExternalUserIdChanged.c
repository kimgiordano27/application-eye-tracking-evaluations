/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.IdentityManager$$ExternalUserIdChanged
ENTRY_POINT: 0668786c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_IdentityManager__ExternalUserIdChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_w1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  FUN_066ad634(unaff_x19 + 0x38,unaff_w20,0);
  if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_06986514(0);
  uVar5 = FUN_064b5b9c(3,0);
  FUN_0460e320(&stack0x00000058,uVar5,*(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
  uVar5 = FUN_064b5b9c(3,0);
  FUN_0460d31c(&stack0x00000050,uVar5,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_066ad04c(*(long *)(unaff_x19 + 0x10),&stack0x00000060,unaff_x19 + 0x38,in_stack_00000058,
                 in_stack_00000050,(uVar4 ^ 0xffffffff) & 1,(long)&stack0x00000048 + 4,0);
    lVar3 = in_stack_00000058;
    if ((*(ushort *)
          (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135) &
        1) == 0) {
      FUN_031c09d4();
    }
    puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
    if (0 < *(int *)(lVar3 + 8)) {
      _in_stack_00000028 =
           FUN_0460e8d4(&stack0x00000058,
                        *(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      FUN_0456e194(&stack0x00000028,0,in_stack_00000048._4_4_,
                   *(undefined8 *)Best_HTTP_Hosts_Settings_HostVariantSettings_TypeInfo);
      puVar1 = OVR_OpenVR_HmdQuad_t_TypeInfo;
      _in_stack_00000038 =
           FUN_0460d8d0(&stack0x00000050,*(undefined8 *)OVR_OpenVR_HmdQuad_t_TypeInfo);
      FUN_04569ccc(&stack0x00000038,0,in_stack_00000048._4_4_,
                   *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


