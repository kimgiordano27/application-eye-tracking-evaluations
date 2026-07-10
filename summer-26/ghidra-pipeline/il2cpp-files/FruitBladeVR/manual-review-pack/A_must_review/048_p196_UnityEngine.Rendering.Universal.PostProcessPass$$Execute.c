/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$Execute
ENTRY_POINT: 034ba7a8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_9;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_PostProcessPass__Execute
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined1 local_64 [4];
  
  puVar1 = PTR_UnityEngine_Rendering_VolumeManager_TypeInfo_03cb8980;
  if ((DAT_03ef5f34 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo_03cdbec0);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_VolumeManager_TypeInfo_03cb8980);
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Bloom>___03cdbec8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChromaticAberration>___03cdbed0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorAdjustments>___03cdbed8
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorLookup>___03cdbee0);
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<DepthOfField>___03cdbee8)
    ;
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>___03cdbef0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>___03cdbef8
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>___03cdbf00);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<PaniniProjection>___03cdbf08
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ScreenSpaceLensFlare>___03cdbf10
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Tonemapping>___03cdbd38);
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Vignette>___03cdbf18);
    DAT_03ef5f34 = 1;
  }
  local_64[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar9 = UnityEngine_Rendering_VolumeManager__get_instance(0);
  puVar8 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Vignette>___03cdbf18;
  puVar7 = 
  PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ScreenSpaceLensFlare>___03cdbf10;
  puVar6 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<PaniniProjection>___03cdbf08;
  puVar5 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>___03cdbf00;
  puVar4 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>___03cdbef8;
  puVar3 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChromaticAberration>___03cdbed0
  ;
  puVar2 = PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Bloom>___03cdbec8;
  puVar1 = PTR_UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo_03cdbec0;
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0)) {
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>
                       (lVar9,*(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<DepthOfField>___03cdbee8
                       );
    *(undefined8 *)(param_1 + 0x1b0) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1b0,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar5);
    *(undefined8 *)(param_1 + 0x1b8) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1b8,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar7);
    *(undefined8 *)(param_1 + 0x1c0) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1c0,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar6);
    *(undefined8 *)(param_1 + 0x1c8) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1c8,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x1d0) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1d0,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x1d8) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1d8,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x1e0) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1e0,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>(lVar9,*(undefined8 *)puVar8);
    *(undefined8 *)(param_1 + 0x1e8) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1e8,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>
                       (lVar9,*(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorLookup>___03cdbee0
                       );
    *(undefined8 *)(param_1 + 0x1f0) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1f0,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>
                       (lVar9,*(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorAdjustments>___03cdbed8
                       );
    *(undefined8 *)(param_1 + 0x1f8) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x1f8,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>
                       (lVar9,*(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<Tonemapping>___03cdbd38
                       );
    *(undefined8 *)(param_1 + 0x200) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x200,uVar10);
    uVar10 = UnityEngine_Rendering_VolumeStack__GetComponent<object>
                       (lVar9,*(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>___03cdbef0
                       );
    *(undefined8 *)(param_1 + 0x208) = uVar10;
    thunk_FUN_01cc8040(param_1 + 0x208,uVar10);
    pcVar11 = (char *)UnityEngine_Rendering_Universal_PostProcessingData__get_useFastSRGBLinearConversion
                                (param_3 + 0x20,0);
    *(bool *)(param_1 + 0x247) = *pcVar11 != '\0';
    pcVar11 = (char *)UnityEngine_Rendering_Universal_PostProcessingData__get_supportScreenSpaceLensFlare
                                (param_3 + 0x20,0);
    *(bool *)(param_1 + 0x248) = *pcVar11 != '\0';
    pcVar11 = (char *)UnityEngine_Rendering_Universal_PostProcessingData__get_supportDataDrivenLensFlare
                                (param_3 + 0x20,0);
    *(bool *)(param_1 + 0x249) = *pcVar11 != '\0';
    puVar12 = (undefined8 *)
              UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_3,0);
    uVar10 = *puVar12;
    if (*(char *)(param_1 + 0x244) == '\0') {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar9 = *(long *)puVar1;
      }
      UnityEngine_Rendering_ProfilingScope___ctor(local_64,uVar10,**(undefined8 **)(lVar9 + 0xb8),0)
      ;
      UnityEngine_Rendering_Universal_PostProcessPass__Render(param_1,uVar10,param_3);
    }
    else {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar9 = *(long *)puVar1;
      }
      UnityEngine_Rendering_ProfilingScope___ctor
                (local_64,uVar10,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      UnityEngine_Rendering_Universal_PostProcessPass__RenderFinalPass(param_1,uVar10,param_3);
    }
    UnityEngine_Rendering_ProfilingScope__Dispose(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


