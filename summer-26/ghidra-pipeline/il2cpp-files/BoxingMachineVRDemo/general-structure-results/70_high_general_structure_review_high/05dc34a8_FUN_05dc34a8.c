/*
FUNCTION_NAME: FUN_05dc34a8
ENTRY_POINT: 05dc34a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05dc43c0) */
/* WARNING: Removing unreachable block (ram,0x05dc4198) */
/* WARNING: Removing unreachable block (ram,0x05dc3aec) */
/* WARNING: Removing unreachable block (ram,0x05dc43d0) */
/* WARNING: Removing unreachable block (ram,0x05dc43ac) */
/* WARNING: Removing unreachable block (ram,0x05dc3bdc) */
/* WARNING: Removing unreachable block (ram,0x05dc453c) */

void FUN_05dc34a8(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar8 = (*(code *)*param_1)();
  puVar6 = Method_System_Span<Vector4>__ctor__;
  puVar5 = PTR_DAT_06782620;
  puVar3 = PTR_DAT_06782618;
  puVar2 = PTR_DAT_06764ee8;
  if (lVar8 != 0) {
    System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
              (&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_06782608);
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar9 = FUN_04b3a824(&stack0x00000030,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_048956f0(*(long *)(unaff_x19 + 0x10),in_stack_00000040,in_stack_00000048,
                   *(undefined8 *)puVar2);
    }
    FUN_04b3a944(&stack0x00000030,*(undefined8 *)puVar3);
    lVar8 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 0xf) * 0x10 + 0x138);
          goto LAB_05dc358c;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4();
LAB_05dc358c:
    plVar11 = (long *)(*(code *)*puVar10)();
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05dc35ec;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar6,0);
LAB_05dc35ec:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      puVar7 = Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__;
      puVar6 = Method_System_Span<Vertex>_GetPinnableReference__;
      puVar5 = Method_System_Span<Vector2>_GetPinnableReference__;
      puVar3 = PTR_DAT_0676b280;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar16 = *plVar11;
        lVar8 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05dc3674;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar8,0);
LAB_05dc3674:
        uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        puVar4 = PTR_DAT_0676b288;
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_05dc3bd0;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_05dc3ba8;
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_05dc3b90;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)Method_System_Span<Vector4>_get_Length__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05dc36d8;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector4>_get_Length__,0);
LAB_05dc36d8:
        plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 8) * 0x10 + 0x138);
              goto FUN_05dc373c;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,8);
FUN_05dc373c:
        uVar9 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if ((uVar9 & 1) != 0) {
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar8 = *plVar12;
          lVar16 = *(long *)(unaff_x19 + 0x18);
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_05dc37a4;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc37a4:
          uVar13 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_048956f0(lVar16,uVar13,uVar14,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_05dc384c;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,7);
LAB_05dc384c:
          plVar15 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar8 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05dc38b4;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_02d9a5d4(plVar15,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc38b4:
          plVar15 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
LAB_05dc38c8:
          lVar16 = *plVar15;
          lVar8 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05dc3914;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,lVar8,0);
LAB_05dc3914:
          uVar9 = (*(code *)*puVar10)(plVar15,puVar10[1]);
          if ((uVar9 & 1) != 0) {
            lVar8 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05dc3970;
                }
                uVar9 = uVar9 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar6,0);
LAB_05dc3970:
            uVar13 = (*(code *)*puVar10)(plVar15,puVar10[1]);
            lVar8 = *plVar12;
            lVar16 = *(long *)(unaff_x19 + 0x18);
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                  goto LAB_05dc39d4;
                }
                uVar9 = uVar9 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc39d4:
            uVar14 = (*(code *)*puVar10)(plVar12,puVar10[1]);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8(uVar14,uVar14);
            }
            lVar8 = FUN_04895670(lVar16,uVar14,*(undefined8 *)puVar5);
            in_stack_00000008 = 0;
            in_stack_00000010 = 0;
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                      (&stack0x00000008,uVar13);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar16 = *(long *)(lVar8 + 0x10);
            lVar17 = *(long *)puVar7;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              lVar16 = lVar16 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar16 + 0x20);
              *puVar10 = in_stack_00000008;
              *(undefined8 *)(lVar16 + 0x28) = in_stack_00000010;
              thunk_FUN_02dd37b4(puVar10,0);
            }
            else {
              FUN_03c22488(lVar8,in_stack_00000008,in_stack_00000010,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_05dc38c8;
          }
          if (plVar15 != (long *)0x0) {
            lVar8 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05dc3ad0;
                }
                uVar9 = uVar9 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3ad0:
            (*(code *)*puVar10)(plVar15,puVar10[1]);
          }
        }
      } while( true );
    }
  }
  goto LAB_05dc43c8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_05dc422c:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05dc4268;
    }
  }
