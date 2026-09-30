/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$UpdatePlayerAsync
ENTRY_POINT: 05f56400
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_LobbyHandler__UpdatePlayerAsync(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  FUN_05f455a0(param_1,0);
  puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) =
         *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_ConfigureAwait__;
    LeanTween__value();
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar3;
    }
    puVar5 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__;
    puVar12 = *(undefined8 **)(lVar7 + 0xb8);
    lVar15 = puVar12[3];
    if (lVar15 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar16 = *puVar12;
      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
      FUN_03b6efa0(lVar15,uVar16,
                   *(undefined8 *)
                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar8 = lVar15;
      LeanTween__value(plVar8,lVar15);
    }
    *(long *)(param_1 + 0x40) = lVar15;
    LeanTween__value((long *)(param_1 + 0x40),lVar15);
    lVar15 = *(long *)(param_1 + 0x48);
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    Unity_Services_Relay_RelayServiceException__set_Reason(lVar7,0);
    puVar4 = Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
    puVar5 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__;
    puVar3 = PTR_DAT_069fe458;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x28) =
           *(undefined8 *)Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
      LeanTween__value();
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
      LeanTween__value();
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
      FUN_03b6efa0();
      *(undefined8 *)(lVar7 + 0x48) = uVar16;
      LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar16);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_04bdbe64();
      *(undefined8 *)(lVar7 + 0x50) = uVar16;
      LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar16);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                ();
      *(undefined8 *)(lVar7 + 0x58) = uVar16;
      LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar16);
      if (lVar15 != 0) {
        FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688);
        lVar15 = *(long *)(param_1 + 0x48);
        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                  );
        Unity_Services_Relay_RelayServiceException__set_Reason(lVar7,0);
        puVar3 = Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Factory__;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x28) =
               *(undefined8 *)Method_System_Threading_Tasks_Task<bool>_GetAwaiter__;
          LeanTween__value();
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar3;
          LeanTween__value();
          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
          FUN_03b6efa0();
          *(undefined8 *)(lVar7 + 0x48) = uVar16;
          LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar16);
          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
          FUN_04bdbe64();
          *(undefined8 *)(lVar7 + 0x50) = uVar16;
          LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar16);
          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                     );
          System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                    ();
          *(undefined8 *)(lVar7 + 0x58) = uVar16;
          LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar16);
          puVar3 = Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
          ;
          if (lVar15 != 0) {
            FUN_044193fc(lVar15,lVar7,*(undefined8 *)PTR_DAT_06a11688);
            lVar15 = *(long *)(param_1 + 0x48);
            lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
            FUN_05f46c04(lVar7,0);
            puVar4 = Method_System_Threading_Tasks_Task<Response<LegacyBackfillTicket>>_GetAwaiter__
            ;
            puVar5 = PTR_DAT_06a09180;
            puVar3 = PTR_DAT_069feaa0;
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x28) =
                   *(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__;
              LeanTween__value();
              *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
              LeanTween__value();
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
              FUN_03b706f0();
              *(undefined8 *)(lVar7 + 0x48) = uVar16;
              LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar16);
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_04be4edc();
              *(undefined8 *)(lVar7 + 0x50) = uVar16;
              LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar16);
              puVar3 = 
              Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__;
              lVar9 = *(long *)
                       Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__
              ;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar9 = *(long *)puVar3;
              }
              puVar5 = PTR_DAT_06a11688;
              puVar12 = *(undefined8 **)(lVar9 + 0xb8);
              lVar17 = puVar12[4];
              if (lVar17 == 0) {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                }
                uVar16 = *puVar12;
                lVar17 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                FUN_03b706f0(lVar17,uVar16,
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<Response<QueryResponse>>_GetAwaiter__
                             ,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                *plVar8 = lVar17;
                LeanTween__value(plVar8,lVar17);
              }
              *(long *)(lVar7 + 0x60) = lVar17;
              LeanTween__value((long *)(lVar7 + 0x60),lVar17);
              if (lVar15 != 0) {
                FUN_044193fc(lVar15,lVar7,*(undefined8 *)puVar5);
                lVar7 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                puVar3 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_SetResult__;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = param_1;
                    LeanTween__value(plVar8,param_1);
                  }
                  else {
                    FUN_040101ec();
                  }
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_05f47e5c(uVar16,0);
                  lVar7 = *(long *)(unaff_x20 + 0x10);
                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                      puVar12 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar12 = uVar16;
                      LeanTween__value(puVar12,uVar16);
                    }
                    else {
                      FUN_040101ec();
                    }
                    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                              );
                    FUN_05f455a0(lVar7,0);
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x28) =
                           *(undefined8 *)
                            Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__;
                      LeanTween__value((undefined8 *)(lVar7 + 0x28));
                      lVar9 = *(long *)(lVar7 + 0x48);
                      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                      
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                 );
                      Unity_Services_Relay_RelayServiceException__set_Reason(lVar15,0);
                      puVar3 = Method_System_Threading_Tasks_Task<bool>__ctor__;
                      if (lVar15 != 0) {
                        *(undefined8 *)(lVar15 + 0x28) =
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<ISession>_GetAwaiter__;
                        LeanTween__value();
                        *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar3;
                        LeanTween__value();
                        puVar3 = PTR_DAT_069fda18;
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                        FUN_03b6efa0();
                        *(undefined8 *)(lVar15 + 0x48) = uVar16;
                        LeanTween__value((undefined8 *)(lVar15 + 0x48),uVar16);
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                        FUN_04bdbe64();
                        *(undefined8 *)(lVar15 + 0x50) = uVar16;
                        LeanTween__value((undefined8 *)(lVar15 + 0x50),uVar16);
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                        System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                  ();
                        *(undefined8 *)(lVar15 + 0x58) = uVar16;
                        LeanTween__value((undefined8 *)(lVar15 + 0x58),uVar16);
                        if (lVar9 != 0) {
                          FUN_044193fc(lVar9,lVar15,*(undefined8 *)puVar5);
                          lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                          FUN_05f455a0(lVar15,0);
                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                          FUN_03b6efa0();
                          puVar3 = Method_System_Span<byte>_Slice__;
                          if (lVar15 != 0) {
                            *(undefined8 *)(lVar15 + 0x40) = uVar16;
                            LeanTween__value((undefined8 *)(lVar15 + 0x40),uVar16);
                            lVar17 = *(long *)(lVar15 + 0x48);
                            lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                            FUN_05f391d0(lVar9,0);
                            puVar2 = 
                            Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                            ;
                            puVar4 = 
                            Method_System_Threading_Tasks_TaskCompletionSource<bool>_get_Task__;
                            puVar5 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                            puVar3 = PTR_DAT_069fc9b8;
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0x28) =
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_Task<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_ConfigureAwait__
                              ;
                              LeanTween__value();
                              *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar2;
                              LeanTween__value();
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                              FUN_03b6f874();
                              *(undefined8 *)(lVar9 + 0x48) = uVar16;
                              LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                              FUN_04bdefe4();
                              *(undefined8 *)(lVar9 + 0x50) = uVar16;
                              LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                              uVar16 = *(undefined8 *)puVar4;
                              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar16 = FUN_054f73b4(uVar16,0);
                              FUN_05f4760c(lVar9,uVar16,0);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                              FUN_03b6f874();
                              *(undefined8 *)(lVar9 + 0x80) = uVar16;
                              LeanTween__value((undefined8 *)(lVar9 + 0x80),uVar16);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                              FUN_04bdefe4();
                              *(undefined8 *)(lVar9 + 0x88) = uVar16;
                              LeanTween__value((undefined8 *)(lVar9 + 0x88),uVar16);
                              puVar5 = 
                              Method_System_Runtime_CompilerServices_TaskAwaiter<OVRTriangleMesh>_GetResult__
                              ;
                              puVar3 = PTR_DAT_06a11688;
                              if (lVar17 != 0) {
                                FUN_044193fc(lVar17,lVar9,*(undefined8 *)PTR_DAT_06a11688);
                                lVar17 = *(long *)(lVar15 + 0x48);
                                lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                        
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                FUN_05f46c04(lVar9,0);
                                puVar2 = Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                                puVar4 = 
                                Method_System_Threading_Tasks_Task<IPAddress[]>_GetAwaiter__;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<bool>_TrySetResult__;
                                  LeanTween__value();
                                  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar4;
                                  LeanTween__value();
                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                  FUN_03b706f0();
                                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                  LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                                  FUN_04be4edc();
                                  *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                  LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                                  lVar10 = *(long *)puVar5;
                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                    lVar10 = *(long *)puVar5;
                                  }
                                  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                  lVar18 = puVar12[5];
                                  if (lVar18 == 0) {
                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                    }
                                    uVar16 = *puVar12;
                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                    FUN_03b706f0(lVar18,uVar16,
                                                 *(undefined8 *)
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                                    *plVar8 = lVar18;
                                    LeanTween__value(plVar8,lVar18);
                                  }
                                  *(long *)(lVar9 + 0x60) = lVar18;
                                  LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                  lVar10 = *(long *)puVar5;
                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                    lVar10 = *(long *)puVar5;
                                  }
                                  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                  lVar18 = puVar12[6];
                                  if (lVar18 == 0) {
                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                    }
                                    uVar16 = *puVar12;
                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                    FUN_03b706f0(lVar18,uVar16,
                                                 *(undefined8 *)
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                                 ,0);
                                    plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                                    *plVar8 = lVar18;
                                    LeanTween__value(plVar8,lVar18);
                                  }
                                  *(long *)(lVar9 + 0x68) = lVar18;
                                  LeanTween__value((long *)(lVar9 + 0x68),lVar18);
                                  if (lVar17 != 0) {
                                    FUN_044193fc(lVar17,lVar9,*(undefined8 *)puVar3);
                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                    FUN_05f46c04(lVar9,0);
                                    puVar4 = 
                                    Method_System_Threading_Tasks_Task<IPAddress[]>_get_Factory__;
                                    if (lVar9 != 0) {
                                      *(undefined8 *)(lVar9 + 0x28) =
                                           *(undefined8 *)
                                            Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                      ;
                                      LeanTween__value();
                                      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar4;
                                      LeanTween__value();
                                      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                      FUN_03b706f0();
                                      *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                      LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                                      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                                      FUN_04be4edc();
                                      *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                      LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                                      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                      FUN_03b6efa0();
                                      *(undefined8 *)(lVar9 + 0x40) = uVar16;
                                      LeanTween__value((undefined8 *)(lVar9 + 0x40),uVar16);
                                      puVar4 = 
                                      Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                      ;
                                      if (*(long *)(lVar15 + 0x48) != 0) {
                                        FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                     *(undefined8 *)puVar3);
                                        lVar17 = *(long *)(lVar15 + 0x48);
                                        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                        FUN_05f46a98(lVar9,0);
                                        puVar3 = 
                                        Method_System_Threading_Tasks_Task<BufferOffsetSize>_ConfigureAwait__
                                        ;
                                        if (lVar9 != 0) {
                                          *(undefined8 *)(lVar9 + 0x28) =
                                               *(undefined8 *)
                                                Method_System_Threading_Tasks_Task<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetAwaiter__
                                          ;
                                          LeanTween__value();
                                          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar3;
                                          LeanTween__value();
                                          puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                          FUN_03b6f874();
                                          *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                          LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                       PTR_DAT_069fc9b8);
                                          FUN_04bdefe4();
                                          *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                          LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                                          lVar10 = *(long *)puVar5;
                                          if (*(int *)(lVar10 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                            lVar10 = *(long *)puVar5;
                                          }
                                          puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                          lVar18 = puVar12[7];
                                          if (lVar18 == 0) {
                                            if (*(int *)(lVar10 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                            }
                                            uVar16 = *puVar12;
                                            lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                            FUN_03b6f874(lVar18,uVar16,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                                                  ,0);
                                            plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                             0x38);
                                            *plVar8 = lVar18;
                                            LeanTween__value(plVar8,lVar18);
                                          }
                                          *(long *)(lVar9 + 0x60) = lVar18;
                                          LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                          FUN_03b6f874();
                                          *(undefined8 *)(lVar9 + 0x68) = uVar16;
                                          LeanTween__value((undefined8 *)(lVar9 + 0x68),uVar16);
                                          if (lVar17 != 0) {
                                            FUN_044193fc(lVar17,lVar9,
                                                         *(undefined8 *)PTR_DAT_06a11688);
                                            lVar17 = *(long *)(lVar15 + 0x48);
                                            lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                            FUN_05f46a98(lVar9,0);
                                            puVar3 = 
                                            Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                            ;
                                            if (lVar9 != 0) {
                                              *(undefined8 *)(lVar9 + 0x28) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                              ;
                                              LeanTween__value();
                                              *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar3;
                                              LeanTween__value();
                                              puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                      
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                              FUN_03b6f874();
                                              *(undefined8 *)(lVar9 + 0x48) = uVar16;
                                              LeanTween__value((undefined8 *)(lVar9 + 0x48),uVar16);
                                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                           PTR_DAT_069fc9b8);
                                              FUN_04bdefe4();
                                              *(undefined8 *)(lVar9 + 0x50) = uVar16;
                                              LeanTween__value((undefined8 *)(lVar9 + 0x50),uVar16);
                                              lVar10 = *(long *)puVar5;
                                              if (*(int *)(lVar10 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar10 = *(long *)puVar5;
                                              }
                                              puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                              lVar18 = puVar12[8];
                                              if (lVar18 == 0) {
                                                if (*(int *)(lVar10 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  puVar12 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar16 = *puVar12;
                                                lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                FUN_03b6f874(lVar18,uVar16,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task<ApiResponse<Player>>_GetAwaiter__
                                                  ,0);
                                                plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                 + 0x40);
                                                *plVar8 = lVar18;
                                                LeanTween__value(plVar8,lVar18);
                                              }
                                              puVar4 = PTR_DAT_069fda18;
                                              *(long *)(lVar9 + 0x60) = lVar18;
                                              LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                              FUN_03b6f874();
                                              *(undefined8 *)(lVar9 + 0x68) = uVar16;
                                              LeanTween__value((undefined8 *)(lVar9 + 0x68),uVar16);
                                              puVar3 = PTR_DAT_06a11688;
                                              if (lVar17 != 0) {
                                                FUN_044193fc(lVar17,lVar9,
                                                             *(undefined8 *)PTR_DAT_06a11688);
                                                if (*(long *)(lVar7 + 0x48) != 0) {
                                                  FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                               *(undefined8 *)puVar3);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar6 = 
                                                  Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x40) = uVar16;
                                                    LeanTween__value((undefined8 *)(lVar15 + 0x40),
                                                                     uVar16);
                                                    lVar17 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar9,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    LeanTween__value();
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)puVar4;
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
                                                    lVar10 = *(long *)puVar5;
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar10 = *(long *)puVar5;
                                                    }
                                                    puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                                    lVar18 = puVar12[9];
                                                    if (lVar18 == 0) {
                                                      if (*(int *)(lVar10 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                        puVar12 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar16 = *puVar12;
                                                      lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                   PTR_DAT_06a09180)
                                                      ;
                                                      FUN_03b706f0(lVar18,uVar16,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x48);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar12[10];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar18,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x50);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar18);
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar17 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3
                                                                              );
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar9,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar4;
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
                                                  puVar4 = PTR_DAT_06a11688;
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    if (*(long *)(lVar7 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                                   *(undefined8 *)puVar4);
                                                      lVar9 = *(long *)(lVar7 + 0x48);
                                                      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                   puVar3);
                                                                                                            
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar6 = 
                                                  Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__
                                                  ;
                                                  puVar4 = PTR_DAT_069fda18;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03b6efa0();
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x40) = uVar16;
                                                    LeanTween__value((undefined8 *)(lVar15 + 0x40),
                                                                     uVar16);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar9,0);
                                                  puVar4 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    LeanTween__value();
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)puVar4;
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
                                                    lVar17 = *(long *)puVar5;
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar17 = *(long *)puVar5;
                                                    }
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__
                                                  ;
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0xb];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x58);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  }
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  *(long *)(lVar9 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar13[0xc];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x60);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar10);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar9 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar9 + 0x40),
                                                                   uVar16);
                                                  if (*(long *)(lVar15 + 0x48) != 0) {
                                                    FUN_044193fc(*(long *)(lVar15 + 0x48),lVar9,
                                                                 *puVar12);
                                                    if (*(long *)(lVar7 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                                   *puVar12);
                                                      lVar9 = *(long *)(lVar7 + 0x48);
                                                      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                      
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>__ctor__;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a09180);
                                                  FUN_03b706f0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069feaa0);
                                                  FUN_04be4edc();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0xd];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x68);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  }
                                                  puVar2 = PTR_DAT_06a11688;
                                                  *(long *)(lVar15 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar10);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,*(undefined8 *)puVar2)
                                                    ;
                                                    lVar15 = *(long *)(unaff_x20 + 0x10);
                                                    lVar9 = *(long *)puVar4;
                                                    *(int *)(unaff_x20 + 0x1c) =
                                                         *(int *)(unaff_x20 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                        LeanTween__value();
                                                      }
                                                      else {
                                                        FUN_040101ec(unaff_x20,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x28));
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x58),
                                                                   uVar16);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = *(long *)(lVar7 + 0x48);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                                                                        
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                            ();
                                                  *(undefined8 *)(lVar15 + 0x58) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x58),
                                                                   uVar16);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar15 = *(long *)(unaff_x20 + 0x10);
                                                    lVar9 = *(long *)puVar4;
                                                    *(int *)(unaff_x20 + 0x1c) =
                                                         *(int *)(unaff_x20 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_069fda18;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar15 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar7;
                                                        LeanTween__value(plVar8,lVar7);
                                                      }
                                                      else {
                                                        FUN_040101ec(unaff_x20,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x40),
                                                                   uVar16);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar9 = *(long *)(lVar7 + 0x48);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar14[0xe];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar14;
                                                    lVar10 = thunk_FUN_02dd3144(*puVar12);
                                                    FUN_03b6efa0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x70);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar14[0xf];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar14;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x78);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar10);
                                                  if (lVar9 != 0) {
                                                    FUN_044193fc(lVar9,lVar15,*puVar13);
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  lVar9 = *(long *)puVar5;
                                                  if (*(int *)(lVar9 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar9 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
                                                  lVar17 = puVar13[0x10];
                                                  if (lVar17 == 0) {
                                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar17 = thunk_FUN_02dd3144(*puVar12);
                                                    FUN_03b6efa0(lVar17,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x80);
                                                  *plVar8 = lVar17;
                                                  LeanTween__value(plVar8,lVar17);
                                                  }
                                                  if (lVar15 != 0) {
                                                    *(long *)(lVar15 + 0x40) = lVar17;
                                                    LeanTween__value((long *)(lVar15 + 0x40),lVar17)
                                                    ;
                                                    lVar17 = *(long *)(lVar15 + 0x48);
                                                    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar9 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar13[0x11];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x88);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar18);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar13[0x12];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar18,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x90);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x50) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x50),lVar18);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar13[0x13];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0x98);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x60) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x60),lVar18);
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar13[0x14];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar18,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xa0);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x68) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x68),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar17 != 0) {
                                                    FUN_044193fc(lVar17,lVar9,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar7 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                                   *puVar13);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar11 = FUN_0630c920(0);
                                                      if ((uVar11 & 1) != 0) {
                                                        lVar9 = *(long *)(lVar7 + 0x48);
                                                        lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                     puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar15,0);
                                                  uVar16 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x40),
                                                                   uVar16);
                                                  lVar17 = *(long *)(lVar15 + 0x48);
                                                  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar9,0);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar9 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar10 = *(long *)puVar5;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar5;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                                                  lVar18 = puVar13[0x15];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar10 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar13;
                                                    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar18,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xa8);
                                                  *plVar8 = lVar18;
                                                  LeanTween__value(plVar8,lVar18);
                                                  puVar12 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar9 + 0x48) = lVar18;
                                                  LeanTween__value((long *)(lVar9 + 0x48),lVar18);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar17 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar17,lVar9,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar7 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar7 + 0x48),lVar15,
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar12);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  }
                                                  lVar15 = *(long *)(unaff_x20 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      LeanTween__value(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_040101ec(unaff_x20,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x28));
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x16];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar10,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xb0);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x17];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xb8);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x18];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar10,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xc0);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar10);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x19];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 200);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1a];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xd0);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1b];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xd8);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1c];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xe0);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x68),lVar10);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar15,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar15 + 0x80) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x80),
                                                                   uVar16);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar15 + 0x88) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x88),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar15 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar15 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar15 + 0x50),
                                                                   uVar16);
                                                  *(long *)(unaff_x19 + 0x208) = lVar15;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar15);
                                                  if (*(long *)(lVar7 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar7 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar13);
                                                  lVar9 = *(long *)(lVar7 + 0x48);
                                                  lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar15 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1d];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xe8);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x48) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x48),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1e];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xf0);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x50) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x50),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x1f];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8
                                                                             ) + 0xf8);
                                                  *plVar8 = lVar10;
                                                  LeanTween__value(plVar8,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x60) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x60),lVar10);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar10 = puVar12[0x20];
                                                  if (lVar10 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar16 = *puVar12;
                                                    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar10,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar17 = *(long *)(*(long *)puVar5 + 0xb8);
                                                  *(long *)(lVar17 + 0x100) = lVar10;
                                                  LeanTween__value(lVar17 + 0x100,lVar10);
                                                  puVar13 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar15 + 0x68) = lVar10;
                                                  LeanTween__value((long *)(lVar15 + 0x68),lVar10);
                                                  if (lVar9 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar9,lVar15,*puVar13);
                                                  lVar15 = *(long *)(unaff_x20 + 0x10);
                                                  lVar9 = *(long *)puVar4;
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar15 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                    plVar8 = (long *)(lVar15 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar8 = lVar7;
                                                    LeanTween__value(plVar8,lVar7);
                                                  }
                                                  else {
                                                    FUN_040101ec(unaff_x20,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
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
                                                  lVar7 = FUN_05f37ac4(0);
                                                  lVar15 = *(long *)puVar5;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar15);
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


