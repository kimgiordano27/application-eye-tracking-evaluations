/*
FUNCTION_NAME: VoxelPlay.VoxelPlayFirstPersonController$$CharacterChangedXZPosition
ENTRY_POINT: 06499dd4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void VoxelPlay_VoxelPlayFirstPersonController__CharacterChangedXZPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  FUN_02e3ca1c();
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CurrencyBalanceResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_CurrenciesApiClient_<IncrementPlayerCurrencyBalanceAsync>d__9>__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_Start<PlayerDataApiClient_<SaveAsync>d__5>__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_Create__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_SetException__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_SetResult__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_SetStateMachine__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_get_Task__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CurrencyBalanceResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_CurrenciesApiClient_<SetPlayerCurrencyBalanceAsync>d__10>__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CurrencyBalanceResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_CurrenciesApiClient_<DecrementPlayerCurrencyBalanceAsync>d__7>__
              );
  FUN_02e3ca1c(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CurrencyBalanceResponse>>_Start<CurrenciesApiClient_<DecrementPlayerCurrencyBalanceAsync>d__7>__
              );
  *(undefined1 *)(unaff_x20 + 0x809) = 1;
  puVar2 = PTR_DAT_06a6f9a0;
  puVar1 = PTR_DAT_06a6f968;
  plVar5 = (long *)(unaff_x19 + 0x38);
  if (*plVar5 != 0) {
    lVar4 = *(long *)(*plVar5 + 0x520);
    if (lVar4 == 0) goto LAB_0649a23c;
    lVar4 = *(long *)(lVar4 + 0x508);
    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a5c910);
    FUN_04dfc5a0();
    if (lVar4 == 0) goto LAB_0649a23c;
    FUN_064ab594(lVar4,uVar3,0);
    if ((*plVar5 == 0) || (lVar4 = *(long *)(*plVar5 + 0x520), lVar4 == 0)) goto LAB_0649a23c;
    lVar4 = *(long *)(lVar4 + 0x500);
    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
    FUN_05207864();
    if (lVar4 == 0) goto LAB_0649a23c;
    FUN_038a4c9c(lVar4,uVar3,0,*(undefined8 *)puVar2);
                    /* try { // try from 06499f14 to 0659a09f has its CatchHandler @ 06499f14
                       catch() { ... } // from try @ 06499f14 with catch @ 06499f14
                       catch() { ... } // from try @ 0649a398 with catch @ 06499f14
                       catch() { ... } // from try @ 0649a400 with catch @ 06499f14
                       catch() { ... } // from try @ 0649a41c with catch @ 06499f14
                       catch() { ... } // from try @ 0649a464 with catch @ 06499f14
                       catch() { ... } // from try @ 0649a50c with catch @ 06499f14 */
    *plVar5 = 0;
    thunk_FUN_02ee2be8(plVar5,0);
  }
  plVar5 = (long *)(unaff_x19 + 0x48);
  if (*plVar5 != 0) {
    lVar4 = *(long *)(*plVar5 + 0x4f0);
    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
    FUN_05207864();
    puVar1 = PTR_DAT_06a2f880;
    if (lVar4 != 0) {
      FUN_038a4c9c(lVar4,uVar3,0,*(undefined8 *)puVar2);
      lVar4 = *(long *)(unaff_x19 + 0x48);
      uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
      FUN_0557a208();
      puVar2 = VoxelPlay_VoxelPlayEnvironment_ScalePlacementAnimator_TypeInfo;
      if (lVar4 != 0) {
        FUN_064614ac(lVar4,uVar3,0);
        lVar4 = *(long *)(unaff_x19 + 0x48);
        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
        FUN_04e0b630();
        puVar2 = VoxelPlay_VoxelPlayEnvironment_IPlacementAnimator_TypeInfo;
        if (lVar4 != 0) {
          FUN_064615f8(lVar4,uVar3,0);
          lVar4 = *(long *)(unaff_x19 + 0x48);
          uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
          FUN_04e0a860();
          if (lVar4 != 0) {
            FUN_06461360(lVar4,uVar3,0);
            lVar4 = *(long *)(unaff_x19 + 0x48);
            uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
            FUN_0557a208();
            if (lVar4 != 0) {
              FUN_06461744(lVar4,uVar3,0);
              if (*plVar5 != 0) {
                lVar4 = *(long *)(*plVar5 + 0x500);
                uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                            VoxelPlay_VoxelPlayThirdPersonController_<CompleteHit>d__104_TypeInfo
                                          );
                FUN_04e0b1ac();
                if (lVar4 != 0) {
                  FUN_064969c8(lVar4,uVar3);
                  if (*plVar5 != 0) {
                    lVar4 = *(long *)(*plVar5 + 0x500);
                    uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                VoxelPlay_VoxelPlayPostProcessingRenderFeature_CustomRenderPass_TypeInfo
                                              );
                    FUN_04d318f4();
                    if (lVar4 != 0) {
                      FUN_06496a78(lVar4,uVar3);
                      if (*plVar5 != 0) {
                        lVar4 = *(long *)(*plVar5 + 0x500);
                        uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                        
                                                  VoxelPlay_VoxelPlayThirdPersonController_<WaitForCurrentChunkCoroutine>d__78_TypeInfo
                                                  );
                        FUN_04e0d2b8();
                        if (lVar4 != 0) {
                          FUN_06496de8(lVar4,uVar3);
                          if (*plVar5 != 0) {
                            lVar4 = *(long *)(*plVar5 + 0x500);
                            uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                
                                                  VoxelPlay_VoxelPlaySaveThis_<WaitForChunk>d__4_TypeInfo
                                                  );
                            FUN_04e0b2cc();
                            if (lVar4 != 0) {
                              FUN_06496bd8(lVar4,uVar3);
                              if (*plVar5 != 0) {
                                lVar4 = *(long *)(*plVar5 + 0x500);
                                uVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<GetItemsResponse>>,_PlayerDataApiClient_<LoadAsync>d__9>__
                                                  );
                                FUN_04d2e288();
                                if (lVar4 != 0) {
                                  FUN_06496874(lVar4,uVar3);
                                  if (*plVar5 != 0) {
                                    FUN_063bbb20(*plVar5,0);
                                    if (*plVar5 != 0) {
                                      FUN_0646612c(*plVar5,0);
                                      *(undefined8 *)(unaff_x19 + 0x48) = 0;
                                      thunk_FUN_02ee2be8(plVar5,0);
                                      plVar5 = (long *)(unaff_x19 + 0x40);
                                      if (*plVar5 != 0) {
                                        FUN_063bbb20(*plVar5,0);
                                        *plVar5 = 0;
                                        thunk_FUN_02ee2be8(plVar5,0);
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
LAB_0649a23c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


