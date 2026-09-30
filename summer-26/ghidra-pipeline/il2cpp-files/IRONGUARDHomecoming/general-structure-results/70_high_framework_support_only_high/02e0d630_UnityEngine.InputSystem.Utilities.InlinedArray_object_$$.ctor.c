/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<object>$$.ctor
ENTRY_POINT: 02e0d630
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02e0d7b8) */
/* WARNING: Removing unreachable block (ram,0x02e0d84c) */

void UnityEngine_InputSystem_Utilities_InlinedArray<object>___ctor(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar10;
  int unaff_w26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02e0d630:
  (**(code **)(param_2 + 0x10))
            (*(undefined8 *)(param_2 + 8),param_2,unaff_x25,unaff_x29 + -0x20,unaff_x29 + -0x18);
  plVar10 = *(long **)(unaff_x29 + -0x18);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02e0d6b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_02e0d6b4:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_02e0d72c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,1);
LAB_02e0d72c:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
  unaff_w26 = unaff_w26 + 1;
  do {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02e0d4ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar5,1);
LAB_02e0d4ac:
    plVar10 = (long *)(*(code *)*puVar4)(unaff_x24,puVar4[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02e0d528;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_02e0d528:
    iVar2 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (unaff_w26 < iVar2) break;
    lVar5 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02e0d2c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02e0d2c0:
    uVar8 = (*(code *)*puVar4)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02e0d7ac;
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_02e0d784;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_02e0d76c;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02e0d338;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_02e0d338:
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    unaff_x24 = *(long **)(unaff_x29 + -0x18);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02e0d3c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_01ecb238(unaff_x24,lVar5,0);
LAB_02e0d3c0:
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,unaff_x24,unaff_x29 + -0x20);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
    uVar3 = *puVar4;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
    (*(code *)puVar4[2])(uVar3);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(unaff_x29 + -0x18);
    lVar5 = thunk_FUN_01f116d0(unaff_x24,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar5 == 0) {
      uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,0);
    }
    if (*(uint *)(unaff_x19 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_x19[(long)(int)uVar1 + 4] = (long)unaff_x24;
    thunk_FUN_01f51358(unaff_x19 + (long)(int)uVar1 + 4,unaff_x24);
    unaff_w26 = 0;
  } while( true );
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_02e0d5a8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar5,1);
LAB_02e0d5a8:
  unaff_x25 = (long *)(*(code *)*puVar4)(unaff_x24,puVar4[1]);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  *(int *)(unaff_x29 + -0xc) = unaff_w26;
  lVar6 = *unaff_x25;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
        goto LAB_02e0d628;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar5 = FUN_01ecb238(unaff_x25,lVar5,0);
LAB_02e0d628:
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
  param_2 = *(long *)(lVar5 + 8);
  goto code_r0x02e0d630;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_02e0d76c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02e0d7a0;
    }
  }
LAB_02e0d784:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02e0d7a0:
  (*(code *)*puVar4)();
LAB_02e0d7ac:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = *(uint *)(unaff_x19 + 3);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


