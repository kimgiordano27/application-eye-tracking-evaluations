/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.InlinedArray<InternedString>$$RemoveAtByMovingTailWithCapacity
ENTRY_POINT: 02e0d110
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e0d7b8) */
/* WARNING: Removing unreachable block (ram,0x02e0d84c) */

long * UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__RemoveAtByMovingTailWithCapacity
                 (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 uVar13;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar14;
  long *plVar15;
  int iVar16;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0x795) = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar14 = (long)&stack0x00000000 -
           ((ulong)*(uint *)(*(long *)(lVar9 + 0x10) + 0xfc) + 0xf & 0x1fffffff0);
  uVar13 = *(undefined8 *)(lVar9 + 0x58);
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar13 = FUN_03579868(uVar13,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  lVar9 = FUN_0359e780(uVar13,0);
  if (lVar9 != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    plVar5 = (long *)FUN_01f08890(lVar4,*(undefined4 *)(lVar9 + 0x18));
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar4 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02e0d254;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02e0d254:
      plVar7 = (long *)(*(code *)*puVar6)();
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_02e0d274:
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02e0d2c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02e0d2c0:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) != 0) {
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar4 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              lVar9 = lVar4 + (long)*piVar12 * 0x10 + 0x138;
              goto LAB_02e0d338;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02e0d338:
        lVar9 = *(long *)(lVar9 + 8);
        (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,0,unaff_x29 + -0x18);
        plVar15 = *(long **)(unaff_x29 + -0x18);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar4 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              lVar9 = lVar4 + (long)*piVar12 * 0x10 + 0x138;
              goto LAB_02e0d3c0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        lVar9 = FUN_01ecb238(plVar15,lVar9,0);
LAB_02e0d3c0:
        *(long *)(unaff_x29 + -0x20) = lVar14;
        lVar9 = *(long *)(lVar9 + 8);
        (**(code **)(lVar9 + 0x10))
                  (*(undefined8 *)(lVar9 + 8),lVar9,plVar15,unaff_x29 + -0x20,lVar14);
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
        uVar13 = *puVar6;
        *(long *)(unaff_x29 + -0x20) = lVar14;
        (*(code *)puVar6[2])(uVar13);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x29 + -0x18);
        lVar9 = thunk_FUN_01f116d0(plVar15,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar9 == 0) {
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar5[(long)(int)uVar1 + 4] = (long)plVar15;
        thunk_FUN_01f51358(plVar5 + (long)(int)uVar1 + 4,plVar15);
        iVar16 = 0;
        do {
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar4 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_02e0d4ac;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar15,lVar9,1);
LAB_02e0d4ac:
          plVar8 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd0);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar4 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02e0d528;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02e0d528:
          iVar3 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          if (iVar3 <= iVar16) goto LAB_02e0d274;
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar4 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_02e0d5a8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar15,lVar9,1);
LAB_02e0d5a8:
          plVar8 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          *(int *)(unaff_x29 + -0xc) = iVar16;
          lVar4 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                lVar9 = lVar4 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_02e0d628;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar8,lVar9,0);
LAB_02e0d628:
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar8,unaff_x29 + -0x20,unaff_x29 + -0x18);
          plVar8 = *(long **)(unaff_x29 + -0x18);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar4 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02e0d6b4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02e0d6b4:
          (*(code *)*puVar6)(plVar8,puVar6[1]);
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar4 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_02e0d72c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,1);
LAB_02e0d72c:
          (*(code *)*puVar6)(plVar8,puVar6[1]);
          iVar16 = iVar16 + 1;
        } while( true );
      }
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02e0d7a0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_02e0d7a0:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(uint *)(plVar5 + 3);
        if (0 < (int)uVar1) {
          uVar10 = 0;
          do {
            if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar10 = uVar10 + 1;
          } while (uVar1 != uVar10);
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return plVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


