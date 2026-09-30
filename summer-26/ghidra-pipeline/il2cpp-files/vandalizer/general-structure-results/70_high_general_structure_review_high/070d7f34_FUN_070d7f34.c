/*
FUNCTION_NAME: FUN_070d7f34
ENTRY_POINT: 070d7f34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_070d7f34(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo;
  puVar1 = PTR_DAT_075d8838;
  if ((DAT_07a5a9f5 & 1) == 0) {
    FUN_031f20f4(Fusion_SimulationBehaviourAttribute_TypeInfo);
    FUN_031f20f4(Fusion_SimulationBehaviourUpdater_TypeInfo);
    FUN_031f20f4(UnityEngine_Ray_TypeInfo);
    FUN_031f20f4(UnityEngine_Ray2D_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8828);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d88b8);
    FUN_031f20f4(PTR_DAT_075d8830);
    FUN_031f20f4(OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075dab88);
    FUN_031f20f4(UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8890);
    FUN_031f20f4(PTR_DAT_075d8838);
    FUN_031f20f4(PTR_DAT_075dab90);
    FUN_031f20f4(UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8840);
    DAT_07a5a9f5 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar2 = UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo;
  puVar1 = PTR_DAT_075d8840;
  if (lVar4 != 0) {
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar4,uVar3,0,*(undefined8 *)PTR_DAT_075d8828);
    lVar4 = *(long *)(param_1 + 0x28);
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
    puVar2 = UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo;
    puVar1 = UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo;
    if (lVar4 != 0) {
      Fusion_Native__MallocAndClearArray<NetPeerGroup>
                (lVar4,uVar3,1,*(undefined8 *)PTR_DAT_075d8830);
      lVar4 = *(long *)(param_1 + 0x28);
      uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar1,0);
      puVar2 = UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo;
      puVar1 = PTR_DAT_075d8890;
      if (lVar4 != 0) {
        Fusion_Native__MallocAndClearArray<NetPeerGroup>
                  (lVar4,uVar3,0,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo);
        lVar4 = *(long *)(param_1 + 0x28);
        uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
        puVar2 = OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo;
        puVar1 = UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo;
        if (lVar4 != 0) {
          Fusion_Native__MallocAndClearArray<NetPeerGroup>
                    (lVar4,uVar3,0,*(undefined8 *)PTR_DAT_075d88b8);
          lVar4 = *(long *)(param_1 + 0x28);
          uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
          puVar2 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo;
          puVar1 = UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo;
          if (lVar4 != 0) {
            Fusion_Native__MallocAndClearArray<NetPeerGroup>
                      (lVar4,uVar3,0,*(undefined8 *)UnityEngine_Ray_TypeInfo);
            lVar4 = *(long *)(param_1 + 0x28);
            uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
            FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
            if (lVar4 != 0) {
              Fusion_Native__MallocAndClearArray<NetPeerGroup>
                        (lVar4,uVar3,0,*(undefined8 *)UnityEngine_Ray2D_TypeInfo);
              if ((param_2 & 1) == 0) {
                return;
              }
              lVar4 = *(long *)(param_1 + 0x28);
              uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dab88);
              FUN_04292d74(uVar3,param_1,
                           *(undefined8 *)
                            Oculus_Interaction_OneGrabRotateTransformer_OneGrabRotateConstraints_TypeInfo
                           ,0);
              if (lVar4 != 0) {
                Fusion_Native__MallocAndClearArray<NetPeerGroup>
                          (lVar4,uVar3,0,*(undefined8 *)Fusion_SimulationBehaviourAttribute_TypeInfo
                          );
                lVar4 = *(long *)(param_1 + 0x28);
                uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dab90);
                FUN_04292d74(uVar3,param_1,
                             *(undefined8 *)
                              Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                             ,0);
                if (lVar4 != 0) {
                  Fusion_Native__MallocAndClearArray<NetPeerGroup>
                            (lVar4,uVar3,0,*(undefined8 *)Fusion_SimulationBehaviourUpdater_TypeInfo
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


