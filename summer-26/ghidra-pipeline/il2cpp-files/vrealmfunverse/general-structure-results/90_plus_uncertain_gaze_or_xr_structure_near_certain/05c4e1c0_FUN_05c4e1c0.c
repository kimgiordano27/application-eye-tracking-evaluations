/*
FUNCTION_NAME: FUN_05c4e1c0
ENTRY_POINT: 05c4e1c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05c4e1c0(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 ,long param_6,long param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = Method_PXR_PermissionRequest_PermissionCallbacks_PermissionGranted__;
  if ((DAT_066d7230 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313cc8);
    FUN_02b3c81c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionGranted__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_066d7230 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(long *)(*(long *)Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__ + 0x38) == 0
     ) {
    FUN_02b76274();
  }
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__ +
               0x38) == 0) {
    FUN_02b76274();
  }
  uVar5 = 0;
  if (param_6 != 0) {
    uVar5 = *(undefined8 *)(param_6 + 0x10);
  }
  uVar4 = 0;
  if (param_7 != 0) {
    uVar4 = *(undefined8 *)(param_7 + 0x10);
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
  (*DAT_066d7290)(uVar2,param_2,param_3,uVar3,param_5,uVar5,uVar4,param_8);
  return;
}


