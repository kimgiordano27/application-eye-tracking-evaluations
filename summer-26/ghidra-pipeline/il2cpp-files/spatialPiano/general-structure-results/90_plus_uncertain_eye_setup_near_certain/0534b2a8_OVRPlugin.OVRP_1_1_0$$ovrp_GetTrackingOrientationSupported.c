/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationSupported
ENTRY_POINT: 0534b2a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationSupported(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_02f08768();
  FUN_02f08768(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo);
  FUN_02f08768(UnityEngine_Rendering_FilteringSettings_TypeInfo);
  FUN_02f08768(Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo);
  FUN_02f08768(Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x531) = 1;
  lVar8 = thunk_FUN_02f45270(*unaff_x22);
  FUN_03abf108(lVar8,*unaff_x19);
  uVar9 = FUN_02f0880c(*unaff_x21,5);
  FUN_05009b54(uVar9,*unaff_x20,0);
  puVar2 = UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo;
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar12 = *(long *)UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar3 = Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_03abf904(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = FUN_02f0880c(*unaff_x21,4);
      FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar3 = UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        }
        else {
          FUN_03abf904(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = FUN_02f0880c(*unaff_x21,4);
        FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        puVar3 = Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          }
          else {
            FUN_03abf904(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = FUN_02f0880c(*unaff_x21,4);
          FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            }
            else {
              FUN_03abf904(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = FUN_02f0880c(*unaff_x21,5);
            FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar7 = Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo;
            puVar6 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo;
            puVar5 = Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo;
            puVar4 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo;
            puVar3 = Oculus_Interaction_FinalAction_TypeInfo;
            puVar2 = 
            Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_TypeInfo;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              }
              else {
                FUN_03abf904(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
              uVar9 = FUN_02f0880c(*(undefined8 *)puVar3,0x18);
              FUN_05009b54(uVar9,*(undefined8 *)puVar7,0);
              uVar10 = *unaff_x21;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar9;
              uVar9 = FUN_02f0880c(uVar10,0x18);
              FUN_05009b54(uVar9,*(undefined8 *)puVar6,0);
              uVar10 = *(undefined8 *)puVar4;
              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar9;
              lVar8 = FUN_02f0880c(uVar10,0x18);
              uVar9 = FUN_02f0880c(*unaff_x21,6);
              FUN_05009b54(uVar9,*(undefined8 *)puVar5,0);
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar9;
                  uVar9 = FUN_02f0880c(*unaff_x21,0);
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar8 + 0x28) = uVar9;
                    lVar11 = FUN_02f0880c(*unaff_x21,1);
                    if (lVar11 == 0) goto LAB_0534c124;
                    if (*(int *)(lVar11 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      *(undefined4 *)(lVar11 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar8 + 0x30) = lVar11;
                        lVar11 = FUN_02f0880c(*unaff_x21,1);
                        if (lVar11 == 0) goto LAB_0534c124;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 4;
                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar8 + 0x38) = lVar11;
                            lVar11 = FUN_02f0880c(*unaff_x21,1);
                            if (lVar11 == 0) goto LAB_0534c124;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              *(undefined4 *)(lVar11 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar8 + 0x40) = lVar11;
                                lVar11 = FUN_02f0880c(*unaff_x21,1);
                                if (lVar11 == 0) goto LAB_0534c124;
                                if (*(int *)(lVar11 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                  if (5 < uVar1) {
                                    *(long *)(lVar8 + 0x48) = lVar11;
                                    lVar11 = FUN_02f0880c(*unaff_x21,1);
                                    if (lVar11 == 0) goto LAB_0534c124;
                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      *(undefined4 *)(lVar11 + 0x20) = 7;
                                      if (6 < uVar1) {
                                        *(long *)(lVar8 + 0x50) = lVar11;
                                        lVar11 = FUN_02f0880c(*unaff_x21,1);
                                        if (lVar11 == 0) goto LAB_0534c124;
                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                          *(undefined4 *)(lVar11 + 0x20) = 8;
                                          if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                                            *(long *)(lVar8 + 0x58) = lVar11;
                                            lVar11 = FUN_02f0880c(*unaff_x21,1);
                                            if (lVar11 == 0) goto LAB_0534c124;
                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                              *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                              if (8 < uVar1) {
                                                *(long *)(lVar8 + 0x60) = lVar11;
                                                lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                if (lVar11 == 0) goto LAB_0534c124;
                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  *(undefined4 *)(lVar11 + 0x20) = 10;
                                                  if (9 < uVar1) {
                                                    *(long *)(lVar8 + 0x68) = lVar11;
                                                    lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      *(undefined4 *)(lVar11 + 0x20) = 0xb;
                                                      if (10 < uVar1) {
                                                        *(long *)(lVar8 + 0x70) = lVar11;
                                                        lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                        if (lVar11 == 0) goto LAB_0534c124;
                                                        if (*(int *)(lVar11 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                                          *(undefined4 *)(lVar11 + 0x20) = 0x15;
                                                          if (0xb < uVar1) {
                                                            *(long *)(lVar8 + 0x78) = lVar11;
                                                            lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                            if (lVar11 == 0) goto LAB_0534c124;
                                                            if (*(int *)(lVar11 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                                              *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                              if (0xc < uVar1) {
                                                                *(long *)(lVar8 + 0x80) = lVar11;
                                                                lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                                if (lVar11 == 0) goto LAB_0534c124;
                                                                if (*(int *)(lVar11 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                                  *(undefined4 *)(lVar11 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < uVar1) {
                                                                    *(long *)(lVar8 + 0x88) = lVar11
                                                                    ;
                                                                    lVar11 = FUN_02f0880c(*unaff_x21
                                                                                          ,1);
                                                                    if (lVar11 == 0)
                                                                    goto LAB_0534c124;
                                                                    if (*(int *)(lVar11 + 0x18) != 0
                                                                       ) {
                                                                      uVar1 = *(uint *)(lVar8 + 0x18
                                                                                       );
                                                                      *(undefined4 *)(lVar11 + 0x20)
                                                                           = 0x16;
                                                                      if (0xe < uVar1) {
                                                                        *(long *)(lVar8 + 0x90) =
                                                                             lVar11;
                                                                        lVar11 = FUN_02f0880c(*
                                                  unaff_x21,1);
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0x10;
                                                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0) != 0)
                                                    {
                                                      *(long *)(lVar8 + 0x98) = lVar11;
                                                      lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                      if (lVar11 == 0) goto LAB_0534c124;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                        if (0x10 < uVar1) {
                                                          *(long *)(lVar8 + 0xa0) = lVar11;
                                                          lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                          if (lVar11 == 0) goto LAB_0534c124;
                                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                                            *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                            if (0x11 < uVar1) {
                                                              *(long *)(lVar8 + 0xa8) = lVar11;
                                                              lVar11 = FUN_02f0880c(*unaff_x21,1);
                                                              if (lVar11 == 0) goto LAB_0534c124;
                                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                                *(undefined4 *)(lVar11 + 0x20) =
                                                                     0x17;
                                                                if (0x12 < uVar1) {
                                                                  *(long *)(lVar8 + 0xb0) = lVar11;
                                                                  uVar9 = FUN_02f0880c(*unaff_x21,0)
                                                                  ;
                                                                  if (0x13 < *(uint *)(lVar8 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar8 + 0xb8) =
                                                                         uVar9;
                                                                    uVar9 = FUN_02f0880c(*unaff_x21,
                                                                                         0);
                                                                    if (0x14 < *(uint *)(lVar8 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xc0) = uVar9;
                                                    uVar9 = FUN_02f0880c(*unaff_x21,0);
                                                    if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                      *(undefined8 *)(lVar8 + 200) = uVar9;
                                                      uVar9 = FUN_02f0880c(*unaff_x21,0);
                                                      if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                        *(undefined8 *)(lVar8 + 0xd0) = uVar9;
                                                        uVar9 = FUN_02f0880c(*unaff_x21,0);
                                                        if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                          *(undefined8 *)(lVar8 + 0xd8) = uVar9;
                                                          puVar3 = 
                                                  UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo
                                                  ;
                                                  uVar9 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_FindNonRegisteredMeshesJob_TypeInfo
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18
                                                           ) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar9);
                                                  FUN_03a6e09c(lVar8,*(undefined8 *)puVar3);
                                                  puVar3 = 
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar8 + 0x1c) =
                                                           *(int *)(lVar8 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03a6e8d0(lVar8,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar11 = *(long *)(lVar8 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_0534c124;
                                                  }
                                                  puVar3 = 
                                                  Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar8,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *unaff_x21;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar8;
                                                  uVar9 = FUN_02f0880c(uVar9,5);
                                                  FUN_05009b54(uVar9,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar9;
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


