/*
FUNCTION_NAME: FUN_07eb9f70
ENTRY_POINT: 07eb9f70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_07eb9f70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((DAT_0899ac5e & 1) == 0) {
    FUN_03a8a718(
                Method_UnityEngine_Rendering_HighDefinition_AsyncTextureSynchronizer<half>_CurrentResolution__
                );
    FUN_03a8a718(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_03a8a718(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    DAT_0899ac5e = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = FUN_05fa20a8(*(long *)(param_1 + 0x28),param_2,&local_28,
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_HighDefinition_AsyncTextureSynchronizer<half>_CurrentResolution__
                        );
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07eba0b8;
      FUN_058619dc(*(long *)(param_1 + 0x20),5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                  );
      local_28 = FUN_07eb81d0(param_1,param_2);
    }
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                              );
    FUN_07eb8100(lVar4,3);
    puVar1 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x24) = 5;
      plVar5 = (long *)FUN_03a8a804(*(undefined8 *)puVar1,1);
      lVar2 = local_28;
      if (plVar5 != (long *)0x0) {
        if ((local_28 != 0) &&
           (lVar6 = thunk_FUN_03ac73c0(local_28,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar7,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = lVar2;
          thunk_FUN_03afed3c(plVar5 + 4,lVar2);
          *(long *)(lVar4 + 0x28) = (long)plVar5;
          thunk_FUN_03afed3c((long *)(lVar4 + 0x28),plVar5);
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
    }
  }
LAB_07eba0b8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


