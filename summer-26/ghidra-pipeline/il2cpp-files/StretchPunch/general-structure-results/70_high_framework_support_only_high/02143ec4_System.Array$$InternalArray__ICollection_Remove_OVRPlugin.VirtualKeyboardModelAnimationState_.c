/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 02143ec4
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

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  long *unaff_x21;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_033a87c8(*param_1);
  if (unaff_x21 == (long *)0x0) goto LAB_02144c38;
  uVar4 = (**(code **)(*unaff_x21 + 0x288))();
  if ((uVar4 & 1) == 0) {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar12 = (long *)FUN_033a87c8(uVar13,0);
    if (plVar12 == (long *)0x0) goto LAB_02144c38;
    uVar4 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
    if ((uVar4 & 1) == 0) {
LAB_02144118:
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar12 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar12 == (long *)0x0) goto LAB_02144c38;
      uVar4 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
      if ((uVar4 & 1) == 0) {
LAB_021441d0:
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar12 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar12 == (long *)0x0) goto LAB_02144c38;
        uVar4 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
        if ((uVar4 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar12 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          plVar12 = (long *)(**(code **)(*plVar12 + 0x438))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          uVar4 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x290));
          if ((uVar4 & 1) != 0) {
            plVar12 = *(long **)(unaff_x19 + 0x28);
            goto LAB_02144284;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar12 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar12 == (long *)0x0) goto LAB_02144c38;
        uVar4 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
        if ((uVar4 & 1) != 0) {
          uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar12 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          plVar12 = (long *)(**(code **)(*plVar12 + 0x438))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          uVar4 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x290));
          if ((uVar4 & 1) != 0) {
            plVar12 = *(long **)(unaff_x19 + 0x30);
            plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*unaff_x28);
            }
            lVar7 = FUN_033a87c8(uVar13,0);
            if (plVar5 == (long *)0x0) goto LAB_02144c38;
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
            goto LAB_02144cf8;
            if ((int)plVar5[3] == 0) goto LAB_02144cf4;
            plVar5[4] = lVar7;
            thunk_FUN_01e10808(plVar5 + 4,lVar7);
            plVar6 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
            lVar7 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar5 + 3) < 2) goto LAB_02144cf4;
            plVar5[5] = lVar7;
            thunk_FUN_01e10808(plVar5 + 5,lVar7);
            plVar6 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar6 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
            lVar7 = FUN_020b3d30(uVar13,1,*(undefined8 *)StringLiteral_1668);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar5 + 3) < 3) goto LAB_02144cf4;
            plVar6 = plVar5 + 6;
            *plVar6 = lVar7;
            goto LAB_02144360;
          }
        }
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar12 = (long *)FUN_033a87c8(uVar13,0);
        if (plVar12 == (long *)0x0) goto LAB_02144c38;
        uVar4 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
        lVar7 = *unaff_x27;
        if ((uVar4 & 1) != 0) {
          uVar13 = *(undefined8 *)(lVar7 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar12 = (long *)FUN_033a87c8(uVar13,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          plVar12 = (long *)(**(code **)(*plVar12 + 0x438))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x440));
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
          if (plVar12 == (long *)0x0) goto LAB_02144c38;
          uVar4 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x290));
          lVar7 = *unaff_x27;
          if ((uVar4 & 1) != 0) {
            uVar13 = *(undefined8 *)(lVar7 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar12 = (long *)FUN_033a87c8(uVar13,0);
            if (plVar12 == (long *)0x0) goto LAB_02144c38;
            uVar13 = (**(code **)(*plVar12 + 0x458))(plVar12,*(undefined8 *)(*plVar12 + 0x460));
            lVar7 = FUN_020c3004(uVar13,*(undefined8 *)StringLiteral_1670);
            plVar12 = *(long **)(unaff_x19 + 0x38);
            plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            if (lVar7 == 0) goto LAB_02144c38;
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_02144cf4;
            if (plVar5 == (long *)0x0) goto LAB_02144c38;
            lVar8 = *(long *)(lVar7 + 0x20);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
            goto LAB_02144cf8;
            if ((int)plVar5[3] == 0) goto LAB_02144cf4;
            plVar5[4] = lVar8;
            thunk_FUN_01e10808(plVar5 + 4,lVar8);
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_02144cf4;
            lVar7 = *(long *)(lVar7 + 0x28);
            goto joined_r0x02144798;
          }
        }
        if ((*(byte *)(*(long *)(lVar7 + 0x28) + 0x135) & 1) == 0) {
          FUN_01dde7f8();
        }
        lVar7 = thunk_FUN_01de27b8();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar13 = FUN_033a87c8(uVar13,0);
        plVar12 = (long *)FUN_03dc9fbc(uVar13,0);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_1675) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02144850;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)StringLiteral_1675,0);
LAB_02144850:
          plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
          puVar3 = StringLiteral_887;
          puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          do {
            lVar8 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_021448c4;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)puVar2,0);
LAB_021448c4:
            uVar4 = (*(code *)*puVar10)(plVar12,puVar10[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar12 == (long *)0x0) {
                return lVar7;
              }
              lVar8 = *plVar12;
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 == 0) goto LAB_02144c04;
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_02144bec;
            }
            lVar8 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_1676) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_02144928;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)StringLiteral_1676,0);
