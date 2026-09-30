/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushFinished
ENTRY_POINT: 0668b19c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushFinished
               (undefined8 param_1,undefined1 param_2 [16])

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *puVar6;
  long *unaff_x24;
  int iVar7;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 in_stack_00000028;
  long lStack0000000000000040;
  int iStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_00000058;
  
  puVar2 = PTR_DAT_070f1d60;
  lStack0000000000000040 = param_2._0_8_;
  puStack0000000000000018 = (undefined1 *)&stack0x00000040;
  uStack0000000000000010 = 0;
  iVar7 = (int)param_1 + 1;
  iStack0000000000000048 = param_2._8_4_;
  lVar5 = *unaff_x24;
  uStack0000000000000054 = (undefined4)((ulong)param_1 >> 0x20);
  _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar7);
  bVar1 = iVar7 < iStack0000000000000048;
  _iStack0000000000000048 = param_2._8_8_;
  if (bVar1) {
    do {
      lVar3 = lStack0000000000000040;
      if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      in_stack_00000028._4_4_ = *(undefined4 *)(lVar3 + (long)iVar7 * 4);
      _iStack0000000000000050 = CONCAT44(in_stack_00000028._4_4_,iStack0000000000000050);
      uVar4 = FUN_04882828();
      if ((uVar4 & 1) != 0) {
        FUN_0460e55c(&stack0x00000058,(long)&stack0x00000028 + 4,*(undefined8 *)puVar2);
      }
      iVar7 = iStack0000000000000050 + 1;
      lVar5 = *unaff_x24;
      _iStack0000000000000050 = CONCAT44(uStack0000000000000054,iVar7);
      bVar1 = iVar7 < iStack0000000000000048;
    } while (bVar1);
  }
  _iStack0000000000000050 = _iStack0000000000000050 & 0xffffffff;
  FUN_0543e7a0(&stack0x00000040,*unaff_x19);
  lVar5 = in_stack_00000058;
  puVar6 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  if (in_stack_00000058 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)Photon_Voice_IAudioDesc_TypeInfo + 0x20) + 0x135) & 1) == 0)
    {
      FUN_031c09d4();
    }
    puVar2 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
    if (*(int *)(lVar5 + 8) != 0) {
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
      auVar8 = FUN_0460e8d4(&stack0x00000058,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
      auVar9 = FUN_0460e8d4();
      auVar10 = FUN_0460e8d4();
      auVar11 = FUN_0460b114();
      if (*(int *)(*(long *)System_Net_Http_HttpRequestException_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a18064(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_,
                   auVar11._0_8_,auVar11._8_8_);
      FUN_0460e9e0();
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460e9e0();
      lVar5 = *unaff_x27;
      if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      FUN_0460b220(unaff_x28,*(undefined4 *)(lVar5 + 8),1,
                   *(undefined8 *)Sentry_IAttachmentContent_TypeInfo);
      puVar6 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
    }
  }
  FUN_0460e7ac(&stack0x00000058,*puVar6);
  return;
}


