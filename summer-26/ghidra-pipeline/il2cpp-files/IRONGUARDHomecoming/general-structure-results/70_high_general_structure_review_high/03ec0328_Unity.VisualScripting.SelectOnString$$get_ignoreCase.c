/*
FUNCTION_NAME: Unity.VisualScripting.SelectOnString$$get_ignoreCase
ENTRY_POINT: 03ec0328
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * Unity_VisualScripting_SelectOnString__get_ignoreCase(void)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *unaff_x19;
  int iVar21;
  undefined8 uVar22;
  long *plVar23;
  long unaff_x26;
  long *plVar24;
  long unaff_x27;
  long *plVar25;
  long unaff_x29;
  long *plVar26;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar7 = PTR_DAT_0457bac8;
  plVar24 = *(long **)(unaff_x26 + 0xa78);
  plVar25 = *(long **)(unaff_x27 + 0x438);
  plVar26 = *(long **)(unaff_x29 + 0xad0);
  iVar21 = 0;
  do {
    lVar17 = *unaff_x19;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar24) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_03ec0390;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
    iVar10 = (*(code *)*puVar12)();
    if (iVar10 <= iVar21) {
      iVar21 = 0;
      break;
    }
    lVar17 = *unaff_x19;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar25) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_VisualScripting_SelectUnit__get_condition;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
    plVar13 = (long *)(*(code *)*puVar12)();
    if (plVar13 != (long *)0x0) {
      bVar5 = *(byte *)(*plVar13 + 0x130);
      bVar6 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar5 < bVar6) ||
         (lVar17 = *(long *)(*plVar13 + 200),
         *(long *)(lVar17 + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
      bVar6 = *(byte *)(*plVar26 + 0x130);
      if ((bVar6 <= bVar5) && (*(long *)(lVar17 + (ulong)bVar6 * 8 + -8) == *plVar26)) {
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *plVar25) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec04ac;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
        plVar14 = (long *)(*(code *)*puVar12)();
        if (plVar14 != (long *)0x0) {
          bVar5 = *(byte *)(*plVar26 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *plVar26))
          goto LAB_03ec1300;
        }
        uVar22 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar22,0);
        plVar15 = (long *)FUN_03ec1308();
        if (plVar15 != (long *)0x0) {
          iVar10 = 0;
          do {
            lVar17 = *plVar15;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *plVar24) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03ec058c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar24,1);
LAB_03ec058c:
            iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            if (iVar11 <= iVar10) goto LAB_03ec06bc;
            lVar17 = *plVar15;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *plVar25) {
                  puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03ec05ec;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar25,0);
LAB_03ec05ec:
            plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
            if (plVar13 == (long *)0x0) break;
            bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7))
            goto LAB_03ec10b4;
            if (plVar14 == (long *)0x0) break;
            if ((*(int *)((long)plVar14 + 0x14) <= *(int *)((long)plVar13 + 0x14)) &&
               (*(int *)((long)plVar13 + 0x14) <= (int)plVar14[5])) {
              lVar17 = *unaff_x19;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *plVar25) {
                    puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph:
              (*(code *)*puVar12)();
            }
            iVar10 = iVar10 + 1;
          } while( true );
        }
        goto LAB_03ec10ac;
      }
    }
LAB_03ec0458:
    iVar21 = iVar21 + 1;
  } while( true );
LAB_03ec08d8:
  lVar17 = *unaff_x19;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *plVar24) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_03ec0928;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
  iVar10 = (*(code *)*puVar12)();
  if (iVar10 <= iVar21) {
    plVar26 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_03546db4(plVar26,0);
    puVar8 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    puVar7 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iVar21 = 0;
    do {
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar24) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0edc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
      iVar10 = (*(code *)*puVar12)();
      if (iVar10 <= iVar21) {
        return plVar26;
      }
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar25) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec0f3c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
      plVar13 = (long *)(*(code *)*puVar12)();
      if (plVar13 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar13);
        }
        uStack000000000000000c = *(undefined4 *)((long)plVar13 + 0x14);
        uVar22 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,(long)&stack0x00000008 + 4);
        if (plVar26 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *plVar26;
        lVar17 = *(long *)puVar8;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec0ff0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar26,lVar17,0);
LAB_03ec0ff0:
        lVar17 = (*(code *)*puVar12)(plVar26,uVar22,puVar12[1]);
        if (lVar17 != 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar22 = thunk_FUN_01f117cc();
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar22,uVar16,0);
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar22,uVar16);
        }
        uStack0000000000000008 = *(undefined4 *)((long)plVar13 + 0x14);
        uVar22 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&stack0x00000008);
        lVar18 = *plVar26;
        lVar17 = *(long *)puVar8;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec106c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar26,lVar17,1);
LAB_03ec106c:
        (*(code *)*puVar12)(plVar26,uVar22,plVar13,puVar12[1]);
      }
      iVar21 = iVar21 + 1;
    } while( true );
  }
  lVar17 = *unaff_x19;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *plVar25) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_03ec0988;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
  plVar13 = (long *)(*(code *)*puVar12)();
  if (plVar13 != (long *)0x0) {
    bVar5 = *(byte *)(*plVar13 + 0x130);
    bVar6 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar5 < bVar6) ||
       (lVar17 = *(long *)(*plVar13 + 200),
       *(long *)(lVar17 + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar13);
    }
    bVar6 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((bVar6 <= bVar5) && (*(long *)(lVar17 + (ulong)bVar6 * 8 + -8) == *(long *)puVar7)) {
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar25) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
      plVar14 = (long *)(*(code *)*puVar12)();
      if (plVar14 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar14);
        }
      }
      uVar22 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar22,0);
      plVar15 = (long *)FUN_03ec1308();
      if (plVar15 != (long *)0x0) {
        iVar10 = 0;
        plVar2 = plVar14 + 3;
        do {
          lVar17 = *plVar15;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *plVar24) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar24,1);
LAB_03ec0b28:
          iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if (iVar11 <= iVar10) goto LAB_03ec0c6c;
          lVar17 = *plVar15;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *plVar25) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar25,0);
LAB_03ec0b88:
          plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
          if (plVar13 == (long *)0x0) break;
          bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7))
          goto LAB_03ec10b4;
          if (plVar14 == (long *)0x0) break;
          if (*(int *)((long)plVar13 + 0x14) == *(int *)((long)plVar14 + 0x14)) {
            lVar17 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,plVar13[3]);
            *plVar2 = lVar17;
            thunk_FUN_01f51358(plVar2,lVar17);
            lVar17 = *unaff_x19;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *plVar25) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
            (*(code *)*puVar12)();
          }
          iVar10 = iVar10 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
  }
LAB_03ec09f0:
  iVar21 = iVar21 + 1;
  goto LAB_03ec08d8;
LAB_03ec0c6c:
  uVar22 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar22,0);
  plVar15 = (long *)FUN_03ec1308();
  if (plVar15 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar17 = *plVar15;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar24) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar24,1);
LAB_03ec0d08:
      iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
      if (iVar11 <= iVar10) goto LAB_03ec09f0;
      lVar17 = *plVar15;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar25) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar25,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
      if (plVar13 == (long *)0x0) break;
      bVar5 = *(byte *)(*plVar26 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) != *plVar26))
      goto LAB_03ec10b4;
      if (plVar14 == (long *)0x0) break;
      iVar11 = *(int *)((long)plVar14 + 0x14);
      if (iVar11 == *(int *)((long)plVar13 + 0x14)) {
        plVar23 = plVar13 + 3;
        lVar17 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,*plVar23);
        *plVar23 = lVar17;
        thunk_FUN_01f51358(plVar23,lVar17);
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *plVar25) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar12)();
      }
      else if ((*(int *)((long)plVar13 + 0x14) <= iVar11) && (iVar11 <= (int)plVar13[5])) {
        uVar22 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar22 = FUN_01f08890(uVar22,4);
        FUN_01bc50c0();
        puVar7 = PTR_DAT_0457bb18;
        uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar22,uVar16);
        uVar16 = thunk_FUN_01efb3a4(puVar7);
        FUN_01bc5408(uVar22,0,uVar16);
        FUN_01bc50c0(uVar22);
        FUN_01bc56ec(uVar22,plVar14);
        FUN_01bc5408(uVar22,1,plVar14);
        FUN_01bc50c0(uVar22);
        puVar7 = PTR_DAT_0457bb20;
        uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar22,uVar16);
        uVar16 = thunk_FUN_01efb3a4(puVar7);
        FUN_01bc5408(uVar22,2,uVar16);
        FUN_01bc50c0(uVar22);
        FUN_01bc56ec(uVar22,plVar13);
        goto LAB_03ec126c;
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec06bc:
  uVar22 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar22,0);
  plVar15 = (long *)FUN_03ec1308();
  if (plVar15 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar17 = *plVar15;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar24) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0758;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar24,1);
LAB_03ec0758:
      iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
      if (iVar11 <= iVar10) goto LAB_03ec0458;
      lVar17 = *plVar15;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar25) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec07b8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*plVar25,0);
LAB_03ec07b8:
      plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
      if (plVar13 == (long *)0x0) break;
      bVar5 = *(byte *)(*plVar26 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) != *plVar26)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar13);
      }
      if (plVar14 == (long *)0x0) break;
      iVar11 = *(int *)((long)plVar13 + 0x14);
      iVar3 = *(int *)((long)plVar14 + 0x14);
      iVar4 = (int)plVar13[5];
      if ((iVar11 < iVar3) || ((int)plVar14[5] < iVar4)) {
        if (iVar4 < iVar3) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)plVar14[5] < iVar11;
        }
        if (iVar11 == iVar3) {
          bVar9 = iVar4 == (int)plVar14[5];
        }
        else {
          bVar9 = false;
        }
        if (!bVar9 && !bVar1) {
          uVar22 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar22 = FUN_01f08890(uVar22,4);
          FUN_01bc50c0();
          puVar7 = PTR_DAT_0457bb08;
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
          FUN_01bc56ec(uVar22,uVar16);
          uVar16 = thunk_FUN_01efb3a4(puVar7);
          FUN_01bc5408(uVar22,0,uVar16);
          FUN_01bc50c0(uVar22);
          FUN_01bc56ec(uVar22,plVar14);
          FUN_01bc5408(uVar22,1,plVar14);
          FUN_01bc50c0(uVar22);
          puVar7 = PTR_DAT_0457bb10;
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
          FUN_01bc56ec(uVar22,uVar16);
          uVar16 = thunk_FUN_01efb3a4(puVar7);
          FUN_01bc5408(uVar22,2,uVar16);
          FUN_01bc50c0(uVar22);
          FUN_01bc56ec(uVar22,plVar13);
LAB_03ec126c:
          FUN_01bc5408(uVar22,3,plVar13);
          uVar22 = FUN_0340ec80(uVar22,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar16 = thunk_FUN_01f117cc();
          FUN_034f7db4(uVar16,uVar22,0);
          uVar22 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar16,uVar22);
        }
      }
      else {
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *plVar25) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec08b8;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec08b8:
        (*(code *)*puVar12)();
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
}


