/*
FUNCTION_NAME: FUN_07eb9844
ENTRY_POINT: 07eb9844
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


long FUN_07eb9844(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  int local_60 [2];
  long local_58;
  undefined4 local_40;
  undefined8 local_38;
  undefined *puVar7;
  
  if ((DAT_0899ac5d & 1) == 0) {
    FUN_03a8a718(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_03a8a718(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_03a8a718(Unity_Services_Authentication_WebRequest_<>c__DisplayClass16_0_TypeInfo);
    FUN_03a8a718(PTR_DAT_08489150);
    FUN_03a8a718(PTR_DAT_08486bc0);
    DAT_0899ac5d = 1;
  }
  local_38 = 0;
  local_40 = 0;
  if (param_2 == 0) {
LAB_07eb9a78:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07eb8fb0(local_60,param_2);
  if (local_60[0] == 0x12) {
    FUN_07eb9c38(local_60,param_2);
    if (local_60[0] == 8) {
      lVar2 = FUN_07eba0cc(param_1,param_2);
    }
    else {
      if (local_60[0] != 1) {
        uVar5 = thunk_FUN_03af1434(
                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                  );
        uVar5 = thunk_FUN_03ac70f4(uVar5,local_60);
        puVar7 = 
        Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
        ;
        goto LAB_07eb9af0;
      }
      if (*(int *)(*(long *)Unity_Services_Authentication_WebRequest_<>c__DisplayClass16_0_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar1 = FUN_07ea8ba0(local_58,&local_38,0);
      puVar7 = PTR_DAT_08486760;
      if ((uVar1 & 1) == 0) {
        uVar5 = *(undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_0675ff58(uVar5,0);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar6 = FUN_065cfce4(local_58,*(undefined8 *)PTR_DAT_08489150,
                             *(undefined8 *)PTR_DAT_08486bc0,0);
        if (*(int *)(*(long *)(puVar7 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar3 = (long *)FUN_067846ec(uVar5,uVar6,1,0);
        if (plVar3 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          if (*(long *)(*plVar3 + 0x40) !=
              *(long *)(*(long *)
                         Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__ +
                       0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40();
          }
          puVar4 = (undefined4 *)thunk_FUN_03ac7604();
          uVar8 = *puVar4;
        }
        lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                  );
        FUN_07eb8100(lVar2,1);
        if (lVar2 == 0) goto LAB_07eb9a78;
        *(undefined4 *)(lVar2 + 0x20) = uVar8;
      }
      else {
        lVar2 = FUN_07eb9f70(param_1,local_38);
      }
      FUN_07eb9c38(local_60,param_2);
    }
    FUN_07eb8fb0(local_60,param_2);
    if (local_60[0] == 0x13) {
      FUN_07eb9c38(local_60,param_2);
      return lVar2;
    }
    uVar5 = thunk_FUN_03af1434(
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                              );
    uVar5 = thunk_FUN_03ac70f4(uVar5,local_60);
    puVar7 = 
    Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__;
  }
  else {
    uVar5 = thunk_FUN_03af1434(
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                              );
    uVar5 = thunk_FUN_03ac70f4(uVar5,local_60);
    puVar7 = Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__;
  }
LAB_07eb9af0:
  uVar6 = thunk_FUN_03af1434(puVar7);
  uVar5 = FUN_065c412c(uVar6,uVar5,0);
  thunk_FUN_03af1434(PTR_DAT_08488858);
  uVar6 = thunk_FUN_03ac74bc();
  FUN_06788354(uVar6,uVar5,0);
  uVar5 = thunk_FUN_03af1434(
                            Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar6,uVar5);
}


