/*
FUNCTION_NAME: Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal.<HandleSignInRequestAsync>d__60$$MoveNext
ENTRY_POINT: 0669121c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<HandleSignInRequestAsync>d__60__MoveNext
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *unaff_x19;
  long lVar3;
  int unaff_w24;
  long *unaff_x26;
  undefined8 unaff_x28;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  int in_stack_00000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_00000058;
  
  puVar1 = PTR_DAT_070f1d60;
  do {
    lVar3 = in_stack_00000040;
    if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000028._4_4_ = *(undefined4 *)(lVar3 + (long)unaff_w24 * 4);
    uStack0000000000000054 = in_stack_00000028._4_4_;
    uVar2 = FUN_04882828();
    if ((uVar2 & 1) != 0) {
      FUN_0460e55c(&stack0x00000058,(long)&stack0x00000028 + 4,*(undefined8 *)puVar1);
    }
    unaff_w24 = iStack0000000000000050 + 1;
    param_1 = *unaff_x19;
    iStack0000000000000050 = unaff_w24;
  } while (unaff_w24 < in_stack_00000048);
  uStack0000000000000054 = 0;
  FUN_0543e7a0(&stack0x00000040,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityProvider_TypeInfo)
  ;
  lVar3 = in_stack_00000058;
  if (in_stack_00000058 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    puVar1 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(lVar3 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220();
      auVar4 = FUN_0460e8d4(&stack0x00000058,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar5 = FUN_0460e8d4();
      auVar6 = FUN_0460e8d4();
      auVar7 = FUN_0460b114();
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a18064(auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,
                   auVar7._0_8_,auVar7._8_8_);
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      lVar3 = *unaff_x26;
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(unaff_x28,*(undefined4 *)(lVar3 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
    }
  }
  FUN_0460e7ac(&stack0x00000058,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
  return;
}


