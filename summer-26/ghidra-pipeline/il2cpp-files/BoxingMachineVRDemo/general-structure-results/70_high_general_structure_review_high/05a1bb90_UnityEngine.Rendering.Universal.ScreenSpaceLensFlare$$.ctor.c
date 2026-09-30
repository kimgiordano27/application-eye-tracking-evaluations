/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceLensFlare$$.ctor
ENTRY_POINT: 05a1bb90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_ScreenSpaceLensFlare___ctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long lVar18;
  long in_x9;
  long lVar19;
  long unaff_x20;
  long unaff_x21;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  puVar17 = *(undefined4 **)(param_1 + 0xb8);
  uVar27 = *puVar17;
  uVar25 = puVar17[1];
  uVar24 = puVar17[2];
  uVar23 = puVar17[3];
  if (*(int *)(**(long **)(in_x9 + 0x120) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0602dbec(0,0,0,uVar27,uVar25,uVar24,uVar23);
  FUN_0602b418(0);
  if (*(long *)(unaff_x21 + 0x80) != 0) {
    iVar10 = FUN_047caab4(*(long *)(unaff_x21 + 0x80),
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_get_Task__
                         );
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
    ;
    if (iVar10 < 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(int *)(unaff_x21 + 0x24) - 1;
    }
    if ((*(long *)(unaff_x21 + 0x80) != 0) &&
       (lVar13 = FUN_047cac14(*(long *)(unaff_x21 + 0x80),
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                             ),
       puVar9 = 
       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
       , lVar13 != 0)) {
      FUN_04472220(&stack0x00000048,lVar13,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                  );
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
      ;
      in_stack_00000068 = in_stack_00000050;
      in_stack_00000060 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000058;
      while (uVar14 = FUN_04b1ba5c(&stack0x00000060,*(undefined8 *)puVar8), (uVar14 & 1) != 0) {
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(in_stack_00000070 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar3 = *(uint *)(*(long *)(in_stack_00000070 + 0x10) + 0x24);
        if ((int)uVar3 <= (int)uVar20) {
          uVar20 = uVar3;
        }
      }
      FUN_04b1ba58(&stack0x00000060,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                  );
      lVar13 = *(long *)(unaff_x21 + 0x178);
      if (lVar13 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x30);
        uVar6 = *(int *)(unaff_x21 + 0x24) - 1;
        uVar3 = *(uint *)(lVar13 + 0x2c);
        if ((int)uVar6 <= (int)*(uint *)(lVar13 + 0x2c)) {
          uVar3 = uVar6;
        }
        uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        uVar1 = uVar3;
        if ((int)uVar2 <= (int)uVar3) {
          uVar1 = uVar2;
        }
        if ((int)uVar20 <= (int)uVar2) {
          uVar20 = uVar1;
        }
        *(bool *)(unaff_x21 + 0x210) = uVar3 == uVar6;
        if ((in_stack_00000030._4_4_ == 0) || (*(char *)(lVar13 + 0x10) != '\0')) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *(char *)(lVar13 + 0x5b);
        }
        if ((*(long *)(unaff_x21 + 0x80) != 0) &&
           (lVar13 = FUN_047cac14(*(long *)(unaff_x21 + 0x80),*(undefined8 *)puVar7), lVar13 != 0))
        {
          FUN_04472220(&stack0x00000048,lVar13,*(undefined8 *)puVar9);
          in_stack_00000068 = in_stack_00000050;
          in_stack_00000060 = in_stack_00000048;
          in_stack_00000070 = in_stack_00000058;
LAB_05a1bd3c:
          do {
            uVar14 = FUN_04b1ba5c(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                                 );
            lVar13 = in_stack_00000070;
            if ((uVar14 & 1) == 0) {
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
            lVar18 = *(long *)(in_stack_00000070 + 0x10);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar10 = *(int *)(lVar18 + 0x10);
            iVar26 = *(int *)(lVar18 + 0x14);
            iVar28 = *(int *)(lVar18 + 0x18);
            FUN_06066c74();
            uVar14 = FUN_05a1d160((float)iVar10,(float)iVar26,(float)iVar28);
          } while ((uVar14 & 1) != 0);
          if (cVar4 != '\0') goto code_r0x05a1bda4;
          goto LAB_05a1bdd4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
code_r0x05a1bda4:
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar14 = FUN_05a1d474((float)*(int *)(lVar13 + 0x10),(float)*(int *)(lVar13 + 0x14),
                        (float)*(int *)(lVar13 + 0x18));
  if ((uVar14 & 1) == 0) {
LAB_05a1bdd4:
    lVar13 = FUN_05a1d73c();
    if (lVar13 != 0) {
      lVar18 = *(long *)(lVar13 + 0x10);
      if (lVar18 == 0) {
LAB_05a1c3bc:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar10 = 0;
      while (iVar10 < *(int *)(lVar18 + 0x18)) {
        if (*(long *)(lVar13 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar18 = FUN_03aac1c4(*(long *)(lVar13 + 0x20),iVar10,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Create__
                             );
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0603323c(lVar18,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                     ,*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x1c),0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x34),lVar18,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                     ,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x20),lVar18,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetException__
                     ,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x28),lVar18,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetException__
                     ,0);
        FUN_0603323c(lVar18,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_get_Task__
                     ,uVar3,0);
        FUN_0603323c(lVar18,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetException__
                     ,uVar20,0);
        if (*(long *)(unaff_x21 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x148) + 0x28),lVar18,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                     ,0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0603323c(lVar18,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                     ,*(undefined1 *)(*(long *)(unaff_x21 + 0x178) + 0x5c),0);
        if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x4c),lVar18,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetResult__
                     ,0);
        FUN_0603351c(lVar18,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                     ,in_stack_00000038,0);
        if (in_stack_00000030._4_4_ != 0) {
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
          lVar21 = *(long *)(unaff_x21 + 0x198);
          iVar26 = FUN_0601d804();
          iVar28 = FUN_0601d8b8();
          iVar11 = FUN_0601d804();
          iVar12 = FUN_0601d8b8();
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_0603a064((float)iVar26,(float)iVar28,1.0 / (float)iVar11,1.0 / (float)iVar12,lVar21,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                       ,0);
          if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar21 = FUN_03aac1c4(*(long *)(lVar13 + 0x10),iVar10,
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
          lVar19 = *(long *)(unaff_x21 + 0x198);
          lVar15 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
          ;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar15 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
            ;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_0603a118(lVar19,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                       ,*(undefined8 *)(lVar15 + 0x30),0);
          uVar16 = UnityEngine_Rendering_Universal_FilmGrain__IsTileCompatible();
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar22 = *(undefined8 *)(unaff_x21 + 0x198);
          if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0602d2dc(uVar16,0,uVar22,lVar21,*(undefined4 *)(lVar21 + 0x18),lVar18,0,0);
        }
        lVar21 = *(long *)(unaff_x21 + 0x178);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(char *)(lVar21 + 0x38) != '\0') {
          if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar21 = FUN_03aac1c4(*(long *)(lVar13 + 0x10),iVar10,
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
          FUN_0603323c(lVar18,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_SetResult__
                       ,0,0);
          if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_060333e4(*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x3c),lVar18,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetException__
                       ,0);
          if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          cVar5 = *(char *)(*(long *)(unaff_x21 + 0x178) + 0x40);
          if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar23 = FUN_04f811f8(cVar5 != '\0',0);
          FUN_0603323c(lVar18,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Create__
                       ,uVar23,0);
          if (*(long *)(unaff_x21 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_0603323c(lVar18,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                       ,*(undefined4 *)(*(long *)(unaff_x21 + 0x178) + 0x44),0);
          lVar19 = *(long *)(unaff_x21 + 0x1b0);
          lVar15 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
          ;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar15 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
            ;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_0603a118(lVar19,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                       ,*(undefined8 *)(lVar15 + 0x30),0);
          uVar16 = UnityEngine_Rendering_Universal_FilmGrain__IsTileCompatible();
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar22 = *(undefined8 *)(unaff_x21 + 0x1b0);
          if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0602d2dc(uVar16,0,uVar22,lVar21,*(undefined4 *)(lVar21 + 0x18),lVar18,0,0);
          lVar21 = *(long *)(unaff_x21 + 0x178);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
        }
        if (*(char *)(lVar21 + 0x48) != '\0') {
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
          if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar21 = FUN_03aac1c4(*(long *)(lVar13 + 0x18),iVar10,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Start<CorePackageInitializer_<GenerateProjectConfigurationAsync>d__53>__
                               );
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar16 = *(undefined8 *)(unaff_x21 + 0x1c0);
          uVar22 = *(undefined8 *)(unaff_x21 + 0x1c8);
          if (*(int *)(*(long *)PTR_DAT_06769120 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0602d2dc(uVar16,0,uVar22,lVar21,*(undefined4 *)(lVar21 + 0x18),lVar18,0,0);
        }
        lVar18 = *(long *)(lVar13 + 0x10);
        iVar10 = iVar10 + 1;
        if (lVar18 == 0) goto LAB_05a1c3bc;
      }
    }
  }
  goto LAB_05a1bd3c;
}


