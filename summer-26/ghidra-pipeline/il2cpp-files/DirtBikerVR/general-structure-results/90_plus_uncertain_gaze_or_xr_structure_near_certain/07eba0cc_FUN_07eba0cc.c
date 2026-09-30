/*
FUNCTION_NAME: FUN_07eba0cc
ENTRY_POINT: 07eba0cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_2
*/


long FUN_07eba0cc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_30;
  long local_28;
  undefined *puVar7;
  
  if ((DAT_0899ac5f & 1) == 0) {
    FUN_03a8a718(
                Method_UnityEngine_Rendering_HighDefinition_AsyncTextureSynchronizer<half>_CurrentResolution__
                );
    FUN_03a8a718(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    FUN_03a8a718(Unity_Services_Authentication_WebRequest_<>c__DisplayClass16_0_TypeInfo);
    DAT_0899ac5f = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) goto LAB_07eba2b4;
  FUN_07eb8fb0(local_48,param_2);
  if (local_48[0] == 8) {
    FUN_07eb9c38(local_48,param_2);
    if (local_48[0] == 1) {
      if (*(int *)(*(long *)Unity_Services_Authentication_WebRequest_<>c__DisplayClass16_0_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07ea8b10(local_40,&local_30,0);
      if ((uVar2 & 1) == 0) {
        uVar8 = thunk_FUN_03af1434(
                                  Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                                  );
        uVar6 = thunk_FUN_03af1434(
                                  Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__
                                  );
        uVar8 = FUN_065cddf0(uVar8,local_40,uVar6,0);
        goto LAB_07eba370;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_07eba2b4:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar2 = FUN_05fa20a8(*(long *)(param_1 + 0x28),local_30,&local_28,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_HighDefinition_AsyncTextureSynchronizer<half>_CurrentResolution__
                          );
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_07eba2b4;
        FUN_058619dc(*(long *)(param_1 + 0x20),5,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                    );
        local_28 = FUN_07eb81d0(param_1,local_30);
      }
      FUN_07eb9c38(local_48,param_2);
      if (local_48[0] != 8) goto LAB_07eba2b8;
      FUN_07eb9c38(local_48,param_2);
      if (local_48[0] == 0x13) {
        lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                  );
        FUN_07eb8100(lVar3,3);
        puVar7 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x24) = 5;
          plVar4 = (long *)FUN_03a8a804(*(undefined8 *)puVar7,1);
          lVar1 = local_28;
          if (plVar4 != (long *)0x0) {
            if ((local_28 != 0) &&
               (lVar5 = thunk_FUN_03ac73c0(local_28,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar8 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
              FUN_03a8a884(uVar8,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar1;
              thunk_FUN_03afed3c(plVar4 + 4,lVar1);
              *(long *)(lVar3 + 0x28) = (long)plVar4;
              thunk_FUN_03afed3c((long *)(lVar3 + 0x28),plVar4);
              return lVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
        }
        goto LAB_07eba2b4;
      }
      uVar8 = thunk_FUN_03af1434(
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                );
      uVar8 = thunk_FUN_03ac70f4(uVar8,local_48);
      puVar7 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__;
    }
    else {
      uVar8 = thunk_FUN_03af1434(
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                );
      uVar8 = thunk_FUN_03ac70f4(uVar8,local_48);
      puVar7 = Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__;
    }
  }
  else {
LAB_07eba2b8:
    uVar8 = thunk_FUN_03af1434(
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                              );
    uVar8 = thunk_FUN_03ac70f4(uVar8,local_48);
    puVar7 = 
    Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
    ;
  }
  uVar6 = thunk_FUN_03af1434(puVar7);
  uVar8 = FUN_065c412c(uVar6,uVar8,0);
LAB_07eba370:
  thunk_FUN_03af1434(PTR_DAT_08488858);
  uVar6 = thunk_FUN_03ac74bc();
  FUN_06788354(uVar6,uVar8,0);
  uVar8 = thunk_FUN_03af1434(
                            Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar6,uVar8);
}


