/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushStarted
ENTRY_POINT: 0668b03c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_5;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushStarted
               (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
               undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  
  puVar4 = System_Runtime_CompilerServices_IAsyncStateMachine_TypeInfo;
  puVar3 = System_IAsyncResult_TypeInfo;
  puVar2 = UnityEngine_InputSystem_HumiditySensor_TypeInfo;
  if ((DAT_07557ead & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityProvider_TypeInfo
                );
    FUN_03188a78(System_Runtime_CompilerServices_IAsyncStateMachine_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityTracker_TypeInfo)
    ;
    FUN_03188a78(System_Net_Http_HttpRequestException_TypeInfo);
    FUN_03188a78(System_IAsyncResult_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1d60);
    FUN_03188a78(System_Net_HttpVersion_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_03188a78(Sentry_IAttachmentContent_TypeInfo);
    FUN_03188a78(Unity_Properties_Internal_IAttributes_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
    FUN_03188a78(Photon_Voice_IAudioDesc_TypeInfo);
    FUN_03188a78(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(Photon_Voice_IAudioInChangeNotifier_TypeInfo);
    DAT_07557ead = 1;
  }
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityProvider_TypeInfo;
  _iStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  _iStack0000000000000048 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack000000000000002c = 0;
  uVar8 = FUN_064b5b9c(2,0);
  FUN_0460e36c(&stack0x00000058,4,uVar8,*(undefined8 *)puVar2);
  in_stack_00000038 = param_1[1];
  in_stack_00000030 = *param_1;
  FUN_0456d8d0(&stack0x00000010,&stack0x00000030,*(undefined8 *)puVar3);
  in_stack_00000040 = in_stack_00000010;
  puVar3 = Photon_Voice_IAudioInChangeNotifier_TypeInfo;
  puVar2 = PTR_DAT_070f1d60;
  in_stack_00000010 = 0;
  _iStack0000000000000048 = in_stack_00000018;
  uVar7 = _iStack0000000000000048;
  iVar9 = (int)in_stack_00000020 + 1;
  iStack0000000000000048 = (int)in_stack_00000018;
  lVar11 = *(long *)puVar4;
  uStack0000000000000054 = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar9);
  bVar1 = iVar9 < iStack0000000000000048;
  in_stack_00000018 = &stack0x00000040;
  _iStack0000000000000048 = uVar7;
  if (bVar1) {
    do {
      lVar6 = in_stack_00000040;
      if ((*(ushort *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uStack000000000000002c = *(undefined4 *)(lVar6 + (long)iVar9 * 4);
      _iStack0000000000000050 = CONCAT44(uStack000000000000002c,iStack0000000000000050);
      uVar10 = FUN_04882828(param_2,uStack000000000000002c,*(undefined8 *)puVar3);
      if ((uVar10 & 1) != 0) {
        FUN_0460e55c(&stack0x00000058,&stack0x0000002c,*(undefined8 *)puVar2);
      }
      iVar9 = iStack0000000000000050 + 1;
      lVar11 = *(long *)puVar4;
      _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar9);
      bVar1 = iVar9 < iStack0000000000000048;
    } while (bVar1);
  }
  _iStack0000000000000050 = _iStack0000000000000050 & 0xffffffff;
  FUN_0543e7a0(&stack0x00000040,*(undefined8 *)puVar5);
  lVar11 = in_stack_00000058;
  puVar12 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  if (in_stack_00000058 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    lVar6 = in_stack_00000058;
    puVar2 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(lVar11 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      puVar3 = Unity_Properties_Internal_IAttributes_TypeInfo;
      FUN_0460e9e0(param_4,*(undefined4 *)(lVar6 + 8),0,
                   *(undefined8 *)Unity_Properties_Internal_IAttributes_TypeInfo);
      lVar11 = in_stack_00000058;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0(param_3,*(undefined4 *)(lVar11 + 8),0,*(undefined8 *)puVar3);
      lVar11 = in_stack_00000058;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(param_5,*(undefined4 *)(lVar11 + 8),0,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
      auVar13 = FUN_0460e8d4(&stack0x00000058,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar14 = FUN_0460e8d4(param_4,*(undefined8 *)puVar3);
      auVar15 = FUN_0460e8d4(param_3,*(undefined8 *)puVar3);
      auVar16 = FUN_0460b114(param_5,*(undefined8 *)System_Net_HttpVersion_TypeInfo);
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar9 = FUN_06a18064(auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,auVar15._0_8_,
                           auVar15._8_8_,auVar16._0_8_,auVar16._8_8_);
      puVar3 = Unity_Properties_Internal_IAttributes_TypeInfo;
      FUN_0460e9e0(param_4,iVar9,1,*(undefined8 *)Unity_Properties_Internal_IAttributes_TypeInfo);
      lVar11 = in_stack_00000058;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0(param_3,*(int *)(lVar11 + 8) - iVar9,1,*(undefined8 *)puVar3);
      lVar11 = *param_3;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(param_5,*(undefined4 *)(lVar11 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar12 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
    }
  }
  FUN_0460e7ac(&stack0x00000058,*puVar12);
  return;
}


