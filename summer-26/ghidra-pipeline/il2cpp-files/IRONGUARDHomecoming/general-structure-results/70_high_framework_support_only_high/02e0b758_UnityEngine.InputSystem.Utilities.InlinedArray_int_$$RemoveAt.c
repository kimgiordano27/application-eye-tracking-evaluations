/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<int>$$RemoveAt
ENTRY_POINT: 02e0b758
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e0bd3c) */
/* WARNING: Removing unreachable block (ram,0x02e0bdb8) */

long * UnityEngine_InputSystem_Utilities_InlinedArray<int>__RemoveAt(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int iVar16;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x23);
  }
  lVar5 = FUN_0359e780(param_1,0);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    plVar7 = (long *)FUN_01f08890(lVar6,*(undefined4 *)(lVar5 + 0x18));
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *unaff_x20;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02e0b814;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_02e0b814:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar9 = (long *)(*(code *)*puVar8)();
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_02e0b838:
      lVar5 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02e0b884;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02e0b884:
      uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar14 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02e0b8fc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02e0b8fc:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02e0b978;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_02e0b978:
        uVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        lVar5 = *(long *)(unaff_x22 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar14,uVar14 & 0xffffffff);
        }
        uVar3 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),uVar14 & 0xffffffff,
                           *(undefined8 *)(lVar5 + 0x28));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar5 == 0) {
          uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar12,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7[(long)(int)uVar3 + 4] = (long)plVar10;
        thunk_FUN_01f51358(plVar7 + (long)(int)uVar3 + 4,plVar10);
        iVar16 = 0;
        do {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_02e0ba48;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,1);
LAB_02e0ba48:
          plVar11 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02e0bac4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bac4:
          iVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
          if (iVar4 <= iVar16) goto LAB_02e0b838;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_02e0bb44;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,1);
LAB_02e0bb44:
          plVar11 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02e0bbc0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bbc0:
          plVar11 = (long *)(*(code *)*puVar8)(plVar11,iVar16,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02e0bc40;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bc40:
          (*(code *)*puVar8)(plVar11,puVar8[1]);
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_02e0bcb8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,1);
LAB_02e0bcb8:
          (*(code *)*puVar8)(plVar11,puVar8[1]);
          iVar16 = iVar16 + 1;
        } while( true );
      }
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02e0bd24;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02e0bd24:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
      }
      if (plVar7 != (long *)0x0) {
        uVar3 = *(uint *)(plVar7 + 3);
        if (0 < (int)uVar3) {
          uVar13 = 0;
          do {
            if (uVar3 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar13 = uVar13 + 1;
          } while (uVar3 != uVar13);
        }
        return plVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


