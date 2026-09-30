/*
FUNCTION_NAME: Unity.Services.Multiplayer.LobbyHandler$$ConvertException
ENTRY_POINT: 05f57564
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_17
*/


void Unity_Services_Multiplayer_LobbyHandler__ConvertException
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_03b706f0(param_2,param_3,**(undefined8 **)(param_1 + 0xeb8));
  puVar5 = (undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x48);
  *puVar5 = param_2;
  LeanTween__value(puVar5,param_2);
  *(undefined8 *)(unaff_x24 + 0x60) = param_2;
  LeanTween__value((undefined8 *)(unaff_x24 + 0x60),param_2);
  lVar6 = *unaff_x29;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar6 = *unaff_x29;
  }
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  lVar14 = puVar5[10];
  if (lVar14 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar16 = *puVar5;
    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
    FUN_03b706f0(lVar14,uVar16,
                 *(undefined8 *)
                  Method_System_Threading_Tasks_Task<Dictionary<string,_string>>_GetAwaiter__,0);
    plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x50);
    *plVar7 = lVar14;
    LeanTween__value(plVar7,lVar14);
  }
  *(long *)(unaff_x24 + 0x68) = lVar14;
  LeanTween__value((long *)(unaff_x24 + 0x68),lVar14);
  if (unaff_x23 != 0) {
    FUN_044193fc();
    lVar14 = *(long *)(unaff_x22 + 0x48);
    lVar6 = thunk_FUN_02dd3144(*unaff_x27);
    Unity_Services_Relay_RelayServiceException__set_Reason(lVar6,0);
    puVar4 = Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) =
           *(undefined8 *)Method_System_Threading_Tasks_Task<ILobbyEvents>_GetAwaiter__;
      LeanTween__value();
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar4;
      LeanTween__value();
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
      FUN_03b6efa0();
      *(undefined8 *)(lVar6 + 0x48) = uVar16;
      LeanTween__value((undefined8 *)(lVar6 + 0x48),uVar16);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
      FUN_04bdbe64();
      *(undefined8 *)(lVar6 + 0x50) = uVar16;
      LeanTween__value((undefined8 *)(lVar6 + 0x50),uVar16);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                 );
      System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                ();
      *(undefined8 *)(lVar6 + 0x58) = uVar16;
      LeanTween__value((undefined8 *)(lVar6 + 0x58),uVar16);
      if (lVar14 != 0) {
        FUN_044193fc(lVar14,lVar6,*(undefined8 *)PTR_DAT_06a11688);
        if (*(long *)(in_stack_00000008 + 0x48) != 0) {
          FUN_044193fc();
          lVar14 = *(long *)(in_stack_00000008 + 0x48);
          lVar6 = thunk_FUN_02dd3144(*unaff_x27);
          Unity_Services_Relay_RelayServiceException__set_Reason(lVar6,0);
          puVar3 = Method_System_Threading_Tasks_Task<ChannelToken>_GetAwaiter__;
          puVar4 = PTR_DAT_069fda18;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x28) =
                 *(undefined8 *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
            LeanTween__value();
            *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar3;
            LeanTween__value();
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
            FUN_03b6efa0();
            *(undefined8 *)(lVar6 + 0x48) = uVar16;
            LeanTween__value((undefined8 *)(lVar6 + 0x48),uVar16);
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
            FUN_04bdbe64();
            *(undefined8 *)(lVar6 + 0x50) = uVar16;
            LeanTween__value((undefined8 *)(lVar6 + 0x50),uVar16);
            if (lVar14 != 0) {
              FUN_044193fc(lVar14,lVar6,*(undefined8 *)PTR_DAT_06a11688);
              lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                        );
              FUN_05f455a0(lVar6,0);
              uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
              FUN_03b6efa0();
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x40) = uVar16;
                LeanTween__value((undefined8 *)(lVar6 + 0x40),uVar16);
                lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                           );
                FUN_05f46c04(lVar14,0);
                puVar4 = Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__;
                if (lVar14 != 0) {
                  *(undefined8 *)(lVar14 + 0x28) = *unaff_x28;
                  LeanTween__value();
                  *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar4;
                  LeanTween__value();
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                  FUN_03b706f0();
                  *(undefined8 *)(lVar14 + 0x48) = uVar16;
                  LeanTween__value((undefined8 *)(lVar14 + 0x48),uVar16);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                  FUN_04be4edc();
                  *(undefined8 *)(lVar14 + 0x50) = uVar16;
                  LeanTween__value((undefined8 *)(lVar14 + 0x50),uVar16);
                  lVar8 = *unaff_x29;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar8 = *unaff_x29;
                  }
                  puVar4 = Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Push__;
                  puVar5 = *(undefined8 **)(lVar8 + 0xb8);
                  lVar12 = puVar5[0xb];
                  if (lVar12 == 0) {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                    }
                    uVar16 = *puVar5;
                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                    FUN_03b706f0(lVar12,uVar16,
                                 *(undefined8 *)
                                  Method_System_Threading_Tasks_Task<Dictionary<string,_SubscribeRequest>>_GetAwaiter__
                                 ,0);
                    plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x58);
                    *plVar7 = lVar12;
                    LeanTween__value(plVar7,lVar12);
                  }
                  puVar5 = (undefined8 *)PTR_DAT_06a11688;
                  *(long *)(lVar14 + 0x60) = lVar12;
                  LeanTween__value((long *)(lVar14 + 0x60),lVar12);
                  lVar8 = *unaff_x29;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar8 = *unaff_x29;
                  }
                  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                  lVar12 = puVar10[0xc];
                  if (lVar12 == 0) {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                    }
                    uVar16 = *puVar10;
                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                    FUN_03b706f0(lVar12,uVar16,
                                 *(undefined8 *)
                                  Method_System_Threading_Tasks_Task<Dictionary<string,_TokenData>>_GetAwaiter__
                                 ,0);
                    plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x60);
                    *plVar7 = lVar12;
                    LeanTween__value(plVar7,lVar12);
                    puVar5 = (undefined8 *)PTR_DAT_06a11688;
                  }
                  *(long *)(lVar14 + 0x68) = lVar12;
                  LeanTween__value((long *)(lVar14 + 0x68),lVar12);
                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                  FUN_03b6efa0();
                  *(undefined8 *)(lVar14 + 0x40) = uVar16;
                  LeanTween__value((undefined8 *)(lVar14 + 0x40),uVar16);
                  if (*(long *)(lVar6 + 0x48) != 0) {
                    FUN_044193fc(*(long *)(lVar6 + 0x48),lVar14,*puVar5);
                    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                      FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),lVar6,*puVar5);
                      lVar14 = *(long *)(in_stack_00000008 + 0x48);
                      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                );
                      FUN_05f46c04(lVar6,0);
                      puVar3 = 
                      Method_System_Threading_Tasks_Task<Response<JoinCodeResponseBody>>_GetAwaiter__
                      ;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x28) =
                             *(undefined8 *)Method_System_Threading_Tasks_Task<bool>__ctor__;
                        LeanTween__value();
                        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar3;
                        LeanTween__value();
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                        FUN_03b706f0();
                        *(undefined8 *)(lVar6 + 0x48) = uVar16;
                        LeanTween__value((undefined8 *)(lVar6 + 0x48),uVar16);
                        uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
                        FUN_04be4edc();
                        *(undefined8 *)(lVar6 + 0x50) = uVar16;
                        LeanTween__value((undefined8 *)(lVar6 + 0x50),uVar16);
                        lVar8 = *unaff_x29;
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar8 = *unaff_x29;
                        }
                        puVar5 = *(undefined8 **)(lVar8 + 0xb8);
                        lVar12 = puVar5[0xd];
                        if (lVar12 == 0) {
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                          }
                          uVar16 = *puVar5;
                          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a09180);
                          FUN_03b706f0(lVar12,uVar16,
                                       *(undefined8 *)
                                        Method_System_Threading_Tasks_Task<IList<ISessionInfo>>_GetAwaiter__
                                       ,0);
                          plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x68);
                          *plVar7 = lVar12;
                          LeanTween__value(plVar7,lVar12);
                        }
                        puVar3 = PTR_DAT_06a11688;
                        *(long *)(lVar6 + 0x60) = lVar12;
                        LeanTween__value((long *)(lVar6 + 0x60),lVar12);
                        if (lVar14 != 0) {
                          FUN_044193fc(lVar14,lVar6,*(undefined8 *)puVar3);
                          lVar6 = *(long *)(unaff_x20 + 0x10);
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
                              LeanTween__value();
                            }
                            else {
                              FUN_040101ec();
                            }
                            lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                            FUN_05f455a0(lVar6,0);
                            if (lVar6 != 0) {
                              *(undefined8 *)(lVar6 + 0x28) =
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                              ;
                              LeanTween__value((undefined8 *)(lVar6 + 0x28));
                              lVar8 = *(long *)(lVar6 + 0x48);
                              lVar14 = thunk_FUN_02dd3144(*unaff_x27);
                              Unity_Services_Relay_RelayServiceException__set_Reason(lVar14,0);
                              puVar3 = 
                              Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                              ;
                              if (lVar14 != 0) {
                                *(undefined8 *)(lVar14 + 0x28) =
                                     *(undefined8 *)
                                      Method_System_Threading_Tasks_Task<BackfillTicket>_GetAwaiter__
                                ;
                                LeanTween__value();
                                *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar3;
                                LeanTween__value();
                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                FUN_03b6efa0();
                                *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                LeanTween__value((undefined8 *)(lVar14 + 0x48),uVar16);
                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                FUN_04bdbe64();
                                *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                LeanTween__value((undefined8 *)(lVar14 + 0x50),uVar16);
                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                          ();
                                *(undefined8 *)(lVar14 + 0x58) = uVar16;
                                LeanTween__value((undefined8 *)(lVar14 + 0x58),uVar16);
                                if (lVar8 != 0) {
                                  FUN_044193fc(lVar8,lVar14,*(undefined8 *)PTR_DAT_06a11688);
                                  lVar8 = *(long *)(lVar6 + 0x48);
                                  lVar14 = thunk_FUN_02dd3144(*unaff_x27);
                                  Unity_Services_Relay_RelayServiceException__set_Reason(lVar14,0);
                                  puVar3 = 
                                  Method_System_Threading_Tasks_Task<Response<AllocateResponseBody>>_GetAwaiter__
                                  ;
                                  if (lVar14 != 0) {
                                    *(undefined8 *)(lVar14 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Threading_Tasks_Task<AsyncProtocolResult>_ConfigureAwait__
                                    ;
                                    LeanTween__value();
                                    *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar3;
                                    LeanTween__value();
                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fda18);
                                    FUN_03b6efa0();
                                    *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                    LeanTween__value((undefined8 *)(lVar14 + 0x48),uVar16);
                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fe458);
                                    FUN_04bdbe64();
                                    *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                    LeanTween__value((undefined8 *)(lVar14 + 0x50),uVar16);
                                    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetException__
                                                  );
                                    System_Collections_Generic_ArraySortHelper<BufferedLinearInterpolator_BufferedItem<Vector3>>__BinarySearch
                                              ();
                                    *(undefined8 *)(lVar14 + 0x58) = uVar16;
                                    LeanTween__value((undefined8 *)(lVar14 + 0x58),uVar16);
                                    if (lVar8 != 0) {
                                      FUN_044193fc(lVar8,lVar14,*(undefined8 *)PTR_DAT_06a11688);
                                      lVar14 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      puVar3 = PTR_DAT_069fda18;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar7 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar7 = lVar6;
                                          LeanTween__value(plVar7,lVar6);
                                        }
                                        else {
                                          FUN_040101ec();
                                        }
                                        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                        FUN_05f455a0(lVar6,0);
                                        if (lVar6 != 0) {
                                          *(undefined8 *)(lVar6 + 0x28) =
                                               *(undefined8 *)
                                                Method_System_Threading_Tasks_Task<byte[]>_GetAwaiter__
                                          ;
                                          LeanTween__value();
                                          uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                          FUN_03b6efa0();
                                          *(undefined8 *)(lVar6 + 0x40) = uVar16;
                                          LeanTween__value((undefined8 *)(lVar6 + 0x40),uVar16);
                                          lVar8 = *(long *)(lVar6 + 0x48);
                                          lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                          Unity_Services_Relay_RelayServiceException__set_Reason
                                                    (lVar14,0);
                                          puVar2 = 
                                          Method_System_Threading_Tasks_Task<ValueTuple<string,_string>>_GetAwaiter__
                                          ;
                                          if (lVar14 != 0) {
                                            *(undefined8 *)(lVar14 + 0x28) =
                                                 *(undefined8 *)
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_ConfigureAwait__
                                            ;
                                            LeanTween__value();
                                            *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)puVar2;
                                            LeanTween__value();
                                            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                            FUN_03b6efa0();
                                            *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar14 + 0x48),uVar16);
                                            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                         PTR_DAT_069fe458);
                                            FUN_04bdbe64();
                                            *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                            LeanTween__value((undefined8 *)(lVar14 + 0x50),uVar16);
                                            if (lVar8 != 0) {
                                              FUN_044193fc(lVar8,lVar14,
                                                           *(undefined8 *)PTR_DAT_06a11688);
                                              lVar8 = *(long *)(lVar6 + 0x48);
                                              lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                              Unity_Services_Relay_RelayServiceException__set_Reason
                                                        (lVar14,0);
                                              if (lVar14 != 0) {
                                                *(undefined8 *)(lVar14 + 0x28) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_Tasks_Task<ValueTuple<Lobby,_bool>>_GetAwaiter__
                                                ;
                                                LeanTween__value();
                                                puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_069fda18);
                                                FUN_03b6efa0();
                                                *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                                LeanTween__value((undefined8 *)(lVar14 + 0x48),
                                                                 uVar16);
                                                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                             PTR_DAT_069fe458);
                                                FUN_04bdbe64();
                                                *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                                LeanTween__value((undefined8 *)(lVar14 + 0x50),
                                                                 uVar16);
                                                puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                if (lVar8 != 0) {
                                                  FUN_044193fc(lVar8,lVar14,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  puVar3 = 
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  ;
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<bool>_TrySetResult__
                                                  );
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar14,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<bool>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar14 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar11[0xe];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar11;
                                                    lVar13 = thunk_FUN_02dd3144(*puVar5);
                                                    FUN_03b6efa0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IList<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x70);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar11[0xf];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar11 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar11;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fe458);
                                                    FUN_04bdbe64(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x78);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x50) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x50),lVar13);
                                                  if (lVar8 != 0) {
                                                    FUN_044193fc(lVar8,lVar14,*puVar10);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar14,0);
                                                  lVar8 = *unaff_x29;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar8 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                                                  lVar12 = puVar10[0x10];
                                                  if (lVar12 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar12 = thunk_FUN_02dd3144(*puVar5);
                                                    FUN_03b6efa0(lVar12,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<FileItem>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x80);
                                                  *plVar7 = lVar12;
                                                  LeanTween__value(plVar7,lVar12);
                                                  }
                                                  if (lVar14 != 0) {
                                                    *(long *)(lVar14 + 0x40) = lVar12;
                                                    LeanTween__value((long *)(lVar14 + 0x40),lVar12)
                                                    ;
                                                    lVar12 = *(long *)(lVar14 + 0x48);
                                                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar8,0);
                                                  puVar2 = 
                                                  Method_System_Threading_Tasks_Task<Allocation>_GetAwaiter__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<IQosJob>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar8 + 0x30) =
                                                       *(undefined8 *)puVar2;
                                                  LeanTween__value();
                                                  lVar13 = *unaff_x29;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar15 = puVar10[0x11];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x88);
                                                  *plVar7 = lVar15;
                                                  LeanTween__value(plVar7,lVar15);
                                                  puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar8 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar8 + 0x48),lVar15);
                                                  lVar13 = *unaff_x29;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar15 = puVar10[0x12];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar15,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<List<QosResult>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x90);
                                                  *plVar7 = lVar15;
                                                  LeanTween__value(plVar7,lVar15);
                                                  puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar8 + 0x50) = lVar15;
                                                  LeanTween__value((long *)(lVar8 + 0x50),lVar15);
                                                  lVar13 = *unaff_x29;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar15 = puVar10[0x13];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<Region>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0x98);
                                                  *plVar7 = lVar15;
                                                  LeanTween__value(plVar7,lVar15);
                                                  puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar8 + 0x60) = lVar15;
                                                  LeanTween__value((long *)(lVar8 + 0x60),lVar15);
                                                  lVar13 = *unaff_x29;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar15 = puVar10[0x14];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar15,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<List<string>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa0);
                                                  *plVar7 = lVar15;
                                                  LeanTween__value(plVar7,lVar15);
                                                  puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar8 + 0x68) = lVar15;
                                                  LeanTween__value((long *)(lVar8 + 0x68),lVar15);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar12 != 0) {
                                                    FUN_044193fc(lVar12,lVar8,
                                                                 *(undefined8 *)PTR_DAT_06a11688);
                                                    puVar2 = PTR_DAT_069fb930;
                                                    if (*(long *)(lVar6 + 0x48) != 0) {
                                                      FUN_044193fc(*(long *)(lVar6 + 0x48),lVar14,
                                                                   *puVar10);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar9 = FUN_0630c920(0);
                                                      if ((uVar9 & 1) != 0) {
                                                        lVar8 = *(long *)(lVar6 + 0x48);
                                                        lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                     puVar3);
                                                                                                                
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpClientResponse>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar5);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x50),
                                                                   uVar16);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar14,0);
                                                  uVar16 = thunk_FUN_02dd3144(*puVar5);
                                                  FUN_03b6efa0();
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x40) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x40),
                                                                   uVar16);
                                                  lVar12 = *(long *)(lVar14 + 0x48);
                                                  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                              PTR_DAT_06a116b0);
                                                  FUN_05f394f0(lVar8,0);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar8 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<string>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar13 = *unaff_x29;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar13 = *unaff_x29;
                                                  }
                                                  puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar15 = puVar10[0x15];
                                                  if (lVar15 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar10 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar10;
                                                    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a0ae38);
                                                    FUN_03b6fe3c(lVar15,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Nullable<int>>_ConfigureAwait__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xa8);
                                                  *plVar7 = lVar15;
                                                  LeanTween__value(plVar7,lVar15);
                                                  puVar5 = (undefined8 *)PTR_DAT_069fda18;
                                                  }
                                                  *(long *)(lVar8 + 0x48) = lVar15;
                                                  LeanTween__value((long *)(lVar8 + 0x48),lVar15);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  if (lVar12 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar12,lVar8,
                                                               *(undefined8 *)PTR_DAT_06a11688);
                                                  if (*(long *)(lVar6 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar6 + 0x48),lVar14,
                                                               *puVar10);
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar5);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x50),
                                                                   uVar16);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  Unity_Services_Relay_RelayServiceException__set_Reason
                                                            (lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpListenerContext>_ContinueWith__
                                                  ;
                                                  LeanTween__value();
                                                  uVar16 = thunk_FUN_02dd3144(*puVar5);
                                                  FUN_03b6efa0();
                                                  *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fe458);
                                                  FUN_04bdbe64();
                                                  *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x50),
                                                                   uVar16);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  }
                                                  lVar14 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar6;
                                                      LeanTween__value(plVar7,lVar6);
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
                                                      uVar9 = FUN_0634eb94(uVar16,0,0);
                                                      if ((uVar9 & 1) != 0) {
                                                        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                        
                                                  Method_UnityEngine_UIElements_StyleEnum<OverflowClipBox>__ctor__
                                                  );
                                                  FUN_05f455a0(lVar6,0);
                                                  if (lVar6 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar6 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<JoinResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value((undefined8 *)(lVar6 + 0x28));
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>__ctor__
                                                  );
                                                  FUN_05f46a98(lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<ValueTuple<WebHeaderCollection,_byte[],_int>>_ConfigureAwait__
                                                  ;
                                                  LeanTween__value();
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x16];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar13,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb0);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x17];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069fc9b8);
                                                    FUN_04bdefe4(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<byte[]>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xb8);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x50) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x50),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x18];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874(lVar13,uVar16,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<FileList>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xc0);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x60) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x60),lVar13);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Nullable<UcgQosServer>[]>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x19];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<GetItemsResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   200);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1a];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SetItemBatchResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd0);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x50) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x50),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1b];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<SignedUrlResponse>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xd8);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x60) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x60),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1c];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Session>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe0);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x68) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x68),lVar13);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Span<byte>_Slice__);
                                                  FUN_05f391d0(lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<HttpResponseMessage>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar14 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<IPAddress[]>_get_Result__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar14 + 0x60) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  LeanTween__value();
                                                  FUN_050e465c(lVar14,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Span<byte>_GetPinnableReference__);
                                                  puVar2 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_VFX_VFXSpawnerState_TypeInfo);
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar14 + 0x80) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x80),
                                                                   uVar16);
                                                  puVar3 = PTR_DAT_069fc9b8;
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                               PTR_DAT_069fc9b8);
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar14 + 0x88) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x88),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03b6f874();
                                                  *(undefined8 *)(lVar14 + 0x48) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x48),
                                                                   uVar16);
                                                  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_04bdefe4();
                                                  *(undefined8 *)(lVar14 + 0x50) = uVar16;
                                                  LeanTween__value((undefined8 *)(lVar14 + 0x50),
                                                                   uVar16);
                                                  *(long *)(unaff_x19 + 0x208) = lVar14;
                                                  LeanTween__value((undefined8 *)(unaff_x19 + 0x208)
                                                                   ,lVar14);
                                                  if (*(long *)(lVar6 + 0x48) == 0)
                                                  goto LAB_05f59540;
                                                  FUN_044193fc(*(long *)(lVar6 + 0x48),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar10);
                                                  lVar8 = *(long *)(lVar6 + 0x48);
                                                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_get_Task__
                                                  );
                                                  FUN_05f46c04(lVar14,0);
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  *(undefined8 *)(lVar14 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Task<HttpClientResponse>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  *(undefined8 *)(lVar14 + 0x30) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Threading_Tasks_Task<Response<RegionsResponseBody>>_GetAwaiter__
                                                  ;
                                                  LeanTween__value();
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1d];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Dictionary<string,_TokenData>>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xe8);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x48) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x48),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1e];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_069feaa0);
                                                    FUN_04be4edc(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<List<string>>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf0);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x50) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x50),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x1f];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<Lobby>>_GetAwaiter__
                                                  ,0);
                                                  plVar7 = (long *)(*(long *)(*unaff_x29 + 0xb8) +
                                                                   0xf8);
                                                  *plVar7 = lVar13;
                                                  LeanTween__value(plVar7,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x60) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x60),lVar13);
                                                  lVar12 = *unaff_x29;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar12 = *unaff_x29;
                                                  }
                                                  puVar5 = *(undefined8 **)(lVar12 + 0xb8);
                                                  lVar13 = puVar5[0x20];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      puVar5 = *(undefined8 **)(*unaff_x29 + 0xb8);
                                                    }
                                                    uVar16 = *puVar5;
                                                    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 PTR_DAT_06a09180);
                                                    FUN_03b706f0(lVar13,uVar16,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<Response<CreateBackfillTicketResponse>>_GetAwaiter__
                                                  ,0);
                                                  lVar12 = *(long *)(*unaff_x29 + 0xb8);
                                                  *(long *)(lVar12 + 0x100) = lVar13;
                                                  LeanTween__value(lVar12 + 0x100,lVar13);
                                                  puVar10 = (undefined8 *)PTR_DAT_06a11688;
                                                  }
                                                  *(long *)(lVar14 + 0x68) = lVar13;
                                                  LeanTween__value((long *)(lVar14 + 0x68),lVar13);
                                                  if (lVar8 == 0) goto LAB_05f59540;
                                                  FUN_044193fc(lVar8,lVar14,*puVar10);
                                                  lVar14 = *(long *)(in_stack_00000000 + 0x10);
                                                  lVar8 = *(long *)puVar4;
                                                  *(int *)(in_stack_00000000 + 0x1c) =
                                                       *(int *)(in_stack_00000000 + 0x1c) + 1;
                                                  if (lVar14 == 0) goto LAB_05f59540;
                                                  uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                                                  unaff_x20 = in_stack_00000000;
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar14 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar7 = lVar6;
                                                    LeanTween__value(plVar7,lVar6);
                                                  }
                                                  else {
                                                    FUN_040101ec(in_stack_00000000,lVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                                                  ;
                                                  puVar4 = Method_System_Span<byte>_CopyTo__;
                                                  if (0 < *(int *)(unaff_x20 + 0x18)) {
                                                    uVar16 = FUN_04011c04(unaff_x20,
                                                                          *(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Collections_Generic_Stack<Queue<TreePoint>>_Pop__
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar16;
                                                  LeanTween__value(unaff_x19 + 0x198,uVar16);
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar6 = FUN_05f37ac4(0);
                                                  lVar14 = *(long *)puVar3;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c(lVar14);
                                                  }
                                                  if (((lVar6 == 0) ||
                                                      (lVar6 = FUN_05f37bfc(lVar6,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar3 + 0xb8) + 0x10),1,0,0,0), lVar6 == 0)) ||
                                                  (*(long *)(lVar6 + 0x28) == 0)) goto LAB_05f59540;
                                                  FUN_04419558(*(long *)(lVar6 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Stack<ExpressionCombinator>__ctor__
                                                  );
                                                  }
                                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  lVar6 = FUN_05f37ac4(0);
                                                  if (lVar6 != 0) {
                                                    FUN_05f37b50(lVar6,*(undefined8 *)
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
LAB_05f59540:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


