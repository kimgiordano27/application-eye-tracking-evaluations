/*
FUNCTION_NAME: FUN_077a394c
ENTRY_POINT: 077a394c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 102
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_077a394c(void)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  puVar10 = UnityEngine_UIElements_FocusController_FocusedElement_var;
  puVar9 = UnityEngine_PlayerLoop_FixedUpdate_ScriptRunBehaviourFixedUpdate_var;
  puVar8 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var;
  puVar7 = System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
  puVar6 = UnityEngine_Rendering_HighDefinition_FSR2Pass_Parameters_var;
  puVar5 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
  puVar4 = System_Threading_ExecutionContext_Reader_var;
  puVar3 = UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfigOld_var;
  puVar1 = UnityEngine_InputForUI_EventProvider_Registration_var;
  puVar2 = EasyRoads3Dv3_ERMeshCombineUtility_MeshInstance_var;
  if ((DAT_08986f7c & 1) == 0) {
    FUN_03a8a718(EasyRoads3Dv3_ERMeshCombineUtility_MeshInstance_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_FixedUpdate_ScriptRunBehaviourFixedUpdate_var);
    FUN_03a8a718(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_03a8a718(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfigOld_var);
    FUN_03a8a718(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var);
    FUN_03a8a718(System_DelegateSerializationHolder_DelegateEntry_var);
    FUN_03a8a718(UnityEngine_InputForUI_EventProvider_Registration_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_FSR2Pass_Parameters_var);
    FUN_03a8a718(UnityEngine_UIElements_FocusController_FocusedElement_var);
    FUN_03a8a718(System_Threading_ExecutionContext_Reader_var);
    DAT_08986f7c = 1;
  }
  uVar11 = FUN_07c60c0c(*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar10;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  puVar1 = UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_07c60c0c(*(undefined8 *)puVar1,0);
  puVar1 = System_DelegateSerializationHolder_DelegateEntry_var;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_07c60c0c(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar11;
  return;
}


