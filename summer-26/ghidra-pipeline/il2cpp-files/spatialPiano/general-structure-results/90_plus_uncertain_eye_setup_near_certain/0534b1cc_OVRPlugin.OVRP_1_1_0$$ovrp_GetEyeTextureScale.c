/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetEyeTextureScale
ENTRY_POINT: 0534b1cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetEyeTextureScale(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar5 = UnityEngine_Rendering_FilteringSettings_TypeInfo;
  puVar4 = UnityEngine_UIElements_FilterParameter_TypeInfo;
  puVar3 = UnityEngine_UIElements_FilterFunctionDefinitionUtils_TypeInfo;
  puVar2 = UnityEngine_UIElements_FilterFunction_TypeInfo;
  if ((DAT_06bbb531 & 1) == 0) {
    FUN_02f08768(Oculus_Interaction_FinalAction_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_FilterParameter_TypeInfo);
    FUN_02f08768(
                Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_TypeInfo
                );
    FUN_02f08768(UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_FilterFunctionDefinitionUtils_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_FindNonRegisteredMeshesJob_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_FilterFunction_TypeInfo);
    FUN_02f08768(UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo);
    FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo);
    FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo);
    FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo);
    FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo);
    FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_FilteringSettings_TypeInfo);
    FUN_02f08768(Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo);
    FUN_02f08768(Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo);
    DAT_06bbb531 = 1;
  }
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_03abf108(lVar9,*(undefined8 *)puVar3);
  uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,5);
  FUN_05009b54(uVar10,*(undefined8 *)puVar5,0);
  puVar2 = UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo;
  if (lVar9 != 0) {
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar3 = Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      }
      else {
        FUN_03abf904(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,4);
      FUN_05009b54(uVar10,*(undefined8 *)puVar3,0);
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar13 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar3 = UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        }
        else {
          FUN_03abf904(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,4);
        FUN_05009b54(uVar10,*(undefined8 *)puVar3,0);
        lVar12 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar3 = Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          }
          else {
            FUN_03abf904(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,4);
          FUN_05009b54(uVar10,*(undefined8 *)puVar3,0);
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar3 = Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            }
            else {
              FUN_03abf904(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,5);
            FUN_05009b54(uVar10,*(undefined8 *)puVar3,0);
            lVar12 = *(long *)(lVar9 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar8 = Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo;
            puVar7 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo;
            puVar6 = Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo;
            puVar5 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo;
            puVar3 = Oculus_Interaction_FinalAction_TypeInfo;
            puVar2 = 
            Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_TypeInfo;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              }
              else {
                FUN_03abf904(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar9;
              uVar10 = FUN_02f0880c(*(undefined8 *)puVar3,0x18);
              FUN_05009b54(uVar10,*(undefined8 *)puVar8,0);
              uVar11 = *(undefined8 *)puVar4;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar10;
              uVar10 = FUN_02f0880c(uVar11,0x18);
              FUN_05009b54(uVar10,*(undefined8 *)puVar7,0);
              uVar11 = *(undefined8 *)puVar5;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar10;
              lVar9 = FUN_02f0880c(uVar11,0x18);
              uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,6);
              FUN_05009b54(uVar10,*(undefined8 *)puVar6,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar10;
                  uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,0);
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar10;
                    lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                    if (lVar12 == 0) goto LAB_0534c124;
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      *(undefined4 *)(lVar12 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar9 + 0x30) = lVar12;
                        lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                        if (lVar12 == 0) goto LAB_0534c124;
                        if (*(int *)(lVar12 + 0x18) != 0) {
                          *(undefined4 *)(lVar12 + 0x20) = 4;
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar9 + 0x38) = lVar12;
                            lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                            if (lVar12 == 0) goto LAB_0534c124;
                            if (*(int *)(lVar12 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              *(undefined4 *)(lVar12 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar9 + 0x40) = lVar12;
                                lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                if (lVar12 == 0) goto LAB_0534c124;
                                if (*(int *)(lVar12 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  *(undefined4 *)(lVar12 + 0x20) = 0x13;
                                  if (5 < uVar1) {
                                    *(long *)(lVar9 + 0x48) = lVar12;
                                    lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                    if (lVar12 == 0) goto LAB_0534c124;
                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                      *(undefined4 *)(lVar12 + 0x20) = 7;
                                      if (6 < uVar1) {
                                        *(long *)(lVar9 + 0x50) = lVar12;
                                        lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                        if (lVar12 == 0) goto LAB_0534c124;
                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                          *(undefined4 *)(lVar12 + 0x20) = 8;
                                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                                            *(long *)(lVar9 + 0x58) = lVar12;
                                            lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                            if (lVar12 == 0) goto LAB_0534c124;
                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              *(undefined4 *)(lVar12 + 0x20) = 0x14;
                                              if (8 < uVar1) {
                                                *(long *)(lVar9 + 0x60) = lVar12;
                                                lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                                if (lVar12 == 0) goto LAB_0534c124;
                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  *(undefined4 *)(lVar12 + 0x20) = 10;
                                                  if (9 < uVar1) {
                                                    *(long *)(lVar9 + 0x68) = lVar12;
                                                    lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1);
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                    if (*(int *)(lVar12 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      *(undefined4 *)(lVar12 + 0x20) = 0xb;
                                                      if (10 < uVar1) {
                                                        *(long *)(lVar9 + 0x70) = lVar12;
                                                        lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,
                                                                              1);
                                                        if (lVar12 == 0) goto LAB_0534c124;
                                                        if (*(int *)(lVar12 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                                          *(undefined4 *)(lVar12 + 0x20) = 0x15;
                                                          if (0xb < uVar1) {
                                                            *(long *)(lVar9 + 0x78) = lVar12;
                                                            lVar12 = FUN_02f0880c(*(undefined8 *)
                                                                                   puVar4,1);
                                                            if (lVar12 == 0) goto LAB_0534c124;
                                                            if (*(int *)(lVar12 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                                              *(undefined4 *)(lVar12 + 0x20) = 0xd;
                                                              if (0xc < uVar1) {
                                                                *(long *)(lVar9 + 0x80) = lVar12;
                                                                lVar12 = FUN_02f0880c(*(undefined8 *
                                                                                       )puVar4,1);
                                                                if (lVar12 == 0) goto LAB_0534c124;
                                                                if (*(int *)(lVar12 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                                  *(undefined4 *)(lVar12 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < uVar1) {
                                                                    *(long *)(lVar9 + 0x88) = lVar12
                                                                    ;
                                                                    lVar12 = FUN_02f0880c(*(
                                                  undefined8 *)puVar4,1);
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  if (*(int *)(lVar12 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    *(undefined4 *)(lVar12 + 0x20) = 0x16;
                                                    if (0xe < uVar1) {
                                                      *(long *)(lVar9 + 0x90) = lVar12;
                                                      lVar12 = FUN_02f0880c(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar12 == 0) goto LAB_0534c124;
                                                      if (*(int *)(lVar12 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar12 + 0x20) = 0x10;
                                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0)
                                                            != 0) {
                                                          *(long *)(lVar9 + 0x98) = lVar12;
                                                          lVar12 = FUN_02f0880c(*(undefined8 *)
                                                                                 puVar4,1);
                                                          if (lVar12 == 0) goto LAB_0534c124;
                                                          if (*(int *)(lVar12 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                                            *(undefined4 *)(lVar12 + 0x20) = 0x11;
                                                            if (0x10 < uVar1) {
                                                              *(long *)(lVar9 + 0xa0) = lVar12;
                                                              lVar12 = FUN_02f0880c(*(undefined8 *)
                                                                                     puVar4,1);
                                                              if (lVar12 == 0) goto LAB_0534c124;
                                                              if (*(int *)(lVar12 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                                *(undefined4 *)(lVar12 + 0x20) =
                                                                     0x12;
                                                                if (0x11 < uVar1) {
                                                                  *(long *)(lVar9 + 0xa8) = lVar12;
                                                                  lVar12 = FUN_02f0880c(*(undefined8
                                                                                          *)puVar4,1
                                                                                       );
                                                                  if (lVar12 == 0)
                                                                  goto LAB_0534c124;
                                                                  if (*(int *)(lVar12 + 0x18) != 0)
                                                                  {
                                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                                    *(undefined4 *)(lVar12 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < uVar1) {
                                                                      *(long *)(lVar9 + 0xb0) =
                                                                           lVar12;
                                                                      uVar10 = FUN_02f0880c(*(
                                                  undefined8 *)puVar4,0);
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) = uVar10;
                                                    uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,0);
                                                    if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xc0) = uVar10;
                                                      uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,0)
                                                      ;
                                                      if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 200) = uVar10;
                                                        uVar10 = FUN_02f0880c(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                                                          uVar10 = FUN_02f0880c(*(undefined8 *)
                                                                                 puVar4,0);
                                                          if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0xd8) = uVar10;
                                                            puVar3 = 
                                                  UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_FindNonRegisteredMeshesJob_TypeInfo
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18
                                                           ) = lVar9;
                                                  lVar9 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03a6e09c(lVar9,*(undefined8 *)puVar3);
                                                  puVar3 = 
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03a6e8d0(lVar9,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_0534c124;
                                                  }
                                                  puVar3 = 
                                                  Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar9,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar9;
                                                  uVar10 = FUN_02f0880c(uVar10,5);
                                                  FUN_05009b54(uVar10,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar10;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_0534c124;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
          }
        }
      }
    }
  }
LAB_0534c124:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


