/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector3f>
ENTRY_POINT: 02143dec
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

long System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector3f>(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
  uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1680,0);
  if (plVar4 == (long *)0x0) goto LAB_02144c38;
  uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar4 = (long *)FUN_033a87c8(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_02144c38;
    uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
    if ((uVar6 & 1) != 0) {
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1673,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
      if ((uVar6 & 1) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x50);
        goto LAB_02143ef4;
      }
    }
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar4 = (long *)FUN_033a87c8(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_02144c38;
    uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
    if ((uVar6 & 1) == 0) {
LAB_02144118:
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
      if ((uVar6 & 1) == 0) {
LAB_021441d0:
        uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar5,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1678,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar6 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x28);
            goto LAB_02144284;
          }
        }
        uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar5,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1674,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar6 & 1) != 0) {
            plVar4 = *(long **)(unaff_x19 + 0x30);
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,3);
            uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*unaff_x28);
            }
            lVar9 = FUN_033a87c8(uVar5,0);
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if ((int)plVar7[3] == 0) goto LAB_02144cf4;
            plVar7[4] = lVar9;
            thunk_FUN_01e10808(plVar7 + 4,lVar9);
            plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
            lVar9 = FUN_020b5ae8(uVar5,*(undefined8 *)StringLiteral_1669);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar7 + 3) < 2) goto LAB_02144cf4;
            plVar7[5] = lVar9;
            thunk_FUN_01e10808(plVar7 + 5,lVar9);
            plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
            lVar9 = FUN_020b3d30(uVar5,1,*(undefined8 *)StringLiteral_1668);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_02144cf8;
            if (*(uint *)(plVar7 + 3) < 3) goto LAB_02144cf4;
            plVar8 = plVar7 + 6;
            *plVar8 = lVar9;
            goto LAB_02144360;
          }
        }
        uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        plVar4 = (long *)FUN_033a87c8(uVar5,0);
        if (plVar4 == (long *)0x0) goto LAB_02144c38;
        uVar6 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        lVar9 = *unaff_x27;
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(lVar9 + 0x18);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar4 = (long *)FUN_033a87c8(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
          uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1679,0);
          if (plVar4 == (long *)0x0) goto LAB_02144c38;
          uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
          lVar9 = *unaff_x27;
          if ((uVar6 & 1) != 0) {
            uVar5 = *(undefined8 *)(lVar9 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            plVar4 = (long *)FUN_033a87c8(uVar5,0);
            if (plVar4 == (long *)0x0) goto LAB_02144c38;
            uVar5 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
            lVar9 = FUN_020c3004(uVar5,*(undefined8 *)StringLiteral_1670);
            plVar4 = *(long **)(unaff_x19 + 0x38);
            plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            if (lVar9 == 0) goto LAB_02144c38;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_02144cf4;
            if (plVar7 == (long *)0x0) goto LAB_02144c38;
            lVar10 = *(long *)(lVar9 + 0x20);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
            goto LAB_02144cf8;
            if ((int)plVar7[3] == 0) goto LAB_02144cf4;
            plVar7[4] = lVar10;
            thunk_FUN_01e10808(plVar7 + 4,lVar10);
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_02144cf4;
            lVar9 = *(long *)(lVar9 + 0x28);
            goto joined_r0x02144798;
          }
        }
        if ((*(byte *)(*(long *)(lVar9 + 0x28) + 0x135) & 1) == 0) {
          FUN_01dde7f8();
        }
        lVar9 = thunk_FUN_01de27b8();
        (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
        uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar5 = FUN_033a87c8(uVar5,0);
        plVar4 = (long *)FUN_03dc9fbc(uVar5,0);
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1675) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02144850;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)StringLiteral_1675,0);
LAB_02144850:
          plVar4 = (long *)(*(code *)*puVar12)(plVar4,puVar12[1]);
          puVar3 = StringLiteral_887;
          puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          do {
            lVar10 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_021448c4;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar12 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar2,0);
LAB_021448c4:
            uVar6 = (*(code *)*puVar12)(plVar4,puVar12[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar4 == (long *)0x0) {
                return lVar9;
              }
              lVar10 = *plVar4;
              uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar6 == 0) goto LAB_02144c04;
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_02144bec;
            }
            lVar10 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1676) {
                  puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02144928;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar12 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)StringLiteral_1676,0);
