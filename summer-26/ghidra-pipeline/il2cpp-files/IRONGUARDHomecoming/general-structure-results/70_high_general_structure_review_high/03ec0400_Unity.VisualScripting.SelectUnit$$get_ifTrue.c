/*
FUNCTION_NAME: Unity.VisualScripting.SelectUnit$$get_ifTrue
ENTRY_POINT: 03ec0400
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


long * Unity_VisualScripting_SelectUnit__get_ifTrue(long *param_1)

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
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uVar20;
  long *plVar21;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    if (param_1 != (long *)0x0) {
      bVar4 = *(byte *)(*param_1 + 0x130);
      bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar18 = *(long *)(*param_1 + 200),
         *(long *)(lVar18 + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
      bVar5 = *(byte *)(*unaff_x29 + 0x130);
      if ((bVar5 <= bVar4) && (*(long *)(lVar18 + (ulong)bVar5 * 8 + -8) == *unaff_x29)) {
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03ec04ac;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
        plVar13 = (long *)(*(code *)*puVar12)();
        if (plVar13 != (long *)0x0) {
          bVar4 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
          goto LAB_03ec1300;
        }
        uVar20 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar20,0);
        plVar14 = (long *)FUN_03ec1308();
        if (plVar14 != (long *)0x0) {
          iVar9 = 0;
          do {
            lVar18 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x26) {
                  puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_03ec058c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x26,1);
LAB_03ec058c:
            iVar10 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (iVar10 <= iVar9) goto LAB_03ec06bc;
            lVar18 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x27) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03ec05ec;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0);
LAB_03ec05ec:
            param_1 = (long *)(*(code *)*puVar12)(plVar14,iVar9,puVar12[1]);
            if (param_1 == (long *)0x0) break;
            bVar4 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*param_1 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
            goto LAB_03ec10b4;
            if (plVar13 == (long *)0x0) break;
            if ((*(int *)((long)plVar13 + 0x14) <= *(int *)((long)param_1 + 0x14)) &&
               (*(int *)((long)param_1 + 0x14) <= (int)plVar13[5])) {
              lVar18 = *unaff_x19;
              uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *unaff_x27) {
                    puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
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
    lVar18 = *unaff_x19;
    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x26) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03ec0390;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
    iVar9 = (*(code *)*puVar12)();
    if (iVar9 <= unaff_w20) goto LAB_03ec08d4;
    lVar18 = *unaff_x19;
    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
          goto Unity_VisualScripting_SelectUnit__get_condition;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
    param_1 = (long *)(*(code *)*puVar12)();
  } while( true );
LAB_03ec06bc:
  uVar20 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar20,0);
  plVar14 = (long *)FUN_03ec1308();
  if (plVar14 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar18 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_03ec0758;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x26,1);
LAB_03ec0758:
      iVar10 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if (iVar10 <= iVar9) goto LAB_03ec0340;
      lVar18 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03ec07b8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0);
LAB_03ec07b8:
      param_1 = (long *)(*(code *)*puVar12)(plVar14,iVar9,puVar12[1]);
      if (param_1 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_1);
      }
      if (plVar13 == (long *)0x0) break;
      iVar10 = *(int *)((long)param_1 + 0x14);
      iVar11 = *(int *)((long)plVar13 + 0x14);
      iVar3 = (int)param_1[5];
      if ((iVar10 < iVar11) || ((int)plVar13[5] < iVar3)) {
        if (iVar3 < iVar11) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)plVar13[5] < iVar10;
        }
        if (iVar10 == iVar11) {
          bVar8 = iVar3 == (int)plVar13[5];
        }
        else {
          bVar8 = false;
        }
        if (!bVar8 && !bVar1) {
          uVar20 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar15 = FUN_01f08890(uVar20,4);
          FUN_01bc50c0();
          puVar6 = PTR_DAT_0457bb08;
          uVar20 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
          FUN_01bc56ec(uVar15,uVar20);
          uVar20 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar15,0,uVar20);
          FUN_01bc50c0(uVar15);
          FUN_01bc56ec(uVar15,plVar13);
          FUN_01bc5408(uVar15,1,plVar13);
          FUN_01bc50c0(uVar15);
          puVar6 = PTR_DAT_0457bb10;
          uVar20 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
          FUN_01bc56ec(uVar15,uVar20);
          uVar20 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar15,2,uVar20);
          FUN_01bc50c0(uVar15);
          FUN_01bc56ec(uVar15,param_1);
          goto LAB_03ec126c;
        }
      }
      else {
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec08b8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
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
    lVar18 = *unaff_x19;
    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x26) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03ec0928;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
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
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x26) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec0edc;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
        iVar10 = (*(code *)*puVar12)();
        if (iVar10 <= iVar9) {
          return plVar13;
        }
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03ec0f3c;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
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
          uVar20 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,(long)&stack0x00000008 + 4);
          if (plVar13 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar16 = *plVar13;
          lVar18 = *(long *)puVar7;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar18) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03ec0ff0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,0);
LAB_03ec0ff0:
          lVar18 = (*(code *)*puVar12)(plVar13,uVar20,puVar12[1]);
          if (lVar18 != 0) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar20 = thunk_FUN_01f117cc();
            uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar20,uVar15,0);
            uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar20,uVar15);
          }
          uStack0000000000000008 = *(undefined4 *)((long)plVar14 + 0x14);
          uVar20 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
          lVar16 = *plVar13;
          lVar18 = *(long *)puVar7;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar18) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_03ec106c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,1);
LAB_03ec106c:
          (*(code *)*puVar12)(plVar13,uVar20,plVar14,puVar12[1]);
        }
        iVar9 = iVar9 + 1;
      } while( true );
    }
    lVar18 = *unaff_x19;
    uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03ec0988;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
    param_1 = (long *)(*(code *)*puVar12)();
    if (param_1 != (long *)0x0) {
      bVar4 = *(byte *)(*param_1 + 0x130);
      bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar18 = *(long *)(*param_1 + 200),
         *(long *)(lVar18 + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_1);
      }
      bVar5 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar5 <= bVar4) && (*(long *)(lVar18 + (ulong)bVar5 * 8 + -8) == *unaff_x28)) {
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03ec0a44;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
        plVar13 = (long *)(*(code *)*puVar12)();
        if (plVar13 != (long *)0x0) {
          bVar4 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar13);
          }
        }
        uVar20 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar20,0);
        plVar14 = (long *)FUN_03ec1308();
        if (plVar14 != (long *)0x0) {
          iVar10 = 0;
          plVar2 = plVar13 + 3;
          do {
            lVar18 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x26) {
                  puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0b28;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x26,1);
LAB_03ec0b28:
            iVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (iVar11 <= iVar10) goto LAB_03ec0c6c;
            lVar18 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x27) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_03ec0b88;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0);
LAB_03ec0b88:
            param_1 = (long *)(*(code *)*puVar12)(plVar14,iVar10,puVar12[1]);
            if (param_1 == (long *)0x0) break;
            bVar4 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*param_1 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
            goto LAB_03ec10b4;
            if (plVar13 == (long *)0x0) break;
            if (*(int *)((long)param_1 + 0x14) == *(int *)((long)plVar13 + 0x14)) {
              lVar18 = Unity_VisualScripting_SwitchOnEnum__Enter(param_1,*plVar2,param_1[3]);
              *plVar2 = lVar18;
              thunk_FUN_01f51358(plVar2,lVar18);
              lVar18 = *unaff_x19;
              uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *unaff_x27) {
                    puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_03ec0c50;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
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
  uVar20 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar20,0);
  plVar14 = (long *)FUN_03ec1308();
  if (plVar14 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar18 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x26,1);
LAB_03ec0d08:
      iVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if (iVar11 <= iVar10) goto LAB_03ec09f0;
      lVar18 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      param_1 = (long *)(*(code *)*puVar12)(plVar14,iVar10,puVar12[1]);
      if (param_1 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (plVar13 == (long *)0x0) break;
      iVar11 = *(int *)((long)plVar13 + 0x14);
      if (iVar11 == *(int *)((long)param_1 + 0x14)) {
        plVar21 = param_1 + 3;
        lVar18 = Unity_VisualScripting_SwitchOnEnum__Enter(param_1,*plVar2,*plVar21);
        *plVar21 = lVar18;
        thunk_FUN_01f51358(plVar21,lVar18);
        lVar18 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar12)();
      }
      else if ((*(int *)((long)param_1 + 0x14) <= iVar11) && (iVar11 <= (int)param_1[5])) {
        uVar20 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar15 = FUN_01f08890(uVar20,4);
        FUN_01bc50c0();
        puVar6 = PTR_DAT_0457bb18;
        uVar20 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar15,uVar20);
        uVar20 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar15,0,uVar20);
        FUN_01bc50c0(uVar15);
        FUN_01bc56ec(uVar15,plVar13);
        FUN_01bc5408(uVar15,1,plVar13);
        FUN_01bc50c0(uVar15);
        puVar6 = PTR_DAT_0457bb20;
        uVar20 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar15,uVar20);
        uVar20 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar15,2,uVar20);
        FUN_01bc50c0(uVar15);
        FUN_01bc56ec(uVar15,param_1);
LAB_03ec126c:
        FUN_01bc5408(uVar15,3,param_1);
        uVar20 = FUN_0340ec80(uVar15,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar15 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar15,uVar20,0);
        uVar20 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar15,uVar20);
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
}


