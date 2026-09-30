/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02143d14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02144c30) */

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long in_x9;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar15;
  long *plVar16;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar15 = *(undefined8 *)(in_x9 + 0x18);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(param_1);
  }
  plVar5 = (long *)FUN_033a87c8(uVar15,0);
  if (plVar5 == (long *)0x0) goto LAB_02144c38;
  lVar13 = *plVar5;
  if ((unaff_x21 & 1) == 0) {
    uVar8 = (**(code **)(lVar13 + 0x3a8))(plVar5,*(undefined8 *)(lVar13 + 0x3b0));
    if ((uVar8 & 1) != 0) {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
      uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1680,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
      if ((uVar8 & 1) == 0) goto LAB_02143e40;
      plVar5 = *(long **)(unaff_x19 + 0x48);
LAB_02143ef4:
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      plVar7 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar13 = FUN_020b5ae8(uVar15,*(undefined8 *)StringLiteral_1669);
      goto joined_r0x02143f58;
    }
LAB_02143e40:
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar5 = (long *)FUN_033a87c8(uVar15,0);
    if (plVar5 == (long *)0x0) goto LAB_02144c38;
    uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
    if ((uVar8 & 1) != 0) {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
      uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1673,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
      if ((uVar8 & 1) != 0) {
        plVar5 = *(long **)(unaff_x19 + 0x50);
        goto LAB_02143ef4;
      }
    }
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar5 = (long *)FUN_033a87c8(uVar15,0);
    if (plVar5 == (long *)0x0) goto LAB_02144c38;
    uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
    if ((uVar8 & 1) == 0) {
LAB_02144118:
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
      if ((uVar8 & 1) != 0) {
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar5 = (long *)FUN_033a87c8(uVar15,0);
        if (plVar5 == (long *)0x0) goto LAB_02144c38;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
        uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
        if (plVar5 == (long *)0x0) goto LAB_02144c38;
        uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
        if ((uVar8 & 1) == 0) goto LAB_021441d0;
        plVar5 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
        plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*unaff_x28);
        }
        lVar13 = FUN_033a87c8(uVar15,0);
        if (plVar6 == (long *)0x0) goto LAB_02144c38;
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_02144cf8;
        if ((int)plVar6[3] == 0) goto LAB_02144cf4;
        plVar6[4] = lVar13;
        thunk_FUN_01e10808(plVar6 + 4,lVar13);
        plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
        if (plVar7 == (long *)0x0) goto LAB_02144c38;
        uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
        lVar13 = FUN_020b5ae8(uVar15,*(undefined8 *)StringLiteral_1669);
        goto joined_r0x02144798;
      }
LAB_021441d0:
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
      if ((uVar8 & 1) != 0) {
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar5 = (long *)FUN_033a87c8(uVar15,0);
        if (plVar5 == (long *)0x0) goto LAB_02144c38;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
        uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
        if (plVar5 == (long *)0x0) goto LAB_02144c38;
        uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
        if ((uVar8 & 1) != 0) {
          plVar5 = *(long **)(unaff_x19 + 0x28);
          goto LAB_02144284;
        }
      }
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
      if ((uVar8 & 1) == 0) {
LAB_02144628:
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar5 = (long *)FUN_033a87c8(uVar15,0);
        if (plVar5 == (long *)0x0) goto LAB_02144c38;
        uVar8 = (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(*plVar5 + 0x3b0));
        lVar13 = *unaff_x27;
        if ((uVar8 & 1) != 0) {
          uVar15 = *(undefined8 *)(lVar13 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar5 = (long *)FUN_033a87c8(uVar15,0);
          if (plVar5 == (long *)0x0) goto LAB_02144c38;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
          uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
          if (plVar5 == (long *)0x0) goto LAB_02144c38;
          uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
          lVar13 = *unaff_x27;
          if ((uVar8 & 1) != 0) {
            uVar15 = *(undefined8 *)(lVar13 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar5 = (long *)FUN_033a87c8(uVar15,0);
            if (plVar5 == (long *)0x0) goto LAB_02144c38;
            uVar15 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
            lVar13 = FUN_020c3004(uVar15,*(undefined8 *)StringLiteral_1670);
            plVar5 = *(long **)(unaff_x19 + 0x38);
            plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            if (lVar13 == 0) goto LAB_02144c38;
            if (*(int *)(lVar13 + 0x18) == 0) goto LAB_02144cf4;
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            lVar9 = *(long *)(lVar13 + 0x20);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if ((int)plVar6[3] == 0) goto LAB_02144cf4;
            plVar6[4] = lVar9;
            thunk_FUN_01e10808(plVar6 + 4,lVar9);
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_02144cf4;
            lVar13 = *(long *)(lVar13 + 0x28);
            goto joined_r0x02144798;
          }
        }
        if ((*(byte *)(*(long *)(lVar13 + 0x28) + 0x135) & 1) == 0) {
          FUN_01dde7f8();
        }
        lVar13 = thunk_FUN_01de27b8();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar15 = FUN_033a87c8(uVar15,0);
        plVar5 = (long *)FUN_03dc9fbc(uVar15,0);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_1675) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02144850;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)StringLiteral_1675,0);
LAB_02144850:
          plVar5 = (long *)(*(code *)*puVar11)(plVar5,puVar11[1]);
          puVar3 = StringLiteral_887;
          puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          do {
            lVar9 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_021448c4;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar2,0);
