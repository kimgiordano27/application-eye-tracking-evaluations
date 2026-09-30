/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<InternedString>$$Contains
ENTRY_POINT: 02e0d2d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02e0d7b8) */
/* WARNING: Removing unreachable block (ram,0x02e0d84c) */

void UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__Contains(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long *plVar11;
  int iVar12;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02e0d2d4:
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x78);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar5) {
        lVar5 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
        goto LAB_02e0d338;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar5 = FUN_01ecb238();
LAB_02e0d338:
  (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
  plVar11 = *(long **)(unaff_x29 + -0x18);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar7 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar5) {
        lVar5 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
        goto LAB_02e0d3c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar5 = FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0d3c0:
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
  lVar5 = *(long *)(lVar5 + 8);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar11,unaff_x29 + -0x20);
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
  uVar3 = *puVar6;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
  (*(code *)puVar6[2])(uVar3);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = *(uint *)(unaff_x29 + -0x18);
  lVar5 = thunk_FUN_01f116d0(plVar11,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar5 == 0) {
    uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,0);
  }
  if (*(uint *)(unaff_x19 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  unaff_x19[(long)(int)uVar1 + 4] = (long)plVar11;
  thunk_FUN_01f51358(unaff_x19 + (long)(int)uVar1 + 4,plVar11);
  iVar12 = 0;
  do {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d4ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,1);
LAB_02e0d4ac:
    plVar4 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e0d528;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_02e0d528:
    iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    if (iVar2 <= iVar12) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d5a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,1);
LAB_02e0d5a8:
    plVar4 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    *(int *)(unaff_x29 + -0xc) = iVar12;
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          lVar5 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02e0d628;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar5 = FUN_01ecb238(plVar4,lVar5,0);
LAB_02e0d628:
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))
              (*(undefined8 *)(lVar5 + 8),lVar5,plVar4,unaff_x29 + -0x20,unaff_x29 + -0x18);
    plVar4 = *(long **)(unaff_x29 + -0x18);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e0d6b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_02e0d6b4:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d72c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,1);
LAB_02e0d72c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
    iVar12 = iVar12 + 1;
  } while( true );
  lVar5 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02e0d2c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e0d2c0:
  uVar9 = (*(code *)*puVar6)();
  if ((uVar9 & 1) == 0) goto LAB_02e0d740;
  param_1 = *(long *)(unaff_x21 + 0x20);
  goto code_r0x02e0d2d4;
LAB_02e0d740:
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e0d7a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e0d7a0:
    (*(code *)*puVar6)();
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = *(uint *)(unaff_x19 + 3);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


