/*
FUNCTION_NAME: FUN_022c6d18
ENTRY_POINT: 022c6d18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_022c6d18(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long *local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  
  puVar10 = *(undefined8 **)(param_3 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__);
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationCallbackInfo_ExecutionContextCallback__);
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationToken_Register__);
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationToken_Register__);
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationToken_ThrowOperationCanceledException__);
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationTokenSource_CancelAfter__);
    thunk_FUN_01efb3a4(
                      Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
                      );
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationTokenSource_ExecuteCallbackHandlers__);
    thunk_FUN_01efb3a4(
                      Method_System_Threading_CancellationTokenSource_ThrowObjectDisposedException__
                      );
    thunk_FUN_01efb3a4(Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__);
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_CannonTurret_<Start>b__11_0__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__);
    puVar10 = *(undefined8 **)(param_3 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar10 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  local_98 = (long *)0x0;
  lStack_90 = 0;
  local_88 = 0;
  uVar12 = *puVar10;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_03579868(uVar12,0);
  puVar2 = Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__;
  lVar8 = *(long *)Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar2;
  }
  if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_022c7238;
  uVar6 = Unity_Collections_FixedList32Bytes_Enumerator<float>__Dispose
                    (**(long **)(lVar8 + 0xb8),plVar5,
                     *(undefined8 *)Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__)
  ;
  if ((uVar6 & 1) == 0) {
    lStack_90 = 0;
    local_88 = 0;
    local_98 = plVar5;
    thunk_FUN_01f51358(&local_98,plVar5);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__
                              );
    FUN_030f2380(lVar8,*(undefined8 *)
                        Method_System_Threading_CancellationTokenSource_ThrowObjectDisposedException__
                );
    if (plVar5 == (long *)0x0) goto LAB_022c7238;
    lVar7 = (**(code **)(*plVar5 + 0x6d8))(plVar5,0x14,*(undefined8 *)(*plVar5 + 0x6e0));
    puVar3 = Method_System_Threading_CancellationToken_Register__;
    if (lVar7 == 0) goto LAB_022c7238;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) goto LAB_022c723c;
        plVar13 = *(long **)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
        if (plVar13 == (long *)0x0) goto LAB_022c7238;
        uVar12 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar6 = FUN_033a1e28(uVar12,0);
        if ((uVar6 & 1) == 0) {
          if (lVar8 == 0) goto LAB_022c7238;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_022c7238;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = plVar13;
            thunk_FUN_01f51358(puVar10,plVar13);
          }
          else {
            FUN_030f2bb4(lVar8,plVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    if (lVar8 == 0) goto LAB_022c7238;
    lStack_90 = FUN_030f4630(lVar8,*(undefined8 *)
                                    Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
                            );
    thunk_FUN_01f51358(&lStack_90);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_Gameplay_Turrets_CannonTurret_<Start>b__11_0__)
    ;
    FUN_030f2380(lVar8,*(undefined8 *)
                        Method_System_Threading_CancellationTokenSource_ExecuteCallbackHandlers__);
    lVar7 = (**(code **)(*plVar5 + 0x858))(plVar5,0x14,*(undefined8 *)(*plVar5 + 0x860));
    puVar4 = Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__;
    puVar3 = Method_System_Threading_CancellationToken_ThrowOperationCanceledException__;
    if (lVar7 == 0) goto LAB_022c7238;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
LAB_022c723c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar13 = *(long **)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
        if (plVar13 == (long *)0x0) goto LAB_022c7238;
        uVar12 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar6 = FUN_033a1e28(uVar12,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          if ((uVar6 & 1) != 0) {
            uVar6 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
            if ((uVar6 & 1) != 0) {
              uVar12 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
              uVar6 = FUN_0340e318(uVar12,*(undefined8 *)puVar4,0);
              if ((uVar6 & 1) == 0) {
                if (lVar8 == 0) goto LAB_022c7238;
                lVar9 = *(long *)(lVar8 + 0x10);
                lVar11 = *(long *)puVar3;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_022c7238;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = plVar13;
                  thunk_FUN_01f51358(puVar10,plVar13);
                }
                else {
                  FUN_030f2bb4(lVar8,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    if (lVar8 == 0) goto LAB_022c7238;
    local_88 = FUN_030f4630(lVar8,*(undefined8 *)
                                   Method_System_Threading_CancellationTokenSource_CancelAfter__);
    thunk_FUN_01f51358(&local_88);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar2;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_022c7238;
    lStack_78 = lStack_90;
    local_80 = local_98;
    local_70 = local_88;
    FUN_02b7f924(**(long **)(lVar8 + 0xb8),plVar5,&local_80,
                 *(undefined8 *)Method_System_Threading_CancellationToken_Register__);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar2;
  }
  if (**(long **)(lVar8 + 0xb8) != 0) {
    FUN_02b7f8a4(&local_80,**(long **)(lVar8 + 0xb8),plVar5,
                 *(undefined8 *)
                  Method_System_Threading_CancellationCallbackInfo_ExecutionContextCallback__);
    param_1[2] = local_70;
    param_1[1] = lStack_78;
    *param_1 = (long)local_80;
    return;
  }
LAB_022c7238:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


