/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.CalculateRotationParams_0000119B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 06197db0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_0000119B_PostfixBurstDelegate__Invoke
               (undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_x10;
  long *unaff_x20;
  
                    /* try { // try from 06197db0 to 06297dbb has its CatchHandler @ 06197f1c */
  *(undefined4 *)(in_x10 + 0x28) = param_2;
  uVar1 = FUN_0631e59c(param_1);
                    /* try { // try from 06197dbc to 06297e13 has its CatchHandler @ 0619781c */
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x2c) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchy__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x34) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<ActionEvent>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchyRecursive__
  ;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x3c) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnBeforeUpdate__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<bool>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x44) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Vector3>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x4c) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<int>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<string>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x54) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)PTR_DAT_069fdeb8;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x58) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x5c) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_WriteTo__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x60) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventBuffer_AllocateEvent__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 100) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<HID_UsagePage>__
  ;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x68) = uVar1;
  uVar2 = FUN_0631e59c(uVar2,0);
  FUN_0665023c(*unaff_x20,uVar2,0);
  return;
}