LAB_02144928:
            plVar7 = (long *)(*(code *)*puVar12)(plVar4,puVar12[1]);
            if (plVar7 == (long *)0x0) {
LAB_02144c3c:
              thunk_FUN_01dd295c(StringLiteral_1244);
              uVar5 = thunk_FUN_01de27b8();
              FUN_03393714(uVar5,0);
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,unaff_x20);
            }
            lVar10 = *plVar7;
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
              FUN_03dc5948(&stack0x00000020,plVar7,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar7 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1682,&stack0x00000010
                                                 );
            }
            else {
              in_stack_00000020 = 0;
              in_stack_00000028 = 0;
              FUN_03dc5778(&stack0x00000020,plVar7,0);
              in_stack_00000018 = in_stack_00000028;
              in_stack_00000010 = in_stack_00000020;
              plVar7 = (long *)thunk_FUN_01de23e8(*(undefined8 *)StringLiteral_1672,&stack0x00000010
                                                 );
            }
            plVar14 = *(long **)(unaff_x19 + 0x10);
            plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
            uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar10 = FUN_033a87c8(uVar5,0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar8[4] = lVar10;
            thunk_FUN_01e10808(plVar8 + 4,lVar10);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar10 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_1666) {
                  puVar12 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto LAB_02144aa0;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar12 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)StringLiteral_1666,2);
LAB_02144aa0:
            lVar10 = (*(code *)*puVar12)(plVar7,puVar12[1]);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar8[5] = lVar10;
            thunk_FUN_01e10808(plVar8 + 5,lVar10);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar10 = (**(code **)(*plVar14 + 0x3f8))
                               (plVar14,plVar8,*(undefined8 *)(*plVar14 + 0x400));
            plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar3,2);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar11 = thunk_FUN_01de26bc(plVar7,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar11 == 0) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar8[4] = (long)plVar7;
            thunk_FUN_01e10808(plVar8 + 4,plVar7);
            if ((lVar9 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar8[5] = lVar9;
            thunk_FUN_01e10808(plVar8 + 5,lVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03308a94(lVar10);
          } while( true );
        }
        goto LAB_02144c38;
      }
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1677,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
      if ((uVar6 & 1) == 0) goto LAB_021441d0;
      plVar4 = *(long **)(unaff_x19 + 0x20);
LAB_02144284:
      plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      lVar9 = FUN_033a87c8(uVar5,0);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_02144cf8;
      if ((int)plVar7[3] == 0) goto LAB_02144cf4;
      plVar7[4] = lVar9;
      thunk_FUN_01e10808(plVar7 + 4,lVar9);
      plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar8 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      lVar9 = FUN_020b5ae8(uVar5,*(undefined8 *)StringLiteral_1669);
    }
    else {
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_033a87c8(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1667,0);
      if (plVar4 == (long *)0x0) goto LAB_02144c38;
      uVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x290));
      if ((uVar6 & 1) == 0) goto LAB_02144118;
      plVar4 = *(long **)(unaff_x19 + 0x58);
      plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,2);
      uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      plVar8 = (long *)FUN_033a87c8(uVar5,0);
      if (plVar8 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      lVar9 = FUN_020b5ae8(uVar5,*(undefined8 *)StringLiteral_1669);
      if (plVar7 == (long *)0x0) goto LAB_02144c38;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_02144cf8;
      if ((int)plVar7[3] == 0) goto LAB_02144cf4;
      plVar7[4] = lVar9;
      thunk_FUN_01e10808(plVar7 + 4,lVar9);
      plVar8 = (long *)FUN_033a87c8(*(undefined8 *)(*unaff_x27 + 0x18),0);
      if (plVar8 == (long *)0x0) goto LAB_02144c38;
      uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      lVar9 = FUN_020b3d30(uVar5,1,*(undefined8 *)StringLiteral_1668);
    }
joined_r0x02144798:
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
LAB_02144cf8:
      uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar5,0);
    }
    if (*(uint *)(plVar7 + 3) < 2) {
LAB_02144cf4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar8 = plVar7 + 5;
    *plVar8 = lVar9;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0x48);
LAB_02143ef4:
    plVar7 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,1);
    uVar5 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x28);
    }
    plVar8 = (long *)FUN_033a87c8(uVar5,0);
    if (plVar8 == (long *)0x0) goto LAB_02144c38;
    uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    lVar9 = FUN_020b5ae8(uVar5,*(undefined8 *)StringLiteral_1669);
    if (plVar7 == (long *)0x0) goto LAB_02144c38;
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_02144cf8;
    if ((int)plVar7[3] == 0) goto LAB_02144cf4;
    plVar8 = plVar7 + 4;
    *plVar8 = lVar9;
  }
LAB_02144360:
  thunk_FUN_01e10808(plVar8,lVar9);
  if (plVar4 != (long *)0x0) {
    lVar9 = (**(code **)(*plVar4 + 0x3f8))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x400));
    FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
    if (lVar9 != 0) {
      lVar9 = FUN_03308a94(lVar9);
      lVar10 = *(long *)(*unaff_x27 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8(lVar10);
      }
      if (lVar9 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = thunk_FUN_01de26bc(lVar9,lVar10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar9,lVar10);
        }
      }
      return lVar11;
    }
  }
LAB_02144c38:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_02144bec:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02144c20;
    }
  }
LAB_02144c04:
  puVar12 = (undefined8 *)
            FUN_01dde8fc(plVar4,*(long *)
                                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_02144c20:
  (*(code *)*puVar12)(plVar4,puVar12[1]);
  return lVar9;
}


