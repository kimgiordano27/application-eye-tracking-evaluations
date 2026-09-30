/*
FUNCTION_NAME: FUN_077c86a4
ENTRY_POINT: 077c86a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_077c86a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((DAT_089870dd & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_HeightFogVoxelizationPassData,_RenderGraphContext>_TypeInfo
                );
    DAT_089870dd = 1;
  }
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_HeightFogVoxelizationPassData,_RenderGraphContext>_TypeInfo
  ;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar3 = *(long *)puVar1;
  }
  FUN_077c8168(*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc),*(undefined8 *)puVar2,0,0);
  return;
}


