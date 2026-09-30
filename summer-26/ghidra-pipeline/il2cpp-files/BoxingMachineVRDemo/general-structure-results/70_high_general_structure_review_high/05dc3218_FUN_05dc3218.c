/*
FUNCTION_NAME: FUN_05dc3218
ENTRY_POINT: 05dc3218
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05dc43c0) */
/* WARNING: Removing unreachable block (ram,0x05dc4198) */
/* WARNING: Removing unreachable block (ram,0x05dc3aec) */
/* WARNING: Removing unreachable block (ram,0x05dc43d0) */
/* WARNING: Removing unreachable block (ram,0x05dc43ac) */
/* WARNING: Removing unreachable block (ram,0x05dc3bdc) */
/* WARNING: Removing unreachable block (ram,0x05dc453c) */

long FUN_05dc3218(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = Method_System_Span<uint>_get_Length__;
  if ((DAT_06b830d4 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06764ee8);
    FUN_02d6084c(Method_System_Span<Vector2>__ctor__);
    FUN_02d6084c(PTR_DAT_06782608);
    FUN_02d6084c(Method_System_Span<Vector2>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_06782618);
    FUN_02d6084c(PTR_DAT_06782620);
    FUN_02d6084c(PTR_DAT_06782628);
    FUN_02d6084c(Method_System_Span<Vector2>_get_Length__);
    FUN_02d6084c(Method_System_Span<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Span<Vector3>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Span<Vector3>_get_Length__);
    FUN_02d6084c(Method_System_Span<Vector4>__ctor__);
    FUN_02d6084c(Method_System_Span<Vector4>_GetPinnableReference__);
    FUN_02d6084c(Method_System_Span<Vector4>_get_Length__);
    FUN_02d6084c(Method_System_Span<Vertex>__ctor__);
    FUN_02d6084c(Method_System_Span<Vertex>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_0676b280);
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(PTR_DAT_06782630);
    FUN_02d6084c(PTR_DAT_06782638);
    FUN_02d6084c(Method_System_Span<Vertex>_get_Length__);
    FUN_02d6084c(Method_System_Span<VertexAttributeDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__);
    FUN_02d6084c(Method_System_Span<VertexAttributeDescriptor>_get_Length__);
    FUN_02d6084c(Method_System_Span<uint>_get_Length__);
    DAT_06b830d4 = 1;
  }
  lVar8 = *(long *)puVar2;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar8 = *(long *)puVar2;
  }
  puVar3 = Method_System_Span<Vector3>_GetPinnableReference__;
  lVar18 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar18 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar8 = *(long *)puVar2;
    }
    uVar19 = **(undefined8 **)(lVar8 + 0xb8);
    lVar18 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Span<Vector2>_get_Length__);
    FUN_04d566c0(lVar18,uVar19,
                 *(undefined8 *)Method_System_Span<VertexAttributeDescriptor>_get_Length__,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = lVar18;
    thunk_FUN_02dd37b4(plVar9,lVar18);
  }
  puVar2 = Method_System_Span<Vector3>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = FUN_04d98428(lVar18,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0676b288;
  if (param_1 != (long *)0x0) {
    lVar18 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto FUN_05dc34a8;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(param_1,*(long *)PTR_DAT_0676b288,8);
FUN_05dc34a8:
    lVar18 = (*(code *)*puVar10)(param_1,puVar10[1]);
    puVar7 = Method_System_Span<Vector4>__ctor__;
    puVar6 = PTR_DAT_06782620;
    puVar5 = PTR_DAT_06782618;
    puVar3 = PTR_DAT_06764ee8;
    if (lVar18 != 0) {
      System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                (&local_b8,lVar18,*(undefined8 *)PTR_DAT_06782608);
      uStack_88 = uStack_b0;
      local_90 = local_b8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      while (uVar15 = FUN_04b3a824(&local_90,*(undefined8 *)puVar6), (uVar15 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_048956f0(*(long *)(lVar8 + 0x10),local_80,uStack_78,*(undefined8 *)puVar3);
      }
      FUN_04b3a944(&local_90,*(undefined8 *)puVar5);
      lVar18 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0xf) * 0x10 + 0x138);
            goto LAB_05dc358c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(param_1,*(long *)puVar2,0xf);
LAB_05dc358c:
      plVar9 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
      if (plVar9 != (long *)0x0) {
        lVar18 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05dc35ec;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar7,0);
LAB_05dc35ec:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar7 = Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__;
        puVar6 = Method_System_Span<Vertex>_GetPinnableReference__;
        puVar5 = Method_System_Span<Vector2>_GetPinnableReference__;
        puVar3 = PTR_DAT_0676b280;
        puVar2 = PTR_DAT_0675f3d8;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        do {
          lVar14 = *plVar9;
          lVar18 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar18) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05dc3674;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar18,0);
LAB_05dc3674:
          uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar4 = PTR_DAT_0676b288;
          if ((uVar15 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_05dc3bd0;
            lVar18 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 == 0) goto LAB_05dc3ba8;
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_05dc3b90;
          }
          lVar18 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)Method_System_Span<Vector4>_get_Length__) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05dc36d8;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_02d9a5d4(plVar9,*(long *)Method_System_Span<Vector4>_get_Length__,0);
