/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushStarted
ENTRY_POINT: 0668b0ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushStarted(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  long *unaff_x24;
  int iVar10;
  undefined8 *unaff_x25;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_00000058;
  
  FUN_03188a78();
  FUN_03188a78(Sentry_IAttachmentContent_TypeInfo);
  FUN_03188a78(Unity_Properties_Internal_IAttributes_TypeInfo);
  FUN_03188a78(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
  FUN_03188a78(Photon_Voice_IAudioDesc_TypeInfo);
  FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
  FUN_03188a78(Photon_Voice_IAudioInChangeNotifier_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xead) = 1;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityProvider_TypeInfo;
  _iStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  _iStack0000000000000048 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack000000000000002c = 0;
  uVar6 = FUN_064b5b9c(2,0);
  FUN_0460e36c(&stack0x00000058,4,uVar6,*unaff_x25);
  in_stack_00000038 = unaff_x23[1];
  in_stack_00000030 = *unaff_x23;
  FUN_0456d8d0(&stack0x00000010,&stack0x00000030,*unaff_x21);
  in_stack_00000040 = in_stack_00000010;
  puVar2 = PTR_DAT_070f1d60;
  in_stack_00000010 = 0;
  _iStack0000000000000048 = in_stack_00000018;
  uVar5 = _iStack0000000000000048;
  iVar10 = (int)in_stack_00000020 + 1;
  iStack0000000000000048 = (int)in_stack_00000018;
  lVar8 = *unaff_x24;
  uStack0000000000000054 = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar10);
  bVar1 = iVar10 < iStack0000000000000048;
  in_stack_00000018 = &stack0x00000040;
  _iStack0000000000000048 = uVar5;
  if (bVar1) {
    do {
      lVar4 = in_stack_00000040;
      if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uStack000000000000002c = *(undefined4 *)(lVar4 + (long)iVar10 * 4);
      _iStack0000000000000050 = CONCAT44(uStack000000000000002c,iStack0000000000000050);
      uVar7 = FUN_04882828();
      if ((uVar7 & 1) != 0) {
        FUN_0460e55c(&stack0x00000058,&stack0x0000002c,*(undefined8 *)puVar2);
      }
      iVar10 = iStack0000000000000050 + 1;
      lVar8 = *unaff_x24;
      _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar10);
      bVar1 = iVar10 < iStack0000000000000048;
    } while (bVar1);
  }
  _iStack0000000000000050 = _iStack0000000000000050 & 0xffffffff;
  FUN_0543e7a0(&stack0x00000040,*(undefined8 *)puVar3);
  lVar8 = in_stack_00000058;
  puVar9 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  if (in_stack_00000058 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    puVar2 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(lVar8 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220();
      auVar11 = FUN_0460e8d4(&stack0x00000058,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar12 = FUN_0460e8d4();
      auVar13 = FUN_0460e8d4();
      auVar14 = FUN_0460b114();
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a18064(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,
                   auVar13._8_8_,auVar14._0_8_,auVar14._8_8_);
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      lVar8 = *unaff_x27;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(unaff_x28,*(undefined4 *)(lVar8 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar9 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
    }
  }
  FUN_0460e7ac(&stack0x00000058,*puVar9);
  return;
}


