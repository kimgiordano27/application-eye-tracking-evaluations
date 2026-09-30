/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandTrackingEvents$$.ctor
ENTRY_POINT: 05d80880
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_20
*/


long * UnityEngine_XR_Hands_XRHandTrackingEvents___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 (*unaff_x19) [16];
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar17 [16];
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 800));
  FUN_02d6084c(
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
              );
  FUN_02d6084c(
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
              );
  FUN_02d6084c(
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
              );
  FUN_02d6084c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__);
  FUN_02d6084c(PTR_DAT_0676ba80);
  FUN_02d6084c(PTR_DAT_067693b8);
  FUN_02d6084c(
              Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
              );
  *(undefined1 *)(unaff_x22 + 0xce4) = 1;
  puVar3 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (*unaff_x21 == 0) goto LAB_05d81828;
  lVar5 = FUN_05d69ae4(*unaff_x21,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar3);
  }
  puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__;
  if ((lVar5 == 0) ||
     (lVar6 = FUN_04895670(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                           *(undefined8 *)
                            Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__),
     lVar6 == 0)) goto LAB_05d81828;
  uVar7 = FUN_05d68ac8(lVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar3;
    }
    plVar14 = (long *)*unaff_x21;
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    uVar11 = *(undefined8 *)
              Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
    ;
    if (plVar14 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    }
    uVar10 = *(undefined8 *)PTR_DAT_06764c80;
