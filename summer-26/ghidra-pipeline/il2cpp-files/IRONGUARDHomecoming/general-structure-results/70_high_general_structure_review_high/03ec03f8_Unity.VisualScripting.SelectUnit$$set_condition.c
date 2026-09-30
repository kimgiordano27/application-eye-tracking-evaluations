/*
FUNCTION_NAME: Unity.VisualScripting.SelectUnit$$set_condition
ENTRY_POINT: 03ec03f8
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


long * Unity_VisualScripting_SelectUnit__set_condition(code *param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uVar21;
  long *plVar22;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    plVar13 = (long *)(*param_1)();
    if (plVar13 != (long *)0x0) {
      bVar4 = *(byte *)(*plVar13 + 0x130);
      bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar19 = *(long *)(*plVar13 + 200),
         *(long *)(lVar19 + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
      bVar5 = *(byte *)(*unaff_x29 + 0x130);
      if ((bVar5 <= bVar4) && (*(long *)(lVar19 + (ulong)bVar5 * 8 + -8) == *unaff_x29)) {
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec04ac;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
        plVar14 = (long *)(*(code *)*puVar12)();
        if (plVar14 != (long *)0x0) {
          bVar4 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
          goto LAB_03ec1300;
        }
        uVar21 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar21,0);
        plVar15 = (long *)FUN_03ec1308();
        if (plVar15 != (long *)0x0) {
          iVar9 = 0;
          do {
            lVar19 = *plVar15;
            uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x26) {
                  puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03ec058c;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x26,1);
LAB_03ec058c:
            iVar10 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            if (iVar10 <= iVar9) goto LAB_03ec06bc;
            lVar19 = *plVar15;
            uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x27) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03ec05ec;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x27,0);
LAB_03ec05ec:
            plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar9,puVar12[1]);
            if (plVar13 == (long *)0x0) break;
            bVar4 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
            goto LAB_03ec10b4;
            if (plVar14 == (long *)0x0) break;
            if ((*(int *)((long)plVar14 + 0x14) <= *(int *)((long)plVar13 + 0x14)) &&
               (*(int *)((long)plVar13 + 0x14) <= (int)plVar14[5])) {
              lVar19 = *unaff_x19;
              uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *unaff_x27) {
                    puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph:
              (*(code *)*puVar12)();
            }
            iVar9 = iVar9 + 1;
          } while( true );
        }
        goto LAB_03ec10ac;
      }
    }
LAB_03ec0340:
    unaff_w20 = unaff_w20 + 1;
    lVar19 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x26) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_03ec0390;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
    iVar9 = (*(code *)*puVar12)();
    if (iVar9 <= unaff_w20) goto LAB_03ec08d4;
    lVar19 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_VisualScripting_SelectUnit__get_condition;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
    param_1 = (code *)*puVar12;
  } while( true );
LAB_03ec06bc:
  uVar21 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar21,0);
  plVar15 = (long *)FUN_03ec1308();
  if (plVar15 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar19 = *plVar15;
      uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0758;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x26,1);
LAB_03ec0758:
      iVar10 = (*(code *)*puVar12)(plVar15,puVar12[1]);
      if (iVar10 <= iVar9) goto LAB_03ec0340;
      lVar19 = *plVar15;
      uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec07b8;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x27,0);
LAB_03ec07b8:
      plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar9,puVar12[1]);
      if (plVar13 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar13);
      }
      if (plVar14 == (long *)0x0) break;
      iVar10 = *(int *)((long)plVar13 + 0x14);
      iVar11 = *(int *)((long)plVar14 + 0x14);
      iVar3 = (int)plVar13[5];
      if ((iVar10 < iVar11) || ((int)plVar14[5] < iVar3)) {
        if (iVar3 < iVar11) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)plVar14[5] < iVar10;
        }
        if (iVar10 == iVar11) {
          bVar8 = iVar3 == (int)plVar14[5];
        }
        else {
          bVar8 = false;
        }
        if (!bVar8 && !bVar1) {
          uVar21 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar16 = FUN_01f08890(uVar21,4);
          FUN_01bc50c0();
          puVar6 = PTR_DAT_0457bb08;
          uVar21 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
          FUN_01bc56ec(uVar16,uVar21);
          uVar21 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar16,0,uVar21);
          FUN_01bc50c0(uVar16);
          FUN_01bc56ec(uVar16,plVar14);
          FUN_01bc5408(uVar16,1,plVar14);
          FUN_01bc50c0(uVar16);
          puVar6 = PTR_DAT_0457bb10;
          uVar21 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
          FUN_01bc56ec(uVar16,uVar21);
          uVar21 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar16,2,uVar21);
          FUN_01bc50c0(uVar16);
          FUN_01bc56ec(uVar16,plVar13);
          goto LAB_03ec126c;
        }
      }
      else {
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec08b8;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec08b8:
        (*(code *)*puVar12)();
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec08d4:
  iVar9 = 0;
  do {
    lVar19 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x26) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_03ec0928;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
    iVar10 = (*(code *)*puVar12)();
    if (iVar10 <= iVar9) {
      plVar13 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_System_RuntimeType_CreateInstanceImpl__);
      FUN_03546db4(plVar13,0);
      puVar7 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
      puVar6 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      iVar9 = 0;
      do {
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x26) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec0edc;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
        iVar10 = (*(code *)*puVar12)();
        if (iVar10 <= iVar9) {
          return plVar13;
        }
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec0f3c;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
        plVar14 = (long *)(*(code *)*puVar12)();
        if (plVar14 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar14);
          }
          uStack000000000000000c = *(undefined4 *)((long)plVar14 + 0x14);
          uVar21 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,(long)&stack0x00000008 + 4);
          if (plVar13 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar17 = *plVar13;
          lVar19 = *(long *)puVar7;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar19) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03ec0ff0;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar19,0);
LAB_03ec0ff0:
          lVar19 = (*(code *)*puVar12)(plVar13,uVar21,puVar12[1]);
          if (lVar19 != 0) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar21 = thunk_FUN_01f117cc();
            uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar21,uVar16,0);
            uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar21,uVar16);
          }
          uStack0000000000000008 = *(undefined4 *)((long)plVar14 + 0x14);
          uVar21 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
          lVar17 = *plVar13;
          lVar19 = *(long *)puVar7;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar19) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_03ec106c;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar19,1);
LAB_03ec106c:
          (*(code *)*puVar12)(plVar13,uVar21,plVar14,puVar12[1]);
        }
        iVar9 = iVar9 + 1;
      } while( true );
    }
    lVar19 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_03ec0988;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
    plVar13 = (long *)(*(code *)*puVar12)();
    if (plVar13 != (long *)0x0) {
      bVar4 = *(byte *)(*plVar13 + 0x130);
      bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar19 = *(long *)(*plVar13 + 200),
         *(long *)(lVar19 + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar13);
      }
      bVar5 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar5 <= bVar4) && (*(long *)(lVar19 + (ulong)bVar5 * 8 + -8) == *unaff_x28)) {
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec0a44;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
        plVar14 = (long *)(*(code *)*puVar12)();
        if (plVar14 != (long *)0x0) {
          bVar4 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar14);
          }
        }
        uVar21 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar21,0);
        plVar15 = (long *)FUN_03ec1308();
        if (plVar15 != (long *)0x0) {
          iVar10 = 0;
          plVar2 = plVar14 + 3;
          do {
            lVar19 = *plVar15;
            uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x26) {
                  puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0b28;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x26,1);
LAB_03ec0b28:
            iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            if (iVar11 <= iVar10) goto LAB_03ec0c6c;
            lVar19 = *plVar15;
            uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x27) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_03ec0b88;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x27,0);
LAB_03ec0b88:
            plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
            if (plVar13 == (long *)0x0) break;
            bVar4 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
            goto LAB_03ec10b4;
            if (plVar14 == (long *)0x0) break;
            if (*(int *)((long)plVar13 + 0x14) == *(int *)((long)plVar14 + 0x14)) {
              lVar19 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,plVar13[3]);
              *plVar2 = lVar19;
              thunk_FUN_01f51358(plVar2,lVar19);
              lVar19 = *unaff_x19;
              uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *unaff_x27) {
                    puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_03ec0c50;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
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
    iVar9 = iVar9 + 1;
  } while( true );
LAB_03ec0c6c:
  uVar21 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar21,0);
  plVar15 = (long *)FUN_03ec1308();
  if (plVar15 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar19 = *plVar15;
      uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x26,1);
LAB_03ec0d08:
      iVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
      if (iVar11 <= iVar10) goto LAB_03ec09f0;
      lVar19 = *plVar15;
      uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar13 = (long *)(*(code *)*puVar12)(plVar15,iVar10,puVar12[1]);
      if (plVar13 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (plVar14 == (long *)0x0) break;
      iVar11 = *(int *)((long)plVar14 + 0x14);
      if (iVar11 == *(int *)((long)plVar13 + 0x14)) {
        plVar22 = plVar13 + 3;
        lVar19 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,*plVar22);
        *plVar22 = lVar19;
        thunk_FUN_01f51358(plVar22,lVar19);
        lVar19 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar12)();
      }
      else if ((*(int *)((long)plVar13 + 0x14) <= iVar11) && (iVar11 <= (int)plVar13[5])) {
        uVar21 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar16 = FUN_01f08890(uVar21,4);
        FUN_01bc50c0();
        puVar6 = PTR_DAT_0457bb18;
        uVar21 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar16,uVar21);
        uVar21 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar16,0,uVar21);
        FUN_01bc50c0(uVar16);
        FUN_01bc56ec(uVar16,plVar14);
        FUN_01bc5408(uVar16,1,plVar14);
        FUN_01bc50c0(uVar16);
        puVar6 = PTR_DAT_0457bb20;
        uVar21 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar16,uVar21);
        uVar21 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar16,2,uVar21);
        FUN_01bc50c0(uVar16);
        FUN_01bc56ec(uVar16,plVar13);
LAB_03ec126c:
        FUN_01bc5408(uVar16,3,plVar13);
        uVar21 = FUN_0340ec80(uVar16,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar16 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar16,uVar21,0);
        uVar21 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar16,uVar21);
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
}


