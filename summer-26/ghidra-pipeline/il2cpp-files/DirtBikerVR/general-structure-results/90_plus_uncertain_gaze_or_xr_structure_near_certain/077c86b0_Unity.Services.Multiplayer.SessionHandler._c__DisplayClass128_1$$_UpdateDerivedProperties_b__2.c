/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler.<>c__DisplayClass128_1$$<UpdateDerivedProperties>b__2
ENTRY_POINT: 077c86b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Multiplayer_SessionHandler_<>c__DisplayClass128_1__<UpdateDerivedProperties>b__2
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((*(byte *)(unaff_x20 + 0xdd) & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_HeightFogVoxelizationPassData,_RenderGraphContext>_TypeInfo
                );
    *(undefined1 *)(unaff_x20 + 0xdd) = 1;
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


