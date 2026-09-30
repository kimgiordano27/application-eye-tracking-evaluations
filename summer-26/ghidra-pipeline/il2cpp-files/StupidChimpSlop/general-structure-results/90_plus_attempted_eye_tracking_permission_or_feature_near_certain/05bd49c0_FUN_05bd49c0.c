/*
FUNCTION_NAME: FUN_05bd49c0
ENTRY_POINT: 05bd49c0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 90
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_05bd49c0(void)

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
  
  puVar10 = Method_UnityEngine_InputSystem_InputSystem_QueueStateEvent<TouchState>__;
  puVar9 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRController>__;
  puVar8 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<EyeGazeInteraction_EyeGazeDevice>__;
  puVar7 = Method_UnityEngine_InputSystem_InputSystem_GetDevice<XRHMD>__;
  puVar6 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  puVar5 = Method_UnityEngine_InputSystem_InputSystem_FindControls<InputControl>__;
  puVar4 = Method_UnityEngine_InputSystem_InputSystem_AddDevice<Touchscreen>__;
  puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_updateMask__;
  puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_historyDepth__;
  puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>__;
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
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  uVar12 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  uVar12 = *(undefined8 *)puVar10;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_05eb3f2c(uVar12,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<ButtonFallbackComposite>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAccelerometer>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAmbientTemperature>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<IntegerFallbackComposite>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<QuaternionFallbackComposite>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_InputSystem_RegisterBindingComposite<Vector3FallbackComposite>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_RegisterInteraction<SectorInteraction>__;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_05eb3f2c(*(undefined8 *)puVar2,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c) = uVar11;
  return;
}