LAB_05dc4244:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc4268:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_05dc3b90:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05dc3bc4;
    }
  }
LAB_05dc3ba8:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3bc4:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_05dc3bd0:
  lVar8 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 0x10) * 0x10 + 0x138);
        goto LAB_05dc3c30;
      }
      uVar9 = uVar9 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_02d9a5d4(unaff_x24,*(long *)puVar4,0x10);
LAB_05dc3c30:
  plVar11 = (long *)(*(code *)*puVar10)(unaff_x24,puVar10[1]);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)Method_System_Span<Vector4>_GetPinnableReference__)
        {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05dc3c98;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vector4>_GetPinnableReference__,0);
LAB_05dc3c98:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    puVar7 = Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__;
    puVar6 = Method_System_Span<Vertex>_GetPinnableReference__;
    puVar5 = Method_System_Span<Vector2>_GetPinnableReference__;
    puVar3 = PTR_DAT_0676b280;
    puVar2 = PTR_DAT_0675f3d8;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar16 = *plVar11;
      lVar8 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05dc3d20;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar8,0);
LAB_05dc3d20:
      uVar9 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar11 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_05dc4244;
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_05dc422c;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)Method_System_Span<Vertex>__ctor__) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05dc3d84;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)Method_System_Span<Vertex>__ctor__,0);
LAB_05dc3d84:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 8) * 0x10 + 0x138);
            goto LAB_05dc3de8;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,8);
LAB_05dc3de8:
      uVar9 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((uVar9 & 1) != 0) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar8 = *plVar12;
        lVar16 = *(long *)(unaff_x19 + 0x20);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_05dc3e50;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc3e50:
        uVar13 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_048956f0(lVar16,uVar13,uVar14,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_05dc3ef8;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,7);
LAB_05dc3ef8:
        plVar15 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar8 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05dc3f60;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d9a5d4(plVar15,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc3f60:
        plVar15 = (long *)(*(code *)*puVar10)(plVar15,puVar10[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce:
        lVar16 = *plVar15;
        lVar8 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05dc3fc0;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,lVar8,0);
LAB_05dc3fc0:
        uVar9 = (*(code *)*puVar10)(plVar15,puVar10[1]);
        if ((uVar9 & 1) != 0) {
          lVar8 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05dc401c;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar6,0);
LAB_05dc401c:
          uVar13 = (*(code *)*puVar10)(plVar15,puVar10[1]);
          lVar8 = *plVar12;
          lVar16 = *(long *)(unaff_x19 + 0x20);
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_05dc4080;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar3,2);
LAB_05dc4080:
          uVar14 = (*(code *)*puVar10)(plVar12,puVar10[1]);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8(uVar14,uVar14);
          }
          lVar8 = FUN_04895670(lVar16,uVar14,*(undefined8 *)puVar5);
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                    (&stack0x00000008,uVar13);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar16 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar7;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar16 + 0x20);
            *puVar10 = in_stack_00000008;
            *(undefined8 *)(lVar16 + 0x28) = in_stack_00000010;
            thunk_FUN_02dd37b4(puVar10,0);
          }
          else {
            FUN_03c22488(lVar8,in_stack_00000008,in_stack_00000010,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          goto UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce;
        }
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05dc417c;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc417c:
          (*(code *)*puVar10)(plVar15,puVar10[1]);
        }
      }
    } while( true );
  }
LAB_05dc43c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


