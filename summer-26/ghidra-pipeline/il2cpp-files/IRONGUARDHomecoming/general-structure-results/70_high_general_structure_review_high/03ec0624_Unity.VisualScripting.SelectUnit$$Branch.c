/*
FUNCTION_NAME: Unity.VisualScripting.SelectUnit$$Branch
ENTRY_POINT: 03ec0624
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


long * Unity_VisualScripting_SelectUnit__Branch(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar19;
  int unaff_w23;
  long *plVar20;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while (param_1 == param_3) {
    if (unaff_x21 == (long *)0x0) goto LAB_03ec10ac;
    if ((*(int *)((long)unaff_x21 + 0x14) <= *(int *)((long)param_2 + 0x14)) &&
       (*(int *)((long)param_2 + 0x14) <= (int)unaff_x21[5])) {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph:
      (*(code *)*puVar11)();
    }
    unaff_w23 = unaff_w23 + 1;
LAB_03ec053c:
    lVar15 = *unaff_x22;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x26) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_03ec058c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x26,1);
LAB_03ec058c:
    iVar8 = (*(code *)*puVar11)(unaff_x22,puVar11[1]);
    if (iVar8 <= unaff_w23) {
      uVar19 = *(undefined8 *)PTR_DAT_0457bb00;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar19,0);
      plVar12 = (long *)FUN_03ec1308();
      if (plVar12 != (long *)0x0) {
        iVar8 = 0;
        do {
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03ec0758;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0758:
          iVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar9 <= iVar8) goto LAB_03ec0340;
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x27) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03ec07b8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
LAB_03ec07b8:
          param_2 = (long *)(*(code *)*puVar11)(plVar12,iVar8,puVar11[1]);
          if (param_2 == (long *)0x0) break;
          bVar4 = *(byte *)(*unaff_x29 + 0x130);
          if ((*(byte *)(*param_2 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(param_2);
          }
          if (unaff_x21 == (long *)0x0) break;
          iVar9 = *(int *)((long)param_2 + 0x14);
          iVar10 = *(int *)((long)unaff_x21 + 0x14);
          iVar2 = (int)param_2[5];
          if ((iVar9 < iVar10) || ((int)unaff_x21[5] < iVar2)) {
            if (iVar2 < iVar10) {
              bVar1 = true;
            }
            else {
              bVar1 = (int)unaff_x21[5] < iVar9;
            }
            if (iVar9 == iVar10) {
              bVar7 = iVar2 == (int)unaff_x21[5];
            }
            else {
              bVar7 = false;
            }
            if (!bVar7 && !bVar1) {
              uVar19 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
              uVar19 = FUN_01f08890(uVar19,4);
              FUN_01bc50c0();
              puVar5 = PTR_DAT_0457bb08;
              uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
              FUN_01bc56ec(uVar19,uVar14);
              uVar14 = thunk_FUN_01efb3a4(puVar5);
              FUN_01bc5408(uVar19,0,uVar14);
              FUN_01bc50c0(uVar19);
              FUN_01bc56ec(uVar19,unaff_x21);
              FUN_01bc5408(uVar19,1,unaff_x21);
              FUN_01bc50c0(uVar19);
              puVar5 = PTR_DAT_0457bb10;
              uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
              FUN_01bc56ec(uVar19,uVar14);
              uVar14 = thunk_FUN_01efb3a4(puVar5);
              FUN_01bc5408(uVar19,2,uVar14);
              FUN_01bc50c0(uVar19);
              FUN_01bc56ec(uVar19,param_2);
              goto LAB_03ec126c;
            }
          }
          else {
            lVar15 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x27) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_03ec08b8;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec08b8:
            (*(code *)*puVar11)();
          }
          iVar8 = iVar8 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
    lVar15 = *unaff_x22;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x27) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03ec05ec;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_03ec05ec:
    param_2 = (long *)(*(code *)*puVar11)(unaff_x22,unaff_w23,puVar11[1]);
    if (param_2 == (long *)0x0) goto LAB_03ec10ac;
    param_3 = *unaff_x28;
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    param_1 = *(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8);
  }
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(param_2);
  while( true ) {
    bVar4 = *(byte *)(*param_2 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar4 < bVar3) ||
       (lVar15 = *(long *)(*param_2 + 200),
       *(long *)(lVar15 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
    bVar3 = *(byte *)(*unaff_x29 + 0x130);
    if ((bVar3 <= bVar4) && (*(long *)(lVar15 + (ulong)bVar3 * 8 + -8) == *unaff_x29)) break;
LAB_03ec0340:
    do {
      unaff_w20 = unaff_w20 + 1;
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03ec0390;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
      iVar8 = (*(code *)*puVar11)();
      if (iVar8 <= unaff_w20) {
        iVar8 = 0;
        goto LAB_03ec08d8;
      }
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto Unity_VisualScripting_SelectUnit__get_condition;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
      param_2 = (long *)(*(code *)*puVar11)();
    } while (param_2 == (long *)0x0);
  }
  lVar15 = *unaff_x19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x27) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_03ec04ac;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
  unaff_x21 = (long *)(*(code *)*puVar11)();
  if (unaff_x21 != (long *)0x0) {
    bVar4 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
    goto LAB_03ec1300;
  }
  uVar19 = *(undefined8 *)PTR_DAT_0457baf8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar19,0);
  unaff_x22 = (long *)FUN_03ec1308();
  if (unaff_x22 == (long *)0x0) goto LAB_03ec10ac;
  unaff_w23 = 0;
  goto LAB_03ec053c;
LAB_03ec08d8:
  lVar15 = *unaff_x19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x26) {
        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_03ec0928;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
  iVar9 = (*(code *)*puVar11)();
  if (iVar9 <= iVar8) {
    plVar12 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_03546db4(plVar12,0);
    puVar6 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    puVar5 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iVar8 = 0;
    do {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03ec0edc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
      iVar9 = (*(code *)*puVar11)();
      if (iVar9 <= iVar8) {
        return plVar12;
      }
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03ec0f3c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
      plVar13 = (long *)(*(code *)*puVar11)();
      if (plVar13 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar13);
        }
        uStack000000000000000c = *(undefined4 *)((long)plVar13 + 0x14);
        uVar19 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
        if (plVar12 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = *plVar12;
        lVar15 = *(long *)puVar6;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03ec0ff0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,0);
LAB_03ec0ff0:
        lVar15 = (*(code *)*puVar11)(plVar12,uVar19,puVar11[1]);
        if (lVar15 != 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar19 = thunk_FUN_01f117cc();
          uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar19,uVar14,0);
          uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar19,uVar14);
        }
        uStack0000000000000008 = *(undefined4 *)((long)plVar13 + 0x14);
        uVar19 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&stack0x00000008);
        lVar16 = *plVar12;
        lVar15 = *(long *)puVar6;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03ec106c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,1);
LAB_03ec106c:
        (*(code *)*puVar11)(plVar12,uVar19,plVar13,puVar11[1]);
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  lVar15 = *unaff_x19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x27) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_03ec0988;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
  param_2 = (long *)(*(code *)*puVar11)();
  if (param_2 != (long *)0x0) {
    bVar4 = *(byte *)(*param_2 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar4 < bVar3) ||
       (lVar15 = *(long *)(*param_2 + 200),
       *(long *)(lVar15 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
    bVar3 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar3 <= bVar4) && (*(long *)(lVar15 + (ulong)bVar3 * 8 + -8) == *unaff_x28)) {
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
      unaff_x21 = (long *)(*(code *)*puVar11)();
      if (unaff_x21 != (long *)0x0) {
        bVar4 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x21);
        }
      }
      uVar19 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar19,0);
      plVar12 = (long *)FUN_03ec1308();
      if (plVar12 != (long *)0x0) {
        iVar9 = 0;
        plVar13 = unaff_x21 + 3;
        do {
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x26) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0b28:
          iVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if (iVar10 <= iVar9) goto LAB_03ec0c6c;
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x27) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
LAB_03ec0b88:
          param_2 = (long *)(*(code *)*puVar11)(plVar12,iVar9,puVar11[1]);
          if (param_2 == (long *)0x0) break;
          bVar4 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*param_2 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
          goto LAB_03ec10b4;
          if (unaff_x21 == (long *)0x0) break;
          if (*(int *)((long)param_2 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
            lVar15 = Unity_VisualScripting_SwitchOnEnum__Enter(param_2,*plVar13,param_2[3]);
            *plVar13 = lVar15;
            thunk_FUN_01f51358(plVar13,lVar15);
            lVar15 = *unaff_x19;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x27) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
            (*(code *)*puVar11)();
          }
          iVar9 = iVar9 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
  }
LAB_03ec09f0:
  iVar8 = iVar8 + 1;
  goto LAB_03ec08d8;
LAB_03ec0c6c:
  uVar19 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar19,0);
  plVar12 = (long *)FUN_03ec1308();
  if (plVar12 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x26) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0d08:
      iVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (iVar10 <= iVar9) goto LAB_03ec09f0;
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      param_2 = (long *)(*(code *)*puVar11)(plVar12,iVar9,puVar11[1]);
      if (param_2 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (unaff_x21 == (long *)0x0) break;
      iVar10 = *(int *)((long)unaff_x21 + 0x14);
      if (iVar10 == *(int *)((long)param_2 + 0x14)) {
        plVar20 = param_2 + 3;
        lVar15 = Unity_VisualScripting_SwitchOnEnum__Enter(param_2,*plVar13,*plVar20);
        *plVar20 = lVar15;
        thunk_FUN_01f51358(plVar20,lVar15);
        lVar15 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x27) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar11)();
      }
      else if ((*(int *)((long)param_2 + 0x14) <= iVar10) && (iVar10 <= (int)param_2[5])) {
        uVar19 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar19 = FUN_01f08890(uVar19,4);
        FUN_01bc50c0();
        puVar5 = PTR_DAT_0457bb18;
        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar19,uVar14);
        uVar14 = thunk_FUN_01efb3a4(puVar5);
        FUN_01bc5408(uVar19,0,uVar14);
        FUN_01bc50c0(uVar19);
        FUN_01bc56ec(uVar19,unaff_x21);
        FUN_01bc5408(uVar19,1,unaff_x21);
        FUN_01bc50c0(uVar19);
        puVar5 = PTR_DAT_0457bb20;
        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar19,uVar14);
        uVar14 = thunk_FUN_01efb3a4(puVar5);
        FUN_01bc5408(uVar19,2,uVar14);
        FUN_01bc50c0(uVar19);
        FUN_01bc56ec(uVar19,param_2);
LAB_03ec126c:
        FUN_01bc5408(uVar19,3,param_2);
        uVar19 = FUN_0340ec80(uVar19,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar14 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar14,uVar19,0);
        uVar19 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar14,uVar19);
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
}


