/*
FUNCTION_NAME: FUN_077c8270
ENTRY_POINT: 077c8270
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_077c8270(long param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_089870d8 & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_FullScreenDebugPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_GBufferPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_GenerateColorPyramidData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_GenerateDepthPyramidPassData,_RenderGraphContext>_TypeInfo
                );
    DAT_089870d8 = 1;
  }
  puVar2 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  plVar8 = *(long **)(param_1 + 0x10);
  ppuVar1 = &PTR_DAT_0805ae48 + param_2;
  if (4 < param_2) {
    ppuVar1 = (undefined **)(*(long *)(PTR_DAT_08486760 + 0x90) + 0xb8);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar7 = *(undefined8 *)*ppuVar1;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
         ) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_077c8370;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_03ac43c4(plVar8,*(long *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                        ,2);
LAB_077c8370:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  FUN_077c8168(*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4),uVar7,0,0);
  return;
}


