/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$get_tooltip
ENTRY_POINT: 04129294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04129a44) */
/* WARNING: Removing unreachable block (ram,0x04129a1c) */
/* WARNING: Removing unreachable block (ram,0x041295dc) */
/* WARNING: Removing unreachable block (ram,0x0412999c) */
/* WARNING: Removing unreachable block (ram,0x04129a34) */

void UnityEngine_UIElements_VisualElement__get_tooltip(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  undefined8 uVar16;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  uint unaff_w27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x3f0));
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
  *(undefined1 *)(unaff_x21 + 0x783) = 1;
  lVar9 = *unaff_x19;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *unaff_x19;
  }
  uVar16 = **(undefined8 **)(lVar9 + 0xb8);
  uVar10 = FUN_035b51f0(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    FUN_04036e24(uVar16,0);
  }
  uVar10 = FUN_04127fac();
  if ((uVar10 & 1) == 0) goto LAB_041299c4;
  uVar8 = (**(code **)(*unaff_x20 + 0x1f8))();
  uVar10 = (**(code **)(*unaff_x20 + 0x2e8))();
  if ((uVar10 & 1) == 0) goto LAB_041299c4;
  lVar9 = FUN_04127458();
  puVar5 = Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar9 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = FUN_030bac7c(*(long *)(lVar9 + 0x4b0),uVar8,
                        *(undefined8 *)
                         Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
  if (((uVar10 & 1) == 0) || ((unaff_x22 & 1) != 0)) {
    plVar11 = (long *)FUN_04128ab0();
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar9,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_041293f8;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041293f8:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    puVar7 = Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__;
    puVar6 = Method_System_DateTime_AddTicks__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04129480;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_04129480:
      uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_041295d0;
        lVar9 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_041295a8;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04129590;
      }
      lVar13 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_041294dc;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar6,0);
LAB_041294dc:
      uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (unaff_x20[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_02ed8f54(unaff_x20[9],uVar8,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
        }
        else {
          FUN_030ba904(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_04129768;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_04129950:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04129984;
    }
  }
LAB_04129968:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_04129984:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  goto LAB_041299a0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_04129590:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_041295c4;
    }
  }
LAB_041295a8:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_041295c4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_041295d0:
  FUN_0412a33c();
  FUN_0412a410();
  if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03169f78(unaff_x20[8],unaff_w23 + 1,unaff_x20[10],*(undefined8 *)PTR_DAT_0458a430);
  lVar9 = FUN_04127458();
  puVar3 = PTR_DAT_0458a3f0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(lVar9 + 0x4b0);
  FUN_0316897c(&stack0x00000018,unaff_x20[8],unaff_w23,*(undefined8 *)PTR_DAT_0458a3f0);
  in_stack_00000038 = in_stack_00000020;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000028;
  uVar10 = FUN_041bf288(&stack0x00000030,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar10,uVar10 & 0xffffffff);
  }
  uVar10 = FUN_030bac7c(lVar9,uVar10 & 0xffffffff,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    lVar9 = FUN_04127458();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(lVar9 + 0x4b0);
    FUN_0316897c(&stack0x00000018,unaff_x20[8],unaff_w23,*(undefined8 *)puVar3);
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    uVar8 = FUN_041bf288(&stack0x00000030,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
    }
    else {
      FUN_030ba904(lVar9,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar9 = unaff_x20[10];
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  unaff_x22 = unaff_x22 & 0xffffffff;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0358d1e4(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
  }
LAB_04129768:
  if ((unaff_x22 & 1) != 0) {
    (**(code **)(*unaff_x20 + 0x2b8))();
    plVar11 = (long *)(**(code **)(*unaff_x20 + 0x298))();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_041297f8;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041297f8:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    puVar4 = Method_System_DateTime_AddTicks__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04129868;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_04129868:
      uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar11 == (long *)0x0) break;
        lVar9 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_04129968;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04129950;
      }
      lVar9 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_041298c4;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_041298c4:
      uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      lVar9 = FUN_04127458();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar9 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_030bac7c(*(long *)(lVar9 + 0x4b0),uVar8,*(undefined8 *)puVar5);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*unaff_x20 + 0x1e8))();
        FUN_041291cc();
      }
    } while( true );
  }
LAB_041299a0:
  if ((unaff_w27 & 1) != 0) {
    lVar9 = FUN_04127458();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04134290(lVar9,0);
  }
LAB_041299c4:
  uVar10 = FUN_035b51f0(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    FUN_04036ec0(uVar16,0);
  }
  return;
}


