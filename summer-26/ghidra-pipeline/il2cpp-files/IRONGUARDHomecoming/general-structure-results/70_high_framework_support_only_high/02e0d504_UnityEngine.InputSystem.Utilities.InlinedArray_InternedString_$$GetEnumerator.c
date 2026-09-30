/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<InternedString>$$GetEnumerator
ENTRY_POINT: 02e0d504
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

void UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02e0d504:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02e0d4f4;
LAB_02e0d50c:
  puVar4 = (undefined8 *)FUN_01ecb238(unaff_x25,param_3,0);
  do {
    iVar2 = (*(code *)*puVar4)(unaff_x25,puVar4[1]);
    if (unaff_w26 < iVar2) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *unaff_x24;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_02e0d5a8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar6,1);
LAB_02e0d5a8:
      plVar5 = (long *)(*(code *)*puVar4)(unaff_x24,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      *(int *)(unaff_x29 + -0xc) = unaff_w26;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_02e0d628;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_01ecb238(plVar5,lVar6,0);
LAB_02e0d628:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x10))
                (*(undefined8 *)(lVar6 + 8),lVar6,plVar5,unaff_x29 + -0x20,unaff_x29 + -0x18);
      plVar5 = *(long **)(unaff_x29 + -0x18);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02e0d6b4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_02e0d6b4:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_02e0d72c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,1);
LAB_02e0d72c:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      unaff_w26 = unaff_w26 + 1;
    }
    else {
      lVar6 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02e0d2c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02e0d2c0:
      uVar9 = (*(code *)*puVar4)();
      if ((uVar9 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_02e0d7ac;
        lVar6 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 == 0) goto LAB_02e0d784;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_02e0d338;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_01ecb238();
LAB_02e0d338:
      (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
      unaff_x24 = *(long **)(unaff_x29 + -0x18);
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *unaff_x24;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_02e0d3c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar6 = FUN_01ecb238(unaff_x24,lVar6,0);
LAB_02e0d3c0:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,unaff_x24,unaff_x29 + -0x20);
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
      uVar3 = *puVar4;
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
      (*(code *)puVar4[2])(uVar3);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x29 + -0x18);
      lVar6 = thunk_FUN_01f116d0(unaff_x24,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) {
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
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02e0d4ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x24,lVar6,1);
LAB_02e0d4ac:
    unaff_x25 = (long *)(*(code *)*puVar4)(unaff_x24,puVar4[1]);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02e0d50c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02e0d4f4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x02e0d504;
    }
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
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


