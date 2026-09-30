/*
FUNCTION_NAME: Unity.VisualScripting.Sequence$$set_multiOutputs
ENTRY_POINT: 03ec0718
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


long * Unity_VisualScripting_Sequence__set_multiOutputs
                 (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong in_x9;
  ulong uVar18;
  int *piVar19;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *plVar20;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec0718:
  piVar19 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar19 + -2) == param_3) {
      puVar12 = (undefined8 *)(param_1 + (long)(*piVar19 + 1) * 0x10 + 0x138);
      goto LAB_03ec0758;
    }
    in_x9 = in_x9 - 1;
    piVar19 = piVar19 + 4;
  } while (in_x9 != 0);
LAB_03ec0738:
  puVar12 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,1);
LAB_03ec0758:
  iVar9 = (*(code *)*puVar12)(unaff_x22,puVar12[1]);
  if (iVar9 <= unaff_w23) {
    do {
      do {
        unaff_w20 = unaff_w20 + 1;
        lVar16 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x26) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec0390;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
        iVar9 = (*(code *)*puVar12)();
        if (iVar9 <= unaff_w20) {
          iVar9 = 0;
          goto LAB_03ec08d8;
        }
        lVar16 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto Unity_VisualScripting_SelectUnit__get_condition;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
        plVar13 = (long *)(*(code *)*puVar12)();
      } while (plVar13 == (long *)0x0);
      bVar4 = *(byte *)(*plVar13 + 0x130);
      bVar3 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar4 < bVar3) ||
         (lVar16 = *(long *)(*plVar13 + 200),
         *(long *)(lVar16 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
      bVar3 = *(byte *)(*unaff_x29 + 0x130);
    } while ((bVar4 < bVar3) || (*(long *)(lVar16 + (ulong)bVar3 * 8 + -8) != *unaff_x29));
    lVar16 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_03ec04ac;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
    unaff_x21 = (long *)(*(code *)*puVar12)();
    if (unaff_x21 != (long *)0x0) {
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
      goto LAB_03ec1300;
    }
    uVar14 = *(undefined8 *)PTR_DAT_0457baf8;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar14,0);
    plVar11 = (long *)FUN_03ec1308();
    if (plVar11 != (long *)0x0) {
      iVar9 = 0;
      do {
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x26) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec058c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x26,1);
LAB_03ec058c:
        iVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (iVar8 <= iVar9) goto LAB_03ec06bc;
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03ec05ec;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
LAB_03ec05ec:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,iVar9,puVar12[1]);
        if (plVar13 == (long *)0x0) break;
        bVar4 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
        goto LAB_03ec10b4;
        if (unaff_x21 == (long *)0x0) break;
        if ((*(int *)((long)unaff_x21 + 0x14) <= *(int *)((long)plVar13 + 0x14)) &&
           (*(int *)((long)plVar13 + 0x14) <= (int)unaff_x21[5])) {
          lVar16 = *unaff_x19;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x27) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
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
  lVar16 = *unaff_x22;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x27) {
        puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_03ec07b8;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x27,0);
LAB_03ec07b8:
  plVar13 = (long *)(*(code *)*puVar12)(unaff_x22,unaff_w23,puVar12[1]);
  if (plVar13 == (long *)0x0) goto LAB_03ec10ac;
  bVar4 = *(byte *)(*unaff_x29 + 0x130);
  if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar13);
  }
  if (unaff_x21 == (long *)0x0) goto LAB_03ec10ac;
  iVar9 = *(int *)((long)plVar13 + 0x14);
  iVar8 = *(int *)((long)unaff_x21 + 0x14);
  iVar10 = (int)plVar13[5];
  if ((iVar9 < iVar8) || ((int)unaff_x21[5] < iVar10)) {
    if (iVar10 < iVar8) {
      bVar1 = true;
    }
    else {
      bVar1 = (int)unaff_x21[5] < iVar9;
    }
    if (iVar9 == iVar8) {
      bVar7 = iVar10 == (int)unaff_x21[5];
    }
    else {
      bVar7 = false;
    }
    if (!bVar7 && !bVar1) {
      uVar14 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                 );
      uVar14 = FUN_01f08890(uVar14,4);
      FUN_01bc50c0();
      puVar5 = PTR_DAT_0457bb08;
      uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
      FUN_01bc56ec(uVar14,uVar15);
      uVar15 = thunk_FUN_01efb3a4(puVar5);
      FUN_01bc5408(uVar14,0,uVar15);
      FUN_01bc50c0(uVar14);
      FUN_01bc56ec(uVar14,unaff_x21);
      FUN_01bc5408(uVar14,1,unaff_x21);
      FUN_01bc50c0(uVar14);
      puVar5 = PTR_DAT_0457bb10;
      uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
      FUN_01bc56ec(uVar14,uVar15);
      uVar15 = thunk_FUN_01efb3a4(puVar5);
      FUN_01bc5408(uVar14,2,uVar15);
      FUN_01bc50c0(uVar14);
      FUN_01bc56ec(uVar14,plVar13);
      goto LAB_03ec126c;
    }
  }
  else {
    lVar16 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03ec08b8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec08b8:
    (*(code *)*puVar12)();
  }
  unaff_w23 = unaff_w23 + 1;
  goto LAB_03ec0708;
LAB_03ec08d8:
  lVar16 = *unaff_x19;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x26) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_03ec0928;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
  iVar8 = (*(code *)*puVar12)();
  if (iVar8 <= iVar9) {
    plVar13 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_03546db4(plVar13,0);
    puVar6 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    puVar5 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iVar9 = 0;
    do {
      lVar16 = *unaff_x19;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_03ec0edc;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
      iVar8 = (*(code *)*puVar12)();
      if (iVar8 <= iVar9) {
        return plVar13;
      }
      lVar16 = *unaff_x19;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03ec0f3c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
      plVar11 = (long *)(*(code *)*puVar12)();
      if (plVar11 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        uStack000000000000000c = *(undefined4 *)((long)plVar11 + 0x14);
        uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
        if (plVar13 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = *plVar13;
        lVar16 = *(long *)puVar6;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03ec0ff0;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar16,0);
LAB_03ec0ff0:
        lVar16 = (*(code *)*puVar12)(plVar13,uVar14,puVar12[1]);
        if (lVar16 != 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar14 = thunk_FUN_01f117cc();
          uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar14,uVar15,0);
          uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar14,uVar15);
        }
        uStack0000000000000008 = *(undefined4 *)((long)plVar11 + 0x14);
        uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&stack0x00000008);
        lVar17 = *plVar13;
        lVar16 = *(long *)puVar6;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec106c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar13,lVar16,1);
LAB_03ec106c:
        (*(code *)*puVar12)(plVar13,uVar14,plVar11,puVar12[1]);
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  lVar16 = *unaff_x19;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x27) {
        puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_03ec0988;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
  plVar13 = (long *)(*(code *)*puVar12)();
  if (plVar13 != (long *)0x0) {
    bVar4 = *(byte *)(*plVar13 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar4 < bVar3) ||
       (lVar16 = *(long *)(*plVar13 + 200),
       *(long *)(lVar16 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar13);
    }
    bVar3 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar3 <= bVar4) && (*(long *)(lVar16 + (ulong)bVar3 * 8 + -8) == *unaff_x28)) {
      lVar16 = *unaff_x19;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
      unaff_x21 = (long *)(*(code *)*puVar12)();
      if (unaff_x21 != (long *)0x0) {
        bVar4 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x21);
        }
      }
      uVar14 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar14,0);
      plVar11 = (long *)FUN_03ec1308();
      if (plVar11 != (long *)0x0) {
        iVar8 = 0;
        plVar2 = unaff_x21 + 3;
        do {
          lVar16 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x26) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x26,1);
LAB_03ec0b28:
          iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (iVar10 <= iVar8) goto LAB_03ec0c6c;
          lVar16 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x27) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
LAB_03ec0b88:
          plVar13 = (long *)(*(code *)*puVar12)(plVar11,iVar8,puVar12[1]);
          if (plVar13 == (long *)0x0) break;
          bVar4 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x28))
          goto LAB_03ec10b4;
          if (unaff_x21 == (long *)0x0) break;
          if (*(int *)((long)plVar13 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
            lVar16 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,plVar13[3]);
            *plVar2 = lVar16;
            thunk_FUN_01f51358(plVar2,lVar16);
            lVar16 = *unaff_x19;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x27) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
            (*(code *)*puVar12)();
          }
          iVar8 = iVar8 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
  }
LAB_03ec09f0:
  iVar9 = iVar9 + 1;
  goto LAB_03ec08d8;
LAB_03ec0c6c:
  uVar14 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar14,0);
  plVar11 = (long *)FUN_03ec1308();
  if (plVar11 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar16 = *plVar11;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x26,1);
LAB_03ec0d08:
      iVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (iVar10 <= iVar8) goto LAB_03ec09f0;
      lVar16 = *plVar11;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar13 = (long *)(*(code *)*puVar12)(plVar11,iVar8,puVar12[1]);
      if (plVar13 == (long *)0x0) break;
      bVar4 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (unaff_x21 == (long *)0x0) break;
      iVar10 = *(int *)((long)unaff_x21 + 0x14);
      if (iVar10 == *(int *)((long)plVar13 + 0x14)) {
        plVar20 = plVar13 + 3;
        lVar16 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar13,*plVar2,*plVar20);
        *plVar20 = lVar16;
        thunk_FUN_01f51358(plVar20,lVar16);
        lVar16 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *unaff_x27) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar12)();
      }
      else if ((*(int *)((long)plVar13 + 0x14) <= iVar10) && (iVar10 <= (int)plVar13[5])) {
        uVar14 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar14 = FUN_01f08890(uVar14,4);
        FUN_01bc50c0();
        puVar5 = PTR_DAT_0457bb18;
        uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar14,uVar15);
        uVar15 = thunk_FUN_01efb3a4(puVar5);
        FUN_01bc5408(uVar14,0,uVar15);
        FUN_01bc50c0(uVar14);
        FUN_01bc56ec(uVar14,unaff_x21);
        FUN_01bc5408(uVar14,1,unaff_x21);
        FUN_01bc50c0(uVar14);
        puVar5 = PTR_DAT_0457bb20;
        uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar14,uVar15);
        uVar15 = thunk_FUN_01efb3a4(puVar5);
        FUN_01bc5408(uVar14,2,uVar15);
        FUN_01bc50c0(uVar14);
        FUN_01bc56ec(uVar14,plVar13);
LAB_03ec126c:
        FUN_01bc5408(uVar14,3,plVar13);
        uVar14 = FUN_0340ec80(uVar14,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar15 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar15,uVar14,0);
        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar15,uVar14);
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec06bc:
  uVar14 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar14,0);
  unaff_x22 = (long *)FUN_03ec1308();
  if (unaff_x22 == (long *)0x0) goto LAB_03ec10ac;
  unaff_w23 = 0;
LAB_03ec0708:
  param_1 = *unaff_x22;
  param_3 = *unaff_x26;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x03ec0718;
  goto LAB_03ec0738;
}


