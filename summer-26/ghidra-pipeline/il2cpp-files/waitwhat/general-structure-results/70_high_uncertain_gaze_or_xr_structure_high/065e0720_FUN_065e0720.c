/*
FUNCTION_NAME: FUN_065e0720
ENTRY_POINT: 065e0720
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_possible_biometrics_hits_4
*/


void FUN_065e0720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = OVRDisplay_EyeRenderDesc___TypeInfo;
  if ((DAT_0755786e & 1) == 0) {
    FUN_03188a78(UnityEngine_RaycastHit2D___TypeInfo);
    FUN_03188a78(OVRFaceExpressions_FaceExpression___TypeInfo);
    FUN_03188a78(OVRHaptics_OVRHapticsChannel___TypeInfo);
    FUN_03188a78(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_03188a78(OVRInput_HapticInfo___TypeInfo);
    FUN_03188a78(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_03188a78(OVROverlay_LayerTexture___TypeInfo);
    FUN_03188a78(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_03188a78(OVRDisplay_EyeRenderDesc___TypeInfo);
    DAT_0755786e = 1;
  }
  puVar9 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  puVar8 = OVROverlay_LayerTexture___TypeInfo;
  puVar7 = OVRInput_OpenVRControllerDetails___TypeInfo;
  puVar6 = OVRInput_HapticInfo___TypeInfo;
  puVar5 = OVRHaptics_OVRHapticsOutput___TypeInfo;
  puVar4 = OVRHaptics_OVRHapticsChannel___TypeInfo;
  puVar3 = OVRFaceExpressions_FaceExpression___TypeInfo;
  puVar1 = UnityEngine_RaycastHit2D___TypeInfo;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar2;
  }
  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_03e08ac4(uVar11,uVar12,*(undefined8 *)puVar4,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar12 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_03e08ac4(uVar11,uVar12,*(undefined8 *)puVar5,0);
  uVar12 = *(undefined8 *)puVar3;
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e08ac4(uVar11,uVar13,*(undefined8 *)puVar6,0);
  uVar12 = *(undefined8 *)puVar3;
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e08ac4(uVar11,uVar13,*(undefined8 *)puVar7,0);
  uVar12 = *(undefined8 *)puVar3;
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e08ac4(uVar11,uVar13,*(undefined8 *)puVar8,0);
  uVar12 = *(undefined8 *)puVar3;
  uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_03e08ac4(uVar11,uVar13,*(undefined8 *)puVar9,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  return;
}


