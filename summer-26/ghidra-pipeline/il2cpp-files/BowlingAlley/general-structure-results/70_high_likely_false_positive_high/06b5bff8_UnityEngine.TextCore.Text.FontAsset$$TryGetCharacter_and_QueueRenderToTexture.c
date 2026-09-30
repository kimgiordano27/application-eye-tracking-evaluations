/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$TryGetCharacter_and_QueueRenderToTexture
ENTRY_POINT: 06b5bff8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;strong_file_logging_hits_3;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b5c65c) */
/* WARNING: Removing unreachable block (ram,0x06b5c6e8) */
/* WARNING: Removing unreachable block (ram,0x06b5c6ec) */
/* WARNING: Removing unreachable block (ram,0x06b5c804) */
/* WARNING: Removing unreachable block (ram,0x06b5c948) */

bool UnityEngine_TextCore_Text_FontAsset__TryGetCharacter_and_QueueRenderToTexture(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserAvatarElement_<SetupButton>d__4>__
  ;
  puVar3 = PTR_DAT_072877f8;
  FUN_041e3694(&stack0x00000060);
  in_stack_000000f8 = in_stack_00000068;
  in_stack_000000f0 = in_stack_00000060;
  in_stack_00000100 = in_stack_00000070;
  while( true ) {
    uVar6 = FUN_052d44b4(&stack0x000000f0,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_AssetSelectionElement_<OnButtonCreated>d__13>__
                        );
    lVar5 = in_stack_00000100;
    if ((uVar6 & 1) == 0) {
      uVar14 = 0x18;
      goto LAB_06b5c8e0;
    }
    if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar15 = *(undefined8 *)(in_stack_00000100 + 0x18);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar15 = FUN_06b5d00c(uVar15);
    uVar7 = FUN_06b5d00c(*(undefined8 *)(lVar5 + 0x10));
    lVar8 = FUN_06b5d1d8(uVar7,uVar15,0,0);
    if (lVar8 == 0) break;
    uVar15 = *(undefined8 *)(lVar5 + 0x20);
    lVar9 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
    ;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
      ;
    }
    lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar16 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar9 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
        ;
      }
      uVar7 = **(undefined8 **)(lVar9 + 0xb8);
      lVar16 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TemplateSelectionElement_<LoadAndCreateButtons>d__9>__
                                 );
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (lVar16,uVar7,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_Door_<SetDoorPosition>d__27>__
                 ,0);
      plVar10 = (long *)(*(long *)(*(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                  + 0xb8) + 0x18);
      *plVar10 = lVar16;
      thunk_FUN_0333a630(plVar10,lVar16);
    }
    uVar15 = FUN_0399a7bc(uVar15,lVar16,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LogoutElement_<Logout>d__7>__
                         );
    lVar9 = FUN_039a6ef0(uVar15,*(undefined8 *)PTR_DAT_072891b8);
    if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_041e3694(&stack0x00000060,*(long *)(lVar5 + 0x28),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserManager_<Start>d__1>__
                );
    in_stack_000000d8 = in_stack_00000068;
    in_stack_000000d0 = in_stack_00000060;
    in_stack_000000e0 = in_stack_00000070;
    while (uVar6 = FUN_052d44b4(&stack0x000000d0,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__10>__
                               ), lVar5 = in_stack_000000e0, (uVar6 & 1) != 0) {
      if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar15 = *(undefined8 *)(in_stack_000000e0 + 0x28);
      lVar16 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
      ;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar16);
        lVar16 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
        ;
      }
      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
      if (lVar17 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar16);
          lVar16 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
          ;
        }
        uVar7 = **(undefined8 **)(lVar16 + 0xb8);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                   );
        FUN_055d2e5c(lVar17,uVar7,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_VoiceHandler_<CheckAndroidMicrophonePermission>d__27>__
                     ,0);
        plVar10 = (long *)(*(long *)(*(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                    + 0xb8) + 0x20);
        *plVar10 = lVar17;
        thunk_FUN_0333a630(plVar10,lVar17);
      }
      uVar15 = FUN_039a8198(uVar15,lVar17,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_PhotoCaptureElement_<StartCamera>d__10>__
                           );
      lVar16 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
      ;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar16);
        lVar16 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
        ;
      }
      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
      if (lVar17 == 0) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar16);
          lVar16 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
          ;
        }
        uVar7 = **(undefined8 **)(lVar16 + 0xb8);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
                                   );
        Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                  (lVar17,uVar7,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AmplitudeEventLogger_<LogEvent>d__8>__
                   ,0);
        plVar10 = (long *)(*(long *)(*(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                    + 0xb8) + 0x28);
        *plVar10 = lVar17;
        thunk_FUN_0333a630(plVar10,lVar17);
      }
      uVar15 = FUN_0399dc8c(uVar15,lVar17,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginElement_<SendVerificationCode>d__10>__
                           );
      uVar15 = FUN_0398c9a0(uVar15,*(undefined8 *)PTR_DAT_0729e098);
      uVar15 = FUN_039a6ef0(uVar15,*(undefined8 *)PTR_DAT_072891b8);
      uVar15 = FUN_039a7348(uVar15,lVar9,*(undefined8 *)PTR_DAT_072a7940);
      lVar16 = FUN_039a43e4(uVar15,*(undefined8 *)PTR_DAT_07289040);
      uVar15 = *(undefined8 *)(lVar5 + 0x10);
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar15 = FUN_06b5d00c(uVar15);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar17 = *(long *)(lVar5 + 0x30);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      uVar1 = *(undefined4 *)(lVar5 + 0x18);
      uVar2 = *(undefined4 *)(lVar16 + 0x18);
      if (lVar17 != 0) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_041e47e4(lVar17,*(undefined8 *)PTR_DAT_0727f6e8);
        if ((*(long *)(lVar5 + 0x30) != 0) && (*(long *)(lVar5 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar16 = FUN_06b5d29c(lVar8,uVar15,uVar7,uVar1,0,0,lVar16,uVar2);
      if (lVar16 == 0) {
        FUN_06b5ae9c();
        uVar14 = 5;
        goto LAB_06b5c7a0;
      }
      if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_041e3694(&stack0x00000060,*(long *)(lVar5 + 0x28),
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_VoiceServiceRequest_<SimulateResponse>d__5>__
                  );
      in_stack_000000b8 = in_stack_00000068;
      in_stack_000000b0 = in_stack_00000060;
      in_stack_000000c0 = in_stack_00000070;
      while (uVar6 = FUN_052d44b4(&stack0x000000b0,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                                 ), lVar5 = in_stack_000000c0, (uVar6 & 1) != 0) {
        if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar17 = lVar9;
        if (*(long *)(in_stack_000000c0 + 0x20) != 0) {
          lVar17 = *(long *)(in_stack_000000c0 + 0x20);
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_041e3694(&stack0x00000060,lVar17,*(undefined8 *)PTR_DAT_07287808);
        in_stack_00000098 = in_stack_00000068;
        in_stack_00000090 = in_stack_00000060;
        in_stack_000000a0 = in_stack_00000070;
        while (uVar6 = FUN_052d44b4(&stack0x00000090,*(undefined8 *)puVar3),
              lVar17 = in_stack_000000a0, (uVar6 & 1) != 0) {
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar6 = FUN_050fa644();
          if ((uVar6 & 1) == 0) {
            lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
                                       );
            FUN_04327f60(lVar11,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                        );
            in_stack_00000088 = lVar11;
            FUN_050f8afc();
          }
          lVar11 = in_stack_00000088;
          in_stack_00000080 = 0;
          in_stack_00000078 = lVar16;
          in_stack_00000080 = FUN_057a19ac(lVar17,*(undefined8 *)(lVar5 + 0x18),0);
          thunk_FUN_0333a630(&stack0x00000080);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar17 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar14 = *(uint *)(lVar11 + 0x18);
          if (uVar14 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar14 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar14 + 1;
            puVar12 = (undefined8 *)(lVar17 + 0x28);
            *puVar12 = in_stack_00000080;
            *(long *)(lVar17 + 0x20) = in_stack_00000078;
            thunk_FUN_0333a630(puVar12,0);
          }
          else {
            FUN_043287e0(lVar11,in_stack_00000078,in_stack_00000080,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_052d44b0(&stack0x00000090,*(undefined8 *)PTR_DAT_072877f0);
      }
      FUN_052d44b0(&stack0x000000b0,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__21>__
                  );
    }
    uVar14 = 2;
LAB_06b5c7a0:
    FUN_052d44b0(&stack0x000000d0,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                );
    if ((uVar14 | 2) != 2) {
LAB_06b5c8e0:
      FUN_052d44b0(&stack0x000000f0,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRSpatialAnchor>,_AutomaticColocationLauncher_<CreateNewColocatedSpace>d__23>__
                  );
      return uVar14 != 5;
    }
  }
  FUN_06b5ae9c();
  uVar14 = 5;
  goto LAB_06b5c8e0;
}


