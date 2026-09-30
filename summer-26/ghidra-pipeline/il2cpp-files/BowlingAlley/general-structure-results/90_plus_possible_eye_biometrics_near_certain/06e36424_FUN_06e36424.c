/*
FUNCTION_NAME: FUN_06e36424
ENTRY_POINT: 06e36424
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 165
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_possible_biometrics_hits_4
*/


void FUN_06e36424(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076ead29 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRFaceExpressions_get_Item__);
    thunk_FUN_032e1da0(Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
    thunk_FUN_032e1da0(Method_OVRGLTFAccessor_ReadAsFloat__);
    thunk_FUN_032e1da0(Method_OVRGLTFAccessor_ReadAsInt__);
    thunk_FUN_032e1da0(Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__);
    thunk_FUN_032e1da0(Method_OVRGLTFAnimatinonNode_CopyData<float>__);
    thunk_FUN_032e1da0(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_032e1da0(Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
    thunk_FUN_032e1da0(Method_OVRGrabbable_Awake__);
    thunk_FUN_032e1da0(Method_OVRGrabber_<Awake>b__23_0__);
    thunk_FUN_032e1da0(Method_OVRHand_OnSceneChanged__);
    thunk_FUN_032e1da0(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
    thunk_FUN_032e1da0(Method_OVRLipSyncContext_LocalTouchEventCallback__);
    thunk_FUN_032e1da0(Method_OVRLipSyncMicInput_StartMicrophone__);
    thunk_FUN_032e1da0(Method_OVRLocatable_ScheduleUpdateTransforms__);
    thunk_FUN_032e1da0(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
    thunk_FUN_032e1da0(Method_OVRManager_OnPermissionGranted__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0728a328);
    thunk_FUN_032e1da0(PTR_DAT_0728a330);
    thunk_FUN_032e1da0(PTR_DAT_0728a338);
    thunk_FUN_032e1da0(PTR_DAT_0728a0f0);
    thunk_FUN_032e1da0(PTR_DAT_0728a0f8);
    thunk_FUN_032e1da0(PTR_DAT_0728a340);
                    /* try { // try from 06e36570 to 06f3663f has its CatchHandler @ 06e36570
                       catch() { ... } // from try @ 06e36570 with catch @ 06e36570
                       catch() { ... } // from try @ 06e36684 with catch @ 06e36570
                       catch() { ... } // from try @ 06e36730 with catch @ 06e36570
                       catch() { ... } // from try @ 06e367d4 with catch @ 06e36570 */
    thunk_FUN_032e1da0(PTR_DAT_0728a348);
    thunk_FUN_032e1da0(PTR_DAT_07289ad0);
    thunk_FUN_032e1da0(PTR_DAT_0727c988);
    thunk_FUN_032e1da0(PTR_DAT_07289ad8);
    thunk_FUN_032e1da0(PTR_DAT_0727ccb8);
    thunk_FUN_032e1da0(PTR_DAT_07289ae0);
    thunk_FUN_032e1da0(PTR_DAT_07289c78);
    thunk_FUN_032e1da0(PTR_DAT_0728a350);
    thunk_FUN_032e1da0(PTR_DAT_07289ae8);
    thunk_FUN_032e1da0(PTR_DAT_0728a358);
    thunk_FUN_032e1da0(PTR_DAT_0728a360);
    thunk_FUN_032e1da0(PTR_DAT_0728a368);
    thunk_FUN_032e1da0(PTR_DAT_07289af0);
    thunk_FUN_032e1da0(PTR_DAT_0728a370);
    DAT_076ead29 = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x28);
  uVar9 = *puVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06becf70(uVar9,0);
  puVar4 = Method_OVRManager_OnPermissionGranted__;
                    /* try { // try from 06e36640 to 06f3664f has its CatchHandler @ 06e36740 */
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
                    /* try { // try from 06e36660 to 06f3666f has its CatchHandler @ 06e3673c */
    uVar9 = FUN_03afd47c(*(undefined8 *)puVar4);
    *puVar7 = uVar9;
    thunk_FUN_0333a630(puVar7,uVar9);
  }
  puVar4 = Method_OVRGLTFAccessor_ReadAsInt__;
  puVar1 = PTR_DAT_07289ad0;
                    /* try { // try from 06e36678 to 06f36683 has its CatchHandler @ 06e36738 */
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 06e36684 to 06f3672b has its CatchHandler @ 06e36570 */
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07289ad0);
    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar4,0);
    puVar4 = PTR_DAT_07289ad8;
    if (lVar8 != 0) {
      FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_07289ad8);
      puVar2 = Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
        FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
        if (lVar8 != 0) {
          FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
          puVar2 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                    /* try { // try from 06e3672c to 06f3672f has its CatchHandler @ 06e36740 */
                    /* try { // try from 06e36730 to 06f36757 has its CatchHandler @ 06e36570 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e36678 with catch @ 06e36738
                        */
            FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e36660 with catch @ 06e3673c
                        */
            if (lVar8 != 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06e36640 with catch @ 06e36740
                       catch(type#1 @ 06e40658) { ... } // from try @ 06e3672c with catch @ 06e36740
                        */
              FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
              puVar2 = Method_OVRGrabbable_Awake__;
              if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 06e36758 to 06f3675b has its CatchHandler @ 06e3676c */
                lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 06e36758 with catch @ 06e3676c */
                FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                if (lVar8 != 0) {
                  FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                  puVar2 = Method_OVRHand_OnSceneChanged__;
                  if (*(long *)(param_1 + 0x38) != 0) {
                    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
                    /* try { // try from 06e367ac to 06f367d3 has its CatchHandler @ 06e367e8 */
                    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                    if (lVar8 != 0) {
                    /* try { // try from 06e367d4 to 06f367df has its CatchHandler @ 06e36570 */
                      FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                      puVar2 = Method_OVRLocatable_ScheduleUpdateTransforms__;
                      if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 06e367e0 to 06f367e7 has its CatchHandler @ 06e367e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06e367ac with catch @ 06e367e8
                       catch(type#2 @ 00000000) { ... } // from try @ 06e367e0 with catch @ 06e367e8
                        */
                        lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x38);
                        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                        FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                        if (lVar8 != 0) {
                          FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                          puVar2 = Method_OVRFaceExpressions_get_Item__;
                          if (*(long *)(param_1 + 0x38) != 0) {
                            lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x60);
                            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                            FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                            if (lVar8 != 0) {
                              FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                              puVar2 = Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__;
                              if (*(long *)(param_1 + 0x38) != 0) {
                                lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x70);
                                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                                if (lVar8 != 0) {
                                  FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                                  puVar3 = Method_OVRGrabber_<Awake>b__23_0__;
                                  puVar2 = PTR_DAT_0727c988;
                                  if (*(long *)(param_1 + 0x38) != 0) {
                                    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
                                    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727c988);
                                    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar3,0);
                                    puVar3 = PTR_DAT_0727ccb8;
                                    if (lVar8 != 0) {
                                      FUN_04af773c(lVar8,uVar9,*(undefined8 *)PTR_DAT_0727ccb8);
                                      puVar5 = Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__;
                                      if (*(long *)(param_1 + 0x38) != 0) {
                                        lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x88);
                                        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                        FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar5,0);
                                        if (lVar8 != 0) {
                                          FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar3);
                                          puVar2 = 
                                          Method_OVRLipSyncContext_LocalTouchEventCallback__;
                                          if (*(long *)(param_1 + 0x38) != 0) {
                                            lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
                                            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                            FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                                            if (lVar8 != 0) {
                                              FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                                              puVar2 = 
                                              Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__
                                              ;
                                              if (*(long *)(param_1 + 0x38) != 0) {
                                                lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x68);
                                                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                                FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2,0);
                                                if (lVar8 != 0) {
                                                  FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4);
                                                  puVar2 = 
                                                  Method_OVRLipSyncMicInput_StartMicrophone__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar8 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x78);
                                                    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2
                                                                 ,0);
                                                    if (lVar8 != 0) {
                                                      FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4
                                                                  );
                                                      puVar2 = 
                                                  Method_OVRGLTFAnimatinonNode_CopyData<float>__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar8 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x48);
                                                    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2
                                                                 ,0);
                                                    if (lVar8 != 0) {
                                                      FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4
                                                                  );
                                                      puVar2 = 
                                                  Method_OVRLocatable_UpdateSceneAnchorTransforms__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar8 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x50);
                                                    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_04af414c(uVar9,param_1,*(undefined8 *)puVar2
                                                                 ,0);
                                                    if (lVar8 != 0) {
                                                      FUN_04af773c(lVar8,uVar9,*(undefined8 *)puVar4
                                                                  );
                                                      puVar2 = Method_OVRGLTFAccessor_ReadAsFloat__;
                                                      if (*(long *)(param_1 + 0x38) != 0) {
                                                        lVar8 = *(long *)(*(long *)(param_1 + 0x38)
                                                                         + 0x58);
                                                        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                    puVar1);
                                                        FUN_04af414c(uVar9,param_1,
                                                                     *(undefined8 *)puVar2,0);
                                                        if (lVar8 != 0) {
                                                          FUN_04af773c(lVar8,uVar9,
                                                                       *(undefined8 *)puVar4);
                                                          return;
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
  FUN_032d5ee8();
}


