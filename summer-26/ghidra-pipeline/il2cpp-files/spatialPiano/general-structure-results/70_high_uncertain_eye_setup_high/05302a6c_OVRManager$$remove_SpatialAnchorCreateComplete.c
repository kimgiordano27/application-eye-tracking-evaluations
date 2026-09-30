/*
FUNCTION_NAME: OVRManager$$remove_SpatialAnchorCreateComplete
ENTRY_POINT: 05302a6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpatialAnchorCreateComplete(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  
  lVar1 = FUN_060ed87c();
  if (lVar1 != 0) {
    FUN_033d910c(lVar1,*(undefined8 *)UnityEngine_Profiling_CustomSampler_TypeInfo);
    FUN_05302b6c();
    if (*(long *)(unaff_x19 + 0x180) == 0) {
      lVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9e40);
      FUN_060f1570(lVar1,*(undefined8 *)
                          Unity_XR_CompositionLayers_Layers_CustomTransformData_TypeInfo,0);
      if ((lVar1 == 0) ||
         (plVar2 = (long *)FUN_033d910c(lVar1,*(undefined8 *)
                                               UnityEngine_UIElements_CustomStyleResolvedEvent_TypeInfo
                                       ), plVar2 == (long *)0x0)) goto LAB_05302b68;
      lVar4 = *(long *)(unaff_x19 + 0x140);
      *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(unaff_x19 + 0x130);
      if (lVar4 != 0) {
        lVar4 = FUN_033d910c(lVar1,*(undefined8 *)UnityEngine_CustomRenderTextureManager_TypeInfo);
        if (lVar4 == 0) goto LAB_05302b68;
        thunk_FUN_052d4230(lVar4,*(undefined8 *)(unaff_x19 + 0x140),0);
        lVar1 = FUN_060f0a10(lVar1,0);
        plVar2[5] = lVar1;
      }
      uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                  Unity_XR_CompositionLayers_Layers_CubeProjectionLayerData_TypeInfo
                                );
      FUN_0530085c(uVar3,plVar2,*(undefined8 *)(*plVar2 + 400));
      *(undefined8 *)(unaff_x19 + 0x180) = uVar3;
    }
    FUN_05236568();
    return;
  }
LAB_05302b68:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


