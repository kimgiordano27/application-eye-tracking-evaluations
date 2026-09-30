/*
FUNCTION_NAME: FUN_06ec4330
ENTRY_POINT: 06ec4330
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_8;strong_file_logging_hits_5
*/


long FUN_06ec4330(long *param_1,byte param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long local_48;
  
  puVar1 = OVR_OpenVR_HmdVector2_t_TypeInfo;
  if ((DAT_07a585f6 & 1) == 0) {
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_HmdVector2_t_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_031f20f4(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    FUN_031f20f4(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_031f20f4(System_Xml_HtmlTernaryTree_TypeInfo);
    DAT_07a585f6 = 1;
  }
  local_48 = 0;
  *param_3 = 0;
  fVar7 = (float)FUN_06e62b50(0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  fVar8 = fVar7 - *(float *)(lVar6 + 0x10);
  if ((30.0 < fVar8) || (fVar8 < 0.0)) {
LAB_06ec4438:
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06ec46c4();
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    *(float *)(lVar3 + 0x10) = fVar7;
    *(undefined4 *)(lVar3 + 0x14) = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *(long *)puVar1;
      lVar6 = *(long *)(lVar3 + 0xb8);
    }
    if (500 < *(int *)(lVar6 + 0x14)) goto LAB_06ec4438;
  }
  if (param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar3);
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar4 = FUN_05736830(**(long **)(lVar3 + 0xb8),uVar2,&local_48,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
      lVar3 = *(long *)puVar1;
      if ((uVar4 & 1) == 0) {
        lVar3 = thunk_FUN_0322f148(lVar3);
        FUN_06ec48e8();
        lVar6 = thunk_FUN_0322f148(*(undefined8 *)System_Xml_HtmlTernaryTree_TypeInfo);
        FUN_05e44034(lVar6,0);
        *(undefined4 *)(lVar6 + 0x14) = uVar2;
        *(float *)(lVar6 + 0x10) = fVar7;
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
        FUN_045f4220(uVar5,lVar6,
                     *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0xa8) = uVar5;
          thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0xa8),uVar5);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar6 = *(long *)puVar1;
          }
          if (**(long **)(lVar6 + 0xb8) != 0) {
            FUN_05734d84(**(long **)(lVar6 + 0xb8),uVar2,lVar3,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
            FUN_06f5ec10(lVar3,uVar2,0);
            FUN_06f5f038(lVar3,0);
            lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            if (lVar6 != 0) {
              FUN_045f7bfc(lVar6,uVar5,*(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
              *(byte *)(lVar3 + 0xb0) = param_2 & 1;
              *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) =
                   *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) + 1;
              return lVar3;
            }
          }
        }
      }
      else {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar3);
          lVar3 = *(long *)puVar1;
        }
        if ((((local_48 != 0) && (lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8), lVar3 != 0)) &&
            (FUN_045f805c(lVar3,*(undefined8 *)(local_48 + 0xa8),
                          *(undefined8 *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo),
            local_48 != 0)) &&
           (lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8), lVar3 != 0)) {
          FUN_045f7bfc(lVar3,*(undefined8 *)(local_48 + 0xa8),
                       *(undefined8 *)System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
          if ((param_2 & 1) == 0) {
            *param_3 = 1;
            if (local_48 == 0) goto LAB_06ec46a4;
          }
          else {
            if (local_48 == 0) goto LAB_06ec46a4;
            *param_3 = *(undefined1 *)(local_48 + 0xb0);
          }
          if ((param_2 & (*(byte *)(local_48 + 0xb0) ^ 0xff) & 1) != 0) {
            FUN_06f5ec10(local_48,uVar2,0);
            if ((local_48 == 0) || (FUN_06f5f038(local_48,0), local_48 == 0)) goto LAB_06ec46a4;
            *(undefined1 *)(local_48 + 0xb0) = 1;
          }
          return local_48;
        }
      }
    }
  }
LAB_06ec46a4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


