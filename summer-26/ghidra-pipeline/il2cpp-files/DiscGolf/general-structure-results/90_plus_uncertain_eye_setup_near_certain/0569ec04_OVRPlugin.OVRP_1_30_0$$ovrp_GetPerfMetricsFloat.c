/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetPerfMetricsFloat
ENTRY_POINT: 0569ec04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetPerfMetricsFloat(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x960));
  FUN_02d965b8(
              UnityEngine_Rendering_SerializedDictionary<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_TypeInfo
              );
  FUN_02d965b8(Unity_XR_CoreUtils_ScriptableSettingsBase<InteractionLayerSettings>_TypeInfo);
  FUN_02d965b8(
              UnityEngine_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x895) = 1;
  *(undefined8 *)(unaff_x19 + 0x28) = *unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x20) = 0x3f800000;
  LeanTween__value();
  lVar2 = FUN_02d966a4(*unaff_x22,2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
      ;
      LeanTween__value((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)
              UnityEngine_XR_Interaction_Toolkit_Utilities_ScriptableSingletonCache<CharacterControllerBodyManipulator>_TypeInfo
        ;
        LeanTween__value();
        *(long *)(unaff_x19 + 0x40) = lVar2;
        LeanTween__value((long *)(unaff_x19 + 0x40),lVar2);
        lVar2 = FUN_02d966a4(*unaff_x22,2);
        if (lVar2 == 0) goto LAB_0569edec;
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x20) =
               *(undefined8 *)
                UnityEngine_Rendering_SerializedDictionary<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_TypeInfo
          ;
          LeanTween__value((undefined8 *)(lVar2 + 0x20));
          puVar1 = 
          UnityEngine_Rendering_SerializedDictionary<int,_ProbeReferenceVolume_CellDesc>_TypeInfo;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar2 + 0x28) =
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
            ;
            LeanTween__value();
            *(long *)(unaff_x19 + 0x58) = lVar2;
            LeanTween__value((long *)(unaff_x19 + 0x58),lVar2);
            *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)puVar1;
            LeanTween__value();
            lVar2 = FUN_02d966a4(*unaff_x22,2);
            if (lVar2 == 0) goto LAB_0569edec;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) =
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_TypeInfo
              ;
              LeanTween__value((undefined8 *)(lVar2 + 0x20));
              puVar1 = Unity_XR_CoreUtils_ScriptableSettingsBase<XRDeviceSimulatorSettings>_TypeInfo
              ;
              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar2 + 0x28) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_ScriptableSingletonCache<UnderCameraBodyPositionEvaluator>_TypeInfo
                ;
                LeanTween__value();
                *(long *)(unaff_x19 + 0x78) = lVar2;
                LeanTween__value((long *)(unaff_x19 + 0x78),lVar2);
                *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)puVar1;
                LeanTween__value();
                thunk_FUN_0634b474();
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_0569edec:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


