/*
FUNCTION_NAME: FUN_041291cc
ENTRY_POINT: 041291cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x04129a44) */
/* WARNING: Removing unreachable block (ram,0x04129a1c) */
/* WARNING: Removing unreachable block (ram,0x041295dc) */
/* WARNING: Removing unreachable block (ram,0x0412999c) */
/* WARNING: Removing unreachable block (ram,0x04129a34) */

void FUN_041291cc(long *param_1,int param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar4 = PTR_DAT_0458a428;
  if ((DAT_04840783 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a428);
    thunk_FUN_01efb3a4(
                      Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a3b0);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a430);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a3f0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    DAT_04840783 = 1;
  }
  lVar10 = *(long *)puVar4;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar4;
  }
  uVar18 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = FUN_035b51f0(uVar18,0,0);
  if ((uVar11 & 1) != 0) {
    FUN_04036e24(uVar18,0);
  }
  uVar11 = FUN_04127fac(param_1,param_2);
  if ((uVar11 & 1) == 0) goto LAB_041299c4;
  uVar7 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
  uVar11 = (**(code **)(*param_1 + 0x2e8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x2f0));
  if ((uVar11 & 1) == 0) goto LAB_041299c4;
  lVar10 = FUN_04127458(param_1);
  puVar4 = Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar10 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = FUN_030bac7c(*(long *)(lVar10 + 0x4b0),uVar7,
                        *(undefined8 *)
                         Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
  if (((uVar11 & 1) == 0) || ((param_3 & 1) != 0)) {
    plVar12 = (long *)FUN_04128ab0(param_1,param_2);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar10,*(undefined8 *)
                         Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_041293f8;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041293f8:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__;
    puVar5 = Method_System_DateTime_AddTicks__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar15 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_04129480;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_04129480:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_041295d0;
        lVar15 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 == 0) goto LAB_041295a8;
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_04129590;
      }
      lVar15 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041294dc;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar5,0);
LAB_041294dc:
      uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_02ed8f54(param_1[9],uVar8,*(undefined8 *)puVar6);
      if ((uVar11 & 1) == 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          FUN_030ba904(lVar10,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_04129768;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar17 = piVar17 + 4;
    if (uVar11 == 0) break;
LAB_04129950:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_04129984;
    }
  }
LAB_04129968:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_04129984:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  goto LAB_041299a0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar17 = piVar17 + 4;
    if (uVar11 == 0) break;
LAB_04129590:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_041295c4;
    }
  }
LAB_041295a8:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_041295c4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_041295d0:
  iVar9 = FUN_0412a33c(param_1,uVar7);
  plVar12 = param_1 + 10;
  FUN_0412a410(param_1,lVar10,iVar9 + 1,plVar12);
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03169f78(param_1[8],param_2 + 1,*plVar12,*(undefined8 *)PTR_DAT_0458a430);
  lVar10 = FUN_04127458(param_1);
  puVar2 = PTR_DAT_0458a3f0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *(long *)(lVar10 + 0x4b0);
  FUN_0316897c(&local_98,param_1[8],param_2,*(undefined8 *)PTR_DAT_0458a3f0);
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  uVar11 = FUN_041bf288(&local_80,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar11,uVar11 & 0xffffffff);
  }
  uVar11 = FUN_030bac7c(lVar10,uVar11 & 0xffffffff,*(undefined8 *)puVar4);
  if ((uVar11 & 1) == 0) {
    lVar10 = FUN_04127458(param_1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(lVar10 + 0x4b0);
    FUN_0316897c(&local_98,param_1[8],param_2,*(undefined8 *)puVar2);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    uVar8 = FUN_041bf288(&local_80,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *(long *)(lVar10 + 0x10);
    lVar16 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
    }
    else {
      FUN_030ba904(lVar10,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar10 = *plVar12;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = *(int *)(lVar10 + 0x18);
  *(undefined4 *)(lVar10 + 0x18) = 0;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  if (0 < iVar9) {
    FUN_0358d1e4(*(undefined8 *)(lVar10 + 0x10),0,iVar9,0);
  }
LAB_04129768:
  if ((param_3 & 1) != 0) {
    uVar14 = (**(code **)(*param_1 + 0x2b8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x2c0));
    plVar12 = (long *)(**(code **)(*param_1 + 0x298))
                                (param_1,uVar14,*(undefined8 *)(*param_1 + 0x2a0));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_041297f8;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041297f8:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar3 = Method_System_DateTime_AddTicks__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_04129868;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_04129868:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar12 == (long *)0x0) break;
        lVar10 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_04129968;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04129950;
      }
      lVar10 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_041298c4;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_041298c4:
      uVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      lVar10 = FUN_04127458(param_1);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar10 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_030bac7c(*(long *)(lVar10 + 0x4b0),uVar7,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) {
        uVar7 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x1f0));
        FUN_041291cc(param_1,uVar7,1,0);
      }
    } while( true );
  }
LAB_041299a0:
  if ((param_4 & 1) != 0) {
    lVar10 = FUN_04127458(param_1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04134290(lVar10,0);
  }
LAB_041299c4:
  uVar11 = FUN_035b51f0(uVar18,0,0);
  if ((uVar11 & 1) != 0) {
    FUN_04036ec0(uVar18,0);
  }
  return;
}


