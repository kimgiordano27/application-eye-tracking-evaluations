/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$ImportFontFeatures
ENTRY_POINT: 05c4e230
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_TextCore_Text_FontAsset__ImportFontFeatures(void)

{
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 uVar1;
  long unaff_x24;
  undefined8 uVar2;
  long unaff_x25;
  undefined8 uVar3;
  long unaff_x26;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__);
  FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__);
  FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionGranted__);
  FUN_02b3c81c(
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              );
  *(undefined1 *)(unaff_x20 + 0x230) = 1;
  if (*(long *)(*unaff_x21 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar1 = 0;
  if (unaff_x23 != 0) {
    uVar1 = *(undefined8 *)(unaff_x23 + 0x10);
  }
  if (*(long *)(*(long *)Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__ + 0x38) == 0
     ) {
    FUN_02b76274();
  }
  uVar2 = 0;
  if (unaff_x24 != 0) {
    uVar2 = *(undefined8 *)(unaff_x24 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__ +
               0x38) == 0) {
    FUN_02b76274();
  }
  uVar4 = 0;
  if (unaff_x26 != 0) {
    uVar4 = *(undefined8 *)(unaff_x26 + 0x10);
  }
  uVar3 = 0;
  if (unaff_x25 != 0) {
    uVar3 = *(undefined8 *)(unaff_x25 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
               + 0x38) == 0) {
    FUN_02b76274();
  }
  if (*(long *)(*(long *)Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__ +
               0x38) == 0) {
    FUN_02b76274();
  }
  if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d7290 == (code *)0x0) {
    DAT_066d7290 = (code *)FUN_02b3c7e0(
                                       "UnityEngine.Graphics::Internal_DrawMesh_Injected(System.IntPtr,System.Int32,UnityEngine.Matrix4x4&,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x05c4e398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_066d7290)(uVar1,unaff_w22,in_stack_00000000,uVar2,uStack0000000000000008,uVar4,uVar3,
                  uStack000000000000000c);
  return;
}


