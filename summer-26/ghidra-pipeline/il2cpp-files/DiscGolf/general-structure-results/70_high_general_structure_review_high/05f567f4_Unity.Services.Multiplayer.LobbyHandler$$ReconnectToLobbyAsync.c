/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$ReconnectToLobbyAsync
ENTRY_POINT: 05f567f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_LobbyHandler__ReconnectToLobbyAsync
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar13;
  long unaff_x23;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *puVar18;
  
  lVar15 = param_1[4];
  puVar18 = *(undefined8 **)(unaff_x27 + 0x688);
  if (lVar15 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      param_1 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar16 = *param_1;
                    /* try { // try from 05f5681c to 06056837 has its CatchHandler @ 05f56d60 */
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
    FUN_03b706f0(lVar15,uVar16,
                 *(undefined8 *)
                  Method_System_Threading_Tasks_Task<Response<QueryResponse>>_GetAwaiter__,0);
    plVar7 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
    *plVar7 = lVar15;
    LeanTween__value(plVar7,lVar15);
  }
  *(long *)(unaff_x23 + 0x60) = lVar15;
  LeanTween__value((long *)(unaff_x23 + 0x60),lVar15);
  if (unaff_x22 != 0) {
    FUN_044193fc();
                    /* try { // try from 05f56884 to 06056887 has its CatchHandler @ 05f56d3c */
    lVar15 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 05f56890 to 06056897 has its CatchHandler @ 05f56d44 */
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar3 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
    if (lVar15 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        LeanTween__value();
      }
      else {
        FUN_040101ec();
      }
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05f47e5c(uVar16,0);
      lVar15 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar15 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar16;
          LeanTween__value(puVar8,uVar16);
        }
        else {
          FUN_040101ec();
        }
        lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                   );
        FUN_05f455a0(lVar15,0);
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x28) =
               *(undefined8 *)Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__;
          LeanTween__value((undefined8 *)(lVar15 + 0x28));
          lVar13 = *(long *)(lVar15 + 0x48);
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                    );
          Unity_Services_Relay_RelayServiceException__set_Reason(lVar9,0);
          puVar3 = Method_System_Threading_Tasks_Task<bool>__ctor__;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x28) =
                 *(undefined8 *)Method_System_Threading_Tasks_Task<ISession>_GetAwaiter__;
            LeanTween__value();
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar3;
            LeanTween__value();
            puVar3 = PTR_DAT_069fda18;
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
            FUN_03b6efa0();
            *(undefined8 *)(lVar9 + 0x48) = uVar16;
            LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
            FUN_04bdbe64();
            *(undefined8 *)(lVar9 + 0x50) = uVar16;
            LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                       );
            System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                      ();
            *(undefined8 *)(lVar9 + 0x58) = uVar16;
            LeanTween__value((undefined8 *)(lVar9 + 0x58),uVar16);
            if (lVar13 != 0) {
              FUN_044193fc(lVar13,lVar9,*puVar18);
              lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                        );
              FUN_05f455a0(lVar9,0);
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_03b6efa0();
              puVar3 = Method_System_Span<byte>_Slice__;
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x40) = uVar16;
                LeanTween__value((undefined8 *)(lVar9 + 0x40),uVar16);
                lVar14 = *(long *)(lVar9 + 0x48);
                lVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_05f391d0(lVar13,0);
                puVar2 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
                puVar4 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_get_Task__;
                puVar5 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                puVar3 = PTR_DAT_069fc9b8;
                if (lVar13 != 0) {
                  *(undefined8 *)(lVar13 + 0x28) =
                       *(undefined8 *)
                        Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
                  ;
                  LeanTween__value();
                  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar2;
                  LeanTween__value();
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                  FUN_03b6f874();
                  *(undefined8 *)(lVar13 + 0x48) = uVar16;
                  LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_04bdefe4();
                  *(undefined8 *)(lVar13 + 0x50) = uVar16;
                  LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                  uVar16 = *(undefined8 *)puVar4;
                  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar16 = FUN_054f73b4(uVar16,0);
                  FUN_05f4760c(lVar13,uVar16,0);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                  FUN_03b6f874();
                  *(undefined8 *)(lVar13 + 0x80) = uVar16;
                  LeanTween__value((undefined8 *)(lVar13 + 0x80),uVar16);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_04bdefe4();
                  *(undefined8 *)(lVar13 + 0x88) = uVar16;
                  LeanTween__value((undefined8 *)(lVar13 + 0x88),uVar16);
                  puVar5 = 
                  Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
                  puVar3 = PTR_DAT_06a11688;
                  if (lVar14 != 0) {
                    FUN_044193fc(lVar14,lVar13,*(undefined8 *)PTR_DAT_06a11688);
                    lVar14 = *(long *)(lVar9 + 0x48);
                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                 Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                               );
                    FUN_05f46c04(lVar13,0);
                    puVar2 = Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                    puVar4 = Method_System_Threading_Tasks_Task<IPAddress[]>_GetAwaiter__;
                    if (lVar13 != 0) {
                      *(undefined8 *)(lVar13 + 0x28) =
                           *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                      LeanTween__value();
                      *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar4;
                      LeanTween__value();
                      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                      FUN_03b706f0();
                      *(undefined8 *)(lVar13 + 0x48) = uVar16;
                      LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                      FUN_04be4edc();
                      *(undefined8 *)(lVar13 + 0x50) = uVar16;
                      LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                      lVar10 = *(long *)puVar5;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar10 = *(long *)puVar5;
                      }
                      puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                      lVar17 = puVar18[5];
                      if (lVar17 == 0) {
                        if (*(int *)(lVar10 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                        }
                        uVar16 = *puVar18;
                        lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                        FUN_03b706f0(lVar17,uVar16,
                                     *(undefined8 *)
                                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                     ,0);
                        plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                        *plVar7 = lVar17;
                        LeanTween__value(plVar7,lVar17);
                      }
                      *(long *)(lVar13 + 0x60) = lVar17;
                      LeanTween__value((long *)(lVar13 + 0x60),lVar17);
                      lVar10 = *(long *)puVar5;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar10 = *(long *)puVar5;
                      }
                      puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                      lVar17 = puVar18[6];
                      if (lVar17 == 0) {
                        if (*(int *)(lVar10 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                        }
                        uVar16 = *puVar18;
                        lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                        FUN_03b706f0(lVar17,uVar16,
                                     *(undefined8 *)
                                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                     ,0);
                        plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                        *plVar7 = lVar17;
                        LeanTween__value(plVar7,lVar17);
                      }
                      *(long *)(lVar13 + 0x68) = lVar17;
                      LeanTween__value((long *)(lVar13 + 0x68),lVar17);
                      if (lVar14 != 0) {
                        FUN_044193fc(lVar14,lVar13,*(undefined8 *)puVar3);
                        lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                        FUN_05f46c04(lVar13,0);
                        puVar4 = Method_System_Threading_Tasks_Task<IPAddress[]>_get_Factory__;
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x28) =
                               *(undefined8 *)
                                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                          ;
                          LeanTween__value();
                          *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar4;
                          LeanTween__value();
                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                          FUN_03b706f0();
                          *(undefined8 *)(lVar13 + 0x48) = uVar16;
                          LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                          FUN_04be4edc();
                          *(undefined8 *)(lVar13 + 0x50) = uVar16;
                          LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                          FUN_03b6efa0();
                          *(undefined8 *)(lVar13 + 0x40) = uVar16;
                          LeanTween__value((undefined8 *)(lVar13 + 0x40),uVar16);
                          puVar4 = 
                          Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                          ;
                          if (*(long *)(lVar9 + 0x48) != 0) {
                            FUN_044193fc(*(long *)(lVar9 + 0x48),lVar13,*(undefined8 *)puVar3);
                            lVar14 = *(long *)(lVar9 + 0x48);
                            lVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                            FUN_05f46a98(lVar13,0);
                            puVar3 = 
                            Method_System_Threading_Tasks_Task<BufferOffsetSize>_ConfigureAwait__;
                            if (lVar13 != 0) {
                              *(undefined8 *)(lVar13 + 0x28) =
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                              ;
                              LeanTween__value();
                              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar3;
                              LeanTween__value();
                              puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                           UnityEngine_VFX_VFXSpawnerState_TypeInfo)
                              ;
                              FUN_03b6f874();
                              *(undefined8 *)(lVar13 + 0x48) = uVar16;
                              LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc9b8);
                              FUN_04bdefe4();
                              *(undefined8 *)(lVar13 + 0x50) = uVar16;
                              LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                              lVar10 = *(long *)puVar5;
                              if (*(int *)(lVar10 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar10 = *(long *)puVar5;
                              }
                              puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                              lVar17 = puVar18[7];
                              if (lVar17 == 0) {
                                if (*(int *)(lVar10 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar16 = *puVar18;
                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                FUN_03b6f874(lVar17,uVar16,
                                             *(undefined8 *)
                                              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                                             ,0);
                                plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
                                *plVar7 = lVar17;
                                LeanTween__value(plVar7,lVar17);
                              }
                              *(long *)(lVar13 + 0x60) = lVar17;
                              LeanTween__value((long *)(lVar13 + 0x60),lVar17);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                              FUN_03b6f874();
                              *(undefined8 *)(lVar13 + 0x68) = uVar16;
                              LeanTween__value((undefined8 *)(lVar13 + 0x68),uVar16);
                              if (lVar14 != 0) {
                                FUN_044193fc(lVar14,lVar13,*(undefined8 *)PTR_DAT_06a11688);
                                lVar14 = *(long *)(lVar9 + 0x48);
                                lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                FUN_05f46a98(lVar13,0);
                                puVar3 = 
                                Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                                if (lVar13 != 0) {
                                  *(undefined8 *)(lVar13 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                  ;
                                  LeanTween__value();
                                  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar3;
                                  LeanTween__value();
                                  puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                  FUN_03b6f874();
                                  *(undefined8 *)(lVar13 + 0x48) = uVar16;
                                  LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc9b8);
                                  FUN_04bdefe4();
                                  *(undefined8 *)(lVar13 + 0x50) = uVar16;
                                  LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                                  lVar10 = *(long *)puVar5;
                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                    lVar10 = *(long *)puVar5;
                                  }
                                  puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                                  lVar17 = puVar18[8];
                                  if (lVar17 == 0) {
                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                    }
                                    uVar16 = *puVar18;
                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                    FUN_03b6f874(lVar17,uVar16,
                                                 *(undefined8 *)
                                                  Method_System_Threading_Tasks_Task<ApiResponse<Player>>_GetAwaiter__
                                                 ,0);
                                    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
                                    *plVar7 = lVar17;
                                    LeanTween__value(plVar7,lVar17);
                                  }
                                  puVar4 = PTR_DAT_069fda18;
                                  *(long *)(lVar13 + 0x60) = lVar17;
                                  LeanTween__value((long *)(lVar13 + 0x60),lVar17);
                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                  FUN_03b6f874();
                                  *(undefined8 *)(lVar13 + 0x68) = uVar16;
                                  LeanTween__value((undefined8 *)(lVar13 + 0x68),uVar16);
                                  puVar3 = PTR_DAT_06a11688;
                                  if (lVar14 != 0) {
                                    FUN_044193fc(lVar14,lVar13,*(undefined8 *)PTR_DAT_06a11688);
                                    if (*(long *)(lVar15 + 0x48) != 0) {
                                      FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                   *(undefined8 *)puVar3);
                                      puVar3 = 
                                      Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                      ;
                                      lVar13 = *(long *)(lVar15 + 0x48);
                                      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                      Unity_Services_Relay_RelayServiceException__set_Reason
                                                (lVar9,0);
                                      puVar6 = 
                                      Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__
                                      ;
                                      if (lVar9 != 0) {
                                        *(undefined8 *)(lVar9 + 0x28) =
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__
                                        ;
                                        LeanTween__value();
                                        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar6;
                                        LeanTween__value();
                                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                        FUN_03b6efa0();
                                        *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                        LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458)
                                        ;
                                        FUN_04bdbe64();
                                        *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                        LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                                        if (lVar13 != 0) {
                                          FUN_044193fc(lVar13,lVar9,*(undefined8 *)PTR_DAT_06a11688)
                                          ;
                                          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                          FUN_05f455a0(lVar9,0);
                                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                          FUN_03b6efa0();
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x40) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar9 + 0x40),uVar16);
                                            lVar14 = *(long *)(lVar9 + 0x48);
                                            lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                            FUN_05f46c04(lVar13,0);
                                            puVar4 = 
                                            Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                            ;
                                            if (lVar13 != 0) {
                                              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)puVar2
                                              ;
                                              LeanTween__value();
                                              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar4
                                              ;
                                              LeanTween__value();
                                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                           PTR_DAT_06a09180);
                                              FUN_03b706f0();
                                              *(undefined8 *)(lVar13 + 0x48) = uVar16;
                                              LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16)
                                              ;
                                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                           PTR_DAT_069feaa0);
                                              FUN_04be4edc();
                                              *(undefined8 *)(lVar13 + 0x50) = uVar16;
                                              LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16)
                                              ;
                                              lVar10 = *(long *)puVar5;
                                              if (*(int *)(lVar10 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar10 = *(long *)puVar5;
                                              }
                                              puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                                              lVar17 = puVar18[9];
                                              if (lVar17 == 0) {
                                                if (*(int *)(lVar10 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar16 = *puVar18;
                                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_06a09180);
                                                FUN_03b706f0(lVar17,uVar16,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__
                                                  ,0);
                                                plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                 + 0x48);
                                                *plVar7 = lVar17;
                                                LeanTween__value(plVar7,lVar17);
                                              }
                                              *(long *)(lVar13 + 0x60) = lVar17;
                                              LeanTween__value((long *)(lVar13 + 0x60),lVar17);
                                              lVar10 = *(long *)puVar5;
                                              if (*(int *)(lVar10 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar10 = *(long *)puVar5;
                                              }
                                              puVar18 = *(undefined8 **)(lVar10 + 0xb8);
                                              lVar17 = puVar18[10];
                                              if (lVar17 == 0) {
                                                if (*(int *)(lVar10 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar18 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar16 = *puVar18;
                                                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_06a09180);
                                                FUN_03b706f0(lVar17,uVar16,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__
                                                  ,0);
                                                plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                 + 0x50);
                                                *plVar7 = lVar17;
                                                LeanTween__value(plVar7,lVar17);
                                              }
                                              *(long *)(lVar13 + 0x68) = lVar17;
                                              LeanTween__value((long *)(lVar13 + 0x68),lVar17);
                                              if (lVar14 != 0) {
                                                FUN_044193fc(lVar14,lVar13,
                                                             *(undefined8 *)PTR_DAT_06a11688);
                                                lVar14 = *(long *)(lVar9 + 0x48);
                                                lVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                Unity_Services_Relay_RelayServiceException__set_Reason
                                                          (lVar13,0);
                                                puVar4 = 
                                                Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                ;
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar13 + 0x30) =
                                                       *(undefined8 *)puVar4;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar13 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar13 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x50),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar13 + 0x58) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x58),
                                                                   uVar16);
                                                  puVar4 = PTR_DAT_06a11688;
                                                  if (lVar14 != 0) {
                                                    FUN_044193fc(lVar14,lVar13,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    if (*(long *)(lVar15 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                                   *(undefined8 *)puVar4);
                                                      lVar13 = *(long *)(lVar15 + 0x48);
                                                      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                  puVar3);
                                                                                                            
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar6 = 
                                                  Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__
                                                  ;
                                                  puVar4 = PTR_DAT_069fda18;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar9,0);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x40) = uVar16;
                                                    LeanTween__value((undefined8 *)(lVar9 + 0x40),
                                                                     uVar16);
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar13,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    LeanTween__value();
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)puVar4;
                                                    LeanTween__value();
                                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0();
                                                    *(undefined8 *)(lVar13 + 0x48) = uVar16;
                                                    LeanTween__value((undefined8 *)(lVar13 + 0x48),
                                                                     uVar16);
                                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc();
                                                    *(undefined8 *)(lVar13 + 0x50) = uVar16;
                                                    LeanTween__value((undefined8 *)(lVar13 + 0x50),
                                                                     uVar16);
                                                    lVar14 = *(long *)puVar5;
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar14 = *(long *)puVar5;
                                                    }
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__
                                                  ;
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0xb];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x58);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  }
                                                  puVar18 = (undefined8 *)PTR_DAT_06a11688;
                                                  *(long *)(lVar13 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar13 + 0x60),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar8[0xc];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x60);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar18 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar13 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar13 + 0x68),lVar10);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar13 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x40),
                                                                   uVar16);
                                                  if (*(long *)(lVar9 + 0x48) != 0) {
                                                    FUN_044193fc(*(long *)(lVar9 + 0x48),lVar13,
                                                                 *puVar18);
                                                    if (*(long *)(lVar15 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                                   *puVar18);
                                                      lVar13 = *(long *)(lVar15 + 0x48);
                                                      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                    
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>__ctor__;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a09180);
                                                  FUN_03b706f0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069feaa0);
                                                  FUN_04be4edc();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0xd];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x68);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  }
                                                  puVar2 = PTR_DAT_06a11688;
                                                  *(long *)(lVar9 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar10);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,*(undefined8 *)puVar2)
                                                    ;
                                                    lVar9 = *(long *)(unaff_x20 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(unaff_x20 + 0x1c) =
                                                         *(int *)(unaff_x20 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar15;
                                                        LeanTween__value();
                                                      }
                                                      else {
                                                        FUN_040101ec(unaff_x20,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x28));
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar9 + 0x58) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x58),
                                                                   uVar16);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar13 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3
                                                                              );
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar9 + 0x58) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x58),
                                                                   uVar16);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = *(long *)(unaff_x20 + 0x10);
                                                    lVar13 = *(long *)puVar4;
                                                    *(int *)(unaff_x20 + 0x1c) =
                                                         *(int *)(unaff_x20 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_069fda18;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar15;
                                                        LeanTween__value(plVar7,lVar15);
                                                      }
                                                      else {
                                                        FUN_040101ec(unaff_x20,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x40),
                                                                   uVar16);
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar13 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar12[0xe];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*puVar18);
                                                    FUN_03b6efa0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x70);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar12[0xf];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x78);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar10);
                                                  if (lVar13 != 0) {
                                                    FUN_044193fc(lVar13,lVar9,*puVar8);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar9,0);
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar14 = puVar8[0x10];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar14 = thunk_FUN_02dd3144(*puVar18);
                                                    FUN_03b6efa0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x80);
                                                  *plVar7 = lVar14;
                                                  LeanTween__value(plVar7,lVar14);
                                                  }
                                                  if (lVar9 != 0) {
                                                    *(long *)(lVar9 + 0x40) = lVar14;
                                                    LeanTween__value((long *)(lVar9 + 0x40),lVar14);
                                                    lVar14 = *(long *)(lVar9 + 0x48);
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar13,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar13 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar17 = puVar8[0x11];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar17,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x88);
                                                  *plVar7 = lVar17;
                                                  LeanTween__value(plVar7,lVar17);
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar13 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar13 + 0x48),lVar17);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar17 = puVar8[0x12];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar17,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x90);
                                                  *plVar7 = lVar17;
                                                  LeanTween__value(plVar7,lVar17);
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar13 + 0x50) = lVar17;
                                                  LeanTween__value((long *)(lVar13 + 0x50),lVar17);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar17 = puVar8[0x13];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar17,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x98);
                                                  *plVar7 = lVar17;
                                                  LeanTween__value(plVar7,lVar17);
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar13 + 0x60) = lVar17;
                                                  LeanTween__value((long *)(lVar13 + 0x60),lVar17);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar17 = puVar8[0x14];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar17,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xa0);
                                                  *plVar7 = lVar17;
                                                  LeanTween__value(plVar7,lVar17);
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar13 + 0x68) = lVar17;
                                                  LeanTween__value((long *)(lVar13 + 0x68),lVar17);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar14 != 0) {
                                                    FUN_044193fc(lVar14,lVar13,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar15 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                                   *puVar8);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar11 = FUN_0630c920(0);
                                                      if ((uVar11 & 1) != 0) {
                                                        lVar13 = *(long *)(lVar15 + 0x48);
                                                        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                    puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar9,0);
                                                  uVar16 = thunk_FUN_02dd3144(*puVar18);
                                                  FUN_03b6efa0();
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x40),
                                                                   uVar16);
                                                  lVar14 = *(long *)(lVar9 + 0x48);
                                                  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar13,0);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar13 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar17 = puVar8[0x15];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar17,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xa8);
                                                  *plVar7 = lVar17;
                                                  LeanTween__value(plVar7,lVar17);
                                                  puVar18 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar13 + 0x48) = lVar17;
                                                  LeanTween__value((long *)(lVar13 + 0x48),lVar17);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar13,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar15 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                               *puVar8);
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  }
                                                  lVar9 = *(long *)(unaff_x20 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar15;
                                                      LeanTween__value(plVar7,lVar15);
                                                    }
                                                    else {
                                                      FUN_040101ec(unaff_x20,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                    uVar16 = *(undefined8 *)(unaff_x19 + 0x148);
                                                    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_02df485c();
                                                    }
                                                    uVar11 = FUN_0634eb94(uVar16,0,0);
                                                    if ((uVar11 & 1) != 0) {
                                                      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                      
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x28));
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x16];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar10,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xb0);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x17];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xb8);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x18];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar10,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xc0);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar10);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x19];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 200);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1a];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xd0);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1b];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xd8);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1c];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xe0);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar10);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar9,*(undefined8 *)
                                                                      (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar9 + 0x80) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x80),
                                                                   uVar16);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar9 + 0x88) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x88),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),
                                                                   uVar16);
                                                  *(long *)(unaff_x19 + 0x208) = lVar9;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar9);
                                                  if (*(long *)(lVar15 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar15 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar8);
                                                  lVar13 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1d];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xe8);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1e];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xf0);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x1f];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xf8);
                                                  *plVar7 = lVar10;
                                                  LeanTween__value(plVar7,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar10);
                                                  lVar14 = *(long *)puVar5;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *(long *)puVar5;
                                                  }
                                                  puVar18 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar10 = puVar18[0x20];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar18 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar18;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
                                                  *(long *)(lVar14 + 0x100) = lVar10;
                                                  LeanTween__value(lVar14 + 0x100,lVar10);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar10);
                                                  if (lVar13 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar13,lVar9,*puVar8);
                                                  lVar9 = *(long *)(unaff_x20 + 0x10);
                                                  lVar13 = *(long *)puVar4;
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar7 = lVar15;
                                                    LeanTween__value(plVar7,lVar15);
                                                  }
                                                  else {
                                                    FUN_040101ec(unaff_x20,lVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                                                  ;
                                                  puVar3 = Method_System_Span<byte>_CopyTo__;
                                                  if (0 < *(int *)(unaff_x20 + 0x18)) {
                                                    uVar16 = FUN_04011c04(unaff_x20,
                                                                          *(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Pop__
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar16;
                                                  LeanTween__value(unaff_x19 + 0x198,uVar16);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar15 = FUN_05f37ac4(0);
                                                  lVar9 = *(long *)puVar5;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar9);
                                                  }
                                                  if (((lVar15 == 0) ||
                                                      (lVar15 = FUN_05f37bfc(lVar15,*(undefined8 *)
                                                                                     (*(long *)(*(
                                                  long *)puVar5 + 0xb8) + 0x10),1,0,0,0),
                                                  lVar15 == 0)) || (*(long *)(lVar15 + 0x28) == 0))
                                                  goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar15 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar15 = FUN_05f37ac4(0);
                                                  if (lVar15 != 0) {
                                                    FUN_05f37b50(lVar15,*(undefined8 *)
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