LAB_05dc36d8:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar18 = *plVar11;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
                goto FUN_05dc373c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,8);
FUN_05dc373c:
          uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar15 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar18 = *plVar11;
            lVar14 = *(long *)(lVar8 + 0x18);
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_05dc37a4;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,2);
LAB_05dc37a4:
            uVar19 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4();
            }
            uVar12 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            FUN_048956f0(lVar14,uVar19,uVar12,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
            lVar18 = *plVar11;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 7) * 0x10 + 0x138);
                  goto LAB_05dc384c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,7);
LAB_05dc384c:
            plVar13 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar18 = *plVar13;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_05dc38b4;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_02d9a5d4(plVar13,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc38b4:
            plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
LAB_05dc38c8:
            lVar14 = *plVar13;
            lVar18 = *(long *)puVar2;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar18) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_05dc3914;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar18,0);
LAB_05dc3914:
            uVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
            if ((uVar15 & 1) != 0) {
              lVar18 = *plVar13;
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05dc3970;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar6,0);
LAB_05dc3970:
              uVar19 = (*(code *)*puVar10)(plVar13,puVar10[1]);
              lVar18 = *plVar11;
              lVar14 = *(long *)(lVar8 + 0x18);
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_05dc39d4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,2);
LAB_05dc39d4:
              uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8(uVar12,uVar12);
              }
              lVar18 = FUN_04895670(lVar14,uVar12,*(undefined8 *)puVar5);
              local_b8 = 0;
              uStack_b0 = 0;
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                        (&local_b8,uVar19);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar14 = *(long *)(lVar18 + 0x10);
              lVar16 = *(long *)puVar7;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar1 = *(uint *)(lVar18 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar14 + 0x20);
                *puVar10 = local_b8;
                *(undefined8 *)(lVar14 + 0x28) = uStack_b0;
                thunk_FUN_02dd37b4(puVar10,0);
              }
              else {
                FUN_03c22488(lVar18,local_b8,uStack_b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_05dc38c8;
            }
            if (plVar13 != (long *)0x0) {
              lVar18 = *plVar13;
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0675f3d0) {
                    puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05dc3ad0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3ad0:
              (*(code *)*puVar10)(plVar13,puVar10[1]);
            }
          }
        } while( true );
      }
    }
  }
  goto LAB_05dc43c8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_05dc422c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05dc4268;
    }
  }
LAB_05dc4244:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc4268:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return lVar8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_05dc3b90:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05dc3bc4;
    }
  }
