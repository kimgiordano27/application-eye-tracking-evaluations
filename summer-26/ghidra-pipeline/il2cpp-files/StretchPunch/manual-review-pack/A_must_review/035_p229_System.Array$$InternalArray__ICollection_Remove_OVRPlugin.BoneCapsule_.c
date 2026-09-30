/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BoneCapsule>
ENTRY_POINT: 02143c3c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02144c30) */

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_BoneCapsule>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  long *plVar17;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puVar13;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_1291);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  lVar14 = *unaff_x27;
  if (lVar14 == 0) {
    FUN_01dde854();
    lVar14 = *(long *)(unaff_x20 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01dde7f8();
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar5 = (*(code *)**(undefined8 **)*unaff_x27)();
  if ((uVar5 & 1) != 0) {
    lVar14 = *(long *)(*unaff_x27 + 8);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01dde7f8();
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x27 + 0x10))();
    puVar13 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar5 & 1) == 0) {
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar14 = FUN_033a87c8(uVar16,0);
      if (lVar14 == 0) goto LAB_02144c38;
      uVar5 = FUN_033ac038(lVar14,0);
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)puVar13);
      }
      plVar6 = (long *)FUN_033a87c8(uVar16,0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      lVar14 = *plVar6;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(lVar14 + 0x3a8))(plVar6,*(undefined8 *)(lVar14 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1680,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02143e40;
          plVar6 = *(long **)(unaff_x19 + 0x48);
LAB_02143ef4:
          plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar14 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          goto joined_r0x02143f58;
        }
LAB_02143e40:
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar6 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1673,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar5 & 1) != 0) {
            plVar6 = *(long **)(unaff_x19 + 0x50);
            goto LAB_02143ef4;
          }
        }
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar6 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar6 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
        if ((uVar5 & 1) == 0) {
LAB_02144118:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar6 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440))
            ;
            uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
            if ((uVar5 & 1) == 0) goto LAB_021441d0;
            plVar6 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar13);
            }
            lVar14 = FUN_033a87c8(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_02144cf8;
            if ((int)plVar7[3] == 0) goto LAB_02144cf4;
            plVar7[4] = lVar14;
            thunk_FUN_01e10808(plVar7 + 4,lVar14);
            plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_02144c38;
            uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
            lVar14 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
            goto joined_r0x02144798;
          }
LAB_021441d0:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar6 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440))
            ;
            uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
            if ((uVar5 & 1) != 0) {
              plVar6 = *(long **)(unaff_x19 + 0x28);
              goto LAB_02144284;
            }
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
          if ((uVar5 & 1) == 0) {
LAB_02144628:
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar6 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
            lVar14 = *unaff_x27;
            if ((uVar5 & 1) != 0) {
              uVar16 = *(undefined8 *)(lVar14 + 0x18);
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              plVar6 = (long *)FUN_033a87c8(uVar16,0);
              if (plVar6 == (long *)0x0) goto LAB_02144c38;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x438))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x440));
              uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
              if (plVar6 == (long *)0x0) goto LAB_02144c38;
              uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290))
              ;
              lVar14 = *unaff_x27;
              if ((uVar5 & 1) != 0) {
                uVar16 = *(undefined8 *)(lVar14 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                plVar6 = (long *)FUN_033a87c8(uVar16,0);
                if (plVar6 == (long *)0x0) goto LAB_02144c38;
                uVar16 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
                lVar14 = FUN_020c3004(uVar16,*(undefined8 *)StringLiteral_1670);
                plVar6 = *(long **)(unaff_x19 + 0x38);
                plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
                if (lVar14 == 0) goto LAB_02144c38;
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_02144cf4;
                if (plVar7 == (long *)0x0) goto LAB_02144c38;
                lVar9 = *(long *)(lVar14 + 0x20);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_02144cf8;
                if ((int)plVar7[3] == 0) goto LAB_02144cf4;
                plVar7[4] = lVar9;
                thunk_FUN_01e10808(plVar7 + 4,lVar9);
                if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_02144cf4;
                lVar14 = *(long *)(lVar14 + 0x28);
                goto joined_r0x02144798;
              }
            }
            if ((*(byte *)(*(long *)(lVar14 + 0x28) + 0x135) & 1) == 0) {
              FUN_01dde7f8();
            }
            lVar14 = thunk_FUN_01de27b8();
            (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar16 = FUN_033a87c8(uVar16,0);
            plVar6 = (long *)FUN_03dc9fbc(uVar16,0);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1675) {
                    puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_02144850;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)StringLiteral_1675,0);
