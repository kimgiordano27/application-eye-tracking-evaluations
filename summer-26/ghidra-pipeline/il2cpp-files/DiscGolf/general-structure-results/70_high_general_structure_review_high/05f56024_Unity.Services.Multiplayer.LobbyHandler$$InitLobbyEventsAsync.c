/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$InitLobbyEventsAsync
ENTRY_POINT: 05f56024
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_LobbyHandler__InitLobbyEventsAsync(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar17;
  undefined8 *unaff_x23;
  long lVar18;
  long lVar19;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__);
  FUN_02d965b8(
              Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
              );
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<QueryResponse>>_GetAwaiter__);
  FUN_02d965b8(
              Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
              );
  FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__);
  FUN_02d965b8(PTR_DAT_06a116b0);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<LegacyBackfillTicket>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__);
  FUN_02d965b8(
              Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
              );
  FUN_02d965b8(Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__);
  FUN_02d965b8(
              Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
              );
  FUN_02d965b8(
              Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
              );
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<IPAddress[]>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<IPAddress[]>_get_Factory__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>__ctor__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>__ctor__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>_TrySetResult__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<bool>_get_Result__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<BufferOffsetSize>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Factory__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__);
  FUN_02d965b8(Method_System_Threading_Tasks_Task<ISession>_GetAwaiter__);
  *(undefined1 *)(unaff_x21 + 0x3c0) = 1;
  lVar7 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0400f984(lVar7,*unaff_x20);
  uVar8 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_05f47e5c(uVar8,0);
  if (lVar7 != 0) {
    lVar13 = *(long *)(lVar7 + 0x10);
    lVar16 = *(long *)Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        LeanTween__value(puVar9,uVar8);
      }
      else {
        FUN_040101ec(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__)
      ;
      FUN_05f455a0(lVar13,0);
      puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x28) =
             *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_ConfigureAwait__;
        LeanTween__value();
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar16 = *(long *)puVar3;
        }
        puVar5 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__;
        puVar9 = *(undefined8 **)(lVar16 + 0xb8);
        lVar17 = puVar9[3];
        if (lVar17 == 0) {
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar8 = *puVar9;
          lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
          FUN_03b6efa0(lVar17,uVar8,
                       *(undefined8 *)
                        Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__,0)
          ;
          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar10 = lVar17;
          LeanTween__value(plVar10,lVar17);
        }
        *(long *)(lVar13 + 0x40) = lVar17;
        LeanTween__value((long *)(lVar13 + 0x40),lVar17);
        lVar17 = *(long *)(lVar13 + 0x48);
        lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
        Unity_Services_Relay_RelayServiceException__set_Reason(lVar16,0);
        puVar4 = Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
        puVar5 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__;
        puVar3 = PTR_DAT_069fe458;
        if (lVar16 != 0) {
          *(undefined8 *)(lVar16 + 0x28) =
               *(undefined8 *)
                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
          LeanTween__value();
          *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar4;
          LeanTween__value();
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
          FUN_03b6efa0();
          *(undefined8 *)(lVar16 + 0x48) = uVar8;
          LeanTween__value((undefined8 *)(lVar16 + 0x48),uVar8);
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
          FUN_04bdbe64();
          *(undefined8 *)(lVar16 + 0x50) = uVar8;
          LeanTween__value((undefined8 *)(lVar16 + 0x50),uVar8);
          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                    ();
          *(undefined8 *)(lVar16 + 0x58) = uVar8;
          LeanTween__value((undefined8 *)(lVar16 + 0x58),uVar8);
          if (lVar17 != 0) {
            FUN_044193fc(lVar17,lVar16,*(undefined8 *)PTR_DAT_06a11688);
            lVar17 = *(long *)(lVar13 + 0x48);
            lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                       );
            Unity_Services_Relay_RelayServiceException__set_Reason(lVar16,0);
            puVar3 = Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Factory__;
            if (lVar16 != 0) {
              *(undefined8 *)(lVar16 + 0x28) =
                   *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_GetAwaiter__;
              LeanTween__value();
              *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar3;
              LeanTween__value();
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
              FUN_03b6efa0();
              *(undefined8 *)(lVar16 + 0x48) = uVar8;
              LeanTween__value((undefined8 *)(lVar16 + 0x48),uVar8);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
              FUN_04bdbe64();
              *(undefined8 *)(lVar16 + 0x50) = uVar8;
              LeanTween__value((undefined8 *)(lVar16 + 0x50),uVar8);
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                        );
              System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                        ();
              *(undefined8 *)(lVar16 + 0x58) = uVar8;
              LeanTween__value((undefined8 *)(lVar16 + 0x58),uVar8);
              puVar3 = 
              Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__;
              if (lVar17 != 0) {
                FUN_044193fc(lVar17,lVar16,*(undefined8 *)PTR_DAT_06a11688);
                lVar17 = *(long *)(lVar13 + 0x48);
                lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_05f46c04(lVar16,0);
                puVar4 = 
                Method_System_Threading_Tasks_Task<Response<LegacyBackfillTicket>>_GetAwaiter__;
                puVar5 = PTR_DAT_06a09180;
                puVar3 = PTR_DAT_069feaa0;
                if (lVar16 != 0) {
                  *(undefined8 *)(lVar16 + 0x28) =
                       *(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__;
                  LeanTween__value();
                  *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar4;
                  LeanTween__value();
                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                  FUN_03b706f0();
                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                  LeanTween__value((undefined8 *)(lVar16 + 0x48),uVar8);
                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_04be4edc();
                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                  LeanTween__value((undefined8 *)(lVar16 + 0x50),uVar8);
                  puVar3 = 
                  Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
                  lVar11 = *(long *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__
                  ;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar11 = *(long *)puVar3;
                  }
                  puVar5 = PTR_DAT_06a11688;
                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                  lVar18 = puVar9[4];
                  if (lVar18 == 0) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar8 = *puVar9;
                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                    FUN_03b706f0(lVar18,uVar8,
                                 *(undefined8 *)
                                  Method_System_Threading_Tasks_Task<Response<QueryResponse>>_GetAwaiter__
                                 ,0);
                    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                    *plVar10 = lVar18;
                    LeanTween__value(plVar10,lVar18);
                  }
                  *(long *)(lVar16 + 0x60) = lVar18;
                  LeanTween__value((long *)(lVar16 + 0x60),lVar18);
                  if (lVar17 != 0) {
                    FUN_044193fc(lVar17,lVar16,*(undefined8 *)puVar5);
                    puVar3 = Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
                    lVar16 = *(long *)(lVar7 + 0x10);
                    lVar17 = *(long *)
                              Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    puVar4 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
                    if (lVar16 != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar13;
                        LeanTween__value(plVar10,lVar13);
                      }
                      else {
                        FUN_040101ec(lVar7,lVar13,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                      FUN_05f47e5c(uVar8,0);
                      lVar13 = *(long *)(lVar7 + 0x10);
                      lVar16 = *(long *)puVar3;
                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                          puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar9 = uVar8;
                          LeanTween__value(puVar9,uVar8);
                        }
                        else {
                          FUN_040101ec(lVar7,uVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                        FUN_05f455a0(lVar13,0);
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x28) =
                               *(undefined8 *)
                                Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__
                          ;
                          LeanTween__value((undefined8 *)(lVar13 + 0x28));
                          lVar17 = *(long *)(lVar13 + 0x48);
                          lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                          Unity_Services_Relay_RelayServiceException__set_Reason(lVar16,0);
                          puVar3 = Method_System_Threading_Tasks_Task<bool>__ctor__;
                          if (lVar16 != 0) {
                            *(undefined8 *)(lVar16 + 0x28) =
                                 *(undefined8 *)
                                  Method_System_Threading_Tasks_Task<ISession>_GetAwaiter__;
                            LeanTween__value();
                            *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar3;
                            LeanTween__value();
                            puVar3 = PTR_DAT_069fda18;
                            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                            FUN_03b6efa0();
                            *(undefined8 *)(lVar16 + 0x48) = uVar8;
                            LeanTween__value((undefined8 *)(lVar16 + 0x48),uVar8);
                            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                            FUN_04bdbe64();
                            *(undefined8 *)(lVar16 + 0x50) = uVar8;
                            LeanTween__value((undefined8 *)(lVar16 + 0x50),uVar8);
                            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                            System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                      ();
                            *(undefined8 *)(lVar16 + 0x58) = uVar8;
                            LeanTween__value((undefined8 *)(lVar16 + 0x58),uVar8);
                            if (lVar17 != 0) {
                              FUN_044193fc(lVar17,lVar16,*(undefined8 *)puVar5);
                              lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                              FUN_05f455a0(lVar16,0);
                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                              FUN_03b6efa0();
                              puVar3 = Method_System_Span<byte>_Slice__;
                              if (lVar16 != 0) {
                                *(undefined8 *)(lVar16 + 0x40) = uVar8;
                                LeanTween__value((undefined8 *)(lVar16 + 0x40),uVar8);
                                lVar11 = *(long *)(lVar16 + 0x48);
                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                FUN_05f391d0(lVar17,0);
                                puVar2 = 
                                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                ;
                                puVar4 = 
                                Method_System_Threading_Tasks_TaskCompletionSource<bool>_get_Task__;
                                puVar5 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                puVar3 = PTR_DAT_069fc9b8;
                                if (lVar17 != 0) {
                                  *(undefined8 *)(lVar17 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
                                  ;
                                  LeanTween__value();
                                  *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar2;
                                  LeanTween__value();
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                  FUN_03b6f874();
                                  *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar17 + 0x48),uVar8);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                  FUN_04bdefe4();
                                  *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar17 + 0x50),uVar8);
                                  uVar8 = *(undefined8 *)puVar4;
                                  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  uVar8 = FUN_054f73b4(uVar8,0);
                                  FUN_05f4760c(lVar17,uVar8,0);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                  FUN_03b6f874();
                                  *(undefined8 *)(lVar17 + 0x80) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar17 + 0x80),uVar8);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                  FUN_04bdefe4();
                                  *(undefined8 *)(lVar17 + 0x88) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar17 + 0x88),uVar8);
                                  puVar5 = 
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__
                                  ;
                                  puVar3 = PTR_DAT_06a11688;
                                  if (lVar11 != 0) {
                                    FUN_044193fc(lVar11,lVar17,*(undefined8 *)PTR_DAT_06a11688);
                                    lVar11 = *(long *)(lVar16 + 0x48);
                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                    FUN_05f46c04(lVar17,0);
                                    puVar2 = Method_System_Threading_Tasks_Task<bool>_TrySetResult__
                                    ;
                                    puVar4 = 
                                    Method_System_Threading_Tasks_Task<IPAddress[]>_GetAwaiter__;
                                    if (lVar17 != 0) {
                                      *(undefined8 *)(lVar17 + 0x28) =
                                           *(undefined8 *)
                                            Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                                      LeanTween__value();
                                      *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar4;
                                      LeanTween__value();
                                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                      FUN_03b706f0();
                                      *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                      LeanTween__value((undefined8 *)(lVar17 + 0x48),uVar8);
                                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                                      FUN_04be4edc();
                                      *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                      LeanTween__value((undefined8 *)(lVar17 + 0x50),uVar8);
                                      lVar18 = *(long *)puVar5;
                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        lVar18 = *(long *)puVar5;
                                      }
                                      puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                      lVar19 = puVar9[5];
                                      if (lVar19 == 0) {
                                        if (*(int *)(lVar18 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                          puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar8 = *puVar9;
                                        lVar19 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180)
                                        ;
                                        FUN_03b706f0(lVar19,uVar8,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                                  ,0);
                                        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28)
                                        ;
                                        *plVar10 = lVar19;
                                        LeanTween__value(plVar10,lVar19);
                                      }
                                      *(long *)(lVar17 + 0x60) = lVar19;
                                      LeanTween__value((long *)(lVar17 + 0x60),lVar19);
                                      lVar18 = *(long *)puVar5;
                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        lVar18 = *(long *)puVar5;
                                      }
                                      puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                      lVar19 = puVar9[6];
                                      if (lVar19 == 0) {
                                        if (*(int *)(lVar18 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                          puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar8 = *puVar9;
                                        lVar19 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180)
                                        ;
                                        FUN_03b706f0(lVar19,uVar8,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                                  ,0);
                                        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30)
                                        ;
                                        *plVar10 = lVar19;
                                        LeanTween__value(plVar10,lVar19);
                                      }
                                      *(long *)(lVar17 + 0x68) = lVar19;
                                      LeanTween__value((long *)(lVar17 + 0x68),lVar19);
                                      if (lVar11 != 0) {
                                        FUN_044193fc(lVar11,lVar17,*(undefined8 *)puVar3);
                                        lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                        FUN_05f46c04(lVar17,0);
                                        puVar4 = 
                                        Method_System_Threading_Tasks_Task<IPAddress[]>_get_Factory__
                                        ;
                                        if (lVar17 != 0) {
                                          *(undefined8 *)(lVar17 + 0x28) =
                                               *(undefined8 *)
                                                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                          ;
                                          LeanTween__value();
                                          *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar4;
                                          LeanTween__value();
                                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180
                                                                    );
                                          FUN_03b706f0();
                                          *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                          LeanTween__value((undefined8 *)(lVar17 + 0x48),uVar8);
                                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0
                                                                    );
                                          FUN_04be4edc();
                                          *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                          LeanTween__value((undefined8 *)(lVar17 + 0x50),uVar8);
                                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18
                                                                    );
                                          FUN_03b6efa0();
                                          *(undefined8 *)(lVar17 + 0x40) = uVar8;
                                          LeanTween__value((undefined8 *)(lVar17 + 0x40),uVar8);
                                          puVar4 = 
                                          Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                          ;
                                          if (*(long *)(lVar16 + 0x48) != 0) {
                                            FUN_044193fc(*(long *)(lVar16 + 0x48),lVar17,
                                                         *(undefined8 *)puVar3);
                                            lVar11 = *(long *)(lVar16 + 0x48);
                                            lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                            FUN_05f46a98(lVar17,0);
                                            puVar3 = 
                                            Method_System_Threading_Tasks_Task<BufferOffsetSize>_ConfigureAwait__
                                            ;
                                            if (lVar17 != 0) {
                                              *(undefined8 *)(lVar17 + 0x28) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                                              ;
                                              LeanTween__value();
                                              *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar3
                                              ;
                                              LeanTween__value();
                                              puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                              FUN_03b6f874();
                                              *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar17 + 0x48),uVar8);
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                          PTR_DAT_069fc9b8);
                                              FUN_04bdefe4();
                                              *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar17 + 0x50),uVar8);
                                              lVar18 = *(long *)puVar5;
                                              if (*(int *)(lVar18 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar18 = *(long *)puVar5;
                                              }
                                              puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                              lVar19 = puVar9[7];
                                              if (lVar19 == 0) {
                                                if (*(int *)(lVar18 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                                }
                                                uVar8 = *puVar9;
                                                lVar19 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                FUN_03b6f874(lVar19,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                                                  ,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x38);
                                                *plVar10 = lVar19;
                                                LeanTween__value(plVar10,lVar19);
                                              }
                                              *(long *)(lVar17 + 0x60) = lVar19;
                                              LeanTween__value((long *)(lVar17 + 0x60),lVar19);
                                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                              FUN_03b6f874();
                                              *(undefined8 *)(lVar17 + 0x68) = uVar8;
                                              LeanTween__value((undefined8 *)(lVar17 + 0x68),uVar8);
                                              if (lVar11 != 0) {
                                                FUN_044193fc(lVar11,lVar17,
                                                             *(undefined8 *)PTR_DAT_06a11688);
                                                lVar11 = *(long *)(lVar16 + 0x48);
                                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                FUN_05f46a98(lVar17,0);
                                                puVar3 = 
                                                Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                ;
                                                if (lVar17 != 0) {
                                                  *(undefined8 *)(lVar17 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar17 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  LeanTween__value();
                                                  puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x50),
                                                                   uVar8);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar9[8];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03b6f874(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ApiResponse<Player>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x40);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  }
                                                  puVar4 = PTR_DAT_069fda18;
                                                  *(long *)(lVar17 + 0x60) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x60),lVar19);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar17 + 0x68) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x68),
                                                                   uVar8);
                                                  puVar3 = PTR_DAT_06a11688;
                                                  if (lVar11 != 0) {
                                                    FUN_044193fc(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    if (*(long *)(lVar13 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar13 + 0x48),lVar16,
                                                                   *(undefined8 *)puVar3);
                                                      puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar6 = 
                                                  Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar16,0);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                                  FUN_03b6efa0();
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x40) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar16 + 0x40),
                                                                     uVar8);
                                                    lVar11 = *(long *)(lVar16 + 0x48);
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar17,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    LeanTween__value();
                                                    *(undefined8 *)(lVar17 + 0x30) =
                                                         *(undefined8 *)puVar4;
                                                    LeanTween__value();
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                PTR_DAT_06a09180);
                                                    FUN_03b706f0();
                                                    *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar17 + 0x48),
                                                                     uVar8);
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                PTR_DAT_069feaa0);
                                                    FUN_04be4edc();
                                                    *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar17 + 0x50),
                                                                     uVar8);
                                                    lVar18 = *(long *)puVar5;
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar18 = *(long *)puVar5;
                                                    }
                                                    puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                    lVar19 = puVar9[9];
                                                    if (lVar19 == 0) {
                                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        puVar9 = *(undefined8 **)
                                                                  (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar8 = *puVar9;
                                                      lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                   PTR_DAT_06a09180)
                                                      ;
                                                      FUN_03b706f0(lVar19,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x48);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  }
                                                  *(long *)(lVar17 + 0x60) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x60),lVar19);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar9[10];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x50);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  }
                                                  *(long *)(lVar17 + 0x68) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x68),lVar19);
                                                  if (lVar11 != 0) {
                                                    FUN_044193fc(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar11 = *(long *)(lVar16 + 0x48);
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar17,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar17 + 0x30) =
                                                       *(undefined8 *)puVar4;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x50),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x58),
                                                                   uVar8);
                                                  puVar4 = PTR_DAT_06a11688;
                                                  if (lVar11 != 0) {
                                                    FUN_044193fc(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    if (*(long *)(lVar13 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar13 + 0x48),lVar16,
                                                                   *(undefined8 *)puVar4);
                                                      lVar17 = *(long *)(lVar13 + 0x48);
                                                      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                   puVar3);
                                                                                                            
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar6 = 
                                                  Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__
                                                  ;
                                                  puVar4 = PTR_DAT_069fda18;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar16,0);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                                  FUN_03b6efa0();
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x40) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar16 + 0x40),
                                                                     uVar8);
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar17,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    LeanTween__value();
                                                    *(undefined8 *)(lVar17 + 0x30) =
                                                         *(undefined8 *)puVar4;
                                                    LeanTween__value();
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                PTR_DAT_06a09180);
                                                    FUN_03b706f0();
                                                    *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar17 + 0x48),
                                                                     uVar8);
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                PTR_DAT_069feaa0);
                                                    FUN_04be4edc();
                                                    *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                    LeanTween__value((undefined8 *)(lVar17 + 0x50),
                                                                     uVar8);
                                                    lVar11 = *(long *)puVar5;
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar11 = *(long *)puVar5;
                                                    }
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__
                                                  ;
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0xb];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x58);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  }
                                                  puVar9 = (undefined8 *)PTR_DAT_06a11688;
                                                  *(long *)(lVar17 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar17 + 0x60),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar14[0xc];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x60);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar9 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar17 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar17 + 0x68),lVar18);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar17 + 0x40) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar17 + 0x40),
                                                                   uVar8);
                                                  if (*(long *)(lVar16 + 0x48) != 0) {
                                                    FUN_044193fc(*(long *)(lVar16 + 0x48),lVar17,
                                                                 *puVar9);
                                                    if (*(long *)(lVar13 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar13 + 0x48),lVar16,
                                                                   *puVar9);
                                                      lVar17 = *(long *)(lVar13 + 0x48);
                                                      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                      
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar16,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>__ctor__;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_06a09180);
                                                  FUN_03b706f0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069feaa0);
                                                  FUN_04be4edc();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0xd];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x68);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  }
                                                  puVar2 = PTR_DAT_06a11688;
                                                  *(long *)(lVar16 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x60),lVar18);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,*(undefined8 *)puVar2
                                                                );
                                                    lVar16 = *(long *)(lVar7 + 0x10);
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar13;
                                                        LeanTween__value();
                                                      }
                                                      else {
                                                        FUN_040101ec(lVar7,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x28));
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x58),
                                                                   uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar17 = *(long *)(lVar13 + 0x48);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x58),
                                                                   uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar16 = *(long *)(lVar7 + 0x10);
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_069fda18;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        LeanTween__value(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_040101ec(lVar7,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar13 + 0x40) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x40),
                                                                   uVar8);
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar17 = *(long *)(lVar13 + 0x48);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar15 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar15[0xe];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar15 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar15;
                                                    lVar18 = thunk_FUN_02dd3144(*puVar9);
                                                    FUN_03b6efa0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x70);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x48),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar15 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar15[0xf];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar15 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar15;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x78);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x50),lVar18);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar16,*puVar14);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar16,0);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar11 = puVar14[0x10];
                                                  if (lVar11 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar11 = thunk_FUN_02dd3144(*puVar9);
                                                    FUN_03b6efa0(lVar11,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x80);
                                                  *plVar10 = lVar11;
                                                  LeanTween__value(plVar10,lVar11);
                                                  }
                                                  if (lVar16 != 0) {
                                                    *(long *)(lVar16 + 0x40) = lVar11;
                                                    LeanTween__value((long *)(lVar16 + 0x40),lVar11)
                                                    ;
                                                    lVar11 = *(long *)(lVar16 + 0x48);
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar17,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar17 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x11];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar19,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x88);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar17 + 0x48) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x48),lVar19);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x12];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x90);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar17 + 0x50) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x50),lVar19);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x13];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar19,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x98);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar17 + 0x60) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x60),lVar19);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x14];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar19,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa0);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar17 + 0x68) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x68),lVar19);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar11 != 0) {
                                                    FUN_044193fc(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar13 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar13 + 0x48),lVar16,
                                                                   *puVar14);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar12 = FUN_0630c920(0);
                                                      if ((uVar12 & 1) != 0) {
                                                        lVar17 = *(long *)(lVar13 + 0x48);
                                                        lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                     puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar16,0);
                                                  uVar8 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x40) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x40),
                                                                   uVar8);
                                                  lVar11 = *(long *)(lVar16 + 0x48);
                                                  lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar17,0);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar17 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x15];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa8);
                                                  *plVar10 = lVar19;
                                                  LeanTween__value(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar17 + 0x48) = lVar19;
                                                  LeanTween__value((long *)(lVar17 + 0x48),lVar19);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar11,lVar17,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar13 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar13 + 0x48),lVar16,
                                                               *puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar8 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  }
                                                  lVar16 = *(long *)(lVar7 + 0x10);
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      LeanTween__value(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_040101ec(lVar7,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                    uVar8 = *(undefined8 *)(unaff_x19 + 0x148);
                                                    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_02df485c();
                                                    }
                                                    uVar12 = FUN_0634eb94(uVar8,0,0);
                                                    if ((uVar12 & 1) != 0) {
                                                      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                      
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar13,0);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar13 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x28));
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x16];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x48),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x17];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb8);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x50),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x18];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xc0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x60),lVar18);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x19];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 200);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x48),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1a];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x50),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1b];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd8);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x60),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1c];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x68),lVar18);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar16,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar16 + 0x80) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x80),
                                                                   uVar8);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar16 + 0x88) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x88),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x48),
                                                                   uVar8);
                                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  LeanTween__value((undefined8 *)(lVar16 + 0x50),
                                                                   uVar8);
                                                  *(long *)(unaff_x19 + 0x208) = lVar16;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar16);
                                                  if (*(long *)(lVar13 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar13 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x48);
                                                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar16 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1d];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe8);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x48),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1e];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xf0);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x50),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1f];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xf8);
                                                  *plVar10 = lVar18;
                                                  LeanTween__value(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x60),lVar18);
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x20];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
                                                  *(long *)(lVar11 + 0x100) = lVar18;
                                                  LeanTween__value(lVar11 + 0x100,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar16 + 0x68),lVar18);
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar16,*puVar14);
                                                  lVar16 = *(long *)(lVar7 + 0x10);
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar16 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    plVar10 = (long *)(lVar16 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar13;
                                                    LeanTween__value(plVar10,lVar13);
                                                  }
                                                  else {
                                                    FUN_040101ec(lVar7,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                                                  ;
                                                  puVar3 = Method_System_Span<byte>_CopyTo__;
                                                  if (0 < *(int *)(lVar7 + 0x18)) {
                                                    uVar8 = FUN_04011c04(lVar7,*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Pop__
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar8;
                                                  LeanTween__value(unaff_x19 + 0x198,uVar8);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar7 = FUN_05f37ac4(0);
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar13);
                                                  }
                                                  if (((lVar7 == 0) ||
                                                      (lVar7 = FUN_05f37bfc(lVar7,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar5 + 0xb8) + 0x10),1,0,0,0), lVar7 == 0)) ||
                                                  (*(long *)(lVar7 + 0x28) == 0)) goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar7 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar7 = FUN_05f37ac4(0);
                                                  if (lVar7 != 0) {
                                                    FUN_05f37b50(lVar7,*(undefined8 *)
                                                                        (unaff_x19 + 0x180),0);
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


