/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$OnAccessTokenChanged
ENTRY_POINT: 05f57238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_19
*/


void Unity_Services_Multiplayer_LobbyHandler__OnAccessTokenChanged(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar11;
  long unaff_x23;
  long lVar12;
  long unaff_x24;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x26;
  undefined8 uVar16;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  puVar8 = *(undefined8 **)(param_1 + 0xb8);
  lVar13 = puVar8[8];
  puVar9 = *(undefined8 **)(unaff_x26 + 0xa18);
  if (lVar13 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar16 = *puVar8;
    lVar13 = thunk_FUN_02dd3144(*unaff_x21);
    FUN_03b6f874(lVar13,uVar16,
                 *(undefined8 *)Method_System_Threading_Tasks_Task<ApiResponse<Player>>_GetAwaiter__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x40);
    *plVar5 = lVar13;
    LeanTween__value(plVar5,lVar13);
    puVar9 = (undefined8 *)PTR_DAT_069fda18;
  }
  *(long *)(unaff_x24 + 0x60) = lVar13;
  LeanTween__value((long *)(unaff_x24 + 0x60),lVar13);
  uVar16 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03b6f874();
  *(undefined8 *)(unaff_x24 + 0x68) = uVar16;
  LeanTween__value((undefined8 *)(unaff_x24 + 0x68),uVar16);
  if (unaff_x23 != 0) {
    FUN_044193fc();
    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
      FUN_044193fc();
      puVar3 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__;
      lVar11 = *(long *)(in_stack_00000008 + 0x48);
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                 );
      Unity_Services_Relay_RelayServiceException__set_Reason(lVar13,0);
      puVar4 = Method_System_Threading_Tasks_Task<Response<QosServersResponseBody>>_GetAwaiter__;
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x28) =
             *(undefined8 *)
              Method_System_Threading_Tasks_Task<Response<StoredMatchmakingResults>>_GetAwaiter__;
        LeanTween__value();
        *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar4;
        LeanTween__value();
        uVar16 = thunk_FUN_02dd3144(*puVar9);
        FUN_03b6efa0();
        *(undefined8 *)(lVar13 + 0x48) = uVar16;
        LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
        FUN_04bdbe64();
        *(undefined8 *)(lVar13 + 0x50) = uVar16;
        LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
        if (lVar11 != 0) {
          FUN_044193fc(lVar11,lVar13,*(undefined8 *)PTR_DAT_06a11688);
          lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                     );
          FUN_05f455a0(lVar13,0);
          uVar16 = thunk_FUN_02dd3144(*puVar9);
          FUN_03b6efa0();
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x40) = uVar16;
            LeanTween__value((undefined8 *)(lVar13 + 0x40),uVar16);
            lVar12 = *(long *)(lVar13 + 0x48);
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                       );
            FUN_05f46c04(lVar11,0);
            puVar4 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x28) = *unaff_x28;
              LeanTween__value();
              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar4;
              LeanTween__value();
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
              FUN_03b706f0();
              *(undefined8 *)(lVar11 + 0x48) = uVar16;
              LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar16);
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
              FUN_04be4edc();
              *(undefined8 *)(lVar11 + 0x50) = uVar16;
              LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar16);
              lVar6 = *unaff_x29;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar6 = *unaff_x29;
              }
              puVar9 = *(undefined8 **)(lVar6 + 0xb8);
              lVar14 = puVar9[9];
              if (lVar14 == 0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                }
                uVar16 = *puVar9;
                lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                FUN_03b706f0(lVar14,uVar16,
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__
                             ,0);
                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x48);
                *plVar5 = lVar14;
                LeanTween__value(plVar5,lVar14);
              }
              *(long *)(lVar11 + 0x60) = lVar14;
              LeanTween__value((long *)(lVar11 + 0x60),lVar14);
              lVar6 = *unaff_x29;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar6 = *unaff_x29;
              }
              puVar9 = *(undefined8 **)(lVar6 + 0xb8);
              lVar14 = puVar9[10];
              if (lVar14 == 0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                }
                uVar16 = *puVar9;
                lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                FUN_03b706f0(lVar14,uVar16,
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__
                             ,0);
                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x50);
                *plVar5 = lVar14;
                LeanTween__value(plVar5,lVar14);
              }
              *(long *)(lVar11 + 0x68) = lVar14;
              LeanTween__value((long *)(lVar11 + 0x68),lVar14);
              if (lVar12 != 0) {
                FUN_044193fc(lVar12,lVar11,*(undefined8 *)PTR_DAT_06a11688);
                lVar12 = *(long *)(lVar13 + 0x48);
                lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                Unity_Services_Relay_RelayServiceException__set_Reason(lVar11,0);
                puVar4 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
                if (lVar11 != 0) {
                  *(undefined8 *)(lVar11 + 0x28) =
                       *(undefined8 *)Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__;
                  LeanTween__value();
                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar4;
                  LeanTween__value();
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                  FUN_03b6efa0();
                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                  LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar16);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                  FUN_04bdbe64();
                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                  LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar16);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                             );
                  System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                            ();
                  *(undefined8 *)(lVar11 + 0x58) = uVar16;
                  LeanTween__value((undefined8 *)(lVar11 + 0x58),uVar16);
                  puVar4 = PTR_DAT_06a11688;
                  if (lVar12 != 0) {
                    FUN_044193fc(lVar12,lVar11,*(undefined8 *)PTR_DAT_06a11688);
                    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                      FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar13,*(undefined8 *)puVar4)
                      ;
                      lVar11 = *(long *)(in_stack_00000008 + 0x48);
                      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                      Unity_Services_Relay_RelayServiceException__set_Reason(lVar13,0);
                      puVar2 = Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__;
                      puVar4 = PTR_DAT_069fda18;
                      if (lVar13 != 0) {
                        *(undefined8 *)(lVar13 + 0x28) =
                             *(undefined8 *)
                              Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
                        LeanTween__value();
                        *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar2;
                        LeanTween__value();
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                        FUN_03b6efa0();
                        *(undefined8 *)(lVar13 + 0x48) = uVar16;
                        LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                        FUN_04bdbe64();
                        *(undefined8 *)(lVar13 + 0x50) = uVar16;
                        LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                        if (lVar11 != 0) {
                          FUN_044193fc(lVar11,lVar13,*(undefined8 *)PTR_DAT_06a11688);
                          lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                          FUN_05f455a0(lVar13,0);
                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                          FUN_03b6efa0();
                          if (lVar13 != 0) {
                            *(undefined8 *)(lVar13 + 0x40) = uVar16;
                            LeanTween__value((undefined8 *)(lVar13 + 0x40),uVar16);
                            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                            FUN_05f46c04(lVar11,0);
                            puVar4 = 
                            Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                            if (lVar11 != 0) {
                              *(undefined8 *)(lVar11 + 0x28) = *unaff_x28;
                              LeanTween__value();
                              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar4;
                              LeanTween__value();
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                              FUN_03b706f0();
                              *(undefined8 *)(lVar11 + 0x48) = uVar16;
                              LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar16);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                              FUN_04be4edc();
                              *(undefined8 *)(lVar11 + 0x50) = uVar16;
                              LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar16);
                              lVar12 = *unaff_x29;
                              if (*(int *)(lVar12 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar12 = *unaff_x29;
                              }
                              puVar4 = 
                              Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
                              puVar9 = *(undefined8 **)(lVar12 + 0xb8);
                              lVar6 = puVar9[0xb];
                              if (lVar6 == 0) {
                                if (*(int *)(lVar12 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                }
                                uVar16 = *puVar9;
                                lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                FUN_03b706f0(lVar6,uVar16,
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                             ,0);
                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x58);
                                *plVar5 = lVar6;
                                LeanTween__value(plVar5,lVar6);
                              }
                              puVar9 = (undefined8 *)PTR_DAT_06a11688;
                              *(long *)(lVar11 + 0x60) = lVar6;
                              LeanTween__value((long *)(lVar11 + 0x60),lVar6);
                              lVar12 = *unaff_x29;
                              if (*(int *)(lVar12 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar12 = *unaff_x29;
                              }
                              puVar8 = *(undefined8 **)(lVar12 + 0xb8);
                              lVar6 = puVar8[0xc];
                              if (lVar6 == 0) {
                                if (*(int *)(lVar12 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                  puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                }
                                uVar16 = *puVar8;
                                lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                FUN_03b706f0(lVar6,uVar16,
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                             ,0);
                                plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x60);
                                *plVar5 = lVar6;
                                LeanTween__value(plVar5,lVar6);
                                puVar9 = (undefined8 *)PTR_DAT_06a11688;
                              }
                              *(long *)(lVar11 + 0x68) = lVar6;
                              LeanTween__value((long *)(lVar11 + 0x68),lVar6);
                              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                              FUN_03b6efa0();
                              *(undefined8 *)(lVar11 + 0x40) = uVar16;
                              LeanTween__value((undefined8 *)(lVar11 + 0x40),uVar16);
                              if (*(long *)(lVar13 + 0x48) != 0) {
                                FUN_044193fc(*(long *)(lVar13 + 0x48),lVar11,*puVar9);
                                if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                                  FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar13,*puVar9);
                                  lVar11 = *(long *)(in_stack_00000008 + 0x48);
                                  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                  FUN_05f46c04(lVar13,0);
                                  puVar2 = 
                                  Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                                  ;
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Threading_Tasks_Task<bool>__ctor__;
                                    LeanTween__value();
                                    *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar2;
                                    LeanTween__value();
                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                    FUN_03b706f0();
                                    *(undefined8 *)(lVar13 + 0x48) = uVar16;
                                    LeanTween__value((undefined8 *)(lVar13 + 0x48),uVar16);
                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                                    FUN_04be4edc();
                                    *(undefined8 *)(lVar13 + 0x50) = uVar16;
                                    LeanTween__value((undefined8 *)(lVar13 + 0x50),uVar16);
                                    lVar12 = *unaff_x29;
                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      lVar12 = *unaff_x29;
                                    }
                                    puVar9 = *(undefined8 **)(lVar12 + 0xb8);
                                    lVar6 = puVar9[0xd];
                                    if (lVar6 == 0) {
                                      if (*(int *)(lVar12 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                      }
                                      uVar16 = *puVar9;
                                      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                                      FUN_03b706f0(lVar6,uVar16,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                                  ,0);
                                      plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                                      *plVar5 = lVar6;
                                      LeanTween__value(plVar5,lVar6);
                                    }
                                    puVar2 = PTR_DAT_06a11688;
                                    *(long *)(lVar13 + 0x60) = lVar6;
                                    LeanTween__value((long *)(lVar13 + 0x60),lVar6);
                                    if (lVar11 != 0) {
                                      FUN_044193fc(lVar11,lVar13,*(undefined8 *)puVar2);
                                      lVar13 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar13 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                               in_stack_00000008;
                                          LeanTween__value();
                                        }
                                        else {
                                          FUN_040101ec();
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
                                          lVar12 = *(long *)(lVar13 + 0x48);
                                          lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                          Unity_Services_Relay_RelayServiceException__set_Reason
                                                    (lVar11,0);
                                          puVar2 = 
                                          Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                          ;
                                          if (lVar11 != 0) {
                                            *(undefined8 *)(lVar11 + 0x28) =
                                                 *(undefined8 *)
                                                  Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                            ;
                                            LeanTween__value();
                                            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar2;
                                            LeanTween__value();
                                            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                         PTR_DAT_069fda18);
                                            FUN_03b6efa0();
                                            *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar16);
                                            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                         PTR_DAT_069fe458);
                                            FUN_04bdbe64();
                                            *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar11 + 0x50),uVar16);
                                            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                            System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                      ();
                                            *(undefined8 *)(lVar11 + 0x58) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar11 + 0x58),uVar16);
                                            if (lVar12 != 0) {
                                              FUN_044193fc(lVar12,lVar11,
                                                           *(undefined8 *)PTR_DAT_06a11688);
                                              lVar12 = *(long *)(lVar13 + 0x48);
                                              lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                              Unity_Services_Relay_RelayServiceException__set_Reason
                                                        (lVar11,0);
                                              puVar3 = 
                                              Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                              ;
                                              if (lVar11 != 0) {
                                                *(undefined8 *)(lVar11 + 0x28) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                                ;
                                                LeanTween__value();
                                                *(undefined8 *)(lVar11 + 0x30) =
                                                     *(undefined8 *)puVar3;
                                                LeanTween__value();
                                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_069fda18);
                                                FUN_03b6efa0();
                                                *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                 uVar16);
                                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_069fe458);
                                                FUN_04bdbe64();
                                                *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                 uVar16);
                                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                                System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                          ();
                                                *(undefined8 *)(lVar11 + 0x58) = uVar16;
                                                LeanTween__value((undefined8 *)(lVar11 + 0x58),
                                                                 uVar16);
                                                if (lVar12 != 0) {
                                                  FUN_044193fc(lVar12,lVar11,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  puVar3 = PTR_DAT_069fda18;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar5 = lVar13;
                                                      LeanTween__value(plVar5,lVar13);
                                                    }
                                                    else {
                                                      FUN_040101ec();
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
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar13 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar13 + 0x40),
                                                                   uVar16);
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  if (lVar12 != 0) {
                                                    FUN_044193fc(lVar12,lVar11,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    lVar12 = *(long *)(lVar13 + 0x48);
                                                    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar12 != 0) {
                                                    FUN_044193fc(lVar12,lVar11,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar10[0xe];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar14 = thunk_FUN_02dd3144(*puVar9);
                                                    FUN_03b6efa0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x70);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x48) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x48),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar10[0xf];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x78);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x50) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x50),lVar14);
                                                  if (lVar12 != 0) {
                                                    FUN_044193fc(lVar12,lVar11,*puVar8);
                                                    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar11,0);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar6 = puVar8[0x10];
                                                  if (lVar6 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar6 = thunk_FUN_02dd3144(*puVar9);
                                                    FUN_03b6efa0(lVar6,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x80);
                                                  *plVar5 = lVar6;
                                                  LeanTween__value(plVar5,lVar6);
                                                  }
                                                  if (lVar11 != 0) {
                                                    *(long *)(lVar11 + 0x40) = lVar6;
                                                    LeanTween__value((long *)(lVar11 + 0x40),lVar6);
                                                    lVar6 = *(long *)(lVar11 + 0x48);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar12,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar12 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar8[0x11];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x88);
                                                  *plVar5 = lVar15;
                                                  LeanTween__value(plVar5,lVar15);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar12 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar12 + 0x48),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar8[0x12];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar15,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x90);
                                                  *plVar5 = lVar15;
                                                  LeanTween__value(plVar5,lVar15);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar12 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar12 + 0x50),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar8[0x13];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x98);
                                                  *plVar5 = lVar15;
                                                  LeanTween__value(plVar5,lVar15);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar12 + 0x60) = lVar15;
                                                  LeanTween__value((long *)(lVar12 + 0x60),lVar15);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar8[0x14];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa0);
                                                  *plVar5 = lVar15;
                                                  LeanTween__value(plVar5,lVar15);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar12 + 0x68) = lVar15;
                                                  LeanTween__value((long *)(lVar12 + 0x68),lVar15);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar6 != 0) {
                                                    FUN_044193fc(lVar6,lVar12,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar13 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar13 + 0x48),lVar11,
                                                                   *puVar8);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar7 = FUN_0630c920(0);
                                                      if ((uVar7 & 1) != 0) {
                                                        lVar12 = *(long *)(lVar13 + 0x48);
                                                        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                     puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar11,0);
                                                  uVar16 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x40),
                                                                   uVar16);
                                                  lVar6 = *(long *)(lVar11 + 0x48);
                                                  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar12,0);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar12 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar8 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar15 = puVar8[0x15];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar8 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar8;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar15,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa8);
                                                  *plVar5 = lVar15;
                                                  LeanTween__value(plVar5,lVar15);
                                                  puVar9 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar12 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar12 + 0x48),lVar15);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar6 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar6,lVar12,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar13 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar13 + 0x48),lVar11,
                                                               *puVar8);
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar9);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  }
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar5 = lVar13;
                                                      LeanTween__value(plVar5,lVar13);
                                                    }
                                                    else {
                                                      FUN_040101ec();
                                                    }
                                                    if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                      uVar16 = *(undefined8 *)(unaff_x19 + 0x148);
                                                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar7 = FUN_0634eb94(uVar16,0,0);
                                                      if ((uVar7 & 1) != 0) {
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
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x16];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar14,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb0);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x48) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x48),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x17];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb8);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x50) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x50),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x18];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar14,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xc0);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x60) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x60),lVar14);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x19];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   200);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x48) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x48),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1a];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd0);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x50) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x50),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1b];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd8);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x60) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x60),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1c];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe0);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x68) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x68),lVar14);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar11 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar11,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar11 + 0x80) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x80),
                                                                   uVar16);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar11 + 0x88) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x88),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar11 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar11 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar11 + 0x50),
                                                                   uVar16);
                                                  *(long *)(unaff_x19 + 0x208) = lVar11;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar11);
                                                  if (*(long *)(lVar13 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar13 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar8);
                                                  lVar12 = *(long *)(lVar13 + 0x48);
                                                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar11,0);
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar11 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1d];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe8);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x48) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x48),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1e];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf0);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x50) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x50),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x1f];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar5 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf8);
                                                  *plVar5 = lVar14;
                                                  LeanTween__value(plVar5,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x60) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x60),lVar14);
                                                  lVar6 = *unaff_x29;
                                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar6 = *unaff_x29;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
                                                  lVar14 = puVar9[0x20];
                                                  if (lVar14 == 0) {
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar9 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar9;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar14,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar6 = *(long *)(*unaff_x29 + 0xb8);
                                                  *(long *)(lVar6 + 0x100) = lVar14;
                                                  LeanTween__value(lVar6 + 0x100,lVar14);
                                                  puVar8 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar11 + 0x68) = lVar14;
                                                  LeanTween__value((long *)(lVar11 + 0x68),lVar14);
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar11,*puVar8);
                                                  lVar11 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar12 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  unaff_x20 = in_stack_00000000;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar11 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar5 = lVar13;
                                                    LeanTween__value(plVar5,lVar13);
                                                  }
                                                  else {
                                                    FUN_040101ec(in_stack_00000000,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar4 = 
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
                                                  lVar13 = FUN_05f37ac4(0);
                                                  lVar11 = *(long *)puVar4;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar11);
                                                  }
                                                  if (((lVar13 == 0) ||
                                                      (lVar13 = FUN_05f37bfc(lVar13,*(undefined8 *)
                                                                                     (*(long *)(*(
                                                  long *)puVar4 + 0xb8) + 0x10),1,0,0,0),
                                                  lVar13 == 0)) || (*(long *)(lVar13 + 0x28) == 0))
                                                  goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar13 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar13 = FUN_05f37ac4(0);
                                                  if (lVar13 != 0) {
                                                    FUN_05f37b50(lVar13,*(undefined8 *)
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


