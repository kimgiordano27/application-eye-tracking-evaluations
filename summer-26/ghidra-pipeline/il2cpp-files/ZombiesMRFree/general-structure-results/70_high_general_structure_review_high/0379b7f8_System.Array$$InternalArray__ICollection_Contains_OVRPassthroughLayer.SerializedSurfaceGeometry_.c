/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0379b7f8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
          (undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  code *in_x9;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 unaff_x19;
  long *unaff_x21;
  int iVar17;
  undefined **unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x25;
  uint uVar20;
  long unaff_x26;
  long unaff_x29;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int in_stack_00000058;
  long in_stack_00000060;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  while ((*in_x9)(param_1), unaff_x26 != 0) {
    FUN_068d3df8(unaff_x26,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
LAB_0379b850:
    uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000e0,*(undefined8 *)PTR_DAT_06f967e0);
    if ((uVar7 & 1) != 0) {
      lVar13 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379b8c4;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b8c4:
      (*(code *)*puVar8)(&stack0x00000040);
      if ((in_stack_00000060 == 0) || (unaff_x23 == 0)) break;
      lVar13 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar20 = *(int *)(in_stack_00000060 + 0x18) - 1;
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379b944;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b944:
      (*(code *)*puVar8)(&stack0x00000040);
      plVar9 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de30,
                                    (*(int *)(unaff_x23 + 0x18) - in_stack_00000058) + 1);
      if ((int)uVar20 < 1) {
        uVar16 = 0;
      }
      else {
        uVar7 = 0;
        uVar16 = 0;
        do {
          lVar13 = *unaff_x21;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0379b9ec;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b9ec:
          (*(code *)*puVar8)(&stack0x00000040);
          if (in_stack_00000060 == 0) goto LAB_0379c3d0;
          uVar14 = FUN_04357e6c(in_stack_00000060,uVar7 & 0xffffffff,*(undefined8 *)PTR_DAT_06f71828
                               );
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0379c3d4;
            if (plVar9 == (long *)0x0) goto LAB_0379c3d0;
            lVar13 = *(long *)(unaff_x23 + uVar7 * 8 + 0x20);
            if ((lVar13 != 0) &&
               (lVar10 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_0379c3d8;
            if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_0379c3d4;
            lVar10 = (long)(int)uVar16;
            plVar9[lVar10 + 4] = lVar13;
            uVar16 = uVar16 + 1;
            thunk_FUN_03048534(plVar9 + lVar10 + 4,lVar13);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar20);
      }
      lVar13 = *unaff_x21;
      unaff_x22 = &PTR_FUN_0738e000;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379bae8;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bae8:
      (*(code *)*puVar8)(&stack0x00000040);
      if (in_stack_00000060 == 0) break;
      uVar7 = FUN_04357e6c(in_stack_00000060,uVar20,*(undefined8 *)PTR_DAT_06f71828);
      if ((uVar7 & 1) == 0) {
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar9 == (long *)0x0)) break;
        lVar13 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
        if ((lVar13 != 0) &&
           (lVar10 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_0379c3d8:
          uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                             ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar19,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar16) {
LAB_0379c3d4:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar10 = (long)(int)uVar16;
        plVar9[lVar10 + 4] = lVar13;
        uVar16 = uVar16 + 1;
        thunk_FUN_03048534(plVar9 + lVar10 + 4,lVar13);
      }
      uVar11 = *(uint *)(unaff_x23 + 0x18);
      if ((int)uVar20 < (int)uVar11) {
        plVar18 = (long *)(in_stack_00000008 + (long)(int)uVar20 * 8);
        do {
          if (uVar11 <= uVar20) goto LAB_0379c3d4;
          if (plVar9 == (long *)0x0) goto LAB_0379c3d0;
          lVar13 = *plVar18;
          if ((lVar13 != 0) &&
             (lVar10 = thunk_FUN_03010710(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0379c3d8;
          if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_0379c3d4;
          lVar10 = (long)(int)uVar16;
          plVar9[lVar10 + 4] = lVar13;
          uVar16 = uVar16 + 1;
          thunk_FUN_03048534(plVar9 + lVar10 + 4,lVar13);
          uVar11 = *(uint *)(unaff_x23 + 0x18);
          uVar20 = uVar20 + 1;
          plVar18 = plVar18 + 1;
        } while ((int)uVar20 < (int)uVar11);
      }
      if (in_stack_000000e0 == 0) break;
      thunk_FUN_068cd66c(in_stack_000000e0,plVar9,0);
      unaff_x19 = in_stack_00000010;
      unaff_x24 = (long *)PTR_DAT_06f6d618;
    }
    uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000d8,*(undefined8 *)PTR_DAT_06f967d0);
    if ((uVar7 & 1) != 0) {
      lVar13 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379bc70;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bc70:
      (*(code *)*puVar8)(&stack0x00000040);
      if ((uStack0000000000000048 & 1) == 0) {
        lVar13 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379bce4;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bce4:
        (*(code *)*puVar8)(&stack0x00000040);
        if ((uStack0000000000000048 >> 1 & 1) != 0) goto LAB_0379bd00;
      }
      else {
LAB_0379bd00:
        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar13 == 0)) break;
        iVar17 = *(int *)(lVar13 + 0x38);
        if (iVar17 != 0) {
          if (iVar17 != 2) goto LAB_0379bef0;
          if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar7 = FUN_068b7080(0);
          lVar13 = in_stack_000000d8;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*unaff_x24);
          }
          if ((uVar7 & 1) == 0) {
            FUN_068fd4b4(lVar13,0);
          }
          else {
            FUN_068fd3f8();
          }
          lVar13 = FUN_03c732ac(unaff_x25,*(undefined8 *)PTR_DAT_06f70f30);
          lVar10 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto FUN_0379be10;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
FUN_0379be10:
          (*(code *)*puVar8)(&stack0x00000040);
          if ((CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) ||
             (FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                           0), lVar13 == 0)) break;
          FUN_0697713c(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,lVar13,0
                      );
          lVar10 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0379bea8;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bea8:
          (*(code *)*puVar8)(&stack0x00000040);
          if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) break;
          FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
          FUN_06977274(fStack000000000000004c + fStack000000000000004c,
                       fStack0000000000000050 + fStack0000000000000050,
                       fStack0000000000000054 + fStack0000000000000054,lVar13,0);
          goto LAB_0379bef0;
        }
      }
      lVar13 = in_stack_000000d8;
      if ((in_stack_000000e8 == 0) || (uVar19 = FUN_068d3dbc(in_stack_000000e8,0), lVar13 == 0))
      break;
      FUN_06976c80(lVar13,uVar19,0);
    }
