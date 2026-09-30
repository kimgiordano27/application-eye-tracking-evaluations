/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.CalculateRotationParams_0000119B$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 06197dcc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_0000119B_PostfixBurstDelegate__BeginInvoke
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *in_x9;
  long *unaff_x20;
  
  uVar2 = *in_x9;
  *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c) = param_2;
  uVar1 = FUN_0631e59c(uVar2);
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchy__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197e14 to 06297e1b has its CatchHandler @ 06197ef8 */
  uVar2 = *(undefined8 *)Method_UnityEngine_UI_InputField_MarkGeometryAsDirty__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x34) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197e2c to 06297e2f has its CatchHandler @ 06197ef4 */
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_IsA<ActionEvent>__;
                    /* try { // try from 06197e40 to 06297e47 has its CatchHandler @ 06197ef0 */
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197e60 to 06297e67 has its CatchHandler @ 06197ee4 */
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchyRecursive__
  ;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x3c) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197e74 to 06297e93 has its CatchHandler @ 06197ee8 */
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnBeforeUpdate__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197e98 to 06297eaf has its CatchHandler @ 06197f24 */
  uVar2 = *(undefined8 *)Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<bool>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x44) = uVar1;
                    /* try { // try from 06197eb0 to 06297eb3 has its CatchHandler @ 06197f20 */
                    /* try { // try from 06197eb4 to 06297ec3 has its CatchHandler @ 0619781c */
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197ec4 to 06297ed3 has its CatchHandler @ 06197f0c */
  uVar2 = *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_OnInputEvent__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48) = uVar1;
                    /* try { // try from 06197ed8 to 06297edb has its CatchHandler @ 06197efc */
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197edc to 06297edf has its CatchHandler @ 06197eec */
                    /* try { // try from 06197ee0 to 06297ee3 has its CatchHandler @ 06197ef8 */
                    /* catch() { ... } // from try @ 06197e60 with catch @ 06197ee4 */
                    /* catch() { ... } // from try @ 06197e74 with catch @ 06197ee8 */
                    /* catch() { ... } // from try @ 06197edc with catch @ 06197eec */
                    /* catch() { ... } // from try @ 06197e40 with catch @ 06197ef0 */
  uVar2 = *(undefined8 *)Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Vector3>__;
                    /* catch() { ... } // from try @ 06197e2c with catch @ 06197ef4 */
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x4c) = uVar1;
                    /* catch() { ... } // from try @ 06197e14 with catch @ 06197ef8
                       catch() { ... } // from try @ 06197ee0 with catch @ 06197ef8 */
                    /* catch() { ... } // from try @ 06197ed8 with catch @ 06197efc */
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* catch() { ... } // from try @ 06197d28 with catch @ 06197f00 */
                    /* catch() { ... } // from try @ 06197d10 with catch @ 06197f04 */
                    /* catch() { ... } // from try @ 06197d04 with catch @ 06197f08 */
                    /* catch() { ... } // from try @ 06197ccc with catch @ 06197f0c
                       catch() { ... } // from try @ 06197ec4 with catch @ 06197f0c */
                    /* try { // try from 06197f14 to 06297f17 has its CatchHandler @ 06197fec */
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<int>__;
                    /* try { // try from 06197f18 to 06297f3f has its CatchHandler @ 0619781c */
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50) = uVar1;
                    /* catch() { ... } // from try @ 06197db0 with catch @ 06197f1c */
                    /* catch() { ... } // from try @ 06197d94 with catch @ 06197f20
                       catch() { ... } // from try @ 06197eb0 with catch @ 06197f20 */
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* catch() { ... } // from try @ 06197e98 with catch @ 06197f24 */
  uVar2 = *(undefined8 *)
           Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<string>__;
  *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x54) = uVar1;
                    /* try { // try from 06197f40 to 06297f57 has its CatchHandler @ 06197fdc */
  uVar1 = FUN_0631e59c(uVar2,0);
                    /* try { // try from 06197f58 to 06297fcb has its CatchHandler @ 0619781c */
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


