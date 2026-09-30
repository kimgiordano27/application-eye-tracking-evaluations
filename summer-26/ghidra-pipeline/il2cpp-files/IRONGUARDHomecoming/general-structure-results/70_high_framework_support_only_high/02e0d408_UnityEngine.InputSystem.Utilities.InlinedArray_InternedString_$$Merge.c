/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<InternedString>$$Merge
ENTRY_POINT: 02e0d408
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

void UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__Merge(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  int iVar11;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02e0d408:
  uVar1 = *(uint *)(unaff_x29 + -0x18);
  lVar4 = thunk_FUN_01f116d0(unaff_x24,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar4 == 0) {
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
  iVar11 = 0;
  do {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar7 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d4ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar4,1);
LAB_02e0d4ac:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x24,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e0d528;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,0);
LAB_02e0d528:
    iVar2 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (iVar2 <= iVar11) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar7 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d5a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar4,1);
LAB_02e0d5a8:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x24,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    *(int *)(unaff_x29 + -0xc) = iVar11;
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          lVar4 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02e0d628;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar4 = FUN_01ecb238(plVar6,lVar4,0);
LAB_02e0d628:
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))
              (*(undefined8 *)(lVar4 + 8),lVar4,plVar6,unaff_x29 + -0x20,unaff_x29 + -0x18);
    plVar6 = *(long **)(unaff_x29 + -0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e0d6b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,0);
LAB_02e0d6b4:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d72c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,1);
LAB_02e0d72c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    iVar11 = iVar11 + 1;
  } while( true );
  lVar4 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02e0d2c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02e0d2c0:
  uVar9 = (*(code *)*puVar5)();
  if ((uVar9 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_02e0d7ac;
    lVar4 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 == 0) goto LAB_02e0d784;
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    goto LAB_02e0d76c;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        lVar4 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
        goto LAB_02e0d338;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar4 = FUN_01ecb238();
LAB_02e0d338:
  (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
  unaff_x24 = *(long **)(unaff_x29 + -0x18);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar7 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        lVar4 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
        goto LAB_02e0d3c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar4 = FUN_01ecb238(unaff_x24,lVar4,0);
LAB_02e0d3c0:
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
  lVar4 = *(long *)(lVar4 + 8);
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,unaff_x24,unaff_x29 + -0x20);
  puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
  uVar3 = *puVar5;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
  (*(code *)puVar5[2])(uVar3);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  goto code_r0x02e0d408;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_02e0d76c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02e0d7a0;
    }
  }
LAB_02e0d784:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02e0d7a0:
  (*(code *)*puVar5)();
LAB_02e0d7ac:
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


