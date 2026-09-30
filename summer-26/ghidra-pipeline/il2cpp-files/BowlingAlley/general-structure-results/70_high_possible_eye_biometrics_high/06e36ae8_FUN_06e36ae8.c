/*
FUNCTION_NAME: FUN_06e36ae8
ENTRY_POINT: 06e36ae8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06e36ae8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_076ead2a & 1) == 0) {
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
    thunk_FUN_032e1da0(PTR_DAT_0728a328);
    thunk_FUN_032e1da0(PTR_DAT_0728a330);
    thunk_FUN_032e1da0(PTR_DAT_0728a338);
    thunk_FUN_032e1da0(PTR_DAT_0728a0f0);
    thunk_FUN_032e1da0(PTR_DAT_0728a0f8);
    thunk_FUN_032e1da0(PTR_DAT_0728a340);
    thunk_FUN_032e1da0(PTR_DAT_0728a348);
    thunk_FUN_032e1da0(PTR_DAT_07289ad0);
    thunk_FUN_032e1da0(PTR_DAT_0727c988);
    thunk_FUN_032e1da0(PTR_DAT_0728a210);
    thunk_FUN_032e1da0(PTR_DAT_0727ccc0);
    thunk_FUN_032e1da0(PTR_DAT_07289ae0);
    thunk_FUN_032e1da0(PTR_DAT_07289c78);
    thunk_FUN_032e1da0(PTR_DAT_0728a350);
    thunk_FUN_032e1da0(PTR_DAT_07289ae8);
    thunk_FUN_032e1da0(PTR_DAT_0728a358);
    thunk_FUN_032e1da0(PTR_DAT_0728a360);
    thunk_FUN_032e1da0(PTR_DAT_0728a368);
    thunk_FUN_032e1da0(PTR_DAT_07289af0);
    thunk_FUN_032e1da0(PTR_DAT_0728a370);
    DAT_076ead2a = 1;
  }
  puVar4 = Method_OVRGLTFAccessor_ReadAsInt__;
  puVar3 = PTR_DAT_07289ad0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07289ad0);
    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar4,0);
    puVar4 = PTR_DAT_0728a210;
    if (lVar7 != 0) {
      FUN_04af7778(lVar7,uVar6,*(undefined8 *)PTR_DAT_0728a210);
      puVar1 = Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
        FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
        if (lVar7 != 0) {
          FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
          puVar1 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
            FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
            if (lVar7 != 0) {
              FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
              puVar1 = Method_OVRGrabbable_Awake__;
              if (*(long *)(param_1 + 0x38) != 0) {
                lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                if (lVar7 != 0) {
                  FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                  puVar1 = Method_OVRHand_OnSceneChanged__;
                  if (*(long *)(param_1 + 0x38) != 0) {
                    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                    if (lVar7 != 0) {
                      FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                      puVar1 = Method_OVRLocatable_ScheduleUpdateTransforms__;
                      if (*(long *)(param_1 + 0x38) != 0) {
                        lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x38);
                        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                        FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                        if (lVar7 != 0) {
                          FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                          puVar1 = Method_OVRFaceExpressions_get_Item__;
                          if (*(long *)(param_1 + 0x38) != 0) {
                            lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x60);
                            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                            FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                            if (lVar7 != 0) {
                              FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                              puVar1 = Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__;
                              if (*(long *)(param_1 + 0x38) != 0) {
                                lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x70);
                                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                                if (lVar7 != 0) {
                                  FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                                  puVar2 = Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__;
                                  puVar1 = PTR_DAT_0727c988;
                                  if (*(long *)(param_1 + 0x38) != 0) {
                                    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x88);
                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727c988);
                                    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar2,0);
                                    puVar2 = PTR_DAT_0727ccc0;
                                    if (lVar7 != 0) {
                                      FUN_04af7778(lVar7,uVar6,*(undefined8 *)PTR_DAT_0727ccc0);
                                      puVar5 = Method_OVRGrabber_<Awake>b__23_0__;
                                      if (*(long *)(param_1 + 0x38) != 0) {
                                        lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
                                        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                        FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar5,0);
                                        if (lVar7 != 0) {
                                          FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar2);
                                          puVar1 = 
                                          Method_OVRLipSyncContext_LocalTouchEventCallback__;
                                          if (*(long *)(param_1 + 0x38) != 0) {
                                            lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
                                            uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                            FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                                            if (lVar7 != 0) {
                                              FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                                              puVar1 = 
                                              Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__
                                              ;
                                              if (*(long *)(param_1 + 0x38) != 0) {
                                                lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x68);
                                                uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                                FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1,0);
                                                if (lVar7 != 0) {
                                                  FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4);
                                                  puVar1 = 
                                                  Method_OVRLipSyncMicInput_StartMicrophone__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar7 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x78);
                                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1
                                                                 ,0);
                                                    if (lVar7 != 0) {
                                                      FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4
                                                                  );
                                                      puVar1 = 
                                                  Method_OVRGLTFAnimatinonNode_CopyData<float>__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar7 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x48);
                                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1
                                                                 ,0);
                                                    if (lVar7 != 0) {
                                                      FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4
                                                                  );
                                                      puVar1 = 
                                                  Method_OVRLocatable_UpdateSceneAnchorTransforms__;
                                                  if (*(long *)(param_1 + 0x38) != 0) {
                                                    lVar7 = *(long *)(*(long *)(param_1 + 0x38) +
                                                                     0x50);
                                                    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar1
                                                                 ,0);
                                                    if (lVar7 != 0) {
                                                      FUN_04af7778(lVar7,uVar6,*(undefined8 *)puVar4
                                                                  );
                                                      puVar1 = Method_OVRGLTFAccessor_ReadAsFloat__;
                                                      if (*(long *)(param_1 + 0x38) != 0) {
                                                        lVar7 = *(long *)(*(long *)(param_1 + 0x38)
                                                                         + 0x58);
                                                        uVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_04af414c(uVar6,param_1,
                                                                     *(undefined8 *)puVar1,0);
                                                        if (lVar7 != 0) {
                                                          FUN_04af7778(lVar7,uVar6,
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


