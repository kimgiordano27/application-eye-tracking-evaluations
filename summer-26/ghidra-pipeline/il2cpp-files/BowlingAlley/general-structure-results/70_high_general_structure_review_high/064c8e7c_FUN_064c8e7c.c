/*
FUNCTION_NAME: FUN_064c8e7c
ENTRY_POINT: 064c8e7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_064c8e7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar2 = UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo;
  if ((DAT_076df6a7 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ee10);
    thunk_FUN_032e1da0(Nova_UIBlockActivator_<>c__DisplayClass4_0_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000D2E_BurstDirectCall_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000D2B_BurstDirectCall_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000D2C_BurstDirectCall_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000D2D_BurstDirectCall_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo);
    DAT_076df6a7 = 1;
  }
  puVar1 = Nova_UIBlockActivator_<>c__DisplayClass4_0_TypeInfo;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  uVar7 = *(undefined8 *)(*(long *)puVar1 + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar2;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000D2B_BurstDirectCall_TypeInfo
                              );
    FUN_04ae81a8(lVar8,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000D2C_BurstDirectCall_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_0333a630(plVar6,lVar8);
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000D2E_BurstDirectCall_TypeInfo
  ;
  puVar3 = UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar2;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
    FUN_0589e07c(lVar10,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000D2D_BurstDirectCall_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar6 = lVar10;
    thunk_FUN_0333a630(plVar6,lVar10);
  }
  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_04987f0c(uVar9,uVar7,lVar8,lVar10,*(undefined8 *)puVar3);
  memset(*(void **)(*(long *)puVar1 + 0xb8),0,0xb8);
  return uVar9;
}


