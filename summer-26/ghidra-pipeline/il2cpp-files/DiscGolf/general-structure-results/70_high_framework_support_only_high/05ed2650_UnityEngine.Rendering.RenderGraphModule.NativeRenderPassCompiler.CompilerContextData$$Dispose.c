/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData$$Dispose
ENTRY_POINT: 05ed2650
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ed2ca0) */
/* WARNING: Removing unreachable block (ram,0x05ed2a3c) */
/* WARNING: Removing unreachable block (ram,0x05ed2f98) */
/* WARNING: Removing unreachable block (ram,0x05ed2f9c) */
/* WARNING: Removing unreachable block (ram,0x05ed3078) */
/* WARNING: Removing unreachable block (ram,0x05ed3014) */

void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__Dispose
               (undefined *param_1)

{
  uint uVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar17;
  uint unaff_w20;
  ulong uVar18;
  long unaff_x22;
  uint uVar19;
  long *unaff_x23;
  long lVar20;
  undefined8 *unaff_x27;
  int iVar21;
  int unaff_w29;
  double dVar22;
  double dVar23;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  float fVar24;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  double in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  double in_stack_00000058;
  undefined8 *in_stack_00000060;
  double in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  double in_stack_00000080;
  undefined8 *in_stack_00000088;
  double in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  double in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  double in_stack_000000e8;
  
  do {
    uStack0000000000000038 = unaff_w20;
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(param_1 + 0x48),&stack0x00000038);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[10] = lVar10;
    LeanTween__value(unaff_x23 + 10,lVar10);
    uVar12 = FUN_0536e164(*(undefined8 *)
                           Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                          ,unaff_x23,0);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630b598(uVar12,0);
    do {
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        iVar21 = 0;
        uVar19 = 0;
        do {
          uVar1 = 0;
          if (unaff_w20 != 0) {
            uVar1 = uVar19 / unaff_w20;
          }
          if (uVar19 == uVar1 * unaff_w20) {
            lVar10 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar10 = FUN_035abb34(lVar10,*(undefined8 *)
                                          Method_System_Collections_Generic_List<SampleAvatarConfig_AssetData>_get_Item__
                                 );
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
              uVar18 = 0;
              uVar17 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
              do {
                if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                lVar11 = *(long *)(lVar10 + 0x20 + uVar18 * 8);
                uVar12 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
                if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar17 = FUN_06350670(lVar11,uVar12,0);
                if ((uVar17 & 1) == 0) {
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar20 = *(long *)(lVar11 + 0x88);
                  lVar13 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if ((lVar20 == *(long *)(lVar13 + 0x88)) &&
                     (*(long *)(lVar11 + 0x88) != in_stack_00000020)) {
                    if (*(long *)(lVar11 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar17 = FUN_03c5ecb0(*(long *)(lVar11 + 0xd0),in_stack_00000020,
                                          *(undefined8 *)PTR_DAT_06a0e4b8);
                    if ((uVar17 & 1) != 0) {
                      uVar17 = FUN_05e6ffdc(lVar11,0);
                      if (((uVar17 & 1) == 0) ||
                         (uVar17 = FUN_05e70000(lVar11,0), (uVar17 & 1) == 0)) {
                        lVar13 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,5);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        *(undefined8 *)(lVar13 + 0x20) =
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                        ;
                        LeanTween__value();
                        uVar12 = thunk_FUN_06354368(lVar11,0);
                        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        *(undefined8 *)(lVar13 + 0x28) = uVar12;
                        LeanTween__value();
                        if (*(uint *)(lVar13 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        *(undefined8 *)(lVar13 + 0x30) =
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                        ;
                        LeanTween__value();
                        lVar11 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        uVar12 = thunk_FUN_06354368(lVar11,0);
                        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        *(undefined8 *)(lVar13 + 0x38) = uVar12;
                        LeanTween__value();
                        if (*(uint *)(lVar13 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        *(undefined8 *)(lVar13 + 0x40) =
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        ;
                        LeanTween__value();
                        uVar12 = FUN_0536dde4(lVar13,0);
                        FUN_05e70210(uVar12,0);
                      }
                      else {
                        FUN_05ec9e5c(in_stack_00000018,lVar11,in_stack_00000020,1,0);
                      }
                    }
                  }
                }
                uVar17 = (ulong)*(uint *)(lVar10 + 0x18);
                uVar18 = uVar18 + 1;
              } while ((long)uVar18 < (long)(int)*(uint *)(lVar10 + 0x18));
            }
            uVar12 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
            FUN_05ec9e5c(in_stack_00000018,uVar12,in_stack_00000020,1,0);
            if (*(char *)(in_stack_00000018 + 0x88) != '\0') {
              in_stack_000000e8 = in_stack_00000010;
              uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x000000e8)
              ;
              lVar10 = FUN_0400ff1c(unaff_x22,uVar19,*unaff_x27);
              puVar3 = PTR_DAT_069fb9c0;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              in_stack_00000030 = *(undefined8 *)(lVar10 + 0x80);
              uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000030)
              ;
              in_stack_00000028 = in_stack_00000020;
              uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar3 + 0x70),&stack0x00000028);
              uVar12 = FUN_0536e120(*(undefined8 *)
                                     Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                                    ,uVar12,uVar14,uVar15,0);
              if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_0630b598(uVar12,0);
            }
            iVar21 = iVar21 + 1;
          }
        } while ((iVar21 != unaff_w29) &&
                (uVar19 = uVar19 + 1, (int)uVar19 < *(int *)(unaff_x22 + 0x18)));
      }
      do {
        while (uVar18 = FUN_0525c4dc(&stack0x00000080,
                                     *(undefined8 *)
                                      Method_System_Nullable<FloatFormatHandling>__ctor__),
              unaff_x22 = in_stack_00000098, dVar22 = in_stack_00000090, (uVar18 & 1) == 0) {
          FUN_0525c5fc(&stack0x00000080,
                       *(undefined8 *)Method_System_Nullable<ExpressionKind>_GetValueOrDefault__);
LAB_05ed221c:
          do {
            uVar18 = FUN_052541c0(&stack0x000000b0,
                                  *(undefined8 *)
                                   Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                 );
            lVar11 = in_stack_000000c8;
            lVar10 = in_stack_00000048;
            if ((uVar18 & 1) == 0) {
              FUN_052542e4(in_stack_00000050,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__
                          );
              if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96858(lVar10);
              }
              if (*(char *)(in_stack_00000018 + 0x88) == '\0') {
                return;
              }
              plVar16 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
              FUN_05377f4c(plVar16,0);
              lVar10 = in_stack_000000e0;
              if ((in_stack_000000e0 != 0) &&
                 (FUN_04f94d1c(in_stack_000000e0,
                               *(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                              ), in_stack_000000d8 != 0)) {
                FUN_04f7f9d8(in_stack_000000d8,
                             *(undefined8 *)
                              Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>__ctor__
                            );
                FUN_05ed16c0(in_stack_00000018,in_stack_00000020,&stack0x000000e0,&stack0x000000d8);
                if (plVar16 != (long *)0x0) {
                  FUN_05379d80(plVar16,*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                               ,0);
                  FUN_04f94fd0(&stack0x00000058,lVar10,
                               *(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Create__
                              );
                  puVar7 = 
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
                  puVar6 = 
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                  ;
                  puVar5 = 
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                  ;
                  puVar4 = 
                  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetStateMachine__
                  ;
                  puVar3 = Method_System_Nullable<OvrAvatarEntity_SkeletonJoint>_GetValueOrDefault__
                  ;
                  in_stack_000000b8 = in_stack_00000060;
                  in_stack_000000b0 = in_stack_00000058;
                  in_stack_000000c8 = in_stack_00000070;
                  _uStack00000000000000c0 = in_stack_00000068;
                  in_stack_000000d0 = in_stack_00000078;
                  in_stack_00000050 = &stack0x000000b0;
                  in_stack_00000048 = 0;
                  while( true ) {
                    uVar18 = FUN_052541c0(&stack0x000000b0,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                         );
                    lVar11 = in_stack_000000c8;
                    dVar22 = _uStack00000000000000c0;
                    lVar10 = in_stack_00000048;
                    if ((uVar18 & 1) == 0) {
                      FUN_052542e4(in_stack_00000050,
                                   *(undefined8 *)
                                    Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__
                                  );
                      if (lVar10 == 0) {
                        uVar12 = (**(code **)(*plVar16 + 0x168))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                        }
                        FUN_0630b598(uVar12,0);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02d96858(lVar10);
                    }
                    uVar8 = uStack00000000000000c0;
                    in_stack_000000e8 =
                         (double)CONCAT44(in_stack_000000e8._4_4_,uStack00000000000000c0);
                    uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),
                                                &stack0x000000e8);
                    FUN_03604aa8(lVar11,*(undefined8 *)puVar4);
                    lVar10 = FUN_03605774(extraout_x1,*(undefined8 *)puVar3);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar14 = thunk_FUN_06354368(lVar10,0);
                    if (in_stack_000000d8 == 0) break;
                    uVar9 = FUN_04f7f7bc(in_stack_000000d8,(ulong)dVar22 & 0xffffffff,
                                         *(undefined8 *)
                                          Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                                        );
                    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uVar9);
                    uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                &stack0x00000030);
                    uVar12 = FUN_0536e120(*(undefined8 *)puVar6,uVar12,uVar14,uVar15,0);
                    FUN_05379d80(plVar16,uVar12,0);
                    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar8);
                    uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),
                                                &stack0x00000028);
                    FUN_03604aa8(lVar11,*(undefined8 *)puVar4);
                    lVar10 = FUN_03605774(extraout_x1_00,*(undefined8 *)puVar3);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar14 = thunk_FUN_06354368(lVar10,0);
                    uVar12 = FUN_0536e0dc(*(undefined8 *)puVar5,uVar12,uVar14,0);
                    FUN_05379d80(plVar16,uVar12,0);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    FUN_04ff1ec4(&stack0x00000058,lVar11,
                                 *(undefined8 *)
                                  Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
                    in_stack_00000080 = in_stack_00000058;
                    in_stack_00000058 = 0.0;
                    in_stack_00000088 = in_stack_00000060;
                    in_stack_00000098 = in_stack_00000070;
                    in_stack_00000090 = in_stack_00000068;
                    in_stack_000000a0 = in_stack_00000078;
                    in_stack_00000060 = &stack0x00000080;
                    while (uVar18 = FUN_0525c4dc(&stack0x00000080,
                                                 *(undefined8 *)
                                                  Method_System_Nullable<FloatFormatHandling>__ctor__
                                                ), lVar10 = in_stack_00000098, (uVar18 & 1) != 0) {
                      in_stack_000000e8 = in_stack_00000090;
                      uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                                  &stack0x000000e8);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      in_stack_00000030 =
                           CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(lVar10 + 0x18));
                      uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  &stack0x00000030);
                      uVar12 = FUN_0536e0dc(*(undefined8 *)puVar7,uVar12,uVar14,0);
                      FUN_05379d80(plVar16,uVar12,0);
                    }
                    FUN_0525c5fc(&stack0x00000080,
                                 *(undefined8 *)
                                  Method_System_Nullable<ExpressionKind>_GetValueOrDefault__);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (in_stack_000000d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iStack0000000000000008 =
                 FUN_04f7f7bc(in_stack_000000d8,(ulong)_uStack00000000000000c0 & 0xffffffff,
                              *(undefined8 *)
                               Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                             );
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar24 = unaff_s9 * (float)iStack0000000000000008;
            uStack000000000000000c = 0x80000000;
            if ((float)(int)fVar24 != INFINITY) {
              uStack000000000000000c = (int)fVar24;
            }
            if (unaff_s14 <= fVar24 - (float)(int)uStack000000000000000c) {
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              dVar23 = (double)fVar24;
              dVar22 = modf(dVar23,&stack0x00000058);
              if (0.0 <= fVar24) {
                dVar2 = unaff_d11;
                if (dVar22 == unaff_d10) goto LAB_05ed2304;
                dVar22 = (double)(long)(dVar23 + unaff_d10);
              }
              else {
                dVar2 = unaff_d13;
                if (dVar22 == unaff_d12) {
LAB_05ed2304:
                  dVar22 = in_stack_00000058;
                  if (((long)in_stack_00000058 & 1U) != 0) {
                    dVar22 = in_stack_00000058 + dVar2;
                  }
                }
                else {
                  dVar22 = (double)(long)(dVar23 + unaff_d12);
                }
              }
              if (dVar22 == INFINITY) goto LAB_05ed221c;
              uStack000000000000000c = (uint)dVar22;
            }
          } while ((int)uStack000000000000000c < 1);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04ff1ec4(&stack0x00000058,lVar11,
                       *(undefined8 *)Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
          in_stack_000000a0 = in_stack_00000078;
          in_stack_00000088 = in_stack_00000060;
          in_stack_00000080 = in_stack_00000058;
          in_stack_00000098 = in_stack_00000070;
          in_stack_00000090 = in_stack_00000068;
          in_stack_00000058 = 0.0;
          in_stack_00000060 = &stack0x00000080;
        }
        if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar19 = *(uint *)(in_stack_00000098 + 0x18);
      } while ((int)uVar19 < 2);
      unaff_w29 = uVar19 - uStack000000000000000c;
      in_stack_00000010 = in_stack_00000090;
      if (unaff_w29 < 2) {
        unaff_w29 = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = 0;
      if (uStack000000000000000c != 0) {
        uVar1 = uVar19 / uStack000000000000000c;
      }
      dVar23 = modf((double)(int)uVar1,&stack0x000000e8);
      if (dVar23 == unaff_d10) {
        dVar23 = in_stack_000000e8;
        if (((long)in_stack_000000e8 & 1U) != 0) {
          dVar23 = in_stack_000000e8 + unaff_d11;
        }
      }
      else {
        dVar23 = (double)(long)((double)(int)uVar1 + unaff_d10);
      }
      unaff_w20 = (uint)dVar23;
      if ((int)unaff_w20 < 2) {
        unaff_w20 = 1;
      }
      if (dVar23 == INFINITY) {
        unaff_w20 = 1;
      }
    } while (*(char *)(in_stack_00000018 + 0x88) == '\0');
    unaff_x23 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,7);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uStack000000000000000c);
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000030);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if ((int)unaff_x23[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[4] = lVar10;
    LeanTween__value(unaff_x23 + 4,lVar10);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,iStack0000000000000008);
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000028);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if ((*(uint *)(unaff_x23 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[5] = lVar10;
    LeanTween__value(unaff_x23 + 5,lVar10);
    in_stack_000000e8 = dVar22;
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x000000e8);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[6] = lVar10;
    LeanTween__value(unaff_x23 + 6,lVar10);
    uStack0000000000000044 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),(long)&stack0x00000040 + 4)
    ;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if ((*(uint *)(unaff_x23 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[7] = lVar10;
    LeanTween__value(unaff_x23 + 7,lVar10);
    uStack0000000000000040 = uStack000000000000000c;
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000040);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[8] = lVar10;
    LeanTween__value(unaff_x23 + 8,lVar10);
    iStack000000000000003c = unaff_w29;
    lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),(long)&stack0x00000038 + 4)
    ;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x23 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x23[9] = lVar10;
    LeanTween__value(unaff_x23 + 9,lVar10);
    param_1 = PTR_DAT_069fb9c0;
  } while( true );
}


