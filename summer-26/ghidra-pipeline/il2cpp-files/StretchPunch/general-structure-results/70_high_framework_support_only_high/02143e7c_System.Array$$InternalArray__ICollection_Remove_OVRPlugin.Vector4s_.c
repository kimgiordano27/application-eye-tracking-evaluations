/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4s>
ENTRY_POINT: 02143e7c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02144c30) */

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  plVar4 = (long *)FUN_033a87c8(uVar13,0);
  if (plVar4 == (long *)0x0) goto LAB_02144c38;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
  uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1673,0);
  if (plVar4 == (long *)0x0) goto LAB_02144c38;
  uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
  if ((uVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar4 = (long *)FUN_033a87c8(uVar13,0);
    if (plVar4 == (long *)0x0) goto LAB_02144c38;
    uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
    if ((uVar5 & 1) == 0) {
LAB_02144118:
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
      if ((uVar5 & 1) == 0) {
LAB_021441d0:
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar5 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x28);
            goto LAB_02144284;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar5 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x30);
            plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*unaff_x28);
            }
            lVar8 = FUN_033a87c8(uVar13,0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_02144cf8;
            if ((int)plVar6[3] == 0) goto LAB_02144cf4;
            plVar6[4] = lVar8;
            thunk_FUN_01e10808(plVar6 + 4,lVar8);
            plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
            lVar8 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar6 + 3) < 2) goto LAB_02144cf4;
            plVar6[5] = lVar8;
            thunk_FUN_01e10808(plVar6 + 5,lVar8);
            plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
            lVar8 = FUN_020b3d30(uVar13,1,*(undefined8 *)StringLiteral_1668);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar6 + 3) < 3) goto LAB_02144cf4;
            plVar7 = plVar6 + 6;
            *plVar7 = lVar8;
            goto LAB_02144360;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        lVar8 = *unaff_x27;
        if ((uVar5 & 1) != 0) {
          uVar13 = *(undefined8 *)(lVar8 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
          lVar8 = *unaff_x27;
          if ((uVar5 & 1) != 0) {
            uVar13 = *(undefined8 *)(lVar8 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar4 = (long *)FUN_033a87c8(uVar13,0);
            if (plVar4 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
            lVar8 = FUN_020c3004(uVar13,*(undefined8 *)StringLiteral_1670);
            plVar4 = *(long **)(unaff_x19 + 0x38);
            plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            if (lVar8 == 0) goto LAB_02144c38;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_02144cf4;
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            lVar9 = *(long *)(lVar8 + 0x20);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if ((int)plVar6[3] == 0) goto LAB_02144cf4;
            plVar6[4] = lVar9;
            thunk_FUN_01e10808(plVar6 + 4,lVar9);
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_02144cf4;
            lVar8 = *(long *)(lVar8 + 0x28);
            goto joined_r0x02144798;
          }
        }
        if ((*(byte *)(*(long *)(lVar8 + 0x28) + 0x135) & 1) == 0) {
          FUN_01dde7f8();
        }
        lVar8 = thunk_FUN_01de27b8();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar13 = FUN_033a87c8(uVar13,0);
        plVar4 = (long *)FUN_03dc9fbc(uVar13,0);
        if (plVar4 != (long *)0x0) {
          lVar9 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_1675) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02144850;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)StringLiteral_1675,0);
LAB_02144850:
          plVar4 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
          puVar3 = StringLiteral_887;
          puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          do {
            lVar9 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_021448c4;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar2,0);
LAB_021448c4:
            uVar5 = (*(code *)*puVar11)(plVar4,puVar11[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar4 == (long *)0x0) {
                return lVar8;
              }
              lVar9 = *plVar4;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 == 0) goto LAB_02144c04;
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_02144bec;
            }
            lVar9 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_1676) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02144928;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)StringLiteral_1676,0);
LAB_02144928:
            plVar6 = (long *)(*(code *)*puVar11)(plVar4,puVar11[1]);
            if (plVar6 == (long *)0x0) {
LAB_02144c3c:
              thunk_FUN_01dd295c(StringLiteral_1244);
              uVar13 = thunk_FUN_01de27b8();
              FUN_03393714(uVar13,0);
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,unaff_x20);
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
            plVar14 = *(long **)(unaff_x19 + 0x10);
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar9 = FUN_033a87c8(uVar13,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
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
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_1666) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_02144aa0;
                }
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
            lVar9 = (*(code *)*puVar11)(plVar6,puVar11[1]);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[5] = lVar9;
            thunk_FUN_01e10808(plVar7 + 5,lVar9);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar9 = (**(code **)(*plVar14 + 0x3f8))
                              (plVar14,plVar7,*(undefined8 *)(*plVar14 + 0x400));
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar10 = thunk_FUN_01de26bc(plVar6,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar10 == 0) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[4] = (long)plVar6;
            thunk_FUN_01e10808(plVar7 + 4,plVar6);
            if ((lVar8 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[5] = lVar8;
            thunk_FUN_01e10808(plVar7 + 5,lVar8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03308a94(lVar9);
          } while( true );
        }
        goto LAB_02144c38;
      }
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
      if ((uVar5 & 1) == 0) goto LAB_021441d0;
      plVar4 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      lVar8 = FUN_033a87c8(uVar13,0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if ((int)plVar6[3] == 0) goto LAB_02144cf4;
      plVar6[4] = lVar8;
      thunk_FUN_01e10808(plVar6 + 4,lVar8);
      plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar8 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
    }
    else {
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar13,*(undefined8 *)(*plVar4 + 0x290));
      if ((uVar5 & 1) == 0) goto LAB_02144118;
      plVar4 = *(long **)(unaff_x19 + 0x58);
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      plVar7 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar8 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_02144cf8;
      if ((int)plVar6[3] == 0) goto LAB_02144cf4;
      plVar6[4] = lVar8;
      thunk_FUN_01e10808(plVar6 + 4,lVar8);
      plVar7 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      lVar8 = FUN_020b3d30(uVar13,1,*(undefined8 *)StringLiteral_1668);
    }
joined_r0x02144798:
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_02144cf8:
      uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar7 = plVar6 + 5;
    *plVar7 = lVar8;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0x50);
    plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x28);
    }
    plVar7 = (long *)FUN_033a87c8(uVar13,0);
    if (plVar7 == (long *)0x0) goto LAB_02144c38;
    uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
    lVar8 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
    if (plVar6 == (long *)0x0) goto LAB_02144c38;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_02144cf8;
    if ((int)plVar6[3] == 0) goto LAB_02144cf4;
    plVar7 = plVar6 + 4;
    *plVar7 = lVar8;
  }
LAB_02144360:
  thunk_FUN_01e10808(plVar7,lVar8);
  if (plVar4 != (long *)0x0) {
    lVar8 = (**(code **)(*plVar4 + 0x3f8))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x400));
    FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
    if (lVar8 != 0) {
      lVar8 = FUN_03308a94(lVar8);
      lVar9 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      if (lVar8 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_01de26bc(lVar8,lVar9);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar8,lVar9);
        }
      }
      return lVar10;
    }
  }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar11 = (undefined8 *)
            FUN_01dde8fc(plVar4,*(long *)
                                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar11)(plVar4,puVar11[1]);
  return lVar8;
}


