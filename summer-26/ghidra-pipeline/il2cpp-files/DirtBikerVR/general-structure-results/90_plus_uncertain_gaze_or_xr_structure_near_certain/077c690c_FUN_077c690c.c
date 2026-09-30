/*
FUNCTION_NAME: FUN_077c690c
ENTRY_POINT: 077c690c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_077c690c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_089870cd & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848ceb8);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawNormal2DPass_PassData,_RasterGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_TypeInfo
                );
    DAT_089870cd = 1;
  }
  uVar3 = FUN_065cd268(param_2,0);
  puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_TypeInfo
  ;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0848ceb8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_06f1e2e4(param_2,*(undefined8 *)puVar2,0);
    if (lVar4 != 0) {
      uVar3 = FUN_06f19f84(lVar4,0);
      if ((uVar3 & 1) == 0) goto LAB_077c69cc;
      if (param_1 != 0) {
        FUN_0784f794(param_1,*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawNormal2DPass_PassData,_RasterGraphContext>_TypeInfo
                     ,param_2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_077c69cc:
  puVar2 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  thunk_FUN_03af1434(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  FUN_0350b93c();
  lVar4 = thunk_FUN_03af1434(puVar2);
  uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x1c);
  uVar5 = thunk_FUN_03af1434(
                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawObjectsPass_PassData,_RasterGraphContext>_TypeInfo
                            );
  uVar5 = FUN_077b9aec(uVar1,uVar5,0);
  uVar6 = thunk_FUN_03af1434(
                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawObjectsWithRenderingLayersPass_RenderingLayersPassData,_RasterGraphContext>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,uVar6);
}


