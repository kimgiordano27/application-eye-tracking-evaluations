/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceLensFlare$$IsStreaksActive
ENTRY_POINT: 05a1c0a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_ScreenSpaceLensFlare__IsStreaksActive(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long lVar11;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar12;
  float unaff_s8;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000070;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0603a118(unaff_x19,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                 ,*(undefined8 *)(param_1 + 0x30),0);
    uVar8 = UnityEngine_Rendering_Universal_FilmGrain__IsTileCompatible();
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar12 = *(undefined8 *)(unaff_x21 + 0x198);
    if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0602d2dc(uVar8,0,uVar12,unaff_x28,*(undefined4 *)(unaff_x28 + 0x18),unaff_x27,0,0);
    do {
      lVar10 = *(long *)(unaff_x21 + 0x178);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(char *)(lVar10 + 0x38) != '\0') {
        if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar10 = FUN_03aac1c4(*(long *)(unaff_x25 + 0x10),unaff_w26,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Start<CorePackageInitializer_<GenerateProjectConfigurationAsync>d__53>__
                             );
        if (*(long *)(unaff_x21 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_06039fa4(*(long *)(unaff_x21 + 0x1b0),
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetStateMachine__
                     ,1,0);
        FUN_0603323c(unaff_x27,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                     ,0,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x3c),unaff_x27,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetException__
                     ,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        cVar1 = *(char *)(*(long *)(unaff_x21 + 0x178) + 0x40);
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_04f811f8(cVar1 != '\0',0);
        FUN_0603323c(unaff_x27,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Create__
                     ,uVar6,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0603323c(unaff_x27,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                     ,*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x44),0);
        lVar11 = *(long *)(unaff_x21 + 0x1b0);
        lVar9 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
        ;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
          ;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0603a118(lVar11,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                     ,*(undefined8 *)(lVar9 + 0x30),0);
        uVar8 = UnityEngine_Rendering_Universal_FilmGrain__IsTileCompatible();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar12 = *(undefined8 *)(unaff_x21 + 0x1b0);
        if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602d2dc(uVar8,0,uVar12,lVar10,*(undefined4 *)(lVar10 + 0x18),unaff_x27,0,0);
        lVar10 = *(long *)(unaff_x21 + 0x178);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
      }
      if (*(char *)(lVar10 + 0x48) != '\0') {
        if (*(long *)(unaff_x21 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0603a168(*(long *)(unaff_x21 + 0x1c8),
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                     ,in_stack_00000040,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(unaff_x21 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_06039fa4(*(long *)(unaff_x21 + 0x1c8),
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetStateMachine__
                     ,0,0);
        if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar10 = FUN_03aac1c4(*(long *)(unaff_x25 + 0x18),unaff_w26,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Start<CorePackageInitializer_<GenerateProjectConfigurationAsync>d__53>__
                             );
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar8 = *(undefined8 *)(unaff_x21 + 0x1c0);
        uVar12 = *(undefined8 *)(unaff_x21 + 0x1c8);
        if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602d2dc(uVar8,0,uVar12,lVar10,*(undefined4 *)(lVar10 + 0x18),unaff_x27,0,0);
      }
      lVar10 = *(long *)(unaff_x25 + 0x10);
      unaff_w26 = unaff_w26 + 1;
      if (lVar10 == 0) {
LAB_05a1c3bc:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      while (*(int *)(lVar10 + 0x18) <= unaff_w26) {
LAB_05a1bd3c:
        do {
          do {
            uVar7 = FUN_04b1ba5c(&stack0x00000060,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                                );
            lVar10 = in_stack_00000070;
            if ((uVar7 & 1) == 0) {
              FUN_04b1ba58(&stack0x00000060,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                          );
              return;
            }
            if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar9 = *(long *)(in_stack_00000070 + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar2 = *(int *)(lVar9 + 0x10);
            iVar3 = *(int *)(lVar9 + 0x14);
            iVar4 = *(int *)(lVar9 + 0x18);
            FUN_06066c74();
            uVar7 = FUN_05a1d160((float)iVar2,(float)iVar3,(float)iVar4);
          } while ((uVar7 & 1) != 0);
          if (iStack0000000000000030 != 0) {
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar7 = FUN_05a1d474((float)*(int *)(lVar10 + 0x10),(float)*(int *)(lVar10 + 0x14),
                                 (float)*(int *)(lVar10 + 0x18));
            if ((uVar7 & 1) != 0) goto LAB_05a1bd3c;
          }
          unaff_x25 = FUN_05a1d73c();
        } while (unaff_x25 == 0);
        lVar10 = *(long *)(unaff_x25 + 0x10);
        if (lVar10 == 0) goto LAB_05a1c3bc;
        unaff_w26 = 0;
      }
      if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      unaff_x27 = FUN_03aac1c4(*(long *)(unaff_x25 + 0x20),unaff_w26,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Create__
                              );
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0603323c(unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                   ,*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x1c),0);
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x34),unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                   ,0);
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x20),unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetException__
                   ,0);
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x28),unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetException__
                   ,0);
      FUN_0603323c(unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_get_Task__
                   ,unaff_w23,0);
      FUN_0603323c(unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetException__
                   ,unaff_w24,0);
      if (*(long *)(unaff_x21 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x148) + 0x28),unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                   ,0);
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0603323c(unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                   ,*(undefined1 *)(*(long *)(unaff_x21 + 0x178) + 0x5c),0);
      if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x4c),unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetResult__
                   ,0);
      FUN_0603351c(unaff_x27,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                   ,in_stack_00000038,0);
    } while (iStack0000000000000034 == 0);
    if (*(long *)(unaff_x21 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0603a168(*(long *)(unaff_x21 + 0x198),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                 ,in_stack_00000040,0);
    if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(unaff_x21 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_06039fa4(*(long *)(unaff_x21 + 0x198),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetStateMachine__
                 ,0,0);
    lVar10 = *(long *)(unaff_x21 + 0x198);
    iVar2 = FUN_0601d804();
    iVar3 = FUN_0601d8b8();
    iVar4 = FUN_0601d804();
    iVar5 = FUN_0601d8b8();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0603a064((float)iVar2,(float)iVar3,unaff_s8 / (float)iVar4,unaff_s8 / (float)iVar5,lVar10,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                 ,0);
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    unaff_x28 = FUN_03aac1c4(*(long *)(unaff_x25 + 0x10),unaff_w26,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Start<CorePackageInitializer_<GenerateProjectConfigurationAsync>d__53>__
                            );
    if (*(long *)(unaff_x21 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_06039fa4(*(long *)(unaff_x21 + 0x198),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetStateMachine__
                 ,0,0);
    unaff_x19 = *(long *)(unaff_x21 + 0x198);
    lVar10 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
    ;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
      ;
    }
    param_1 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
  } while( true );
}


