/*
FUNCTION_NAME: FUN_07eb91dc
ENTRY_POINT: 07eb91dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_07eb91dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  int local_48 [6];
  undefined *puVar6;
  
  if ((DAT_0899ac5c & 1) == 0) {
    FUN_03a8a718(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    DAT_0899ac5c = 1;
  }
  if (param_2 != 0) {
    FUN_07eb8fb0(local_48,param_2);
    if (local_48[0] != 0xe) {
      uVar7 = thunk_FUN_03af1434(
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                );
      uVar7 = thunk_FUN_03ac70f4(uVar7,local_48);
      puVar6 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
LAB_07eb93a8:
      uVar5 = thunk_FUN_03af1434(puVar6);
      uVar7 = FUN_065c412c(uVar5,uVar7,0);
      thunk_FUN_03af1434(PTR_DAT_08488858);
      uVar5 = thunk_FUN_03ac74bc();
      FUN_06788354(uVar5,uVar7,0);
      uVar7 = thunk_FUN_03af1434(
                                Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar7);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_058619dc(*(long *)(param_1 + 0x20),5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                  );
      FUN_07eb9c38(local_48,param_2);
      FUN_07eb9f30(param_2);
      lVar1 = FUN_07eb8d4c(param_1,param_2);
      FUN_07eb8fb0(local_48,param_2);
      puVar6 = Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__;
      if (local_48[0] != 0xf) {
        uVar7 = thunk_FUN_03af1434(
                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                  );
        uVar7 = thunk_FUN_03ac70f4(uVar7,local_48);
        puVar6 = Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__;
        goto LAB_07eb93a8;
      }
      FUN_07eb9c38(local_48,param_2);
      lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
      FUN_07eb8100(lVar2,3);
      puVar6 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x24) = 5;
        plVar3 = (long *)FUN_03a8a804(*(undefined8 *)puVar6,1);
        if (plVar3 != (long *)0x0) {
          if ((lVar1 != 0) &&
             (lVar4 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar7 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar7,0);
          }
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar1;
            thunk_FUN_03afed3c(plVar3 + 4,lVar1);
            *(long *)(lVar2 + 0x28) = (long)plVar3;
            thunk_FUN_03afed3c((long *)(lVar2 + 0x28),plVar3);
            FUN_07eb9d44(param_1,param_2,lVar2 + 0x14);
            return lVar2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