LAB_05d80f5c:
    FUN_04e8e29c(uVar8,uVar11,uVar15,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
    }
    FUN_05d7b120();
  }
  else {
    uVar8 = FUN_05d68d60(lVar6,0);
    puVar1 = PTR_DAT_06768de0;
    if (*(int *)(*(long *)PTR_DAT_06768de0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06768de0);
    }
    uVar7 = FUN_05d4af80(uVar8,&stack0x00000018,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = *unaff_x21;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_05d81bc0(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)*unaff_x19;
        uVar15 = *(undefined8 *)(*unaff_x19 + 8);
        uVar8 = FUN_04e8db00(*(undefined8 *)Method_OVRTaskBuilder<bool>_SetResult__,uVar8,
                             *(undefined8 *)PTR_DAT_06763640,0);
        if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
        }
        auVar17 = FUN_05d6a8b4(uVar8,0);
        auVar17 = FUN_05d68034(uVar11,uVar15,auVar17._0_8_,auVar17._8_8_,0);
        *unaff_x19 = auVar17;
        thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
        return unaff_x20;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar14 = (long *)*unaff_x21;
      if (plVar14 == (long *)0x0) goto LAB_05d81828;
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      puVar1 = PTR_DAT_0676ba80;
      uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
      FUN_05d684e8(uVar15,uVar11,0);
      puVar2 = PTR_DAT_067693c0;
      FUN_048956dc(lVar5,uVar10,uVar15,*(undefined8 *)PTR_DAT_067693c0);
      FUN_048956dc(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)puVar2);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_05d684e8(uVar11,uVar10,0);
      FUN_048956dc(lVar5,uVar15,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*unaff_x19;
      uVar15 = *(undefined8 *)(*unaff_x19 + 8);
      lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,7);
      if (lVar5 == 0) goto LAB_05d81828;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
      ;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30));
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
      ;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x50) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
      ;
      thunk_FUN_02dd37b4();
      uVar8 = FUN_04e8e3a4(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
      }
      auVar17 = FUN_05d6a8b4(uVar8,0);
      auVar17 = FUN_05d68034(uVar11,uVar15,auVar17._0_8_,auVar17._8_8_,0);
      *unaff_x19 = auVar17;
    }
    else {
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar9 = *(long *)puVar3;
      }
      uVar7 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68),0);
      if ((uVar7 & 1) == 0) {
LAB_05d810c0:
        if (unaff_x20 == (long *)0x0) goto LAB_05d81828;
      }
      else {
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar3;
        }
        puVar4 = Method_System_Nullable<MetadataPropertyHandling>__ctor__;
        uVar7 = FUN_048958e4(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)Method_System_Nullable<MetadataPropertyHandling>__ctor__
                            );
        if ((uVar7 & 1) == 0) {
LAB_05d81020:
          uVar11 = *(undefined8 *)*unaff_x19;
          uVar15 = *(undefined8 *)(*unaff_x19 + 8);
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *(long *)puVar3;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
          uVar12 = *(undefined8 *)
                    Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
          ;
          uVar16 = *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__;
LAB_05d81060:
          uVar10 = FUN_04e8db00(uVar12,uVar10,uVar16,0);
          if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
          }
          auVar17 = FUN_05d6a8b4(uVar10,0);
          auVar17 = FUN_05d68034(uVar11,uVar15,auVar17._0_8_,auVar17._8_8_,0);
          *unaff_x19 = auVar17;
          thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
          goto LAB_05d810c0;
        }
        lVar9 = *unaff_x21;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_05d81bc0(lVar9);
        if ((uVar7 & 1) == 0) goto LAB_05d81020;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = FUN_04895670(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),
                             *(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_05d81828;
        uVar10 = FUN_05d68d60(lVar9,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar1);
        }
        uVar7 = FUN_05d4af80(uVar10,&stack0x00000010,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = *(undefined8 *)*unaff_x19;
          uVar15 = *(undefined8 *)(*unaff_x19 + 8);
          uVar12 = *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
          uVar16 = *(undefined8 *)
                    Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
          goto LAB_05d81060;
        }
        if (unaff_x20 == (long *)0x0) goto LAB_05d81828;
        uVar7 = (**(code **)(*unaff_x20 + 0x298))();
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar6 = *(long *)puVar3;
          }
          uVar7 = FUN_048958e4(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                               *(undefined8 *)puVar4);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar6);
            lVar6 = *(long *)puVar3;
          }
          if ((uVar7 & 1) == 0) {
            uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            uVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
            FUN_05d684e8(uVar8,uVar10,0);
            FUN_048956dc(lVar5,uVar11,uVar8,*(undefined8 *)PTR_DAT_067693c0);
            uVar8 = *(undefined8 *)*unaff_x19;
            uVar11 = *(undefined8 *)(*unaff_x19 + 8);
            lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) =
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                ;
                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar10;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),uVar10);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x30) =
                         *(undefined8 *)Method_OVRTaskBuilder<bool>_get_Task__;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30));
                    if (3 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x38) =
                           *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38));
                      if (4 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x40) =
                             *(undefined8 *)Method_OVRTaskBuilder<bool>_Create__;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40));
                        if (5 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x48) = uVar10;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48),uVar10);
                          if (6 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x50) =
                                 *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__;
                            thunk_FUN_02dd37b4();
                            plVar14 = (long *)*unaff_x21;
                            if (plVar14 == (long *)0x0) {
                              uVar15 = 0;
                            }
                            else {
                              uVar15 = (**(code **)(*plVar14 + 0x168))
                                                 (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                            }
                            if (7 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x58) = uVar15;
                              thunk_FUN_02dd37b4();
LAB_05d817c4:
                              uVar15 = FUN_04e8e3a4(lVar5,0);
                              if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
                              }
                              auVar17 = FUN_05d6a8b4(uVar15,0);
                              auVar17 = FUN_05d68034(uVar8,uVar11,auVar17._0_8_,auVar17._8_8_,0);
                              *unaff_x19 = auVar17;
                              thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
                              return in_stack_00000010;
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
          }
          else {
            uVar8 = FUN_04895670(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                                 *(undefined8 *)puVar2);
            lVar5 = FUN_04895670(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar2);
            if (lVar5 != 0) {
              uVar11 = FUN_05d68d60(lVar5,0);
              lVar5 = FUN_05d79aec(uVar11,0);
              *unaff_x21 = lVar5;
              thunk_FUN_02dd37b4();
              if ((*unaff_x21 != 0) && (lVar5 = FUN_05d69ae4(*unaff_x21,0), lVar5 != 0)) {
                FUN_048956dc(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),uVar8,
                             *(undefined8 *)PTR_DAT_067693c0);
                uVar8 = *(undefined8 *)*unaff_x19;
                uVar11 = *(undefined8 *)(*unaff_x19 + 8);
                lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,7);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) =
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                    ;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar10;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),uVar10);
                      if (2 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x30) =
                             *(undefined8 *)Method_OVRTaskBuilder<bool>_get_Task__;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30));
                        if (3 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x38) =
                               *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38));
                          if (4 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x40) =
                                 *(undefined8 *)Method_OVRTaskBuilder<bool>_Create__;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40));
                            if (5 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x48) = uVar10;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48),uVar10);
                              if (6 < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_067679f0;
                                thunk_FUN_02dd37b4();
                                goto LAB_05d817c4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_05d8182c;
                }
              }
            }
          }
          goto LAB_05d81828;
        }
        uVar11 = *(undefined8 *)*unaff_x19;
        uVar15 = *(undefined8 *)(*unaff_x19 + 8);
        lVar9 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,7);
        if (lVar9 == 0) goto LAB_05d81828;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x20) =
             *(undefined8 *)
              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
        ;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x28),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
        ;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x30));
        uVar10 = (**(code **)(*unaff_x20 + 0x2d8))();
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x38) = uVar10;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x38),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)
              Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
        ;
        thunk_FUN_02dd37b4();
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar3;
        }
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x58);
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x48));
        if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_05d8182c;
        *(undefined8 *)(lVar9 + 0x50) =
             *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__;
        thunk_FUN_02dd37b4();
        uVar10 = FUN_04e8e3a4(lVar9,0);
        if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
        }
        auVar17 = FUN_05d6a8b4(uVar10,0);
        auVar17 = FUN_05d68034(uVar11,uVar15,auVar17._0_8_,auVar17._8_8_,0);
        *unaff_x19 = auVar17;
        thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
      }
      uVar7 = (**(code **)(*unaff_x20 + 0x298))();
      if ((uVar7 & 1) != 0) {
        return in_stack_00000018;
      }
      lVar9 = *unaff_x21;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_05d81bc0(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__;
        uVar11 = (**(code **)(*unaff_x20 + 0x168))();
        uVar15 = *(undefined8 *)
                  Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
        ;
        if (in_stack_00000018 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*in_stack_00000018 + 0x168))
                             (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
        }
        goto LAB_05d80f5c;
      }
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar9 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_067693c0;
      FUN_048956dc(lVar5,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48),lVar6,
                   *(undefined8 *)PTR_DAT_067693c0);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
      FUN_05d684e8(uVar11,uVar10,0);
      FUN_048956dc(lVar5,uVar15,uVar11,*(undefined8 *)puVar2);
      uVar11 = *(undefined8 *)*unaff_x19;
      uVar15 = *(undefined8 *)(*unaff_x19 + 8);
      lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,0xb);
      if (lVar5 == 0) {
LAB_05d81828:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05d8182c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_067683a0;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)Method_OVRTaskBuilder<bool>_SetStateMachine__;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30));
      uVar10 = (**(code **)(*unaff_x20 + 0x2d8))();
      if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x38) = uVar10;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38),uVar10);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40));
      if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48));
      if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)Method_OVRTaskBuilder<bool>_SetException__;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x50));
      if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x58) = uVar8;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x58),uVar8);
      if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x60) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
      ;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x60));
      if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x68));
      if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_05d8182c;
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_0677c320;
      thunk_FUN_02dd37b4();
      uVar8 = FUN_04e8e3a4(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
      }
      auVar17 = FUN_05d6a8b4(uVar8,0);
      auVar17 = FUN_05d68034(uVar11,uVar15,auVar17._0_8_,auVar17._8_8_,0);
      *unaff_x19 = auVar17;
    }
    thunk_FUN_02dd37b4(*unaff_x19 + 8,0);
    unaff_x20 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
  }
  return unaff_x20;
}


