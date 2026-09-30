/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 0534b370
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  
  FUN_03abf904(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  uVar8 = FUN_02f0880c(*unaff_x21,4);
  FUN_05009b54(uVar8,*unaff_x23,0);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo;
  if (lVar11 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
    }
    else {
      FUN_03abf904();
    }
    uVar8 = FUN_02f0880c(*unaff_x21,4);
    FUN_05009b54(uVar8,*(undefined8 *)puVar2,0);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_03abf904();
      }
      uVar8 = FUN_02f0880c(*unaff_x21,4);
      FUN_05009b54(uVar8,*(undefined8 *)puVar2,0);
      lVar11 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_03abf904();
        }
        uVar8 = FUN_02f0880c(*unaff_x21,5);
        FUN_05009b54(uVar8,*(undefined8 *)puVar2,0);
        lVar11 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar7 = Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo;
        puVar6 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo;
        puVar5 = Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo;
        puVar4 = UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo;
        puVar3 = Oculus_Interaction_FinalAction_TypeInfo;
        puVar2 = 
        Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_TypeInfo;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_03abf904();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          uVar8 = FUN_02f0880c(*(undefined8 *)puVar3,0x18);
          FUN_05009b54(uVar8,*(undefined8 *)puVar7,0);
          uVar9 = *unaff_x21;
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar8;
          uVar8 = FUN_02f0880c(uVar9,0x18);
          FUN_05009b54(uVar8,*(undefined8 *)puVar6,0);
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar8;
          lVar11 = FUN_02f0880c(uVar9,0x18);
          uVar8 = FUN_02f0880c(*unaff_x21,6);
          FUN_05009b54(uVar8,*(undefined8 *)puVar5,0);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = uVar8;
              uVar8 = FUN_02f0880c(*unaff_x21,0);
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = uVar8;
                lVar10 = FUN_02f0880c(*unaff_x21,1);
                if (lVar10 == 0) goto LAB_0534c124;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  *(undefined4 *)(lVar10 + 0x20) = 3;
                  if (2 < uVar1) {
                    *(long *)(lVar11 + 0x30) = lVar10;
                    lVar10 = FUN_02f0880c(*unaff_x21,1);
                    if (lVar10 == 0) goto LAB_0534c124;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 4;
                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                        *(long *)(lVar11 + 0x38) = lVar10;
                        lVar10 = FUN_02f0880c(*unaff_x21,1);
                        if (lVar10 == 0) goto LAB_0534c124;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar11 + 0x18);
                          *(undefined4 *)(lVar10 + 0x20) = 5;
                          if (4 < uVar1) {
                            *(long *)(lVar11 + 0x40) = lVar10;
                            lVar10 = FUN_02f0880c(*unaff_x21,1);
                            if (lVar10 == 0) goto LAB_0534c124;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 0x13;
                              if (5 < uVar1) {
                                *(long *)(lVar11 + 0x48) = lVar10;
                                lVar10 = FUN_02f0880c(*unaff_x21,1);
                                if (lVar10 == 0) goto LAB_0534c124;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  *(undefined4 *)(lVar10 + 0x20) = 7;
                                  if (6 < uVar1) {
                                    *(long *)(lVar11 + 0x50) = lVar10;
                                    lVar10 = FUN_02f0880c(*unaff_x21,1);
                                    if (lVar10 == 0) goto LAB_0534c124;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 8;
                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                                        *(long *)(lVar11 + 0x58) = lVar10;
                                        lVar10 = FUN_02f0880c(*unaff_x21,1);
                                        if (lVar10 == 0) goto LAB_0534c124;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                          if (8 < uVar1) {
                                            *(long *)(lVar11 + 0x60) = lVar10;
                                            lVar10 = FUN_02f0880c(*unaff_x21,1);
                                            if (lVar10 == 0) goto LAB_0534c124;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                              *(undefined4 *)(lVar10 + 0x20) = 10;
                                              if (9 < uVar1) {
                                                *(long *)(lVar11 + 0x68) = lVar10;
                                                lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                if (lVar10 == 0) goto LAB_0534c124;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                  if (10 < uVar1) {
                                                    *(long *)(lVar11 + 0x70) = lVar10;
                                                    lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar11 + 0x78) = lVar10;
                                                        lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                        if (lVar10 == 0) goto LAB_0534c124;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar11 + 0x80) = lVar10;
                                                            lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                            if (lVar10 == 0) goto LAB_0534c124;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar11 + 0x88) = lVar10;
                                                                lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                                if (lVar10 == 0) goto LAB_0534c124;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x16;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar11 + 0x90) =
                                                                         lVar10;
                                                                    lVar10 = FUN_02f0880c(*unaff_x21
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_0534c124;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x10;
                                                                      if ((*(uint *)(lVar11 + 0x18)
                                                                          & 0xfffffff0) != 0) {
                                                                        *(long *)(lVar11 + 0x98) =
                                                                             lVar10;
                                                                        lVar10 = FUN_02f0880c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar11 + 0xa0) = lVar10;
                                                      lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_0534c124;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar11 + 0xa8) = lVar10;
                                                          lVar10 = FUN_02f0880c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_0534c124;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar11 + 0xb0) = lVar10;
                                                              uVar8 = FUN_02f0880c(*unaff_x21,0);
                                                              if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0xb8) =
                                                                     uVar8;
                                                                uVar8 = FUN_02f0880c(*unaff_x21,0);
                                                                if (0x14 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0xc0) =
                                                                       uVar8;
                                                                  uVar8 = FUN_02f0880c(*unaff_x21,0)
                                                                  ;
                                                                  if (0x15 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 200) =
                                                                         uVar8;
                                                                    uVar8 = FUN_02f0880c(*unaff_x21,
                                                                                         0);
                                                                    if (0x16 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xd0) = uVar8;
                                                    uVar8 = FUN_02f0880c(*unaff_x21,0);
                                                    if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0xd8) = uVar8;
                                                      puVar3 = 
                                                  UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo
                                                  ;
                                                  uVar8 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_FindNonRegisteredMeshesJob_TypeInfo
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18
                                                           ) = lVar11;
                                                  lVar11 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03a6e09c(lVar11,*(undefined8 *)puVar3);
                                                  puVar3 = 
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)
                                                  UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03a6e8d0(lVar11,6,*(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_0534c124;
                                                  }
                                                  puVar3 = 
                                                  Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03a6e8d0(lVar11,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x21;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar11;
                                                  uVar8 = FUN_02f0880c(uVar8,5);
                                                  FUN_05009b54(uVar8,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar8;
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
LAB_0534c124:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


