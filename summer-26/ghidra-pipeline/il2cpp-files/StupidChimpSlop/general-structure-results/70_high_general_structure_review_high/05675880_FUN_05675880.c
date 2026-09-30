/*
FUNCTION_NAME: FUN_05675880
ENTRY_POINT: 05675880
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05675880(void)

{
  undefined *puVar1;
  long lVar2;
  
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05675818 with catch @ 05675880
                        */
  puVar1 = PTR_DAT_06646310;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05675810 with catch @ 05675884
                        */
  if ((DAT_06a5482d & 1) == 0) {
                    /* try { // try from 0567589c to 057758b3 has its CatchHandler @ 05675950 */
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<float>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_Max_<MaxAsync>d__12>__
                );
                    /* try { // try from 056758b4 to 0577593f has its CatchHandler @ 056755ec */
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<string>_OnInvokeAsync__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>__ctor__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_OnInvokeAsync__);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_StreamReader_<ReadAsyncInternal>d__66>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_StreamReader_<ReadAsyncInternal>d__66>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                );
    FUN_02d4dc40(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                );
    FUN_02d4dc40(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                );
                    /* try { // try from 05675940 to 0577594f has its CatchHandler @ 05675950 */
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                );
    FUN_02d4dc40(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_02d4dc40(Method_Photon_Voice_AudioOutDelayControl<float>__ctor__);
    FUN_02d4dc40(Method_Photon_Voice_AudioOutDelayControl<float>_Stop__);
    FUN_02d4dc40(PTR_DAT_06657338);
    FUN_02d4dc40(Method_Photon_Voice_AudioSyncBuffer<float>__ctor__);
    FUN_02d4dc40(Method_Photon_Voice_AudioSyncBuffer<float>_Read__);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object[]>_CreateFromCanceled__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AssetBundle>_CreateFromCanceled__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_CreateFromCanceled__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_CreateFromCanceled__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_CreateFromCanceled__
                );
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_UniTask_Awaiter<Nullable<Decimal>>_GetResult__);
    DAT_06a5482d = 1;
  }
  lVar2 = FUN_02d4dd2c(*(undefined8 *)puVar1,0x18);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_06657338;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)Method_Photon_Voice_AudioSyncBuffer<float>_Read__;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) =
                 *(undefined8 *)
                  Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AssetBundle>_CreateFromCanceled__
            ;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<string>_OnInvokeAsync__;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                ;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_StreamReader_<ReadAsyncInternal>d__66>__
                  ;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x50));
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                    ;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x58));
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) =
                           *(undefined8 *)Method_Photon_Voice_AudioOutDelayControl<float>_Stop__;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x60));
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_StreamReader_<ReadAsyncInternal>d__66>__
                        ;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x68));
                        if (10 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x70) =
                               *(undefined8 *)Method_Photon_Voice_AudioSyncBuffer<float>__ctor__;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x70));
                          if (0xb < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x78) =
                                 *(undefined8 *)
                                  Method_Cysharp_Threading_Tasks_UniTask_Awaiter<Nullable<Decimal>>_GetResult__
                            ;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x78));
                            if (0xc < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x80) =
                                   *(undefined8 *)
                                    Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_CreateFromCanceled__
                              ;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x80));
                              if (0xd < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x88) =
                                     *(undefined8 *)
                                      Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>__ctor__
                                ;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x88));
                                if (0xe < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x90) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                  ;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x90));
                                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar2 + 0x98) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                    ;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x98));
                                    if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa0) =
                                           *(undefined8 *)
                                            Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object[]>_CreateFromCanceled__
                                      ;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa0));
                                      if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xa8) =
                                             *(undefined8 *)
                                              Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_CreateFromCanceled__
                                        ;
                                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa8));
                                        if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb0) =
                                               *(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                                          ;
                                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb0));
                                          if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xb8) =
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                                            ;
                                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb8));
                                            if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0xc0) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_CreateFromCanceled__
                                              ;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xc0));
                                              if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 200) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Photon_Voice_AudioOutDelayControl<float>__ctor__
                                                ;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 200));
                                                if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd0) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_OnInvokeAsync__
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xd0));
                                                  puVar1 = 
                                                  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<float>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_Max_<MaxAsync>d__12>__
                                                  ;
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                                  thunk_FUN_02dc1ef0(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),lVar2
                                                                    );
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
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


