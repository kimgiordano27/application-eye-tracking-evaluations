/*
FUNCTION_NAME: FUN_05a17f54
ENTRY_POINT: 05a17f54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_11;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


uint FUN_05a17f54(undefined8 param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_48;
  long local_40;
  long local_38;
  undefined *puVar9;
  
  if ((DAT_06bc205c & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205c = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  uVar4 = FUN_04f6ebd0(param_1,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a17de0(param_1,&local_38,&local_40);
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_04f73954(local_40,0);
  }
  local_40 = lVar5;
  if (local_38 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_04f73954(local_38,0);
  }
  local_48 = local_48 & 0xffffffff;
  local_38 = lVar6;
  uVar4 = FUN_04f6ebb4(lVar5,0);
  if ((uVar4 & 1) == 0) {
    if (lVar5 == 0) goto LAB_05a18188;
    uVar2 = FUN_04f69818(lVar5,0,0);
    bVar1 = 0x58 < uVar2;
    if (0x58 < uVar2) {
      if (uVar2 == 100) {
LAB_05a180b4:
        uVar14 = 1;
      }
      else if (uVar2 == 0x67) {
LAB_05a180ac:
        uVar14 = 0;
      }
      else {
        if (uVar2 != 0x78) goto LAB_05a18090;
UnityEngine_InputSystem_InputManager__UpdateState:
        uVar14 = 3;
      }
      if (*(int *)(lVar5 + 0x10) < 2) {
        uVar13 = 0;
      }
      else {
        uVar8 = FUN_04f73508(lVar5,1,0);
        uVar4 = FUN_050f1fd8(uVar8,&local_48,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067c9070);
          uVar7 = FUN_02f0880c(uVar7,5);
          FUN_02a7da48();
          uVar10 = thunk_FUN_02f6ef30(
                                     Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Create__
                                     );
          FUN_02a81ad4(uVar7,0,uVar10);
          FUN_02a81ad4(uVar7,1,lVar5);
          uVar10 = thunk_FUN_02f6ef30(
                                     Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetException__
                                     );
          FUN_02a81ad4(uVar7,2,uVar10);
          FUN_02a81ad4(uVar7,3,uVar8);
          uVar8 = thunk_FUN_02f6ef30(PTR_DAT_067cd9c0);
          FUN_02a81ad4(uVar7,4,uVar8);
          uVar8 = FUN_04f6fd20(uVar7,0);
          goto LAB_05a181e8;
        }
        uVar13 = ((uint)local_48 & 0xff) << 0x10;
      }
      goto LAB_05a180f8;
    }
    if (uVar2 == 0x44) goto LAB_05a180b4;
    if (uVar2 == 0x47) goto LAB_05a180ac;
    if (uVar2 == 0x58) goto UnityEngine_InputSystem_InputManager__UpdateState;
LAB_05a18090:
    uVar7 = thunk_FUN_02f6ef30(
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__
                              );
    puVar9 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
    lVar6 = lVar5;
LAB_05a181d0:
    uVar8 = thunk_FUN_02f6ef30(puVar9);
  }
  else {
    uVar13 = 0;
    bVar1 = false;
    uVar14 = 0;
LAB_05a180f8:
    uVar4 = FUN_04f6ebb4(lVar6,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = 0;
LAB_05a1815c:
      uVar12 = 0x1000000;
      if (!bVar1) {
        uVar12 = 0;
      }
      return uVar12 | uVar13 | uVar14 | uVar11;
    }
    if (lVar6 == 0) {
LAB_05a18188:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    sVar3 = FUN_04f69818(lVar6,0,0);
    if (sVar3 == 0x2c) {
      lVar6 = FUN_04f73508(lVar6,1,0);
      uVar4 = FUN_050d335c(lVar6,(long)&local_48 + 4,0);
      if ((uVar4 & 1) != 0) {
        uVar11 = (local_48._4_4_ & 0xff) << 8;
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
  uVar8 = FUN_04f6f6b4(uVar7,lVar6,uVar8,0);
LAB_05a181e8:
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar7 = thunk_FUN_02f45270();
  FUN_05055664(uVar7,uVar8,0);
  uVar8 = thunk_FUN_02f6ef30(
                            Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Start<OVRSceneManager_<FilterByActiveRoom>d__46>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar7,uVar8);
}


