/*
FUNCTION_NAME: FUN_02e0b6bc
ENTRY_POINT: 02e0b6bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e0bd3c) */
/* WARNING: Removing unreachable block (ram,0x02e0bdb8) */

long * FUN_02e0b6bc(long param_1,long *param_2,long param_3)

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
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04831792 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04831792 = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  lVar5 = FUN_0359e780(uVar15,0);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    plVar7 = (long *)FUN_01f08890(lVar6,*(undefined4 *)(lVar5 + 0x18));
    if (param_2 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02e0b814;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_02e0b814:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_02e0b838:
      lVar5 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02e0b884;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02e0b884:
      uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar13 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02e0b8fc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_02e0b8fc:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02e0b978;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_02e0b978:
        uVar13 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar13,uVar13 & 0xffffffff);
        }
        uVar3 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),uVar13 & 0xffffffff,
                           *(undefined8 *)(lVar5 + 0x28));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar5 == 0) {
          uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar15,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7[(long)(int)uVar3 + 4] = (long)plVar10;
        thunk_FUN_01f51358(plVar7 + (long)(int)uVar3 + 4,plVar10);
        iVar16 = 0;
        do {
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0ba48;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,1);
LAB_02e0ba48:
          plVar11 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02e0bac4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bac4:
          iVar4 = (*(code *)*puVar8)(plVar11,puVar8[1]);
          if (iVar4 <= iVar16) goto LAB_02e0b838;
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0bb44;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,1);
LAB_02e0bb44:
          plVar11 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02e0bbc0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bbc0:
          plVar11 = (long *)(*(code *)*puVar8)(plVar11,iVar16,puVar8[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02e0bc40;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,0);
LAB_02e0bc40:
          (*(code *)*puVar8)(plVar11,puVar8[1]);
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar6 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar5) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0bcb8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar11,lVar5,1);
LAB_02e0bcb8:
          (*(code *)*puVar8)(plVar11,puVar8[1]);
          iVar16 = iVar16 + 1;
        } while( true );
      }
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02e0bd24;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02e0bd24:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
      }
      if (plVar7 != (long *)0x0) {
        uVar3 = *(uint *)(plVar7 + 3);
        if (0 < (int)uVar3) {
          uVar12 = 0;
          do {
            if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar12 = uVar12 + 1;
          } while (uVar3 != uVar12);
        }
        return plVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


