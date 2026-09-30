/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$InvokeAfterUpdateCallback
ENTRY_POINT: 05a17fd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint UnityEngine_InputSystem_InputManager__InvokeAfterUpdateCallback(undefined8 param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_stack_00000008;
  uint uStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar9;
  
  lVar4 = FUN_04f73954(param_1,0);
  in_stack_00000010 = lVar4;
  if (in_stack_00000018 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_04f73954(in_stack_00000018,0);
  }
  uStack000000000000000c = 0;
  in_stack_00000018 = lVar5;
  uVar6 = FUN_04f6ebb4(lVar4,0);
  if ((uVar6 & 1) == 0) {
    if (lVar4 == 0) goto LAB_05a18188;
    uVar2 = FUN_04f69818(lVar4,0,0);
    bVar1 = 0x58 < uVar2;
    if (uVar2 < 0x59) {
      if (uVar2 == 0x44) goto LAB_05a180b4;
      if (uVar2 == 0x47) goto LAB_05a180ac;
      if (uVar2 != 0x58) goto LAB_05a18090;
UnityEngine_InputSystem_InputManager__UpdateState:
      uVar14 = 3;
LAB_05a180b8:
      if (*(int *)(lVar4 + 0x10) < 2) {
        uVar13 = 0;
      }
      else {
        uVar7 = FUN_04f73508(lVar4,1,0);
        uVar6 = FUN_050f1fd8(uVar7,&stack0x00000008,0);
        if ((uVar6 & 1) == 0) {
          uVar8 = thunk_FUN_02f6ef30(PTR_DAT_067c9070);
          uVar8 = FUN_02f0880c(uVar8,5);
          FUN_02a7da48();
          uVar10 = thunk_FUN_02f6ef30(
                                     Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Create__
                                     );
          FUN_02a81ad4(uVar8,0,uVar10);
          FUN_02a81ad4(uVar8,1,lVar4);
          uVar10 = thunk_FUN_02f6ef30(
                                     Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetException__
                                     );
          FUN_02a81ad4(uVar8,2,uVar10);
          FUN_02a81ad4(uVar8,3,uVar7);
          uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067cd9c0);
          FUN_02a81ad4(uVar8,4,uVar7);
          uVar7 = FUN_04f6fd20(uVar8,0);
          goto LAB_05a181e8;
        }
        uVar13 = (in_stack_00000008 & 0xff) << 0x10;
      }
      goto LAB_05a180f8;
    }
    if (uVar2 == 100) {
LAB_05a180b4:
      uVar14 = 1;
      goto LAB_05a180b8;
    }
    if (uVar2 == 0x67) {
LAB_05a180ac:
      uVar14 = 0;
      goto LAB_05a180b8;
    }
    if (uVar2 == 0x78) goto UnityEngine_InputSystem_InputManager__UpdateState;
LAB_05a18090:
    uVar7 = thunk_FUN_02f6ef30(
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__
                              );
    puVar9 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
    lVar5 = lVar4;
LAB_05a181d0:
    uVar8 = thunk_FUN_02f6ef30(puVar9);
  }
  else {
    uVar13 = 0;
    bVar1 = false;
    uVar14 = 0;
LAB_05a180f8:
    uVar6 = FUN_04f6ebb4(lVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar11 = 0;
LAB_05a1815c:
      uVar12 = 0x1000000;
      if (!bVar1) {
        uVar12 = 0;
      }
      return uVar12 | uVar13 | uVar14 | uVar11;
    }
    if (lVar5 == 0) {
LAB_05a18188:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    sVar3 = FUN_04f69818(lVar5,0,0);
    if (sVar3 == 0x2c) {
      lVar5 = FUN_04f73508(lVar5,1,0);
      uVar6 = FUN_050d335c(lVar5,&stack0x0000000c,0);
      if ((uVar6 & 1) != 0) {
        uVar11 = (uStack000000000000000c & 0xff) << 8;
        goto LAB_05a1815c;
      }
      uVar7 = thunk_FUN_02f6ef30(
                                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                                );
      puVar9 = 
      Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
      ;
      goto LAB_05a181d0;
    }
    uVar7 = thunk_FUN_02f6ef30(
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetStateMachine__
                              );
    uVar8 = thunk_FUN_02f6ef30(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_get_Task__)
    ;
  }
  uVar7 = FUN_04f6f6b4(uVar7,lVar5,uVar8,0);
LAB_05a181e8:
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar8 = thunk_FUN_02f45270();
  FUN_05055664(uVar8,uVar7,0);
  uVar7 = thunk_FUN_02f6ef30(
                            Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Start<OVRSceneManager_<FilterByActiveRoom>d__46>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar8,uVar7);
}


