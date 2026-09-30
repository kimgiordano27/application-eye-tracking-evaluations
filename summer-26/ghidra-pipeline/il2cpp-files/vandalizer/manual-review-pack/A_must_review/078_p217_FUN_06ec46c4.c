/*
FUNCTION_NAME: FUN_06ec46c4
ENTRY_POINT: 06ec46c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06ec46c4(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  long local_58;
  
  if ((DAT_07a585f5 & 1) == 0) {
    FUN_031f20f4(System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_031f20f4(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d5990);
    FUN_031f20f4(OVR_OpenVR_HmdVector2_t_TypeInfo);
    FUN_031f20f4(System_Net_HttpRequestCreator_TypeInfo);
    FUN_031f20f4(System_Net_HttpStatusCode_TypeInfo);
    DAT_07a585f5 = 1;
  }
  puVar7 = System_Net_HttpRequestCreator_TypeInfo;
  puVar6 = System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo;
  puVar5 = System_Xml_HtmlUtf8RawTextWriter_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo;
  puVar3 = OVR_OpenVR_HmdVector2_t_TypeInfo;
  puVar2 = PTR_DAT_075d5990;
  local_58 = 0;
  fVar11 = (float)FUN_06e62b50(0);
  while( true ) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar8 = *(long *)puVar3;
    }
    lVar10 = *(long *)(lVar8 + 0xb8);
    if (*(long *)(lVar10 + 8) == 0) break;
    if (*(int *)(*(long *)(lVar10 + 8) + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    lVar8 = FUN_03de2b4c(*(undefined8 *)(lVar10 + 8),*(undefined8 *)puVar6);
    if (lVar8 == 0) break;
    fVar12 = fVar11 - *(float *)(lVar8 + 0x10);
    if ((fVar12 <= 5.0) && (0.0 <= fVar12)) {
      return;
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x14);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (DAT_07a58380 == (code *)0x0) {
      DAT_07a58380 = (code *)FUN_031f20b8(
                                         "UnityEngine.GUIStyle::Internal_DestroyTextGenerator(System.Int32)"
                                         );
    }
    (*DAT_07a58380)(uVar1);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)puVar3;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) break;
    uVar9 = FUN_05736830(**(long **)(lVar10 + 0xb8),*(undefined4 *)(lVar8 + 0x14),&local_58,
                         *(undefined8 *)puVar4);
    if ((uVar9 & 1) != 0) {
      if (local_58 == 0) break;
      FUN_06f5ddf0(local_58,0);
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)puVar3;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) break;
    FUN_05736208(**(long **)(lVar10 + 0xb8),*(undefined4 *)(lVar8 + 0x14),*(undefined8 *)puVar5);
    lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    if (lVar8 == 0) break;
    FUN_045f80a0(lVar8,*(undefined8 *)puVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


