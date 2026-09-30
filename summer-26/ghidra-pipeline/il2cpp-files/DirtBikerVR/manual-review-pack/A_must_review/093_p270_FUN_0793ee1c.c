/*
FUNCTION_NAME: FUN_0793ee1c
ENTRY_POINT: 0793ee1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0793ee1c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_38;
  
                    /* try { // try from 0793ee20 to 07a3ee27 has its CatchHandler @ 0793ef44 */
                    /* try { // try from 0793ee38 to 07a3ee3f has its CatchHandler @ 0793ef7c */
  if ((DAT_08987dcd & 1) == 0) {
    FUN_03a8a718(RootMotion_FinalIK_RotationLimitPolygonal_ReachCone___TypeInfo);
                    /* try { // try from 0793ee4c to 07a3ee53 has its CatchHandler @ 0793ef78 */
    FUN_03a8a718(UnityEngine_Rendering_STP_HistoryContext___TypeInfo);
                    /* try { // try from 0793ee60 to 07a3ee73 has its CatchHandler @ 0793efa0 */
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_03a8a718(OVRPlugin_Vector3f___TypeInfo);
    FUN_03a8a718(PTR_DAT_08491378);
    FUN_03a8a718(UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_PostProcessing_ScreenSpaceReflectionsRenderer_QualityPreset___TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_SendMouseEvents_HitInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    FUN_03a8a718(System_Net_Sockets_Socket_WSABUF___TypeInfo);
    FUN_03a8a718(PTR_DAT_0848acd8);
    FUN_03a8a718(TMPro_TMP_InputField_ContentType___TypeInfo);
    FUN_03a8a718(TMPro_TMP_Text_TextProcessingElement___TypeInfo);
    DAT_08987dcd = 1;
  }
  puVar2 = OVRPlugin_Vector3f___TypeInfo;
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    lVar4 = FUN_0587c704(&local_38,
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                        );
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    uVar5 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo
                        );
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x16) = local_48;
      thunk_FUN_03afed3c(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe2cf0(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)RootMotion_FinalIK_RotationLimitPolygonal_ReachCone___TypeInfo);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)TMPro_TMP_Text_TextProcessingElement___TypeInfo);
      FUN_0679343c(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 10);
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0xc);
      thunk_FUN_03afed3c();
      iVar1 = param_1[0xe];
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_1 + 0x10);
      *(int *)(lVar4 + 0x28) = iVar1;
      thunk_FUN_03afed3c();
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + 0x12);
      thunk_FUN_03afed3c();
      puVar2 = PTR_DAT_0848acd8;
      if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (DAT_08975f9e == '\0') {
        FUN_03a8a718(PTR_DAT_0848acd8);
        DAT_08975f9e = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      FUN_07fd7d8c(*(undefined8 *)(lVar4 + 0xb8));
      return;
    }
    local_48 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  uVar6 = FUN_0587c704(&local_48,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar3 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