LAB_02144850:
              plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
              puVar3 = StringLiteral_887;
              puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              do {
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_021448c4;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar2,0);
LAB_021448c4:
                uVar5 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                if ((uVar5 & 1) == 0) {
                  if (plVar6 == (long *)0x0) {
                    return lVar14;
                  }
                  lVar9 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 == 0) goto LAB_02144c04;
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  goto LAB_02144bec;
                }
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1676) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_02144928;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)StringLiteral_1676,0);
LAB_02144928:
                plVar7 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
                if (plVar7 == (long *)0x0) {
LAB_02144c3c:
                  thunk_FUN_01dd295c(StringLiteral_1244);
                  uVar16 = thunk_FUN_01de27b8();
                  FUN_03393714(uVar16,0);
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,unaff_x20);
                }
                lVar9 = *plVar7;
                bVar1 = *(byte *)(*(long *)StringLiteral_1671 + 0x130);
                if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)StringLiteral_1671)) {
                  bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
                  if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)StringLiteral_1681)) goto LAB_02144c3c;
                  in_stack_00000020 = 0;
                  in_stack_00000028 = 0;
                  FUN_03dc5948(&stack0x00000020,plVar7,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar7 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1682,
                                                      &stack0x00000010);
                }
                else {
                  in_stack_00000020 = 0;
                  in_stack_00000028 = 0;
                  FUN_03dc5778(&stack0x00000020,plVar7,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar7 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1672,
                                                      &stack0x00000010);
                }
                plVar17 = *(long **)(unaff_x19 + 0x10);
                plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
                uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                lVar9 = FUN_033a87c8(uVar16,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar8[4] = lVar9;
                thunk_FUN_01e10808(plVar8 + 4,lVar9);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar9 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1666) {
                      puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_02144aa0;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
                lVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar8[5] = lVar9;
                thunk_FUN_01e10808(plVar8 + 5,lVar9);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar9 = (**(code **)(*plVar17 + 0x3f8))
                                  (plVar17,plVar8,*(undefined8 *)(*plVar17 + 0x400));
                plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar10 = thunk_FUN_01de26bc(plVar7,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar10 == 0) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar8[4] = (long)plVar7;
                thunk_FUN_01e10808(plVar8 + 4,plVar7);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0
                   )) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar8[5] = lVar14;
                thunk_FUN_01e10808(plVar8 + 5,lVar14);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                FUN_03308a94(lVar9);
              } while( true );
            }
            goto LAB_02144c38;
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02144628;
          plVar6 = *(long **)(unaff_x19 + 0x30);
          plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar13);
          }
          lVar14 = FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02144cf8;
          if ((int)plVar7[3] == 0) goto LAB_02144cf4;
          plVar7[4] = lVar14;
          thunk_FUN_01e10808(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar14 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar7 + 3) < 2) goto LAB_02144cf4;
          plVar7[5] = lVar14;
          thunk_FUN_01e10808(plVar7 + 5,lVar14);
          plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar14 = FUN_020b3d30(uVar16,1,*(undefined8 *)StringLiteral_1668);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_02144cf4;
          plVar8 = plVar7 + 6;
          *plVar8 = lVar14;
        }
        else {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
          if (plVar6 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar16,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02144118;
          plVar6 = *(long **)(unaff_x19 + 0x58);
          plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar14 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02144cf8;
          if ((int)plVar7[3] == 0) goto LAB_02144cf4;
          plVar7[4] = lVar14;
          thunk_FUN_01e10808(plVar7 + 4,lVar14);
          plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar14 = FUN_020b3d30(uVar16,1,*(undefined8 *)StringLiteral_1668);
joined_r0x02144798:
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar7 + 3) < 2) goto LAB_02144cf4;
          plVar8 = plVar7 + 5;
          *plVar8 = lVar14;
        }
      }
      else {
        iVar4 = (**(code **)(lVar14 + 0x428))(plVar6,*(undefined8 *)(lVar14 + 0x430));
        if (iVar4 != 1) {
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar16 = thunk_FUN_01de27b8();
          puVar13 = StringLiteral_1684;
          goto LAB_02144cb0;
        }
        plVar6 = *(long **)(unaff_x19 + 0x40);
        plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar13);
        }
        plVar8 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar8 == (long *)0x0) goto LAB_02144c38;
        lVar14 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
joined_r0x02143f58:
        if (plVar7 == (long *)0x0) goto LAB_02144c38;
        if ((lVar14 != 0) &&
           (lVar9 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_02144cf8:
          uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar16,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar8 = plVar7 + 4;
        *plVar8 = lVar14;
      }
      thunk_FUN_01e10808(plVar8,lVar14);
      if (plVar6 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar6 + 0x3f8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x400));
        FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
        if (lVar14 != 0) {
          lVar14 = FUN_03308a94(lVar14);
          lVar9 = *(long *)(*unaff_x27 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01dde7f8(lVar9);
          }
          if (lVar14 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = thunk_FUN_01de26bc(lVar14,lVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar14,lVar9);
            }
          }
          return lVar10;
        }
      }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  thunk_FUN_01dd295c(StringLiteral_1244);
  uVar16 = thunk_FUN_01de27b8();
  puVar13 = StringLiteral_1683;
LAB_02144cb0:
  uVar12 = thunk_FUN_01dd295c(puVar13);
  FUN_03393770(uVar16,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar16);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar11 = (undefined8 *)
            FUN_01dde8fc(plVar6,*(long *)
                                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return lVar14;
}


