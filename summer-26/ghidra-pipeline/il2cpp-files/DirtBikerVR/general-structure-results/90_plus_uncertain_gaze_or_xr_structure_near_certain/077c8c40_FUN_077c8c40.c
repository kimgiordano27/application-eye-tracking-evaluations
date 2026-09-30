/*
FUNCTION_NAME: FUN_077c8c40
ENTRY_POINT: 077c8c40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_21;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_21;functionality_gaze_retrieval_or_extraction
*/


undefined4 FUN_077c8c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_089870e4 & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTASDebugPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTSDirectionalTracePassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTSPunctualTracePassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTShadowAreaPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RayTracingDepthPrepassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RayTracingFlagMaskPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RecursiveRenderingPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderAOPassData,_RenderGraphContext>_TypeInfo
                );
    DAT_089870e4 = 1;
  }
  uVar2 = FUN_077dd714(param_2,0);
  if (uVar2 < 0xa39e1840) {
    if (0x828c1e65 < uVar2) {
      puVar5 = (undefined8 *)
               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RayTracingDepthPrepassData,_RenderGraphContext>_TypeInfo
      ;
      if (uVar2 != 0x9c180b95) {
        if (uVar2 != 0xa39e183f) {
          return 0;
        }
        uVar3 = thunk_FUN_065cbffc(param_2,*(undefined8 *)
                                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTSPunctualTracePassData,_RenderGraphContext>_TypeInfo
                                   ,0);
        puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar4 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar4 = *(long *)puVar1;
        }
        return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x10);
      }
LAB_077c8eac:
      uVar3 = thunk_FUN_065cbffc(param_2,*puVar5,0);
      puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x28);
    }
    if (uVar2 == 0x828c1e65) {
      uVar3 = thunk_FUN_065cbffc(param_2,*(undefined8 *)
                                          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RayTracingFlagMaskPassData,_RenderGraphContext>_TypeInfo
                                 ,0);
      puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x20);
    }
    puVar5 = (undefined8 *)
             UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTShadowAreaPassData,_RenderGraphContext>_TypeInfo
    ;
    if (uVar2 != 0x6ba22b6c) {
      return 0;
    }
  }
  else {
    if (0xb5c81501 < uVar2) {
      if (uVar2 == 0xceeed9fd) {
        uVar3 = thunk_FUN_065cbffc(param_2,*(undefined8 *)
                                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTSDirectionalTracePassData,_RenderGraphContext>_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return 0x33;
      }
      puVar5 = (undefined8 *)
               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RenderAOPassData,_RenderGraphContext>_TypeInfo
      ;
      if (uVar2 != 0xdee862bf) {
        return 0;
      }
      goto LAB_077c8eac;
    }
    if (uVar2 == 0xa3c94c5c) {
      uVar3 = thunk_FUN_065cbffc(param_2,*(undefined8 *)
                                          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RTASDebugPassData,_RenderGraphContext>_TypeInfo
                                 ,0);
      puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x14);
    }
    puVar5 = (undefined8 *)
             UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_RecursiveRenderingPassData,_RenderGraphContext>_TypeInfo
    ;
    if (uVar2 != 0xb5c81501) {
      return 0;
    }
  }
  uVar3 = thunk_FUN_065cbffc(param_2,*puVar5,0);
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar1;
  }
  return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc);
}


