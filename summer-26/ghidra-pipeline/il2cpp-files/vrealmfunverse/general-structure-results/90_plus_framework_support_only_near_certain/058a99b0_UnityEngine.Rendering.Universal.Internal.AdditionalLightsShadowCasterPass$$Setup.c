/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$Setup
ENTRY_POINT: 058a99b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__Setup(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined4 *puVar19;
  long unaff_x24;
  undefined8 *puVar20;
  long *plVar21;
  int iVar22;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    FUN_03753114(unaff_x22,unaff_w23,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
    lVar15 = *unaff_x19;
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      if (*(int *)(unaff_x24 + 0x29c) + 1 <= unaff_w23) {
        do {
          if (0 < *(int *)(unaff_x24 + 0x2a0)) {
            lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__
                                       );
            FUN_0588d2c0(lVar15,0);
            uVar8 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x24);
            if (lVar15 == 0) goto thunk_FUN_02b3cac4;
            *(undefined8 *)(lVar15 + 0x10) = uVar8;
            thunk_FUN_02bb0e9c();
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__
                                      );
            FUN_037a5cd0(lVar9,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
            plVar21 = (long *)(lVar15 + 0x18);
            *plVar21 = lVar9;
            thunk_FUN_02bb0e9c(plVar21,lVar9);
            iVar22 = 0;
            while( true ) {
              iVar3 = *(int *)(unaff_x24 + 0x294);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (iVar3 <= iVar22) break;
              lVar9 = *plVar21;
              uVar8 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x24,iVar22);
              if (lVar9 == 0) goto thunk_FUN_02b3cac4;
              lVar16 = *(long *)(lVar9 + 0x10);
              lVar17 = *unaff_x28;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar16 == 0) goto thunk_FUN_02b3cac4;
              uVar5 = *(uint *)(lVar9 + 0x18);
              if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar5 + 1;
                *(undefined8 *)(lVar16 + (long)(int)uVar5 * 8 + 0x20) = uVar8;
                thunk_FUN_02bb0e9c();
              }
              else {
                FUN_037a6538(lVar9,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar22 = iVar22 + 1;
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                      );
            FUN_044a5fa0(uVar8,*(undefined8 *)
                                Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__);
            *(undefined8 *)(lVar15 + 0x20) = uVar8;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar15 + 0x20),uVar8);
            *(long *)(lVar15 + 0x28) = unaff_x22;
            thunk_FUN_02bb0e9c((long *)(lVar15 + 0x28),unaff_x22);
            puVar6 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
            if (unaff_x22 == 0) goto thunk_FUN_02b3cac4;
            if (0 < *(int *)(unaff_x22 + 0x18)) {
              iVar22 = 0;
              do {
                uVar7 = FUN_03752e1c(unaff_x22,iVar22,*(undefined8 *)PTR_DAT_06316cc0);
                if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
                lVar9 = *(long *)(*in_stack_00000028 + 0x10);
                if ((lVar9 == 0) ||
                   (FUN_039b61b8(&stack0x00000350,lVar9,uVar7,*(undefined8 *)puVar6),
                   in_stack_00000170 = in_stack_00000350, in_stack_00000178 = in_stack_00000358,
                   in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
                   in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
                   in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
                goto thunk_FUN_02b3cac4;
                *(long *)(in_stack_00000388 + 0x10) = lVar15;
                thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar15);
                in_stack_00000380 = in_stack_000001a0;
                in_stack_00000378 = in_stack_00000198;
                in_stack_00000370 = in_stack_00000190;
                in_stack_00000368 = in_stack_00000188;
                in_stack_00000360 = in_stack_00000180;
                in_stack_00000358 = in_stack_00000178;
                in_stack_00000350 = in_stack_00000170;
                if ((*in_stack_00000028 == 0) ||
                   (lVar9 = *(long *)(*in_stack_00000028 + 0x10), lVar9 == 0))
                goto thunk_FUN_02b3cac4;
                FUN_039b621c(lVar9,uVar7,&stack0x00000350,
                             *(undefined8 *)
                              Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__
                            );
                iVar22 = iVar22 + 1;
                in_stack_00000030 = in_stack_00000388;
              } while (iVar22 < *(int *)(unaff_x22 + 0x18));
            }
          }
          uVar10 = FUN_058a14e4(&stack0x000001b0);
          if ((uVar10 & 1) == 0) {
            lVar15 = *(long *)(in_stack_00000048 + 0x30);
            if (lVar15 == 0) goto thunk_FUN_02b3cac4;
            iVar22 = 0;
            goto LAB_058a9c4c;
          }
          unaff_x24 = FUN_058a148c(&stack0x000001b0);
          unaff_x22 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
          FUN_03752884(unaff_x22,*(undefined8 *)PTR_DAT_06316c58);
          unaff_w23 = *(int *)(unaff_x24 + 0x298);
        } while (*(int *)(unaff_x24 + 0x29c) + 1 <= unaff_w23);
        if (unaff_x22 == 0) goto thunk_FUN_02b3cac4;
        lVar15 = *unaff_x19;
      }
      lVar9 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar9 == 0) goto thunk_FUN_02b3cac4;
      uVar5 = *(uint *)(unaff_x22 + 0x18);
      if (*(uint *)(lVar9 + 0x18) <= uVar5) break;
      *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
      *(int *)(lVar9 + (long)(int)uVar5 * 4 + 0x20) = unaff_w23;
    }
    param_1 = *(long *)(lVar15 + 0x20);
  } while( true );
  while( true ) {
    lVar15 = *(long *)(in_stack_00000048 + 0x30);
    iVar22 = iVar22 + 1;
    if (lVar15 == 0) break;
LAB_058a9c4c:
    lVar15 = *(long *)(lVar15 + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                    0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (*(int *)(lVar15 + 8) <= iVar22) {
      return;
    }
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    piVar11 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar22,
                                  *(undefined8 *)
                                   Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    if (((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0))
       || (FUN_039b61b8(&stack0x00000350,lVar15,*piVar11,
                        *(undefined8 *)Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
          in_stack_00000388 == 0)) break;
    lVar15 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar15 != 0) {
      lVar9 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_066d31d0 == '\0') {
        FUN_02b3c81c(
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                    );
        DAT_066d31d0 = '\x01';
      }
      puVar6 = 
      Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
      ;
      if (lVar9 == 0) break;
      iVar3 = piVar11[10];
      uVar5 = piVar11[0xb];
      uVar10 = (ulong)uVar5;
      lVar17 = *(long *)
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
      lVar16 = *(long *)(lVar17 + 0x38);
      if (lVar16 == 0) {
        FUN_02b76274(lVar17);
        lVar16 = *(long *)(lVar17 + 0x38);
      }
      lVar9 = FUN_0322b7b4(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar16 + 0x10));
      if ((int)uVar5 < 0) {
        FUN_04d9bcc4(0);
      }
      else if (uVar5 != 0) {
        puVar19 = (undefined4 *)(lVar9 + (long)iVar3 * 0xc + 8);
        do {
          if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
             (lVar9 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar9 == 0))
          goto thunk_FUN_02b3cac4;
          pcVar12 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                      (lVar9,*(undefined8 *)(puVar19 + -2),*puVar19,0);
          if (*pcVar12 != '\0') {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
            iVar3 = *(int *)(pcVar12 + 4);
            plVar21 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02b76218(*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar21 + (long)iVar3 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_058ac454(&stack0x00000350,4,*piVar11,0);
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                   *piVar11,0);
            }
            uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar11,&stack0x000000f0
                                  ,uVar8);
            in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar6,uVar13,0);
            uVar7 = in_stack_000000f0;
            lVar9 = *(long *)(lVar15 + 0x20);
            in_stack_000000e8 = 0;
            thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar8 == 0xd);
            if (lVar9 == 0) goto thunk_FUN_02b3cac4;
            FUN_044a87e4(lVar9,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                        );
          }
          uVar10 = uVar10 - 1;
          puVar19 = puVar19 + 3;
        } while (uVar10 != 0);
      }
      if (-1 < piVar11[8]) {
        lVar9 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d1 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                      );
          DAT_066d31d1 = '\x01';
        }
        if (lVar9 == 0) break;
        iVar3 = piVar11[0xc];
        uVar5 = piVar11[0xd];
        lVar17 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
        ;
        lVar16 = *(long *)(lVar17 + 0x38);
        if (lVar16 == 0) {
          FUN_02b76274(lVar17);
          lVar16 = *(long *)(lVar17 + 0x38);
        }
        lVar9 = FUN_0322b7c8(*(undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar16 + 0x10));
        if ((int)uVar5 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar5 != 0) {
          uVar10 = 0;
          do {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
            puVar20 = (undefined8 *)(lVar9 + (long)iVar3 * 0xc + uVar10 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar20 + 1);
            lVar16 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar20,in_stack_00000030,0);
            if (*(int *)(lVar16 + 8) != *piVar11) {
              if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                 (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0))
              goto thunk_FUN_02b3cac4;
              lVar16 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                 (lVar16,*puVar20,*(undefined4 *)(puVar20 + 1),0);
              iVar4 = *(int *)(lVar16 + 8);
              if (0 < iVar4) {
                iVar18 = 0;
                do {
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0))
                  goto thunk_FUN_02b3cac4;
                  uVar8 = *puVar20;
                  if (DAT_066d31cb == '\0') {
                    FUN_02b3c81c();
                    DAT_066d31cb = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar17 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar17 == 0))
                  goto thunk_FUN_02b3cac4;
                  lVar17 = *(long *)(lVar17 + 0x20);
                  iVar1 = *(int *)(lVar16 + 0x28);
                  iVar2 = *(int *)(lVar16 + 0x2c);
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (DAT_066d2bb3 == '\0') {
                    FUN_02b3c81c();
                    DAT_066d2bb3 = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (lVar17 == 0) goto thunk_FUN_02b3cac4;
                  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(puVar20 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  piVar14 = (int *)FUN_03ab59e0(lVar17 + (long)(int)*(uint *)(puVar20 + 1) * 8 +
                                                0x20,iVar18 + ((int)((ulong)uVar8 >> 0x20) +
                                                              iVar1 * ((uint)uVar8 & 0xffff)) *
                                                              iVar2,
                                                *(undefined8 *)
                                                 Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                               );
                  lVar16 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar16 == 0) goto thunk_FUN_02b3cac4;
                  iVar1 = *piVar14;
                  plVar21 = *(long **)(lVar16 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02b76218(*(long *)(*(long *)
                                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                          + 0x20));
                    lVar16 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar21 + (long)iVar1 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar8 = FUN_058ad664(lVar16,piVar11[8],in_stack_00000060,0);
                  uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        piVar11,uVar8);
                  in_stack_000000e0 =
                       FUN_04bffdac(*(undefined8 *)
                                     Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,uVar13
                                    ,0);
                  lVar16 = *(long *)(lVar15 + 0x20);
                  in_stack_000000e8 = 0;
                  thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar8 == 0xd);
                  if (lVar16 == 0) goto thunk_FUN_02b3cac4;
                  FUN_044a87e4(lVar16,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                              );
                  iVar18 = iVar18 + 1;
                } while (iVar4 != iVar18);
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar5);
        }
      }
    }
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


