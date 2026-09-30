/*
FUNCTION_NAME: FUN_070c23a4
ENTRY_POINT: 070c23a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_12;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_070c23a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = OVRFaceExpressions_FaceExpressionsEnumerator_TypeInfo;
  puVar1 = PTR_DAT_075d8838;
  if ((DAT_07a5a923 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8820);
    FUN_031f20f4(UnityEngine_Ray_TypeInfo);
    FUN_031f20f4(UnityEngine_Ray2D_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8828);
    FUN_031f20f4(PTR_DAT_075d88b8);
    FUN_031f20f4(PTR_DAT_075d8830);
    FUN_031f20f4(UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8890);
    FUN_031f20f4(PTR_DAT_075d8838);
    FUN_031f20f4(UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8840);
    FUN_031f20f4(PTR_DAT_075d8848);
    FUN_031f20f4(OVRFaceExpressions_FaceViseme_TypeInfo);
    FUN_031f20f4(OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo);
    FUN_031f20f4(OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    FUN_031f20f4(OVRFaceExpressions_FaceExpressionsEnumerator_TypeInfo);
    FUN_031f20f4(OVRGLTFLoader_<LoadGLBCoroutine>d__26_TypeInfo);
    FUN_031f20f4(OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo);
    DAT_07a5a923 = 1;
  }
  lVar3 = FUN_0710341c(param_1,0);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar2 = OVRGLTFLoader_<LoadGLBCoroutine>d__26_TypeInfo;
  puVar1 = PTR_DAT_075d8890;
  if (lVar3 != 0) {
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8828);
    lVar3 = FUN_0710341c(param_1,0);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
    puVar2 = OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo;
    puVar1 = PTR_DAT_075d8840;
    if (lVar3 != 0) {
      Fusion_Native__MallocAndClearArray<NetPeerGroup>
                (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d88b8);
      lVar3 = FUN_0710341c(param_1,0);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
      puVar2 = OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo;
      puVar1 = UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo;
      if (lVar3 != 0) {
        Fusion_Native__MallocAndClearArray<NetPeerGroup>
                  (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8830);
        lVar3 = FUN_0710341c(param_1,0);
        uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar2 = OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo;
        puVar1 = UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo;
        if (lVar3 != 0) {
          Fusion_Native__MallocAndClearArray<NetPeerGroup>
                    (lVar3,uVar4,0,*(undefined8 *)UnityEngine_Ray_TypeInfo);
          lVar3 = FUN_0710341c(param_1,0);
          uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
          puVar2 = OVRFaceExpressions_FaceViseme_TypeInfo;
          puVar1 = PTR_DAT_075d8848;
          if (lVar3 != 0) {
            Fusion_Native__MallocAndClearArray<NetPeerGroup>
                      (lVar3,uVar4,0,*(undefined8 *)UnityEngine_Ray2D_TypeInfo);
            lVar3 = FUN_0710341c(param_1,0);
            uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
            FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar3 != 0) {
              Fusion_Native__MallocAndClearArray<NetPeerGroup>
                        (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8820);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


