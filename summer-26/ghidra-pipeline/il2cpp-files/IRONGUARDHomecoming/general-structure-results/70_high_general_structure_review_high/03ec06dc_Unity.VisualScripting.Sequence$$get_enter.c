/*
FUNCTION_NAME: Unity.VisualScripting.Sequence$$get_enter
ENTRY_POINT: 03ec06dc
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


long * Unity_VisualScripting_Sequence__get_enter(void)

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
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *plVar21;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec06dc:
  thunk_FUN_01ee6d7c();
LAB_03ec06e0:
  FUN_03579868(unaff_x22,0);
  plVar12 = (long *)FUN_03ec1308();
  if (plVar12 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0758;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0758:
      iVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (iVar10 <= iVar9) goto LAB_03ec0340;
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec07b8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
LAB_03ec07b8:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,iVar9,puVar13[1]);
      if (plVar14 == (long *)0x0) break;
      bVar5 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar14);
      }
      if (unaff_x21 == (long *)0x0) break;
      iVar10 = *(int *)((long)plVar14 + 0x14);
      iVar11 = *(int *)((long)unaff_x21 + 0x14);
      iVar3 = (int)plVar14[5];
      if ((iVar10 < iVar11) || ((int)unaff_x21[5] < iVar3)) {
        if (iVar3 < iVar11) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)unaff_x21[5] < iVar10;
        }
        if (iVar10 == iVar11) {
          bVar8 = iVar3 == (int)unaff_x21[5];
        }
        else {
          bVar8 = false;
        }
        if (!bVar8 && !bVar1) {
          uVar15 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar15 = FUN_01f08890(uVar15,4);
          FUN_01bc50c0();
          puVar6 = PTR_DAT_0457bb08;
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
          FUN_01bc56ec(uVar15,uVar16);
          uVar16 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar15,0,uVar16);
          FUN_01bc50c0(uVar15);
          FUN_01bc56ec(uVar15,unaff_x21);
          FUN_01bc5408(uVar15,1,unaff_x21);
          FUN_01bc50c0(uVar15);
          puVar6 = PTR_DAT_0457bb10;
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
          FUN_01bc56ec(uVar15,uVar16);
          uVar16 = thunk_FUN_01efb3a4(puVar6);
          FUN_01bc5408(uVar15,2,uVar16);
          FUN_01bc50c0(uVar15);
          FUN_01bc56ec(uVar15,plVar14);
          goto LAB_03ec126c;
        }
      }
      else {
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec08b8;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec08b8:
        (*(code *)*puVar13)();
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
  while( true ) {
    bVar5 = *(byte *)(*plVar14 + 0x130);
    bVar4 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar5 < bVar4) ||
       (lVar17 = *(long *)(*plVar14 + 200),
       *(long *)(lVar17 + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
    bVar4 = *(byte *)(*unaff_x29 + 0x130);
    if ((bVar4 <= bVar5) && (*(long *)(lVar17 + (ulong)bVar4 * 8 + -8) == *unaff_x29)) break;
LAB_03ec0340:
    do {
      unaff_w20 = unaff_w20 + 1;
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0390;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0390:
      iVar9 = (*(code *)*puVar13)();
      if (iVar9 <= unaff_w20) {
        iVar9 = 0;
        goto LAB_03ec08d8;
      }
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_VisualScripting_SelectUnit__get_condition;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__get_condition:
      plVar14 = (long *)(*(code *)*puVar13)();
    } while (plVar14 == (long *)0x0);
  }
  lVar17 = *unaff_x19;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x27) {
        puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_03ec04ac;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec04ac:
  unaff_x21 = (long *)(*(code *)*puVar13)();
  if (unaff_x21 != (long *)0x0) {
    bVar5 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x29))
    goto LAB_03ec1300;
  }
  uVar15 = *(undefined8 *)PTR_DAT_0457baf8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar15,0);
  plVar12 = (long *)FUN_03ec1308();
  if (plVar12 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec058c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec058c:
      iVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (iVar10 <= iVar9) goto LAB_03ec06bc;
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec05ec;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
LAB_03ec05ec:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,iVar9,puVar13[1]);
      if (plVar14 == (long *)0x0) break;
      bVar5 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x28))
      goto LAB_03ec10b4;
      if (unaff_x21 == (long *)0x0) break;
      if ((*(int *)((long)unaff_x21 + 0x14) <= *(int *)((long)plVar14 + 0x14)) &&
         (*(int *)((long)plVar14 + 0x14) <= (int)unaff_x21[5])) {
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph:
        (*(code *)*puVar13)();
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec08d8:
  lVar17 = *unaff_x19;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x26) {
        puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_03ec0928;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
  iVar10 = (*(code *)*puVar13)();
  if (iVar10 <= iVar9) {
    plVar12 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_03546db4(plVar12,0);
    puVar7 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    puVar6 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iVar9 = 0;
    do {
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0edc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
      iVar10 = (*(code *)*puVar13)();
      if (iVar10 <= iVar9) {
        return plVar12;
      }
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec0f3c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
      plVar14 = (long *)(*(code *)*puVar13)();
      if (plVar14 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar14);
        }
        uStack000000000000000c = *(undefined4 *)((long)plVar14 + 0x14);
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,(long)&stack0x00000008 + 4);
        if (plVar12 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *plVar12;
        lVar17 = *(long *)puVar7;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ec0ff0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar17,0);
LAB_03ec0ff0:
        lVar17 = (*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
        if (lVar17 != 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar15 = thunk_FUN_01f117cc();
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar15,uVar16,0);
          uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar15,uVar16);
        }
        uStack0000000000000008 = *(undefined4 *)((long)plVar14 + 0x14);
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
        lVar18 = *plVar12;
        lVar17 = *(long *)puVar7;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar13 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec106c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar17,1);
LAB_03ec106c:
        (*(code *)*puVar13)(plVar12,uVar15,plVar14,puVar13[1]);
      }
      iVar9 = iVar9 + 1;
    } while( true );
  }
  lVar17 = *unaff_x19;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x27) {
        puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_03ec0988;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
  plVar14 = (long *)(*(code *)*puVar13)();
  if (plVar14 != (long *)0x0) {
    bVar5 = *(byte *)(*plVar14 + 0x130);
    bVar4 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar5 < bVar4) ||
       (lVar17 = *(long *)(*plVar14 + 200),
       *(long *)(lVar17 + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar14);
    }
    bVar4 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar4 <= bVar5) && (*(long *)(lVar17 + (ulong)bVar4 * 8 + -8) == *unaff_x28)) {
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
      unaff_x21 = (long *)(*(code *)*puVar13)();
      if (unaff_x21 != (long *)0x0) {
        bVar5 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x28)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x21);
        }
      }
      uVar15 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar15,0);
      plVar12 = (long *)FUN_03ec1308();
      if (plVar12 != (long *)0x0) {
        iVar10 = 0;
        plVar2 = unaff_x21 + 3;
        do {
          lVar17 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x26) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0b28:
          iVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (iVar11 <= iVar10) goto LAB_03ec0c6c;
          lVar17 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x27) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
LAB_03ec0b88:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,iVar10,puVar13[1]);
          if (plVar14 == (long *)0x0) break;
          bVar5 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x28))
          goto LAB_03ec10b4;
          if (unaff_x21 == (long *)0x0) break;
          if (*(int *)((long)plVar14 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
            lVar17 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar14,*plVar2,plVar14[3]);
            *plVar2 = lVar17;
            thunk_FUN_01f51358(plVar2,lVar17);
            lVar17 = *unaff_x19;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x27) {
                  puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
            (*(code *)*puVar13)();
          }
          iVar10 = iVar10 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
  }
LAB_03ec09f0:
  iVar9 = iVar9 + 1;
  goto LAB_03ec08d8;
LAB_03ec0c6c:
  uVar15 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar15,0);
  plVar12 = (long *)FUN_03ec1308();
  if (plVar12 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x26) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x26,1);
LAB_03ec0d08:
      iVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (iVar11 <= iVar10) goto LAB_03ec09f0;
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x27) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,iVar10,puVar13[1]);
      if (plVar14 == (long *)0x0) break;
      bVar5 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (unaff_x21 == (long *)0x0) break;
      iVar11 = *(int *)((long)unaff_x21 + 0x14);
      if (iVar11 == *(int *)((long)plVar14 + 0x14)) {
        plVar21 = plVar14 + 3;
        lVar17 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar14,*plVar2,*plVar21);
        *plVar21 = lVar17;
        thunk_FUN_01f51358(plVar21,lVar17);
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x27) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar13)();
      }
      else if ((*(int *)((long)plVar14 + 0x14) <= iVar11) && (iVar11 <= (int)plVar14[5])) {
        uVar15 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar15 = FUN_01f08890(uVar15,4);
        FUN_01bc50c0();
        puVar6 = PTR_DAT_0457bb18;
        uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar15,uVar16);
        uVar16 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar15,0,uVar16);
        FUN_01bc50c0(uVar15);
        FUN_01bc56ec(uVar15,unaff_x21);
        FUN_01bc5408(uVar15,1,unaff_x21);
        FUN_01bc50c0(uVar15);
        puVar6 = PTR_DAT_0457bb20;
        uVar16 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar15,uVar16);
        uVar16 = thunk_FUN_01efb3a4(puVar6);
        FUN_01bc5408(uVar15,2,uVar16);
        FUN_01bc50c0(uVar15);
        FUN_01bc56ec(uVar15,plVar14);
LAB_03ec126c:
        FUN_01bc5408(uVar15,3,plVar14);
        uVar15 = FUN_0340ec80(uVar15,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar16 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar16,uVar15,0);
        uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar16,uVar15);
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec06bc:
  unaff_x22 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
  goto code_r0x03ec06dc;
  goto LAB_03ec06e0;
}


