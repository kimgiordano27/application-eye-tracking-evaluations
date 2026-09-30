/*
FUNCTION_NAME: FUN_05ffbd6c
ENTRY_POINT: 05ffbd6c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05ffbd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_06dc49b4 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Ngo1AdapterInitializer_<>c__DisplayClass2_0_<<InitializeAdapterAsync>b__0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRAnchor_Tracker_<Dispose>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionManager_<>c__DisplayClass23_0_<<CreateSessionHandler>b__1>d>__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_SetException__);
    FUN_02d965b8(Method_AttachablesAuthoringSceneManager_<Awake>b__28_0__);
    FUN_02d965b8(Method_AttachablesAuthoringSceneManager_<Awake>b__28_1__);
    FUN_02d965b8(Method_AttachablesAuthoringSceneManager_<Awake>b__28_10__);
    FUN_02d965b8(Method_AttachablesAuthoringSceneManager_<Awake>b__28_11__);
    DAT_06dc49b4 = 1;
  }
  uVar1 = FUN_05ffbff4(param_1);
  if (uVar1 < 0x899e1a14) {
    if (0x4ab71b63 < uVar1) {
      if (uVar1 == 0x899e1a13) {
        uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            Method_AttachablesAuthoringSceneManager_<Awake>b__28_11__
                                   ,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = 0x277c;
          goto LAB_05ffbfdc;
        }
      }
      else if ((uVar1 == 0x5ec77d25) &&
              (uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_SetException__
                                          ,0), (uVar2 & 1) != 0)) {
        uVar3 = 0x277a;
        goto LAB_05ffbfe4;
      }
      goto LAB_05ffbfd8;
    }
    if (uVar1 == 0xd07aeba) {
      uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_AttachablesAuthoringSceneManager_<Awake>b__28_0__,0
                                );
      if ((uVar2 & 1) == 0) goto LAB_05ffbfd8;
      uVar3 = 0x2779;
    }
    else {
      if ((uVar1 != 0x4ab71b63) ||
         (uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                              Method_AttachablesAuthoringSceneManager_<Awake>b__28_10__
                                     ,0), (uVar2 & 1) == 0)) goto LAB_05ffbfd8;
      uVar3 = 0x2778;
    }
  }
  else {
    if (uVar1 < 0xbdc94f27) {
      if (uVar1 == 0xa02e23b3) {
        uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Ngo1AdapterInitializer_<>c__DisplayClass2_0_<<InitializeAdapterAsync>b__0>d>__
                                   ,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = 0x277e;
          goto LAB_05ffbfdc;
        }
      }
      else if ((uVar1 == 0xbdc94f26) &&
              (uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRAnchor_Tracker_<Dispose>d__10>__
                                          ,0), (uVar2 & 1) != 0)) {
        uVar3 = 0x2777;
        goto LAB_05ffbfe4;
      }
    }
    else if (uVar1 == 0xc3448bae) {
      uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_AttachablesAuthoringSceneManager_<Awake>b__28_1__,0
                                );
      if ((uVar2 & 1) != 0) {
        uVar3 = 0x277d;
        goto LAB_05ffbfe4;
      }
    }
    else if ((uVar1 == 0xecd4339e) &&
            (uVar2 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionManager_<>c__DisplayClass23_0_<<CreateSessionHandler>b__1>d>__
                                        ,0), (uVar2 & 1) != 0)) {
      uVar3 = 0x2775;
      goto LAB_05ffbfdc;
    }
LAB_05ffbfd8:
    uVar3 = 0x2774;
  }
LAB_05ffbfdc:
  param_3 = 0;
  param_2 = param_1;
LAB_05ffbfe4:
  FUN_05ffbcf8(uVar3,param_2,param_3);
  return;
}