LAB_0379bef0:
    if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_068b7080(0);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000c0,*(undefined8 *)PTR_DAT_06f967b8),
       (uVar7 & 1) != 0)) {
      if (in_stack_000000c0 == 0) break;
      *(undefined1 *)(in_stack_000000c0 + 0x20) = 1;
    }
    uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000d0,*(undefined8 *)PTR_DAT_06f967c0);
    if ((uVar7 & 1) != 0) {
      if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) break;
      *(undefined8 *)(in_stack_000000d0 + 0x20) =
           *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x20);
      thunk_FUN_03048534();
      if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) break;
      *(undefined8 *)(in_stack_000000d0 + 0x30) =
           *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
      thunk_FUN_03048534();
      if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) break;
      *(undefined8 *)(in_stack_000000d0 + 0x38) =
           *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x38);
      thunk_FUN_03048534();
      lVar13 = *(long *)(unaff_x29 + 0x30);
      if ((lVar13 == 0) || (in_stack_000000d0 == 0)) break;
      *(uint *)(in_stack_000000d0 + 0x5c) =
           *(int *)(lVar13 + 0x5c) - (uint)(0 < *(int *)(lVar13 + 0x5c));
      uVar1 = *(undefined1 *)(lVar13 + 0x80);
      *(undefined4 *)(in_stack_000000d0 + 0xa0) = 1;
      *(undefined1 *)(in_stack_000000d0 + 0x80) = uVar1;
    }
    lVar13 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379c03c;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379c03c:
    (*(code *)*puVar8)(&stack0x00000040);
    puVar5 = PTR_DAT_06f96800;
    if (uStack0000000000000048 != 0) {
      if ((*(long *)(unaff_x29 + 0x48) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar13 == 0)) break;
      if (*(int *)(lVar13 + 0x38) == 1) {
        FUN_068f8b44(unaff_x25,0,0);
      }
    }
    iVar17 = in_stack_000000f8._4_4_ + 1;
    lVar13 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    in_stack_000000f8._4_4_ = iVar17;
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379b344;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b344:
    iVar6 = (*(code *)*puVar8)();
    if (iVar6 <= iVar17) {
      if (*(char *)(unaff_x29 + 0x40) == '\0') {
        uVar19 = 0;
      }
      else {
        if (*(long *)(unaff_x29 + 0x30) == 0) break;
        FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0);
        uVar19 = FUN_0379c3e4();
      }
      uVar22 = FUN_0379c4ec(unaff_x19);
      puVar4 = PTR_DAT_06f967f0;
      puVar3 = PTR_DAT_06f967c8;
      puVar2 = PTR_DAT_06f96668;
      iVar17 = 0;
      goto LAB_0379c1e8;
    }
    if (*(long *)(unaff_x29 + 0x30) == 0) break;
    uVar19 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_068f8810(uVar19,0,0);
    lVar13 = *(long *)(unaff_x29 + 0x30);
    if (lVar13 == 0) break;
    if ((uVar7 & 1) == 0) {
      uVar19 = FUN_068f5db8(lVar13,0);
    }
    else {
      uVar19 = *(undefined8 *)(lVar13 + 0x30);
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    unaff_x25 = FUN_03d29674(uVar19,*(undefined8 *)PTR_DAT_06f704c8);
    uVar19 = FUN_05aec914((long)&stack0x000000f8 + 4,0);
    uVar19 = FUN_059687dc(*(undefined8 *)PTR_DAT_06f96820,uVar19,0);
    if (unaff_x25 == 0) break;
    FUN_068fc96c(unaff_x25,uVar19,0);
    lVar13 = FUN_068f8a88(unaff_x25,0);
    uVar19 = FUN_068f8a88(unaff_x19,0);
    if (lVar13 == 0) break;
    FUN_06904d10(lVar13,uVar19,0,0);
    lVar13 = FUN_068f8a88(unaff_x25,0);
    lVar10 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379b4a8;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b4a8:
    (*(code *)*puVar8)(&stack0x00000040);
    if (lVar13 == 0) break;
    FUN_06903914(fStack000000000000004c,fStack0000000000000050,fStack0000000000000054,lVar13,0);
    lVar13 = FUN_068f8a88(unaff_x25,0);
    if (DAT_0738e663 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d7e8);
      DAT_0738e663 = '\x01';
    }
    if (lVar13 == 0) break;
    puVar12 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
    UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
              (*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar13,0);
    lVar13 = FUN_068f8a88(unaff_x25,0);
    if (*(char *)((long)unaff_x22 + 0x666) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)((long)unaff_x22 + 0x666) = 1;
    }
    if (lVar13 == 0) break;
    lVar10 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    FUN_06904aa4(*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                 *(undefined4 *)(lVar10 + 0x14),lVar13,0);
    FUN_068f8b44(unaff_x25,1,0);
    if (*(long *)(unaff_x29 + 0x30) == 0) break;
    uVar7 = FUN_068f9b78(*(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30),0,0);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000f0,*(undefined8 *)PTR_DAT_06f967e8),
       (uVar7 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_068b7080(0);
      uVar19 = in_stack_000000f0;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
      if ((uVar7 & 1) == 0) {
        FUN_068fd4b4(uVar19,0);
      }
      else {
        FUN_068fd3f8();
      }
    }
    lVar13 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379b678;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b678:
    (*(code *)*puVar8)(&stack0x00000040);
    lVar13 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    uVar19 = FUN_068fc8bc(unaff_x25,0);
    if (lVar13 == 0) break;
    FUN_068fc96c(lVar13,uVar19,0);
    uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000e8,*(undefined8 *)PTR_DAT_06f967d8);
    unaff_x26 = in_stack_000000e8;
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000c8,*(undefined8 *)PTR_DAT_06f967f8);
      if ((uVar7 & 1) != 0) {
        if ((in_stack_00000018._4_4_ & 1) == 0) {
          if (*(long *)(unaff_x29 + 0x30) == 0) break;
          uVar19 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0);
          if (*(int *)(*(long *)PTR_DAT_06f95780 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f95780);
          }
          FUN_037be8ac(6,*(undefined8 *)PTR_DAT_06f96838,uVar19,0);
        }
        lVar13 = in_stack_000000c8;
        lVar10 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379b820;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b820:
        (*(code *)*puVar8)(&stack0x00000040);
        if (lVar13 == 0) break;
        FUN_068d55d0(lVar13,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        in_stack_00000018._4_4_ = 1;
      }
      goto LAB_0379b850;
    }
    lVar13 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379b7e8;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b7e8:
    in_x9 = (code *)*puVar8;
    param_1 = (undefined8 *)&stack0x00000040;
  }
