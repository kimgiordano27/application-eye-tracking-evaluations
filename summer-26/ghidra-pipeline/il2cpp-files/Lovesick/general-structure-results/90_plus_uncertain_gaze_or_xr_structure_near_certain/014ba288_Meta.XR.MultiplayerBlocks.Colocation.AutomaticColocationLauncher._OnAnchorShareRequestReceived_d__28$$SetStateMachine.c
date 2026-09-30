/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 014ba288
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  thunk_FUN_00d48444(StringLiteral_12503);
  thunk_FUN_00d48444(UnityEngine_Events_UnityAction<MainStagePortrait>_TypeInfo);
  thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__GetOverlayInputMethod_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4988);
  thunk_FUN_00d48444(
                    DigitalOpus_MB_Core_MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling_TypeInfo
                    );
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_Count<Renderer>__);
  *(undefined1 *)(unaff_x19 + 0xda9) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x20);
  puVar2 = StringLiteral_4988;
  puVar1 = Method_System_Linq_Enumerable_Count<Renderer>__;
  if (lVar3 != 0) {
    FUN_01298da0(lVar3,*(undefined8 *)StringLiteral_12503);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
    if (lVar3 != 0) {
      FUN_01298da0(lVar3,*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayInputMethod_TypeInfo);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        FUN_01298da0(lVar3,*(undefined8 *)UnityEngine_Events_UnityAction<MainStagePortrait>_TypeInfo
                    );
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


