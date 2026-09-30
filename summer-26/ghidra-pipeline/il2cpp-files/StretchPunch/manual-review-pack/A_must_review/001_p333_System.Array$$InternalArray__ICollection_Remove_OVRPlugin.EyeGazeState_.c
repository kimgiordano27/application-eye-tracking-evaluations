/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02143c84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 251
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02144c30) */

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar15;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar16;
  long *plVar17;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puVar14;
  
  thunk_FUN_01dc4f30();
  uVar5 = (*(code *)**(undefined8 **)*unaff_x27)();
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(*unaff_x27 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x27 + 0x10))();
    puVar14 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar5 & 1) == 0) {
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar6 = FUN_033a87c8(uVar16,0);
      if (lVar6 == 0) goto LAB_02144c38;
      uVar5 = FUN_033ac038(lVar6,0);
      uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)puVar14);
      }
      plVar7 = (long *)FUN_033a87c8(uVar16,0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      lVar6 = *plVar7;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(lVar6 + 0x3a8))(plVar7,*(undefined8 *)(lVar6 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1680,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02143e40;
          plVar7 = *(long **)(unaff_x19 + 0x48);
LAB_02143ef4:
          plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar14);
          }
          plVar9 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar9 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          lVar6 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          goto joined_r0x02143f58;
        }
LAB_02143e40:
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar7 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar7 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1673,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
          if ((uVar5 & 1) != 0) {
            plVar7 = *(long **)(unaff_x19 + 0x50);
            goto LAB_02143ef4;
          }
        }
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar7 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar7 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
        if ((uVar5 & 1) == 0) {
LAB_02144118:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar7 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440))
            ;
            uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
            if ((uVar5 & 1) == 0) goto LAB_021441d0;
            plVar7 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
            plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar14);
            }
            lVar6 = FUN_033a87c8(uVar16,0);
            if (plVar8 == (long *)0x0) goto LAB_02144c38;
            if ((lVar6 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if ((int)plVar8[3] == 0) goto LAB_02144cf4;
            plVar8[4] = lVar6;
            thunk_FUN_01e10808(plVar8 + 4,lVar6);
            plVar9 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar9 == (long *)0x0) goto LAB_02144c38;
            uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
            lVar6 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
            goto joined_r0x02144798;
          }
LAB_021441d0:
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
          if ((uVar5 & 1) != 0) {
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar7 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440))
            ;
            uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
            if ((uVar5 & 1) != 0) {
              plVar7 = *(long **)(unaff_x19 + 0x28);
              goto LAB_02144284;
            }
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
          if ((uVar5 & 1) == 0) {
LAB_02144628:
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar7 = (long *)FUN_033a87c8(uVar16,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
            lVar6 = *unaff_x27;
            if ((uVar5 & 1) != 0) {
              uVar16 = *(undefined8 *)(lVar6 + 0x18);
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              plVar7 = (long *)FUN_033a87c8(uVar16,0);
              if (plVar7 == (long *)0x0) goto LAB_02144c38;
              plVar7 = (long *)(**(code **)(*plVar7 + 0x438))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x440));
              uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
              if (plVar7 == (long *)0x0) goto LAB_02144c38;
              uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290))
              ;
              lVar6 = *unaff_x27;
              if ((uVar5 & 1) != 0) {
                uVar16 = *(undefined8 *)(lVar6 + 0x18);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                plVar7 = (long *)FUN_033a87c8(uVar16,0);
                if (plVar7 == (long *)0x0) goto LAB_02144c38;
                uVar16 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
                lVar6 = FUN_020c3004(uVar16,*(undefined8 *)StringLiteral_1670);
                plVar7 = *(long **)(unaff_x19 + 0x38);
                plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
                if (lVar6 == 0) goto LAB_02144c38;
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_02144cf4;
                if (plVar8 == (long *)0x0) goto LAB_02144c38;
                lVar10 = *(long *)(lVar6 + 0x20);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0
                   )) goto LAB_02144cf8;
                if ((int)plVar8[3] == 0) goto LAB_02144cf4;
                plVar8[4] = lVar10;
                thunk_FUN_01e10808(plVar8 + 4,lVar10);
                if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_02144cf4;
                lVar6 = *(long *)(lVar6 + 0x28);
                goto joined_r0x02144798;
              }
            }
            if ((*(byte *)(*(long *)(lVar6 + 0x28) + 0x135) & 1) == 0) {
              FUN_01dde7f8();
            }
            lVar6 = thunk_FUN_01de27b8();
            (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
            uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar16 = FUN_033a87c8(uVar16,0);
            plVar7 = (long *)FUN_03dc9fbc(uVar16,0);
            if (plVar7 != (long *)0x0) {
              lVar10 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1675) {
                    puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_02144850;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar12 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)StringLiteral_1675,0);