LAB_0379c3d0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
LAB_0379c1e8:
  lVar13 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0379c234;
      }
      uVar7 = uVar7 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379c234:
  iVar6 = (*(code *)*puVar8)();
  if (iVar6 <= iVar17) {
    if (*(int *)(*(long *)PTR_DAT_06f6ddb8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_069715b0(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_0379c3d0;
    uVar19 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar13 = FUN_037ced4c(*(long *)(unaff_x29 + 0x48),0);
    if (lVar13 == 0) goto LAB_0379c3d0;
    in_stack_00000030 = *(undefined8 *)(lVar13 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar13 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar13 + 0x20);
    uVar23 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar22 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f96648);
    FUN_03796e74(uVar22,uVar19,&stack0x00000020,unaff_x19,uVar23);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_0379c3d0;
    FUN_03799c84(*(long *)(unaff_x29 + 0x28),uVar22);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar13 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0), lVar13 == 0)) goto LAB_0379c3d0;
      FUN_068f8b44(lVar13,0,0);
    }
    return 0;
  }
  lVar13 = FUN_068f8a88(unaff_x19,0);
  if ((lVar13 == 0) || (lVar13 = FUN_06906070(lVar13,iVar17,0), lVar13 == 0)) goto LAB_0379c3d0;
  lVar13 = FUN_068f5db8(lVar13,0);
  uVar23 = FUN_0379c600();
  if (lVar13 == 0) goto LAB_0379c3d0;
  uVar7 = FUN_03c746a0(lVar13,&stack0x000000b8,*(undefined8 *)puVar4);
  uVar21 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      uVar21 = FUN_0697470c(in_stack_000000b8,0);
    }
    else {
      uVar21 = FUN_0379c96c(uVar19,uVar22,uVar23,lVar13);
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      FUN_06974748(in_stack_000000b8,0);
    }
  }
  uVar7 = FUN_03c746a0(lVar13,&stack0x000000b0,*(undefined8 *)puVar3);
  if ((uVar7 & 1) == 0) {
    in_stack_000000b0 = FUN_03c732ac(lVar13,*(undefined8 *)puVar2);
  }
  if (in_stack_000000b0 == 0) goto LAB_0379c3d0;
  iVar17 = iVar17 + 1;
  *(int *)(in_stack_000000b0 + 0x20) = (int)uVar19;
  *(int *)(in_stack_000000b0 + 0x24) = (int)uVar22;
  *(undefined4 *)(in_stack_000000b0 + 0x28) = uVar21;
  *(int *)(in_stack_000000b0 + 0x2c) = (int)uVar23;
  goto LAB_0379c1e8;
}


