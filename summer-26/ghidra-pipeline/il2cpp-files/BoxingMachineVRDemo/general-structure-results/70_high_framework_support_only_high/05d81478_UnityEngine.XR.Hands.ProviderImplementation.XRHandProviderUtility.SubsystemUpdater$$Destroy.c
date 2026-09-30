/*
FUNCTION_NAME: UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility.SubsystemUpdater$$Destroy
ENTRY_POINT: 05d81478
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


long * UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater__Destroy
                 (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 (*unaff_x19) [16];
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x29;
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long *in_stack_00000018;
  
  uStack0000000000000000 = *(undefined8 *)(unaff_x26 + 8);
  uStack0000000000000008 = param_1;
  lVar4 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,7);
  if (lVar4 == 0) {
LAB_05d81828:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) =
         *(undefined8 *)
          Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
    ;
    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) = unaff_x25;
      thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x28));
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) =
             *(undefined8 *)
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
        ;
        thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x30));
        uVar5 = (**(code **)(*unaff_x20 + 0x2d8))();
        if (3 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x38),uVar5);
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) =
                 *(undefined8 *)
                  Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
            ;
            thunk_FUN_02dd37b4();
            lVar6 = *unaff_x29;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar6 = *unaff_x29;
            }
            if (5 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
              thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x48));
              if (6 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x50) =
                     *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__;
                thunk_FUN_02dd37b4();
                uVar5 = FUN_04e8e3a4(lVar4,0);
                if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
                }
                auVar8 = FUN_05d6a8b4(uVar5,0);
                auVar8 = FUN_05d68034(uStack0000000000000008,uStack0000000000000000,auVar8._0_8_,
                                      auVar8._8_8_,0);
                *unaff_x19 = auVar8;
                thunk_FUN_02dd37b4((undefined8 *)(unaff_x26 + 8),0);
                uVar1 = (**(code **)(*unaff_x20 + 0x298))();
                if ((uVar1 & 1) == 0) {
                  uVar5 = *unaff_x21;
                  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar1 = FUN_05d81bc0(uVar5);
                  if ((uVar1 & 1) != 0) {
                    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_048956dc();
                    uVar7 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
                    FUN_05d684e8(uVar5,uVar7,0);
                    FUN_048956dc();
                    uVar5 = *(undefined8 *)*unaff_x19;
                    uVar7 = *(undefined8 *)(*unaff_x19 + 8);
                    lVar4 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,0xb);
                    if (lVar4 == 0) goto LAB_05d81828;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_067683a0;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                      if (1 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x28) = unaff_x22;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x28));
                        if (2 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x30) =
                               *(undefined8 *)Method_OVRTaskBuilder<bool>_SetStateMachine__;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x30));
                          uVar2 = (**(code **)(*unaff_x20 + 0x2d8))();
                          if (3 < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x38) = uVar2;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x38),uVar2);
                            if (4 < *(uint *)(lVar4 + 0x18)) {
                              *(undefined8 *)(lVar4 + 0x40) =
                                   *(undefined8 *)
                                    Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x40));
                              if (5 < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x48) =
                                     *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x58);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x48));
                                if (6 < *(uint *)(lVar4 + 0x18)) {
                                  *(undefined8 *)(lVar4 + 0x50) =
                                       *(undefined8 *)Method_OVRTaskBuilder<bool>_SetException__;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x50));
                                  if (7 < *(uint *)(lVar4 + 0x18)) {
                                    *(undefined8 *)(lVar4 + 0x58) = unaff_x22;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x58));
                                    if (8 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + 0x60) =
                                           *(undefined8 *)
                                            Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                      ;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x60));
                                      if (9 < *(uint *)(lVar4 + 0x18)) {
                                        *(undefined8 *)(lVar4 + 0x68) =
                                             *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x68));
                                        if (10 < *(uint *)(lVar4 + 0x18)) {
                                          *(undefined8 *)(lVar4 + 0x70) =
                                               *(undefined8 *)PTR_DAT_0677c320;
                                          thunk_FUN_02dd37b4();
                                          uVar2 = FUN_04e8e3a4(lVar4,0);
                                          if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                                            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
                                          }
                                          auVar8 = FUN_05d6a8b4(uVar2,0);
                                          auVar8 = FUN_05d68034(uVar5,uVar7,auVar8._0_8_,
                                                                auVar8._8_8_,0);
                                          *unaff_x19 = auVar8;
                                          thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
                                          return *(long **)(*(long *)(*unaff_x29 + 0xb8) + 0x70);
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
                    goto LAB_05d8182c;
                  }
                  uVar7 = *(undefined8 *)
                           Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__;
                  uVar5 = (**(code **)(*unaff_x20 + 0x168))();
                  uVar2 = *(undefined8 *)
                           Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                  ;
                  if (in_stack_00000018 == (long *)0x0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = (**(code **)(*in_stack_00000018 + 0x168))
                                      (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170)
                                      );
                  }
                  FUN_04e8e29c(uVar7,uVar5,uVar2,uVar3,0);
                  if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
                  }
                  FUN_05d7b120();
                  in_stack_00000018 = unaff_x20;
                }
                return in_stack_00000018;
              }
            }
          }
        }
      }
    }
  }
LAB_05d8182c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


