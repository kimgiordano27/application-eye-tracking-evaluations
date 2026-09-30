/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$TryAddGlyphsToAtlasTextures
ENTRY_POINT: 06b5c594
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b5c804) */
/* WARNING: Removing unreachable block (ram,0x06b5c6e8) */
/* WARNING: Removing unreachable block (ram,0x06b5c6ec) */
/* WARNING: Removing unreachable block (ram,0x06b5c65c) */
/* WARNING: Removing unreachable block (ram,0x06b5c948) */

bool UnityEngine_TextCore_Text_FontAsset__TryAddGlyphsToAtlasTextures(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint uVar10;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long in_stack_00000028;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  long lStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_00000100;
  
  do {
    lStack0000000000000088 = unaff_x27;
    FUN_050f8afc();
    do {
      lVar1 = lStack0000000000000088;
      in_stack_00000080 = 0;
      in_stack_00000078 = unaff_x26;
      in_stack_00000080 = FUN_057a19ac(unaff_x25,*(undefined8 *)(unaff_x21 + 0x18),0);
      thunk_FUN_0333a630();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar8 = *(long *)(lVar1 + 0x10);
      lVar9 = *unaff_x28;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = *(uint *)(lVar1 + 0x18);
      if (uVar10 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar10 * 0x10;
        *(uint *)(lVar1 + 0x18) = uVar10 + 1;
        puVar7 = (undefined8 *)(lVar8 + 0x28);
        *puVar7 = in_stack_00000080;
        *(long *)(lVar8 + 0x20) = in_stack_00000078;
        thunk_FUN_0333a630(puVar7,0);
      }
      else {
        FUN_043287e0(lVar1,in_stack_00000078,in_stack_00000080,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      while (uVar6 = FUN_052d44b4(&stack0x00000090,*unaff_x22), unaff_x25 = in_stack_000000a0,
            (uVar6 & 1) == 0) {
        FUN_052d44b0(&stack0x00000090,*(undefined8 *)PTR_DAT_072877f0);
LAB_06b5c4c0:
        uVar6 = FUN_052d44b4(&stack0x000000b0,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__25>__
                            );
        unaff_x21 = in_stack_000000c0;
        if ((uVar6 & 1) == 0) {
          FUN_052d44b0(&stack0x000000b0,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__21>__
                      );
          do {
            uVar6 = FUN_052d44b4(&stack0x000000d0,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__10>__
                                );
            lVar1 = in_stack_000000e0;
            if ((uVar6 & 1) == 0) {
              uVar10 = 2;
            }
            else {
              if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar11 = *(undefined8 *)(in_stack_000000e0 + 0x28);
              lVar8 = *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
              ;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(lVar8);
                lVar8 = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                ;
              }
              lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
              if (lVar9 == 0) {
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar8);
                  lVar8 = *(long *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                  ;
                }
                uVar4 = **(undefined8 **)(lVar8 + 0xb8);
                lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                                          );
                FUN_055d2e5c(lVar9,uVar4,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_VoiceHandler_<CheckAndroidMicrophonePermission>d__27>__
                             ,0);
                plVar5 = (long *)(*(long *)(*(long *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                           + 0xb8) + 0x20);
                *plVar5 = lVar9;
                thunk_FUN_0333a630(plVar5,lVar9);
              }
              uVar11 = FUN_039a8198(uVar11,lVar9,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_PhotoCaptureElement_<StartCamera>d__10>__
                                   );
              lVar8 = *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
              ;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(lVar8);
                lVar8 = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                ;
              }
              lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
              if (lVar9 == 0) {
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar8);
                  lVar8 = *(long *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                  ;
                }
                uVar4 = **(undefined8 **)(lVar8 + 0xb8);
                lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
                                          );
                Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                          (lVar9,uVar4,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AmplitudeEventLogger_<LogEvent>d__8>__
                           ,0);
                plVar5 = (long *)(*(long *)(*(long *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                           + 0xb8) + 0x28);
                *plVar5 = lVar9;
                thunk_FUN_0333a630(plVar5,lVar9);
              }
              uVar11 = FUN_0399dc8c(uVar11,lVar9,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginElement_<SendVerificationCode>d__10>__
                                   );
              uVar11 = FUN_0398c9a0(uVar11,*(undefined8 *)PTR_DAT_0729e098);
              uVar11 = FUN_039a6ef0(uVar11,*(undefined8 *)PTR_DAT_072891b8);
              uVar11 = FUN_039a7348(uVar11,in_stack_00000050,*(undefined8 *)PTR_DAT_072a7940);
              lVar8 = FUN_039a43e4(uVar11,*(undefined8 *)PTR_DAT_07289040);
              uVar11 = *(undefined8 *)(lVar1 + 0x10);
              if (*(int *)(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                          + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar11 = FUN_06b5d00c(uVar11);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar9 = *(long *)(lVar1 + 0x30);
              uVar4 = *(undefined8 *)(lVar1 + 0x20);
              uVar2 = *(undefined4 *)(lVar1 + 0x18);
              uVar3 = *(undefined4 *)(lVar8 + 0x18);
              if (lVar9 != 0) {
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_041e47e4(lVar9,*(undefined8 *)PTR_DAT_0727f6e8);
                if ((*(long *)(lVar1 + 0x30) != 0) && (*(long *)(lVar1 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
              }
              if (*(int *)(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                          + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              unaff_x26 = FUN_06b5d29c(in_stack_00000028,uVar11,uVar4,uVar2,0,0,lVar8,uVar3);
              if (unaff_x26 != 0) goto code_r0x06b5c494;
              FUN_06b5ae9c();
              uVar10 = 5;
            }
            FUN_052d44b0(&stack0x000000d0,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__23>__
                        );
            if ((uVar10 | 2) != 2) {
LAB_06b5c8e0:
              FUN_052d44b0(&stack0x000000f0,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRSpatialAnchor>,_AutomaticColocationLauncher_<CreateNewColocatedSpace>d__23>__
                          );
              return uVar10 != 5;
            }
            uVar6 = FUN_052d44b4(&stack0x000000f0,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Texture2D>,_AssetSelectionElement_<OnButtonCreated>d__13>__
                                );
            lVar1 = in_stack_00000100;
            if ((uVar6 & 1) == 0) {
              uVar10 = 0x18;
              goto LAB_06b5c8e0;
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar11 = *(undefined8 *)(in_stack_00000100 + 0x18);
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                        + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar11 = FUN_06b5d00c(uVar11);
            uVar4 = FUN_06b5d00c(*(undefined8 *)(lVar1 + 0x10));
            in_stack_00000028 = FUN_06b5d1d8(uVar4,uVar11,0,0);
            if (in_stack_00000028 == 0) {
              FUN_06b5ae9c();
              uVar10 = 5;
              goto LAB_06b5c8e0;
            }
            uVar11 = *(undefined8 *)(lVar1 + 0x20);
            lVar8 = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar8 = *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
              ;
            }
            lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
            if (lVar9 == 0) {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar8 = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                ;
              }
              uVar4 = **(undefined8 **)(lVar8 + 0xb8);
              lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TemplateSelectionElement_<LoadAndCreateButtons>d__9>__
                                        );
              Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                        (lVar9,uVar4,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_Door_<SetDoorPosition>d__27>__
                         ,0);
              plVar5 = (long *)(*(long *)(*(long *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                                         + 0xb8) + 0x18);
              *plVar5 = lVar9;
              thunk_FUN_0333a630(plVar5,lVar9);
            }
            uVar11 = FUN_0399a7bc(uVar11,lVar9,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LogoutElement_<Logout>d__7>__
                                 );
            in_stack_00000050 = FUN_039a6ef0(uVar11,*(undefined8 *)PTR_DAT_072891b8);
            if (*(long *)(lVar1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_041e3694(&stack0x00000060,*(long *)(lVar1 + 0x28),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_UserManager_<Start>d__1>__
                        );
            in_stack_000000d8 = in_stack_00000068;
            in_stack_000000d0 = in_stack_00000060;
            in_stack_000000e0 = in_stack_00000070;
          } while( true );
        }
        if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar1 = in_stack_00000050;
        if (*(long *)(in_stack_000000c0 + 0x20) != 0) {
          lVar1 = *(long *)(in_stack_000000c0 + 0x20);
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_041e3694(&stack0x00000060,lVar1,*(undefined8 *)PTR_DAT_07287808);
        in_stack_00000098 = in_stack_00000068;
        in_stack_00000090 = in_stack_00000060;
        in_stack_000000a0 = in_stack_00000070;
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar6 = FUN_050fa644();
    } while ((uVar6 & 1) != 0);
    unaff_x27 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
                                  );
    FUN_04327f60(unaff_x27,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                );
  } while( true );
code_r0x06b5c494:
  if (*(long *)(lVar1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_041e3694(&stack0x00000060,*(long *)(lVar1 + 0x28),
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_VoiceServiceRequest_<SimulateResponse>d__5>__
              );
  in_stack_000000b8 = in_stack_00000068;
  in_stack_000000b0 = in_stack_00000060;
  in_stack_000000c0 = in_stack_00000070;
  goto LAB_06b5c4c0;
}


