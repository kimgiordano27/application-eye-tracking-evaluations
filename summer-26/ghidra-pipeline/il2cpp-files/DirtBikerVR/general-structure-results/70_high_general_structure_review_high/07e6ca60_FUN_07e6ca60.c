/*
FUNCTION_NAME: FUN_07e6ca60
ENTRY_POINT: 07e6ca60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07e6ca60(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_100 [3];
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  long local_68;
  
  puVar2 = PTR_DAT_08493f60;
                    /* try { // try from 07e6ca68 to 07f6ca6f has its CatchHandler @ 07e6cbd0 */
                    /* try { // try from 07e6ca78 to 07f6ca7f has its CatchHandler @ 07e6cbcc */
                    /* try { // try from 07e6ca80 to 07f6cbeb has its CatchHandler @ 07e6c8e8 */
  local_e8 = tpidr_el0;
  local_68 = *(long *)(local_e8 + 0x28);
  if ((DAT_0899a9c5 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<UpdatePlayerAsync>d__23>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<BulkUpdateLobbyAsync>d__7>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<CreateLobbyAsync>d__8>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<CreateOrJoinLobbyAsync>d__9>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<GetLobbyAsync>d__13>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<JoinLobbyByCodeAsync>d__15>__
                );
    FUN_03a8a718(PTR_DAT_08493f60);
    DAT_0899a9c5 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  local_100[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07e6a904(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (DAT_0899a910 == (code *)0x0) {
    DAT_0899a910 = (code *)FUN_03a8a6dc(
                                       "UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)"
                                       );
  }
  (*DAT_0899a910)(uVar9,0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<CreateLobbyAsync>d__8>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<JoinLobbyByCodeAsync>d__15>__
  ;
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar8) {
        if (*(long *)(local_e8 + 0x28) == local_68) {
          return;
        }
        goto UnityEngine_UIElements_ComputedStyle__StartAnimationInlineTransformOrigin;
      }
      FUN_04e7c60c(local_c0,lVar6,iVar8,*(undefined8 *)puVar4);
      uVar1 = local_90;
      uVar5 = uStack_a4;
      uVar9 = uStack_b0;
      if (local_c0[0] == 0) {
        local_100[0] = local_b8;
        if (*(long *)(param_1 + 0x58) == 0) break;
        auVar12 = FUN_05242e78(*(long *)(param_1 + 0x58),local_a8,uStack_a4,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<CreateOrJoinLobbyAsync>d__9>__
                              );
        uVar7 = FUN_045ff3fc(auVar12._0_8_,auVar12._8_8_,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_Start<LobbyApiClient_<GetLobbyAsync>d__13>__
                            );
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        if (DAT_0899a8f0 == (code *)0x0) {
          DAT_0899a8f0 = (code *)FUN_03a8a6dc(
                                             "UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)"
                                             );
        }
        (*DAT_0899a8f0)(uVar9,local_100,1,uVar7,uVar5,uVar11);
      }
      else {
        if (local_c0[0] != 2) {
          if (local_c0[0] != 1) {
            thunk_FUN_03af1434(PTR_DAT_08493018);
            uVar9 = thunk_FUN_03ac74bc();
            FUN_067532ac(uVar9,0);
            uVar7 = thunk_FUN_03af1434(
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_LobbyApiClient_<UpdatePlayerAsync>d__23>__
                                      );
            if (*(long *)(local_e8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a884(uVar9,uVar7);
            }
            goto UnityEngine_UIElements_ComputedStyle__StartAnimationInlineTransformOrigin;
          }
          if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07e6ca78 with catch @ 07e6cbcc
                        */
            lVar10 = (long)(int)local_90;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07e6ca68 with catch @ 07e6cbd0
                        */
            uStack_d8 = uStack_74;
            local_e0 = local_7c;
            uStack_c8 = uStack_84;
            local_d0 = local_8c;
            thunk_FUN_07c5fbb0(*(long *)(param_1 + 0x30),local_a0,local_98,0);
            lVar6 = *(long *)(param_1 + 0x50);
            if (lVar6 != 0) {
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 07e6cbec to 07f6cbef has its CatchHandler @ 07e6cc10 */
                lVar6 = lVar6 + lVar10 * 0x10;
                    /* try { // try from 07e6cbf0 to 07f6cc13 has its CatchHandler @ 07e6c8e8 */
                *(undefined8 *)(lVar6 + 0x28) = uStack_c8;
                *(undefined8 *)(lVar6 + 0x20) = local_d0;
                lVar6 = *(long *)(param_1 + 0x50);
                if (lVar6 == 0) break;
                uVar1 = uVar1 + 1;
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
                  *(undefined8 *)(lVar6 + 0x28) = uStack_d8;
                  *(undefined8 *)(lVar6 + 0x20) = local_e0;
                  lVar6 = *(long *)(param_1 + 0x30);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4();
                  }
                  if (lVar6 != 0) {
                    FUN_07c60ffc(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                                 *(undefined8 *)(param_1 + 0x50),0);
                    goto LAB_07e6cd08;
                  }
                  break;
                }
              }
              if (*(long *)(local_e8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              goto UnityEngine_UIElements_ComputedStyle__StartAnimationInlineTransformOrigin;
            }
          }
          break;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e6a904(uVar9);
      }
LAB_07e6cd08:
      lVar6 = *(long *)(param_1 + 0x48);
      iVar8 = iVar8 + 1;
    } while (lVar6 != 0);
  }
  if (*(long *)(local_e8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
UnityEngine_UIElements_ComputedStyle__StartAnimationInlineTransformOrigin:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


