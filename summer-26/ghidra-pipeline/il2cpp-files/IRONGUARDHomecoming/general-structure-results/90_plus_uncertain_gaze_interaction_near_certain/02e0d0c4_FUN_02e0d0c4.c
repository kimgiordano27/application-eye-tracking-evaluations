/*
FUNCTION_NAME: FUN_02e0d0c4
ENTRY_POINT: 02e0d0c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e0d7b8) */
/* WARNING: Removing unreachable block (ram,0x02e0d84c) */

long * FUN_02e0d0c4(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  int iVar17;
  int aiStack_90 [2];
  long local_88;
  int *local_80;
  uint local_78;
  undefined4 uStack_74;
  int local_6c;
  long local_68;
  
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  if ((DAT_04831795 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04831795 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  piVar15 = (int *)((long)aiStack_90 -
                   ((ulong)*(uint *)(*(long *)(lVar11 + 0x10) + 0xfc) + 0xf & 0x1fffffff0));
  uVar16 = *(undefined8 *)(lVar11 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar16 = FUN_03579868(uVar16,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  lVar11 = FUN_0359e780(uVar16,0);
  if (lVar11 != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    plVar7 = (long *)FUN_01f08890(lVar6,*(undefined4 *)(lVar11 + 0x18));
    if (param_2 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar6 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02e0d254;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_02e0d254:
      plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_02e0d274:
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02e0d2c0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_02e0d2c0:
      uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar13 & 1) != 0) {
        lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
        }
        lVar6 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              lVar11 = lVar6 + (long)*piVar14 * 0x10 + 0x138;
              goto LAB_02e0d338;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        lVar11 = FUN_01ecb238(plVar9,lVar11,0);
LAB_02e0d338:
        lVar11 = *(long *)(lVar11 + 8);
        (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar9,0,&local_78);
        plVar2 = (long *)CONCAT44(uStack_74,local_78);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
        }
        lVar6 = *plVar2;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              lVar11 = lVar6 + (long)*piVar14 * 0x10 + 0x138;
              goto LAB_02e0d3c0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        lVar11 = FUN_01ecb238(plVar2,lVar11,0);
LAB_02e0d3c0:
        lVar11 = *(long *)(lVar11 + 8);
        local_80 = piVar15;
        (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar2,&local_80,piVar15);
        puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98);
        local_80 = piVar15;
        (*(code *)puVar8[2])(*puVar8,puVar8,param_1,&local_80,&local_78);
        uVar1 = local_78;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = (long)(int)local_78;
        lVar11 = thunk_FUN_01f116d0(plVar2,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar11 == 0) {
          uVar16 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar16,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7[lVar6 + 4] = (long)plVar2;
        thunk_FUN_01f51358(plVar7 + lVar6 + 4,plVar2);
        iVar17 = 0;
        do {
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar2;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0d4ac;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar2,lVar11,1);
LAB_02e0d4ac:
          plVar10 = (long *)(*(code *)*puVar8)(plVar2,puVar8[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02e0d528;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_02e0d528:
          iVar5 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if (iVar5 <= iVar17) goto LAB_02e0d274;
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar2;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0d5a8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar2,lVar11,1);
LAB_02e0d5a8:
          plVar10 = (long *)(*(code *)*puVar8)(plVar2,puVar8[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          local_6c = iVar17;
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                lVar11 = lVar6 + (long)*piVar14 * 0x10 + 0x138;
                goto LAB_02e0d628;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          lVar11 = FUN_01ecb238(plVar10,lVar11,0);
LAB_02e0d628:
          lVar11 = *(long *)(lVar11 + 8);
          local_80 = &local_6c;
          (**(code **)(lVar11 + 0x10))
                    (*(undefined8 *)(lVar11 + 8),lVar11,plVar10,&local_80,&local_78);
          plVar10 = (long *)CONCAT44(uStack_74,local_78);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02e0d6b4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_02e0d6b4:
          (*(code *)*puVar8)(plVar10,puVar8[1]);
          lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar6 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02e0d72c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,1);
LAB_02e0d72c:
          (*(code *)*puVar8)(plVar10,puVar8[1]);
          iVar17 = iVar17 + 1;
        } while( true );
      }
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02e0d7a0;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar9,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_02e0d7a0:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
      }
      if (plVar7 != (long *)0x0) {
        uVar1 = *(uint *)(plVar7 + 3);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar12 = uVar12 + 1;
          } while (uVar1 != uVar12);
        }
        if (*(long *)(local_88 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return plVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


