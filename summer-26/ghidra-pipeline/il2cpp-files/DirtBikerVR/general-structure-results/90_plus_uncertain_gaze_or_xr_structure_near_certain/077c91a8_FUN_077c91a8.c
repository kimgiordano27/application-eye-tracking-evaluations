/*
FUNCTION_NAME: FUN_077c91a8
ENTRY_POINT: 077c91a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


void FUN_077c91a8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong local_18;
  
  if ((DAT_089870e0 & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderDistortionPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderLowResTransparentPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderOcclusionMeshesPassData,_RenderGraphContext>_TypeInfo
                );
    DAT_089870e0 = 1;
  }
  if (param_2 != (long *)0x0) {
    local_18 = 0;
    FUN_0529ac04(&local_18,*(undefined4 *)((long)param_2 + 0x8c),
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderLowResTransparentPassData,_RenderGraphContext>_TypeInfo
                );
    puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
    if ((local_18 & 0xff) != 0) {
      iVar5 = (int)(local_18 >> 0x20);
      if (iVar5 < 2) {
        if (iVar5 == 0) {
          lVar3 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar3 = *(long *)puVar1;
          }
          uVar2 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc);
          uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
LAB_077c92c4:
          FUN_077c8168(uVar2,uVar4,0,0);
          return;
        }
        if (iVar5 == 1) {
          FUN_077c92e0(param_2);
          return;
        }
      }
      else {
        if (iVar5 == 2) {
          FUN_077c9428(param_2);
          return;
        }
        if (iVar5 == 3) {
          uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          uVar2 = 0;
          goto LAB_077c92c4;
        }
      }
    }
  }
  FUN_077c95c0(param_2);
  return;
}