LAB_02144850:
              plVar7 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
              puVar3 = StringLiteral_887;
              puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              do {
                lVar10 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_021448c4;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar12 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)puVar2,0);
LAB_021448c4:
                uVar5 = (*(code *)*puVar12)(plVar7,puVar12[1]);
                if ((uVar5 & 1) == 0) {
                  if (plVar7 == (long *)0x0) {
                    return lVar6;
                  }
                  lVar10 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar5 == 0) goto LAB_02144c04;
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  goto LAB_02144bec;
                }
                lVar10 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1676) {
                      puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_02144928;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar12 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)StringLiteral_1676,0);
LAB_02144928:
                plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
                if (plVar8 == (long *)0x0) {
LAB_02144c3c:
                  thunk_FUN_01dd295c(StringLiteral_1244);
                  uVar16 = thunk_FUN_01de27b8();
                  FUN_03393714(uVar16,0);
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,unaff_x20);
                }
                lVar10 = *plVar8;
                bVar1 = *(byte *)(*(long *)StringLiteral_1671 + 0x130);
                if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)StringLiteral_1671)) {
                  bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
                  if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)StringLiteral_1681)) goto LAB_02144c3c;
                  in_stack_00000020 = 0;
                  in_stack_00000028 = 0;
                  FUN_03dc5948(&stack0x00000020,plVar8,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar8 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1682,
                                                      &stack0x00000010);
                }
                else {
                  in_stack_00000020 = 0;
                  in_stack_00000028 = 0;
                  FUN_03dc5778(&stack0x00000020,plVar8,0);
                  in_stack_00000018 = in_stack_00000028;
                  in_stack_00000010 = in_stack_00000020;
                  plVar8 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1672,
                                                      &stack0x00000010);
                }
                plVar17 = *(long **)(unaff_x19 + 0x10);
                plVar9 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
                uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                lVar10 = FUN_033a87c8(uVar16,0);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar9[4] = lVar10;
                thunk_FUN_01e10808(plVar9 + 4,lVar10);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar10 = *plVar8;
                uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_1666) {
                      puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_02144aa0;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar12 = (undefined8 *)FUN_01dde8fc(plVar8,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
                lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar9[5] = lVar10;
                thunk_FUN_01e10808(plVar9 + 5,lVar10);
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar10 = (**(code **)(*plVar17 + 0x3f8))
                                   (plVar17,plVar9,*(undefined8 *)(*plVar17 + 0x400));
                plVar9 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar11 = thunk_FUN_01de26bc(plVar8,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar11 == 0) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar9[4] = (long)plVar8;
                thunk_FUN_01e10808(plVar9 + 4,plVar8);
                if ((lVar6 != 0) &&
                   (lVar11 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)
                   ) {
                  uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar16,0);
                }
                if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar9[5] = lVar6;
                thunk_FUN_01e10808(plVar9 + 5,lVar6);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                FUN_03308a94(lVar10);
              } while( true );
            }
            goto LAB_02144c38;
          }
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02144628;
          plVar7 = *(long **)(unaff_x19 + 0x30);
          plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar14);
          }
          lVar6 = FUN_033a87c8(uVar16,0);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02144cf8;
          if ((int)plVar8[3] == 0) goto LAB_02144cf4;
          plVar8[4] = lVar6;
          thunk_FUN_01e10808(plVar8 + 4,lVar6);
          plVar9 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar9 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          lVar6 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar8 + 3) < 2) goto LAB_02144cf4;
          plVar8[5] = lVar6;
          thunk_FUN_01e10808(plVar8 + 5,lVar6);
          plVar9 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar9 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          lVar6 = FUN_020b3d30(uVar16,1,*(undefined8 *)StringLiteral_1668);
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_02144cf4;
          plVar9 = plVar8 + 6;
          *plVar9 = lVar6;
        }
        else {
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar7 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
          uVar16 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
          if (plVar7 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x290));
          if ((uVar5 & 1) == 0) goto LAB_02144118;
          plVar7 = *(long **)(unaff_x19 + 0x58);
          plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
          uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar14);
          }
          plVar9 = (long *)FUN_033a87c8(uVar16,0);
          if (plVar9 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          lVar6 = FUN_020b5ae8(uVar16,*(undefined8 *)StringLiteral_1669);
          if (plVar8 == (long *)0x0) goto LAB_02144c38;
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02144cf8;
          if ((int)plVar8[3] == 0) goto LAB_02144cf4;
          plVar8[4] = lVar6;
          thunk_FUN_01e10808(plVar8 + 4,lVar6);
          plVar9 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar9 == (long *)0x0) goto LAB_02144c38;
          uVar16 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          lVar6 = FUN_020b3d30(uVar16,1,*(undefined8 *)StringLiteral_1668);
