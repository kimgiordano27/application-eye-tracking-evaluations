/*
FUNCTION_NAME: FUN_06691094
ENTRY_POINT: 06691094
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06691094(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if (DAT_07557ee1 == '\0') {
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
    DAT_07557ee1 = '\x01';
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_94 = 0;
  uVar7 = FUN_064b5b9c(2,0);
  FUN_0460e36c(&local_68,4,uVar7,*(undefined8 *)UnityEngine_InputSystem_HumiditySensor_TypeInfo);
  uStack_88 = param_1[1];
  local_90 = *param_1;
  FUN_0456d8d0(&local_b0,&local_90,*(undefined8 *)System_IAsyncResult_TypeInfo);
  puVar4 = Photon_Voice_IAudioInChangeNotifier_TypeInfo;
  puVar3 = System_Runtime_CompilerServices_IAsyncStateMachine_TypeInfo;
  puVar2 = PTR_DAT_070f1d60;
  iVar8 = (int)local_a0 + 1;
  uStack_78 = plStack_a8;
  uVar6 = uStack_78;
  local_80 = local_b0;
  uStack_78._0_4_ = (int)plStack_a8;
  local_b0 = 0;
  local_70._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
  local_70 = CONCAT44(local_70._4_4_,iVar8);
  lVar10 = *(long *)System_Runtime_CompilerServices_IAsyncStateMachine_TypeInfo;
  bVar1 = iVar8 < (int)uStack_78;
  plStack_a8 = &local_80;
  uStack_78 = uVar6;
  if (bVar1) {
    do {
      lVar5 = local_80;
      if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      local_94 = *(undefined4 *)(lVar5 + (long)iVar8 * 4);
      local_70 = CONCAT44(local_94,(int)local_70);
      uVar9 = FUN_04882828(param_2,local_94,*(undefined8 *)puVar4);
      if ((uVar9 & 1) != 0) {
        FUN_0460e55c(&local_68,&local_94,*(undefined8 *)puVar2);
      }
      iVar8 = (int)local_70 + 1;
      lVar10 = *(long *)puVar3;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      bVar1 = iVar8 < (int)uStack_78;
    } while (bVar1);
  }
  local_70 = local_70 & 0xffffffff;
  FUN_0543e7a0(&local_80,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Attachment_IAttachPointVelocityProvider_TypeInfo)
  ;
  lVar10 = local_68;
  if (local_68 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    lVar5 = local_68;
    puVar2 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(lVar10 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      puVar3 = Unity_Properties_Internal_IAttributes_TypeInfo;
      FUN_0460e9e0(param_4,*(undefined4 *)(lVar5 + 8),0,
                   *(undefined8 *)Unity_Properties_Internal_IAttributes_TypeInfo);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0(param_3,*(undefined4 *)(lVar10 + 8),0,*(undefined8 *)puVar3);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(param_5,*(undefined4 *)(lVar10 + 8),0,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
      auVar11 = FUN_0460e8d4(&local_68,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar12 = FUN_0460e8d4(param_4,*(undefined8 *)puVar3);
      auVar13 = FUN_0460e8d4(param_3,*(undefined8 *)puVar3);
      auVar14 = FUN_0460b114(param_5,*(undefined8 *)System_Net_HttpVersion_TypeInfo);
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      iVar8 = FUN_06a18064(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,
                           auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,0);
      puVar3 = Unity_Properties_Internal_IAttributes_TypeInfo;
      FUN_0460e9e0(param_4,iVar8,1,*(undefined8 *)Unity_Properties_Internal_IAttributes_TypeInfo);
      lVar10 = local_68;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0(param_3,*(int *)(lVar10 + 8) - iVar8,1,*(undefined8 *)puVar3);
      lVar10 = *param_3;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(param_5,*(undefined4 *)(lVar10 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
    }
  }
  FUN_0460e7ac(&local_68,*(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
  return;
}