LAB_05dc3ba8:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc3bc4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_05dc3bd0:
  lVar18 = *param_1;
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0x10) * 0x10 + 0x138);
        goto LAB_05dc3c30;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02d9a5d4(param_1,*(long *)puVar4,0x10);
LAB_05dc3c30:
  plVar9 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
  if (plVar9 != (long *)0x0) {
    lVar18 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_Span<Vector4>_GetPinnableReference__)
        {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_05dc3c98;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02d9a5d4(plVar9,*(long *)Method_System_Span<Vector4>_GetPinnableReference__,0);
LAB_05dc3c98:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar7 = Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__;
    puVar6 = Method_System_Span<Vertex>_GetPinnableReference__;
    puVar5 = Method_System_Span<Vector2>_GetPinnableReference__;
    puVar3 = PTR_DAT_0676b280;
    puVar2 = PTR_DAT_0675f3d8;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar14 = *plVar9;
      lVar18 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar18) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05dc3d20;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar18,0);
LAB_05dc3d20:
      uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar9 == (long *)0x0) {
          return lVar8;
        }
        lVar18 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 == 0) goto LAB_05dc4244;
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_05dc422c;
      }
      lVar18 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)Method_System_Span<Vertex>__ctor__) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05dc3d84;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)Method_System_Span<Vertex>__ctor__,0);
LAB_05dc3d84:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar18 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
            goto LAB_05dc3de8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,8);
LAB_05dc3de8:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar18 = *plVar11;
        lVar14 = *(long *)(lVar8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_05dc3e50;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,2);
LAB_05dc3e50:
        uVar19 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (*(int *)(*(long *)Method_System_Span<VertexAttributeDescriptor>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar12 = FUN_03959b94(*(undefined8 *)Method_System_Span<Vertex>_get_Length__);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_048956f0(lVar14,uVar19,uVar12,*(undefined8 *)Method_System_Span<Vector2>__ctor__);
        lVar18 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 7) * 0x10 + 0x138);
              goto LAB_05dc3ef8;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,7);
LAB_05dc3ef8:
        plVar13 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar18 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)Method_System_Span<Vector3>_get_Length__) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05dc3f60;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d9a5d4(plVar13,*(long *)Method_System_Span<Vector3>_get_Length__,0);
LAB_05dc3f60:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce:
        lVar14 = *plVar13;
        lVar18 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar18) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05dc3fc0;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar18,0);
LAB_05dc3fc0:
        uVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        if ((uVar15 & 1) != 0) {
          lVar18 = *plVar13;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05dc401c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar6,0);
LAB_05dc401c:
          uVar19 = (*(code *)*puVar10)(plVar13,puVar10[1]);
          lVar18 = *plVar11;
          lVar14 = *(long *)(lVar8 + 0x20);
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_05dc4080;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,2);
LAB_05dc4080:
          uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8(uVar12,uVar12);
          }
          lVar18 = FUN_04895670(lVar14,uVar12,*(undefined8 *)puVar5);
          local_b8 = 0;
          uStack_b0 = 0;
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000353_PostfixBurstDelegate__Invoke
                    (&local_b8,uVar19);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar14 = *(long *)(lVar18 + 0x10);
          lVar16 = *(long *)puVar7;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar1 = *(uint *)(lVar18 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar18 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar14 + 0x20);
            *puVar10 = local_b8;
            *(undefined8 *)(lVar14 + 0x28) = uStack_b0;
            thunk_FUN_02dd37b4(puVar10,0);
          }
          else {
            FUN_03c22488(lVar18,local_b8,uStack_b0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility__EaseOutBounce;
        }
        if (plVar13 != (long *)0x0) {
          lVar18 = *plVar13;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0675f3d0) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05dc417c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_0675f3d0,0);
LAB_05dc417c:
          (*(code *)*puVar10)(plVar13,puVar10[1]);
        }
      }
    } while( true );
  }
LAB_05dc43c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