joined_r0x02144798:
          if ((lVar6 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02144cf8;
          if (*(uint *)(plVar8 + 3) < 2) goto LAB_02144cf4;
          plVar9 = plVar8 + 5;
          *plVar9 = lVar6;
        }
      }
      else {
        iVar4 = (**(code **)(lVar6 + 0x428))(plVar7,*(undefined8 *)(lVar6 + 0x430));
        if (iVar4 != 1) {
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar16 = thunk_FUN_01de27b8();
          puVar14 = StringLiteral_1684;
          goto LAB_02144cb0;
        }
        plVar7 = *(long **)(unaff_x19 + 0x40);
        plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
        uVar16 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar14);
        }
        plVar9 = (long *)FUN_033a87c8(uVar16,0);
        if (plVar9 == (long *)0x0) goto LAB_02144c38;
        lVar6 = (**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
joined_r0x02143f58:
        if (plVar8 == (long *)0x0) goto LAB_02144c38;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_02144cf8:
          uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar16,0);
        }
        if ((int)plVar8[3] == 0) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar9 = plVar8 + 4;
        *plVar9 = lVar6;
      }
      thunk_FUN_01e10808(plVar9,lVar6);
      if (plVar7 != (long *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 0x3f8))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x400));
        FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
        if (lVar6 != 0) {
          lVar6 = FUN_03308a94(lVar6);
          lVar10 = *(long *)(*unaff_x27 + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01dde7f8(lVar10);
          }
          if (lVar6 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = thunk_FUN_01de26bc(lVar6,lVar10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar6,lVar10);
            }
          }
          return lVar11;
        }
      }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  thunk_FUN_01dd295c(StringLiteral_1244);
  uVar16 = thunk_FUN_01de27b8();
  puVar14 = StringLiteral_1683;
LAB_02144cb0:
  uVar13 = thunk_FUN_01dd295c(puVar14);
  FUN_03393770(uVar16,uVar13,0);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar16);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar12 = (undefined8 *)
            FUN_01dde8fc(plVar7,*(long *)
                                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
  return lVar6;
}


