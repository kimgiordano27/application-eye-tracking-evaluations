/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$RunScheduledHeartbeat
ENTRY_POINT: 05f573e4
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


void Unity_Services_Multiplayer_LobbyHandler__RunScheduledHeartbeat(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_044193fc();
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__);
  FUN_05f455a0(lVar5,0);
  uVar6 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_03b6efa0();
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x40) = uVar6;
    LeanTween__value((undefined8 *)(lVar5 + 0x40),uVar6);
    lVar14 = *(long *)(lVar5 + 0x48);
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                              );
    FUN_05f46c04(lVar7,0);
    puVar4 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x28) = *unaff_x28;
      LeanTween__value();
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
      LeanTween__value();
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
      FUN_03b706f0();
      *(undefined8 *)(lVar7 + 0x48) = uVar6;
      LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
      FUN_04be4edc();
      *(undefined8 *)(lVar7 + 0x50) = uVar6;
      LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6);
      lVar8 = *unaff_x29;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *unaff_x29;
      }
      puVar11 = *(undefined8 **)(lVar8 + 0xb8);
      lVar15 = puVar11[9];
      if (lVar15 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
        }
        uVar6 = *puVar11;
        lVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
        FUN_03b706f0(lVar15,uVar6,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_Task<Dictionary<string,_Item>>_GetAwaiter__,0);
        plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x48);
        *plVar9 = lVar15;
        LeanTween__value(plVar9,lVar15);
      }
      *(long *)(lVar7 + 0x60) = lVar15;
      LeanTween__value((long *)(lVar7 + 0x60),lVar15);
      lVar8 = *unaff_x29;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *unaff_x29;
      }
      puVar11 = *(undefined8 **)(lVar8 + 0xb8);
      lVar15 = puVar11[10];
      if (lVar15 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
        }
        uVar6 = *puVar11;
        lVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
        FUN_03b706f0(lVar15,uVar6,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__,0)
        ;
        plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x50);
        *plVar9 = lVar15;
        LeanTween__value(plVar9,lVar15);
      }
      *(long *)(lVar7 + 0x68) = lVar15;
      LeanTween__value((long *)(lVar7 + 0x68),lVar15);
      if (lVar14 != 0) {
        FUN_044193fc(lVar14,lVar7,*(undefined8 *)PTR_DAT_06a11688);
        lVar14 = *(long *)(lVar5 + 0x48);
        lVar7 = thunk_FUN_02dd3144(*unaff_x27);
        Unity_Services_Relay_RelayServiceException__set_Reason(lVar7,0);
        puVar4 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x28) =
               *(undefined8 *)Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__;
          LeanTween__value();
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
          LeanTween__value();
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
          FUN_03b6efa0();
          *(undefined8 *)(lVar7 + 0x48) = uVar6;
          LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
          FUN_04bdbe64();
          *(undefined8 *)(lVar7 + 0x50) = uVar6;
          LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6);
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                    );
          System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                    ();
          *(undefined8 *)(lVar7 + 0x58) = uVar6;
          LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar6);
          puVar4 = PTR_DAT_06a11688;
          if (lVar14 != 0) {
            FUN_044193fc(lVar14,lVar7,*(undefined8 *)PTR_DAT_06a11688);
            if (*(long *)(in_stack_00000008 + 0x48) != 0) {
              FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar5,*(undefined8 *)puVar4);
              lVar7 = *(long *)(in_stack_00000008 + 0x48);
              lVar5 = thunk_FUN_02dd3144(*unaff_x27);
              Unity_Services_Relay_RelayServiceException__set_Reason(lVar5,0);
              puVar3 = Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__;
              puVar4 = PTR_DAT_069fda18;
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x28) =
                     *(undefined8 *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
                LeanTween__value();
                *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar3;
                LeanTween__value();
                uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                FUN_03b6efa0();
                *(undefined8 *)(lVar5 + 0x48) = uVar6;
                LeanTween__value((undefined8 *)(lVar5 + 0x48),uVar6);
                uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                FUN_04bdbe64();
                *(undefined8 *)(lVar5 + 0x50) = uVar6;
                LeanTween__value((undefined8 *)(lVar5 + 0x50),uVar6);
                if (lVar7 != 0) {
                  FUN_044193fc(lVar7,lVar5,*(undefined8 *)PTR_DAT_06a11688);
                  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                              Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                            );
                  FUN_05f455a0(lVar5,0);
                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                  FUN_03b6efa0();
                  if (lVar5 != 0) {
                    *(undefined8 *)(lVar5 + 0x40) = uVar6;
                    LeanTween__value((undefined8 *)(lVar5 + 0x40),uVar6);
                    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                              );
                    FUN_05f46c04(lVar7,0);
                    puVar4 = Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x28) = *unaff_x28;
                      LeanTween__value();
                      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
                      LeanTween__value();
                      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                      FUN_03b706f0();
                      *(undefined8 *)(lVar7 + 0x48) = uVar6;
                      LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6);
                      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                      FUN_04be4edc();
                      *(undefined8 *)(lVar7 + 0x50) = uVar6;
                      LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6);
                      lVar14 = *unaff_x29;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar14 = *unaff_x29;
                      }
                      puVar4 = Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
                      puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                      lVar8 = puVar11[0xb];
                      if (lVar8 == 0) {
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                        }
                        uVar6 = *puVar11;
                        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                        FUN_03b706f0(lVar8,uVar6,
                                     *(undefined8 *)
                                      Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                     ,0);
                        plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x58);
                        *plVar9 = lVar8;
                        LeanTween__value(plVar9,lVar8);
                      }
                      puVar11 = (undefined8 *)PTR_DAT_06a11688;
                      *(long *)(lVar7 + 0x60) = lVar8;
                      LeanTween__value((long *)(lVar7 + 0x60),lVar8);
                      lVar14 = *unaff_x29;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar14 = *unaff_x29;
                      }
                      puVar12 = *(undefined8 **)(lVar14 + 0xb8);
                      lVar8 = puVar12[0xc];
                      if (lVar8 == 0) {
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                        }
                        uVar6 = *puVar12;
                        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                        FUN_03b706f0(lVar8,uVar6,
                                     *(undefined8 *)
                                      Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                     ,0);
                        plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x60);
                        *plVar9 = lVar8;
                        LeanTween__value(plVar9,lVar8);
                        puVar11 = (undefined8 *)PTR_DAT_06a11688;
                      }
                      *(long *)(lVar7 + 0x68) = lVar8;
                      LeanTween__value((long *)(lVar7 + 0x68),lVar8);
                      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                      FUN_03b6efa0();
                      *(undefined8 *)(lVar7 + 0x40) = uVar6;
                      LeanTween__value((undefined8 *)(lVar7 + 0x40),uVar6);
                      if (*(long *)(lVar5 + 0x48) != 0) {
                        FUN_044193fc(*(long *)(lVar5 + 0x48),lVar7,*puVar11);
                        if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                          FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar5,*puVar11);
                          lVar7 = *(long *)(in_stack_00000008 + 0x48);
                          lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                          FUN_05f46c04(lVar5,0);
                          puVar3 = 
                          Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                          ;
                          if (lVar5 != 0) {
                            *(undefined8 *)(lVar5 + 0x28) =
                                 *(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__;
                            LeanTween__value();
                            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar3;
                            LeanTween__value();
                            uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                            FUN_03b706f0();
                            *(undefined8 *)(lVar5 + 0x48) = uVar6;
                            LeanTween__value((undefined8 *)(lVar5 + 0x48),uVar6);
                            uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                            FUN_04be4edc();
                            *(undefined8 *)(lVar5 + 0x50) = uVar6;
                            LeanTween__value((undefined8 *)(lVar5 + 0x50),uVar6);
                            lVar14 = *unaff_x29;
                            if (*(int *)(lVar14 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                              lVar14 = *unaff_x29;
                            }
                            puVar11 = *(undefined8 **)(lVar14 + 0xb8);
                            lVar8 = puVar11[0xd];
                            if (lVar8 == 0) {
                              if (*(int *)(lVar14 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                              }
                              uVar6 = *puVar11;
                              lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                              FUN_03b706f0(lVar8,uVar6,
                                           *(undefined8 *)
                                            Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                           ,0);
                              plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                              *plVar9 = lVar8;
                              LeanTween__value(plVar9,lVar8);
                            }
                            puVar3 = PTR_DAT_06a11688;
                            *(long *)(lVar5 + 0x60) = lVar8;
                            LeanTween__value((long *)(lVar5 + 0x60),lVar8);
                            if (lVar7 != 0) {
                              FUN_044193fc(lVar7,lVar5,*(undefined8 *)puVar3);
                              lVar5 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008
                                  ;
                                  LeanTween__value();
                                }
                                else {
                                  FUN_040101ec();
                                }
                                lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                FUN_05f455a0(lVar5,0);
                                if (lVar5 != 0) {
                                  *(undefined8 *)(lVar5 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                  ;
                                  LeanTween__value((undefined8 *)(lVar5 + 0x28));
                                  lVar14 = *(long *)(lVar5 + 0x48);
                                  lVar7 = thunk_FUN_02dd3144(*unaff_x27);
                                  Unity_Services_Relay_RelayServiceException__set_Reason(lVar7,0);
                                  puVar3 = 
                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                  ;
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                    ;
                                    LeanTween__value();
                                    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar3;
                                    LeanTween__value();
                                    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                    FUN_03b6efa0();
                                    *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                    LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6);
                                    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                    FUN_04bdbe64();
                                    *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                    LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6);
                                    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                    System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                              ();
                                    *(undefined8 *)(lVar7 + 0x58) = uVar6;
                                    LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar6);
                                    if (lVar14 != 0) {
                                      FUN_044193fc(lVar14,lVar7,*(undefined8 *)PTR_DAT_06a11688);
                                      lVar14 = *(long *)(lVar5 + 0x48);
                                      lVar7 = thunk_FUN_02dd3144(*unaff_x27);
                                      Unity_Services_Relay_RelayServiceException__set_Reason
                                                (lVar7,0);
                                      puVar3 = 
                                      Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                      ;
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x28) =
                                             *(undefined8 *)
                                              Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                        ;
                                        LeanTween__value();
                                        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar3;
                                        LeanTween__value();
                                        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                        FUN_03b6efa0();
                                        *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                        LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6);
                                        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                        FUN_04bdbe64();
                                        *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                        LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6);
                                        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                        System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                                  ();
                                        *(undefined8 *)(lVar7 + 0x58) = uVar6;
                                        LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar6);
                                        if (lVar14 != 0) {
                                          FUN_044193fc(lVar14,lVar7,*(undefined8 *)PTR_DAT_06a11688)
                                          ;
                                          lVar7 = *(long *)(unaff_x20 + 0x10);
                                          *(int *)(unaff_x20 + 0x1c) =
                                               *(int *)(unaff_x20 + 0x1c) + 1;
                                          puVar3 = PTR_DAT_069fda18;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                              plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar9 = lVar5;
                                              LeanTween__value(plVar9,lVar5);
                                            }
                                            else {
                                              FUN_040101ec();
                                            }
                                            lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                            FUN_05f455a0(lVar5,0);
                                            if (lVar5 != 0) {
                                              *(undefined8 *)(lVar5 + 0x28) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                              ;
                                              LeanTween__value();
                                              uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                              FUN_03b6efa0();
                                              *(undefined8 *)(lVar5 + 0x40) = uVar6;
                                              LeanTween__value((undefined8 *)(lVar5 + 0x40),uVar6);
                                              lVar14 = *(long *)(lVar5 + 0x48);
                                              lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                              Unity_Services_Relay_RelayServiceException__set_Reason
                                                        (lVar7,0);
                                              puVar2 = 
                                              Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                              ;
                                              if (lVar7 != 0) {
                                                *(undefined8 *)(lVar7 + 0x28) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                                ;
                                                LeanTween__value();
                                                *(undefined8 *)(lVar7 + 0x30) =
                                                     *(undefined8 *)puVar2;
                                                LeanTween__value();
                                                uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                FUN_03b6efa0();
                                                *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar6)
                                                ;
                                                uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                            PTR_DAT_069fe458);
                                                FUN_04bdbe64();
                                                *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar6)
                                                ;
                                                if (lVar14 != 0) {
                                                  FUN_044193fc(lVar14,lVar7,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fda18);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar6);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar14 != 0) {
                                                    FUN_044193fc(lVar14,lVar7,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar7,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar13[0xe];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar13;
                                                    lVar15 = thunk_FUN_02dd3144(*puVar11);
                                                    FUN_03b6efa0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x70);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x48),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar13 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar13[0xf];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar13 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar13;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x78);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x50),lVar15);
                                                  if (lVar14 != 0) {
                                                    FUN_044193fc(lVar14,lVar7,*puVar12);
                                                    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  lVar14 = *unaff_x29;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar14 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar14 + 0xb8);
                                                  lVar8 = puVar12[0x10];
                                                  if (lVar8 == 0) {
                                                    if (*(int *)(lVar14 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar8 = thunk_FUN_02dd3144(*puVar11);
                                                    FUN_03b6efa0(lVar8,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x80);
                                                  *plVar9 = lVar8;
                                                  LeanTween__value(plVar9,lVar8);
                                                  }
                                                  if (lVar7 != 0) {
                                                    *(long *)(lVar7 + 0x40) = lVar8;
                                                    LeanTween__value((long *)(lVar7 + 0x40),lVar8);
                                                    lVar8 = *(long *)(lVar7 + 0x48);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar14,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar14 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x11];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar16,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x88);
                                                  *plVar9 = lVar16;
                                                  LeanTween__value(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar16;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar16);
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x12];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar16,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x90);
                                                  *plVar9 = lVar16;
                                                  LeanTween__value(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar14 + 0x50) = lVar16;
                                                  LeanTween__value((long *)(lVar14 + 0x50),lVar16);
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x13];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar16,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x98);
                                                  *plVar9 = lVar16;
                                                  LeanTween__value(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar14 + 0x60) = lVar16;
                                                  LeanTween__value((long *)(lVar14 + 0x60),lVar16);
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x14];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar16,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa0);
                                                  *plVar9 = lVar16;
                                                  LeanTween__value(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar14 + 0x68) = lVar16;
                                                  LeanTween__value((long *)(lVar14 + 0x68),lVar16);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar8 != 0) {
                                                    FUN_044193fc(lVar8,lVar14,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar5 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar5 + 0x48),lVar7,
                                                                   *puVar12);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar10 = FUN_0630c920(0);
                                                      if ((uVar10 & 1) != 0) {
                                                        lVar14 = *(long *)(lVar5 + 0x48);
                                                        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                    puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar6 = thunk_FUN_02dd3144(*puVar11);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar6);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar7,0);
                                                  uVar6 = thunk_FUN_02dd3144(*puVar11);
                                                  FUN_03b6efa0();
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x40) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x40),
                                                                   uVar6);
                                                  lVar8 = *(long *)(lVar7 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar15 = *unaff_x29;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar15 = *unaff_x29;
                                                  }
                                                  puVar12 = *(undefined8 **)(lVar15 + 0xb8);
                                                  lVar16 = puVar12[0x15];
                                                  if (lVar16 == 0) {
                                                    if (*(int *)(lVar15 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar12 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar12;
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar16,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa8);
                                                  *plVar9 = lVar16;
                                                  LeanTween__value(plVar9,lVar16);
                                                  puVar11 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar16;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar16);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar5 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar5 + 0x48),lVar7,
                                                               *puVar12);
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar6 = thunk_FUN_02dd3144(*puVar11);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar6);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar6 = thunk_FUN_02dd3144(*puVar11);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar6);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  }
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar9 = lVar5;
                                                      LeanTween__value(plVar9,lVar5);
                                                    }
                                                    else {
                                                      FUN_040101ec();
                                                    }
                                                    if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                      uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
                                                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar10 = FUN_0634eb94(uVar6,0,0);
                                                      if ((uVar10 & 1) != 0) {
                                                        lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                        
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar5,0);
                                                  if (lVar5 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar5 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar5 + 0x28));
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x16];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb0);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x48),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x17];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb8);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x50),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x18];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar6,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xc0);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x60) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x60),lVar15);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x19];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   200);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x48),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1a];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd0);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x50),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1b];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd8);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x60) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x60),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1c];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe0);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x68) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x68),lVar15);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar7 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar7,*(undefined8 *)
                                                                      (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar7 + 0x80) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x80),
                                                                   uVar6);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar7 + 0x88) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x88),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar7 + 0x48) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x48),
                                                                   uVar6);
                                                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0x50),
                                                                   uVar6);
                                                  *(long *)(unaff_x19 + 0x208) = lVar7;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar7);
                                                  if (*(long *)(lVar5 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar5 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar12);
                                                  lVar14 = *(long *)(lVar5 + 0x48);
                                                  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar7,0);
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar7 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1d];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe8);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x48),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1e];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf0);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x50),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x1f];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar9 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf8);
                                                  *plVar9 = lVar15;
                                                  LeanTween__value(plVar9,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x60) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x60),lVar15);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar15 = puVar11[0x20];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar6 = *puVar11;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar15,uVar6,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar8 = *(long *)(*unaff_x29 + 0xb8);
                                                  *(long *)(lVar8 + 0x100) = lVar15;
                                                  LeanTween__value(lVar8 + 0x100,lVar15);
                                                  puVar12 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar7 + 0x68) = lVar15;
                                                  LeanTween__value((long *)(lVar7 + 0x68),lVar15);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar14,lVar7,*puVar12);
                                                  lVar7 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar14 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  unaff_x20 = in_stack_00000000;
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar9 = lVar5;
                                                    LeanTween__value(plVar9,lVar5);
                                                  }
                                                  else {
                                                    FUN_040101ec(in_stack_00000000,lVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                                                  ;
                                                  puVar4 = Method_System_Span<byte>_CopyTo__;
                                                  if (0 < *(int *)(unaff_x20 + 0x18)) {
                                                    uVar6 = FUN_04011c04(unaff_x20,
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Pop__
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar6;
                                                  LeanTween__value(unaff_x19 + 0x198,uVar6);
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar5 = FUN_05f37ac4(0);
                                                  lVar7 = *(long *)puVar3;
                                                  if (*(int *)(lVar7 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar7);
                                                  }
                                                  if (((lVar5 == 0) ||
                                                      (lVar5 = FUN_05f37bfc(lVar5,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar3 + 0xb8) + 0x10),1,0,0,0), lVar5 == 0)) ||
                                                  (*(long *)(lVar5 + 0x28) == 0)) goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar5 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar5 = FUN_05f37ac4(0);
                                                  if (lVar5 != 0) {
                                                    FUN_05f37b50(lVar5,*(undefined8 *)
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