LAB_021448c4:
            uVar8 = (*(code *)*puVar11)(plVar5,puVar11[1]);
            if ((uVar8 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return lVar13;
              }
              lVar9 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 == 0) goto LAB_02144c04;
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_02144bec;
            }
            lVar9 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_1676) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_02144928;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)StringLiteral_1676,0);
LAB_02144928:
            plVar6 = (long *)(*(code *)*puVar11)(plVar5,puVar11[1]);
            if (plVar6 == (long *)0x0) {
LAB_02144c3c:
              thunk_FUN_01dd295c(StringLiteral_1244);
              uVar15 = thunk_FUN_01de27b8();
              FUN_03393714(uVar15,0);
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,unaff_x20);
            }
            lVar9 = *plVar6;
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
              FUN_03dc5948(&stack0x00000020,plVar6,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar6 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1682,&stack0x00000010
                                                 );
            }
            else {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc5778(&stack0x00000020,plVar6,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar6 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1672,&stack0x00000010
                                                 );
            }
            plVar16 = *(long **)(unaff_x19 + 0x10);
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar9 = FUN_033a87c8(uVar15,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[4] = lVar9;
            thunk_FUN_01e10808(plVar7 + 4,lVar9);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar9 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_1666) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_02144aa0;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
            lVar9 = (*(code *)*puVar11)(plVar6,puVar11[1]);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[5] = lVar9;
            thunk_FUN_01e10808(plVar7 + 5,lVar9);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar9 = (**(code **)(*plVar16 + 0x3f8))
                              (plVar16,plVar7,*(undefined8 *)(*plVar16 + 0x400));
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar10 = thunk_FUN_01de26bc(plVar6,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar10 == 0) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[4] = (long)plVar6;
            thunk_FUN_01e10808(plVar7 + 4,plVar6);
            if ((lVar13 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[5] = lVar13;
            thunk_FUN_01e10808(plVar7 + 5,lVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03308a94(lVar9);
          } while( true );
        }
        goto LAB_02144c38;
      }
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
      uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
      if ((uVar8 & 1) == 0) goto LAB_02144628;
      plVar5 = *(long **)(unaff_x19 + 0x30);
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      lVar13 = FUN_033a87c8(uVar15,0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if ((int)plVar6[3] == 0) goto LAB_02144cf4;
      plVar6[4] = lVar13;
      thunk_FUN_01e10808(plVar6 + 4,lVar13);
      plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar13 = FUN_020b5ae8(uVar15,*(undefined8 *)StringLiteral_1669);
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_02144cf4;
      plVar6[5] = lVar13;
      thunk_FUN_01e10808(plVar6 + 5,lVar13);
      plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar13 = FUN_020b3d30(uVar15,1,*(undefined8 *)StringLiteral_1668);
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_02144cf4;
      plVar7 = plVar6 + 6;
      *plVar7 = lVar13;
    }
    else {
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar5 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
      uVar15 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      uVar8 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x290));
      if ((uVar8 & 1) == 0) goto LAB_02144118;
      plVar5 = *(long **)(unaff_x19 + 0x58);
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      plVar7 = (long *)FUN_033a87c8(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar13 = FUN_020b5ae8(uVar15,*(undefined8 *)StringLiteral_1669);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if ((int)plVar6[3] == 0) goto LAB_02144cf4;
      plVar6[4] = lVar13;
      thunk_FUN_01e10808(plVar6 + 4,lVar13);
      plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar15 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar13 = FUN_020b3d30(uVar15,1,*(undefined8 *)StringLiteral_1668);
joined_r0x02144798:
      if ((lVar13 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_02144cf4;
      plVar7 = plVar6 + 5;
      *plVar7 = lVar13;
    }
  }
  else {
    iVar4 = (**(code **)(lVar13 + 0x428))(plVar5,*(undefined8 *)(lVar13 + 0x430));
    if (iVar4 != 1) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar12 = thunk_FUN_01de27b8();
      uVar15 = thunk_FUN_01dd295c(StringLiteral_1684);
      FUN_03393770(uVar12,uVar15,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar12);
    }
    plVar5 = *(long **)(unaff_x19 + 0x40);
    plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
    uVar15 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x28);
    }
    plVar7 = (long *)FUN_033a87c8(uVar15,0);
    if (plVar7 == (long *)0x0) goto LAB_02144c38;
    lVar13 = (**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
joined_r0x02143f58:
    if (plVar6 == (long *)0x0) goto LAB_02144c38;
    if ((lVar13 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_02144cf8:
      uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar15,0);
    }
    if ((int)plVar6[3] == 0) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar7 = plVar6 + 4;
    *plVar7 = lVar13;
  }
  thunk_FUN_01e10808(plVar7,lVar13);
  if (plVar5 != (long *)0x0) {
    lVar13 = (**(code **)(*plVar5 + 0x3f8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x400));
    FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
    if (lVar13 != 0) {
      lVar13 = FUN_03308a94(lVar13);
      lVar9 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      if (lVar13 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_01de26bc(lVar13,lVar9);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar13,lVar9);
        }
      }
      return lVar10;
    }
  }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar11 = (undefined8 *)
            FUN_01dde8fc(plVar5,*(long *)
                                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar11)(plVar5,puVar11[1]);
  return lVar13;
}


