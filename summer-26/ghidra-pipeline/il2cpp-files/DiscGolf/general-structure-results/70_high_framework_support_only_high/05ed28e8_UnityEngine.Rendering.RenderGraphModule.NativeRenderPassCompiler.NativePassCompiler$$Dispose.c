/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler$$Dispose
ENTRY_POINT: 05ed28e8
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

void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__Dispose
               (undefined **param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar17;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  long lVar18;
  long unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  int unaff_w29;
  double dVar19;
  double dVar20;
  float unaff_s9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  float unaff_s14;
  float fVar21;
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
  
code_r0x05ed28e8:
  *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)param_1[0x41];
  LeanTween__value();
  uVar13 = FUN_0536dde4(unaff_x26,0);
  FUN_05e70210(uVar13,0);
  do {
    do {
      do {
        do {
          uVar17 = (ulong)*(uint *)(unaff_x24 + 0x18);
          unaff_x21 = unaff_x21 + 1;
          if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x21) {
            do {
              uVar13 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
              FUN_05ec9e5c(in_stack_00000018,uVar13,in_stack_00000020,1,0);
              if (*(char *)(in_stack_00000018 + 0x88) != '\0') {
                in_stack_000000e8 = in_stack_00000010;
                uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x000000e8);
                lVar14 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
                puVar4 = PTR_DAT_069fb9c0;
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000030 = *(undefined8 *)(lVar14 + 0x80);
                uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                            &stack0x00000030);
                in_stack_00000028 = in_stack_00000020;
                uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar4 + 0x70),&stack0x00000028);
                uVar13 = FUN_0536e120(*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                                      ,uVar13,uVar15,uVar16,0);
                if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                FUN_0630b598(uVar13,0);
              }
              unaff_w28 = unaff_w28 + 1;
              do {
                if ((unaff_w28 == unaff_w29) ||
                   (unaff_w23 = unaff_w23 + 1, *(int *)(unaff_x22 + 0x18) <= (int)unaff_w23)) {
                  do {
                    do {
                      while (uVar17 = FUN_0525c4dc(&stack0x00000080,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Nullable<FloatFormatHandling>__ctor__
                                                  ), unaff_x22 = in_stack_00000098,
                            dVar19 = in_stack_00000090, (uVar17 & 1) == 0) {
                        FUN_0525c5fc(&stack0x00000080,
                                     *(undefined8 *)
                                      Method_System_Nullable<ExpressionKind>_GetValueOrDefault__);
LAB_05ed221c:
                        do {
                          uVar17 = FUN_052541c0(&stack0x000000b0,
                                                *(undefined8 *)
                                                 Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                               );
                          lVar12 = in_stack_000000c8;
                          lVar14 = in_stack_00000048;
                          if ((uVar17 & 1) == 0) {
                            FUN_052542e4(in_stack_00000050,
                                         *(undefined8 *)
                                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__
                                        );
                            if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96858(lVar14);
                            }
                            if (*(char *)(in_stack_00000018 + 0x88) == '\0') {
                              return;
                            }
                            plVar11 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
                            FUN_05377f4c(plVar11,0);
                            lVar14 = in_stack_000000e0;
                            if ((in_stack_000000e0 != 0) &&
                               (FUN_04f94d1c(in_stack_000000e0,
                                             *(undefined8 *)
                                              Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                                            ), in_stack_000000d8 != 0)) {
                              FUN_04f7f9d8(in_stack_000000d8,
                                           *(undefined8 *)
                                            Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>__ctor__
                                          );
                              FUN_05ed16c0(in_stack_00000018,in_stack_00000020,&stack0x000000e0,
                                           &stack0x000000d8);
                              if (plVar11 != (long *)0x0) {
                                FUN_05379d80(plVar11,*(undefined8 *)
                                                                                                            
                                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                                             ,0);
                                FUN_04f94fd0(&stack0x00000058,lVar14,
                                             *(undefined8 *)
                                              Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Create__
                                            );
                                puVar8 = 
                                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                                ;
                                puVar7 = 
                                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                                ;
                                puVar6 = 
                                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                                ;
                                puVar5 = 
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetStateMachine__
                                ;
                                puVar4 = 
                                Method_System_Nullable<OvrAvatarEntity_SkeletonJoint>_GetValueOrDefault__
                                ;
                                in_stack_000000b8 = in_stack_00000060;
                                in_stack_000000b0 = in_stack_00000058;
                                in_stack_000000c8 = in_stack_00000070;
                                _uStack00000000000000c0 = in_stack_00000068;
                                in_stack_000000d0 = in_stack_00000078;
                                in_stack_00000050 = &stack0x000000b0;
                                in_stack_00000048 = 0;
                                while( true ) {
                                  uVar17 = FUN_052541c0(&stack0x000000b0,
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                                  );
                                  lVar12 = in_stack_000000c8;
                                  dVar19 = _uStack00000000000000c0;
                                  lVar14 = in_stack_00000048;
                                  if ((uVar17 & 1) == 0) {
                                    FUN_052542e4(in_stack_00000050,
                                                 *(undefined8 *)
                                                  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__
                                                );
                                    if (lVar14 == 0) {
                                      uVar13 = (**(code **)(*plVar11 + 0x168))
                                                         (plVar11,*(undefined8 *)(*plVar11 + 0x170))
                                      ;
                                      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                                      }
                                      FUN_0630b598(uVar13,0);
                                      return;
                                    }
                    /* WARNING: Subroutine does not return */
                                    FUN_02d96858(lVar14);
                                  }
                                  uVar9 = uStack00000000000000c0;
                                  in_stack_000000e8 =
                                       (double)CONCAT44(in_stack_000000e8._4_4_,
                                                        uStack00000000000000c0);
                                  uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                               (PTR_DAT_069fb9c0 + 0x50),
                                                              &stack0x000000e8);
                                  FUN_03604aa8(lVar12,*(undefined8 *)puVar5);
                                  lVar14 = FUN_03605774(extraout_x1,*(undefined8 *)puVar4);
                                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02d96860();
                                  }
                                  uVar15 = thunk_FUN_06354368(lVar14,0);
                                  if (in_stack_000000d8 == 0) break;
                                  uVar10 = FUN_04f7f7bc(in_stack_000000d8,(ulong)dVar19 & 0xffffffff
                                                        ,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                                                  );
                                  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uVar10);
                                  uVar16 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                               (PTR_DAT_069fb9c0 + 0x48),
                                                              &stack0x00000030);
                                  uVar13 = FUN_0536e120(*(undefined8 *)puVar7,uVar13,uVar15,uVar16,0
                                                       );
                                  FUN_05379d80(plVar11,uVar13,0);
                                  in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar9);
                                  uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                               (PTR_DAT_069fb9c0 + 0x50),
                                                              &stack0x00000028);
                                  FUN_03604aa8(lVar12,*(undefined8 *)puVar5);
                                  lVar14 = FUN_03605774(extraout_x1_00,*(undefined8 *)puVar4);
                                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02d96860();
                                  }
                                  uVar15 = thunk_FUN_06354368(lVar14,0);
                                  uVar13 = FUN_0536e0dc(*(undefined8 *)puVar6,uVar13,uVar15,0);
                                  FUN_05379d80(plVar11,uVar13,0);
                                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02d96860();
                                  }
                                  FUN_04ff1ec4(&stack0x00000058,lVar12,
                                               *(undefined8 *)
                                                Method_System_Nullable<EventDispatcherGate>_get_HasValue__
                                              );
                                  in_stack_00000080 = in_stack_00000058;
                                  in_stack_00000058 = 0.0;
                                  in_stack_00000088 = in_stack_00000060;
                                  in_stack_00000098 = in_stack_00000070;
                                  in_stack_00000090 = in_stack_00000068;
                                  in_stack_000000a0 = in_stack_00000078;
                                  in_stack_00000060 = &stack0x00000080;
                                  while (uVar17 = FUN_0525c4dc(&stack0x00000080,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<FloatFormatHandling>__ctor__
                                                  ), lVar14 = in_stack_00000098, (uVar17 & 1) != 0)
                                  {
                                    in_stack_000000e8 = in_stack_00000090;
                                    uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                 (PTR_DAT_069fb9c0 + 0x70),
                                                                &stack0x000000e8);
                                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02d96860();
                                    }
                                    in_stack_00000030 =
                                         CONCAT44(in_stack_00000030._4_4_,
                                                  *(undefined4 *)(lVar14 + 0x18));
                                    uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                 (PTR_DAT_069fb9c0 + 0x48),
                                                                &stack0x00000030);
                                    uVar13 = FUN_0536e0dc(*(undefined8 *)puVar8,uVar13,uVar15,0);
                                    FUN_05379d80(plVar11,uVar13,0);
                                  }
                                  FUN_0525c5fc(&stack0x00000080,
                                               *(undefined8 *)
                                                Method_System_Nullable<ExpressionKind>_GetValueOrDefault__
                                              );
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
                               FUN_04f7f7bc(in_stack_000000d8,
                                            (ulong)_uStack00000000000000c0 & 0xffffffff,
                                            *(undefined8 *)
                                             Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                                           );
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar21 = unaff_s9 * (float)iStack0000000000000008;
                          uStack000000000000000c = 0x80000000;
                          if ((float)(int)fVar21 != INFINITY) {
                            uStack000000000000000c = (int)fVar21;
                          }
                          if (unaff_s14 <= fVar21 - (float)(int)uStack000000000000000c) {
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            dVar20 = (double)fVar21;
                            dVar19 = modf(dVar20,&stack0x00000058);
                            if (0.0 <= fVar21) {
                              dVar3 = unaff_d11;
                              if (dVar19 == unaff_d10) goto LAB_05ed2304;
                              dVar19 = (double)(long)(dVar20 + unaff_d10);
                            }
                            else {
                              dVar3 = unaff_d13;
                              if (dVar19 == unaff_d12) {
LAB_05ed2304:
                                dVar19 = in_stack_00000058;
                                if (((long)in_stack_00000058 & 1U) != 0) {
                                  dVar19 = in_stack_00000058 + dVar3;
                                }
                              }
                              else {
                                dVar19 = (double)(long)(dVar20 + unaff_d12);
                              }
                            }
                            if (dVar19 == INFINITY) goto LAB_05ed221c;
                            uStack000000000000000c = (uint)dVar19;
                          }
                        } while ((int)uStack000000000000000c < 1);
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        FUN_04ff1ec4(&stack0x00000058,lVar12,
                                     *(undefined8 *)
                                      Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
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
                      uVar1 = *(uint *)(in_stack_00000098 + 0x18);
                    } while ((int)uVar1 < 2);
                    unaff_w29 = uVar1 - uStack000000000000000c;
                    in_stack_00000010 = in_stack_00000090;
                    if (unaff_w29 < 2) {
                      unaff_w29 = 1;
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar2 = 0;
                    if (uStack000000000000000c != 0) {
                      uVar2 = uVar1 / uStack000000000000000c;
                    }
                    dVar20 = modf((double)(int)uVar2,&stack0x000000e8);
                    if (dVar20 == unaff_d10) {
                      dVar20 = in_stack_000000e8;
                      if (((long)in_stack_000000e8 & 1U) != 0) {
                        dVar20 = in_stack_000000e8 + unaff_d11;
                      }
                    }
                    else {
                      dVar20 = (double)(long)((double)(int)uVar2 + unaff_d10);
                    }
                    unaff_w20 = (uint)dVar20;
                    if ((int)unaff_w20 < 2) {
                      unaff_w20 = 1;
                    }
                    if (dVar20 == INFINITY) {
                      unaff_w20 = 1;
                    }
                    if (*(char *)(in_stack_00000018 + 0x88) != '\0') {
                      plVar11 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,7);
                      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uStack000000000000000c);
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  &stack0x00000030);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[4] = lVar14;
                      LeanTween__value(plVar11 + 4,lVar14);
                      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,iStack0000000000000008);
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  &stack0x00000028);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[5] = lVar14;
                      LeanTween__value(plVar11 + 5,lVar14);
                      in_stack_000000e8 = dVar19;
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),
                                                  &stack0x000000e8);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[6] = lVar14;
                      LeanTween__value(plVar11 + 6,lVar14);
                      uStack0000000000000044 = *(undefined4 *)(unaff_x22 + 0x18);
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  (long)&stack0x00000040 + 4);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[7] = lVar14;
                      LeanTween__value(plVar11 + 7,lVar14);
                      uStack0000000000000040 = uStack000000000000000c;
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  &stack0x00000040);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if (*(uint *)(plVar11 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[8] = lVar14;
                      LeanTween__value(plVar11 + 8,lVar14);
                      iStack000000000000003c = unaff_w29;
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  (long)&stack0x00000038 + 4);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if (*(uint *)(plVar11 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[9] = lVar14;
                      LeanTween__value(plVar11 + 9,lVar14);
                      uStack0000000000000038 = unaff_w20;
                      lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                                  &stack0x00000038);
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar12 == 0)) {
                        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                        FUN_02d96724(uVar13,0);
                      }
                      if (*(uint *)(plVar11 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96868();
                      }
                      plVar11[10] = lVar14;
                      LeanTween__value(plVar11 + 10,lVar14);
                      uVar13 = FUN_0536e164(*(undefined8 *)
                                             Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                                            ,plVar11,0);
                      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      FUN_0630b598(uVar13,0);
                    }
                  } while (*(int *)(unaff_x22 + 0x18) < 1);
                  unaff_w28 = 0;
                  unaff_w23 = 0;
                }
                uVar1 = 0;
                if (unaff_w20 != 0) {
                  uVar1 = unaff_w23 / unaff_w20;
                }
              } while (unaff_w23 != uVar1 * unaff_w20);
              lVar14 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              unaff_x24 = FUN_035abb34(lVar14,*(undefined8 *)
                                               Method_System_Collections_Generic_List<SampleAvatarConfig_AssetData>_get_Item__
                                      );
              if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
            } while ((int)*(ulong *)(unaff_x24 + 0x18) < 1);
            unaff_x21 = 0;
            uVar17 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
            unaff_x19 = unaff_x24 + 0x20;
          }
          if (uVar17 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar14 = *(long *)(unaff_x19 + unaff_x21 * 8);
          uVar13 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar17 = FUN_06350670(lVar14,uVar13,0);
        } while ((uVar17 & 1) != 0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar18 = *(long *)(lVar14 + 0x88);
        lVar12 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      } while ((lVar18 != *(long *)(lVar12 + 0x88)) ||
              (*(long *)(lVar14 + 0x88) == in_stack_00000020));
      if (*(long *)(lVar14 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar17 = FUN_03c5ecb0(*(long *)(lVar14 + 0xd0),in_stack_00000020,
                            *(undefined8 *)PTR_DAT_06a0e4b8);
    } while ((uVar17 & 1) == 0);
    uVar17 = FUN_05e6ffdc(lVar14,0);
    if (((uVar17 & 1) == 0) || (uVar17 = FUN_05e70000(lVar14,0), (uVar17 & 1) == 0)) break;
    FUN_05ec9e5c(in_stack_00000018,lVar14,in_stack_00000020,1,0);
  } while( true );
  unaff_x26 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,5);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(unaff_x26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(unaff_x26 + 0x20) =
       *(undefined8 *)
        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__;
  LeanTween__value();
  uVar13 = thunk_FUN_06354368(lVar14,0);
  if ((*(uint *)(unaff_x26 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(unaff_x26 + 0x28) = uVar13;
  LeanTween__value();
  if (*(uint *)(unaff_x26 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(unaff_x26 + 0x30) =
       *(undefined8 *)
        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
  ;
  LeanTween__value();
  lVar14 = FUN_0400ff1c(unaff_x22,unaff_w23,*unaff_x27);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar13 = thunk_FUN_06354368(lVar14,0);
  if ((*(uint *)(unaff_x26 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(unaff_x26 + 0x38) = uVar13;
  LeanTween__value();
  if (*(uint *)(unaff_x26 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  param_1 = &Method_OVRNativeList<IntPtr>_Dispose__;
  goto code_r0x05ed28e8;
}