LAB_02144928:
            plVar5 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
            if (plVar5 == (long *)0x0) {
LAB_02144c3c:
              thunk_FUN_01dd295c(StringLiteral_1244);
              uVar13 = thunk_FUN_01de27b8();
              FUN_03393714(uVar13,0);
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,unaff_x20);
            }
            lVar8 = *plVar5;
            bVar1 = *(byte *)(*(long *)StringLiteral_1671 + 0x130);
            if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1671)) {
              bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
              if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_1681)) goto LAB_02144c3c;
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc5948(&stack0x00000020,plVar5,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar5 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1682,&stack0x00000010
                                                 );
            }
            else {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc5778(&stack0x00000020,plVar5,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar5 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1672,&stack0x00000010
                                                 );
            }
            plVar14 = *(long **)(unaff_x19 + 0x10);
            plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar8 = FUN_033a87c8(uVar13,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar6[4] = lVar8;
            thunk_FUN_01e10808(plVar6 + 4,lVar8);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_1666) {
                  puVar10 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_02144aa0;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar10 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
            lVar8 = (*(code *)*puVar10)(plVar5,puVar10[1]);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar6[5] = lVar8;
            thunk_FUN_01e10808(plVar6 + 5,lVar8);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar8 = (**(code **)(*plVar14 + 0x3f8))
                              (plVar14,plVar6,*(undefined8 *)(*plVar14 + 0x400));
            plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar9 = thunk_FUN_01de26bc(plVar5,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar9 == 0) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar6[4] = (long)plVar5;
            thunk_FUN_01e10808(plVar6 + 4,plVar5);
            if ((lVar7 != 0) &&
               (lVar9 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar6[5] = lVar7;
            thunk_FUN_01e10808(plVar6 + 5,lVar7);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03308a94(lVar8);
          } while( true );
        }
        goto LAB_02144c38;
      }
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar12 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar12 == (long *)0x0) goto LAB_02144c38;
      plVar12 = (long *)(**(code **)(*plVar12 + 0x438))(plVar12,*(undefined8 *)(*plVar12 + 0x440));
      uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
      if (plVar12 == (long *)0x0) goto LAB_02144c38;
      uVar4 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x290));
      if ((uVar4 & 1) == 0) goto LAB_021441d0;
      plVar12 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
      plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      lVar7 = FUN_033a87c8(uVar13,0);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_02144cf8;
      if ((int)plVar5[3] == 0) goto LAB_02144cf4;
      plVar5[4] = lVar7;
      thunk_FUN_01e10808(plVar5 + 4,lVar7);
      plVar6 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      lVar7 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
    }
    else {
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar12 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar12 == (long *)0x0) goto LAB_02144c38;
      plVar12 = (long *)(**(code **)(*plVar12 + 0x438))(plVar12,*(undefined8 *)(*plVar12 + 0x440));
      uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
      if (plVar12 == (long *)0x0) goto LAB_02144c38;
      uVar4 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x290));
      if ((uVar4 & 1) == 0) goto LAB_02144118;
      plVar12 = *(long **)(unaff_x19 + 0x58);
      plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      plVar6 = (long *)FUN_033a87c8(uVar13,0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      lVar7 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
      if (plVar5 == (long *)0x0) goto LAB_02144c38;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_02144cf8;
      if ((int)plVar5[3] == 0) goto LAB_02144cf4;
      plVar5[4] = lVar7;
      thunk_FUN_01e10808(plVar5 + 4,lVar7);
      plVar6 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar6 == (long *)0x0) goto LAB_02144c38;
      uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      lVar7 = FUN_020b3d30(uVar13,1,*(undefined8 *)StringLiteral_1668);
    }
joined_r0x02144798:
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_02144cf8:
      uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar6 = plVar5 + 5;
    *plVar6 = lVar7;
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x50);
    plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x28);
    }
    plVar6 = (long *)FUN_033a87c8(uVar13,0);
    if (plVar6 == (long *)0x0) goto LAB_02144c38;
    uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
    lVar7 = FUN_020b5ae8(uVar13,*(undefined8 *)StringLiteral_1669);
    if (plVar5 == (long *)0x0) goto LAB_02144c38;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_02144cf8;
    if ((int)plVar5[3] == 0) goto LAB_02144cf4;
    plVar6 = plVar5 + 4;
    *plVar6 = lVar7;
  }
LAB_02144360:
  thunk_FUN_01e10808(plVar6,lVar7);
  if (plVar12 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar12 + 0x3f8))(plVar12,plVar5,*(undefined8 *)(*plVar12 + 0x400));
    FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
    if (lVar7 != 0) {
      lVar7 = FUN_03308a94(lVar7);
      lVar8 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01dde7f8(lVar8);
      }
      if (lVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_01de26bc(lVar7,lVar8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar7,lVar8);
        }
      }
      return lVar9;
    }
  }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar10 = (undefined8 *)
            FUN_01dde8fc(plVar12,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar10)(plVar12,puVar10[1]);
  return lVar7;
}


