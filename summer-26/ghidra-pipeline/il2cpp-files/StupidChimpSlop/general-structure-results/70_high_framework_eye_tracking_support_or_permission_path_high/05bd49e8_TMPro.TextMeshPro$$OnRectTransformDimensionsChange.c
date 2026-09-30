/*
FUNCTION_NAME: TMPro.TextMeshPro$$OnRectTransformDimensionsChange
ENTRY_POINT: 05bd49e8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void TMPro_TextMeshPro__OnRectTransformDimensionsChange(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x23;
  undefined8 *puVar10;
  long unaff_x24;
  undefined8 *puVar11;
  long unaff_x25;
  undefined8 *puVar12;
  
  puVar6 = Method_UnityEngine_InputSystem_InputSystem_QueueStateEvent<TouchState>__;
  puVar5 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRController>__;
  puVar4 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  puVar3 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__;
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  puVar12 = *(undefined8 **)(unaff_x25 + 0x138);
  plVar9 = *(long **)(unaff_x19 + 0x30);
  puVar11 = *(undefined8 **)(unaff_x24 + 0x140);
  puVar10 = *(undefined8 **)(unaff_x23 + 0x148);
  if ((DAT_06a5756e & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<ButtonFallbackComposite>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRController>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_AddDevice<Touchscreen>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_QueueStateEvent<TouchState>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<IntegerFallbackComposite>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_historyDepth__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<QuaternionFallbackComposite>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_updateMask__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<Vector3FallbackComposite>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_RegisterInteraction<SectorInteraction>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAccelerometer>__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAmbientTemperature>__
                );
    DAT_06a5756e = 1;
  }
  uVar7 = FUN_05eb3f2c(*puVar12,0);
  uVar8 = *puVar11;
  **(undefined4 **)(*plVar9 + 0xb8) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *puVar10;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 4) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar1;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 8) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar2;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0xc) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar3;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x10) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x14) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x18) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  uVar8 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x1c) = uVar7;
  uVar7 = FUN_05eb3f2c(uVar8,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<ButtonFallbackComposite>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x20) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAccelerometer>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x24) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAmbientTemperature>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x28) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<IntegerFallbackComposite>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x2c) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<QuaternionFallbackComposite>__
  ;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x30) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<Vector3FallbackComposite>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x34) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_RegisterInteraction<SectorInteraction>__;
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x38) = uVar7;
  uVar7 = FUN_05eb3f2c(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x3c) = uVar7;
  return;
}


