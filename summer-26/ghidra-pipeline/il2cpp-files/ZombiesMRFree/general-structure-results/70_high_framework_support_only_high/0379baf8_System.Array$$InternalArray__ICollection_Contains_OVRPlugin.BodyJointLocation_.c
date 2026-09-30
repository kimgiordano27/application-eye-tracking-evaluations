/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0379baf8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BodyJointLocation>(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  code *in_x9;
  int *piVar13;
  uint unaff_w19;
  long *unaff_x21;
  int iVar14;
  undefined **unaff_x22;
  long unaff_x23;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  long lVar17;
  long unaff_x29;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  
code_r0x0379baf8:
  (*in_x9)(param_1);
  if (in_stack_00000060 != 0) {
    uVar7 = FUN_04357e6c(in_stack_00000060,unaff_w26,*(undefined8 *)PTR_DAT_06f71828);
    if ((uVar7 & 1) == 0) {
      if ((*(long *)(unaff_x29 + 0x30) == 0) || (unaff_x27 == (long *)0x0)) goto LAB_0379c3d0;
      lVar17 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
      if ((lVar17 != 0) &&
         (lVar8 = thunk_FUN_03010710(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar8 == 0)) {
LAB_0379c3d8:
        uVar16 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                           ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar16,0);
      }
      if (*(uint *)(unaff_x27 + 3) <= unaff_w19) {
LAB_0379c3d4:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar8 = (long)(int)unaff_w19;
      unaff_x27[lVar8 + 4] = lVar17;
      unaff_w19 = unaff_w19 + 1;
      thunk_FUN_03048534(unaff_x27 + lVar8 + 4,lVar17);
    }
    uVar10 = *(uint *)(unaff_x23 + 0x18);
    if ((int)unaff_w26 < (int)uVar10) {
      plVar15 = (long *)(in_stack_00000008 + (long)(int)unaff_w26 * 8);
      do {
        if (uVar10 <= unaff_w26) goto LAB_0379c3d4;
        if (unaff_x27 == (long *)0x0) goto LAB_0379c3d0;
        lVar17 = *plVar15;
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_03010710(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar8 == 0))
        goto LAB_0379c3d8;
        if (*(uint *)(unaff_x27 + 3) <= unaff_w19) goto LAB_0379c3d4;
        lVar8 = (long)(int)unaff_w19;
        unaff_x27[lVar8 + 4] = lVar17;
        unaff_w19 = unaff_w19 + 1;
        thunk_FUN_03048534(unaff_x27 + lVar8 + 4,lVar17);
        uVar10 = *(uint *)(unaff_x23 + 0x18);
        unaff_w26 = unaff_w26 + 1;
        plVar15 = plVar15 + 1;
      } while ((int)unaff_w26 < (int)uVar10);
    }
    if (in_stack_000000e0 != 0) {
      thunk_FUN_068cd66c(in_stack_000000e0,unaff_x27,0);
      puVar2 = PTR_DAT_06f6d618;
LAB_0379bbfc:
      uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000d8,*(undefined8 *)PTR_DAT_06f967d0);
      if ((uVar7 & 1) != 0) {
        lVar17 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0379bc70;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379bc70:
        (*(code *)*puVar9)(&stack0x00000040);
        if ((uStack0000000000000048 & 1) == 0) {
          lVar17 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0379bce4;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379bce4:
          (*(code *)*puVar9)(&stack0x00000040);
          if ((uStack0000000000000048 >> 1 & 1) != 0) goto LAB_0379bd00;
        }
        else {
LAB_0379bd00:
          if ((*(long *)(unaff_x29 + 0x48) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar17 == 0))
          goto LAB_0379c3d0;
          iVar14 = *(int *)(lVar17 + 0x38);
          if (iVar14 != 0) {
            if (iVar14 != 2) goto LAB_0379bef0;
            if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar7 = FUN_068b7080(0);
            lVar17 = in_stack_000000d8;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)puVar2);
            }
            if ((uVar7 & 1) == 0) {
              FUN_068fd4b4(lVar17,0);
            }
            else {
              FUN_068fd3f8();
            }
            lVar17 = FUN_03c732ac(unaff_x25,*(undefined8 *)PTR_DAT_06f70f30);
            lVar8 = *unaff_x21;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto FUN_0379be10;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_02feb5b8();
FUN_0379be10:
            (*(code *)*puVar9)(&stack0x00000040);
            if ((CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) ||
               (FUN_068d6878(&stack0x00000040,
                             CONCAT44(uStack0000000000000044,uStack0000000000000040),0), lVar17 == 0
               )) goto LAB_0379c3d0;
            FUN_0697713c(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,lVar17
                         ,0);
            lVar8 = *unaff_x21;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0379bea8;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379bea8:
            (*(code *)*puVar9)(&stack0x00000040);
            if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_0379c3d0;
            FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),0)
            ;
            FUN_06977274(fStack000000000000004c + fStack000000000000004c,
                         fStack0000000000000050 + fStack0000000000000050,
                         fStack0000000000000054 + fStack0000000000000054,lVar17,0);
            goto LAB_0379bef0;
          }
        }
        lVar17 = in_stack_000000d8;
        if ((in_stack_000000e8 == 0) || (uVar16 = FUN_068d3dbc(in_stack_000000e8,0), lVar17 == 0))
        goto LAB_0379c3d0;
        FUN_06976c80(lVar17,uVar16,0);
      }
LAB_0379bef0:
      if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_068b7080(0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000c0,*(undefined8 *)PTR_DAT_06f967b8),
         (uVar7 & 1) != 0)) {
        if (in_stack_000000c0 == 0) goto LAB_0379c3d0;
        *(undefined1 *)(in_stack_000000c0 + 0x20) = 1;
      }
      uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000d0,*(undefined8 *)PTR_DAT_06f967c0);
      if ((uVar7 & 1) != 0) {
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
        *(undefined8 *)(in_stack_000000d0 + 0x20) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x20);
        thunk_FUN_03048534();
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
        *(undefined8 *)(in_stack_000000d0 + 0x30) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
        thunk_FUN_03048534();
        if ((*(long *)(unaff_x29 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
        *(undefined8 *)(in_stack_000000d0 + 0x38) =
             *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x38);
        thunk_FUN_03048534();
        lVar17 = *(long *)(unaff_x29 + 0x30);
        if ((lVar17 == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
        *(uint *)(in_stack_000000d0 + 0x5c) =
             *(int *)(lVar17 + 0x5c) - (uint)(0 < *(int *)(lVar17 + 0x5c));
        uVar1 = *(undefined1 *)(lVar17 + 0x80);
        *(undefined4 *)(in_stack_000000d0 + 0xa0) = 1;
        *(undefined1 *)(in_stack_000000d0 + 0x80) = uVar1;
      }
      lVar17 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0379c03c;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379c03c:
      (*(code *)*puVar9)(&stack0x00000040);
      puVar5 = PTR_DAT_06f96800;
      if (uStack0000000000000048 != 0) {
        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
           (lVar17 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar17 == 0)) goto LAB_0379c3d0;
        if (*(int *)(lVar17 + 0x38) == 1) {
          FUN_068f8b44(unaff_x25,0,0);
        }
      }
      iVar14 = in_stack_000000f8._4_4_ + 1;
      lVar17 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      in_stack_000000f8._4_4_ = iVar14;
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0379b344;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b344:
      iVar6 = (*(code *)*puVar9)();
      if (iVar6 <= iVar14) {
        if (*(char *)(unaff_x29 + 0x40) == '\0') {
          uVar16 = 0;
        }
        else {
          if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
          FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0);
          uVar16 = FUN_0379c3e4();
        }
        uVar19 = FUN_0379c4ec(in_stack_00000010);
        puVar4 = PTR_DAT_06f967f0;
        puVar3 = PTR_DAT_06f967c8;
        puVar2 = PTR_DAT_06f96668;
        iVar14 = 0;
        goto LAB_0379c1e8;
      }
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
      uVar16 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_068f8810(uVar16,0,0);
      lVar17 = *(long *)(unaff_x29 + 0x30);
      if (lVar17 == 0) goto LAB_0379c3d0;
      if ((uVar7 & 1) == 0) {
        uVar16 = FUN_068f5db8(lVar17,0);
      }
      else {
        uVar16 = *(undefined8 *)(lVar17 + 0x30);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      unaff_x25 = FUN_03d29674(uVar16,*(undefined8 *)PTR_DAT_06f704c8);
      uVar16 = FUN_05aec914((long)&stack0x000000f8 + 4,0);
      uVar16 = FUN_059687dc(*(undefined8 *)PTR_DAT_06f96820,uVar16,0);
      if (unaff_x25 == 0) goto LAB_0379c3d0;
      FUN_068fc96c(unaff_x25,uVar16,0);
      lVar17 = FUN_068f8a88(unaff_x25,0);
      uVar16 = FUN_068f8a88(in_stack_00000010,0);
      if (lVar17 == 0) goto LAB_0379c3d0;
      FUN_06904d10(lVar17,uVar16,0,0);
      lVar17 = FUN_068f8a88(unaff_x25,0);
      lVar8 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0379b4a8;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b4a8:
      (*(code *)*puVar9)(&stack0x00000040);
      if (lVar17 == 0) goto LAB_0379c3d0;
      FUN_06903914(fStack000000000000004c,fStack0000000000000050,fStack0000000000000054,lVar17,0);
      lVar17 = FUN_068f8a88(unaff_x25,0);
      if (DAT_0738e663 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d7e8);
        DAT_0738e663 = '\x01';
      }
      if (lVar17 == 0) goto LAB_0379c3d0;
      puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
      UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                (*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar17,0);
      lVar17 = FUN_068f8a88(unaff_x25,0);
      if (*(char *)((long)unaff_x22 + 0x666) == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        *(undefined1 *)((long)unaff_x22 + 0x666) = 1;
      }
      if (lVar17 == 0) goto LAB_0379c3d0;
      lVar8 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      FUN_06904aa4(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar17,0);
      FUN_068f8b44(unaff_x25,1,0);
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
      uVar7 = FUN_068f9b78(*(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30),0,0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000f0,*(undefined8 *)PTR_DAT_06f967e8),
         (uVar7 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar7 = FUN_068b7080(0);
        uVar16 = in_stack_000000f0;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar2);
        }
        if ((uVar7 & 1) == 0) {
          FUN_068fd4b4(uVar16,0);
        }
        else {
          FUN_068fd3f8();
        }
      }
      lVar17 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0379b678;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b678:
      (*(code *)*puVar9)(&stack0x00000040);
      lVar17 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      uVar16 = FUN_068fc8bc(unaff_x25,0);
      if (lVar17 == 0) goto LAB_0379c3d0;
      FUN_068fc96c(lVar17,uVar16,0);
      uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000e8,*(undefined8 *)PTR_DAT_06f967d8);
      lVar17 = in_stack_000000e8;
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000c8,*(undefined8 *)PTR_DAT_06f967f8);
        if ((uVar7 & 1) != 0) {
          if ((in_stack_00000018._4_4_ & 1) == 0) {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
            uVar16 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0);
            if (*(int *)(*(long *)PTR_DAT_06f95780 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f95780);
            }
            FUN_037be8ac(6,*(undefined8 *)PTR_DAT_06f96838,uVar16,0);
          }
          lVar17 = in_stack_000000c8;
          lVar8 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0379b820;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b820:
          (*(code *)*puVar9)(&stack0x00000040);
          if (lVar17 == 0) goto LAB_0379c3d0;
          FUN_068d55d0(lVar17,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
          in_stack_00000018._4_4_ = 1;
        }
      }
      else {
        lVar8 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0379b7e8;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b7e8:
        (*(code *)*puVar9)(&stack0x00000040);
        if (lVar17 == 0) goto LAB_0379c3d0;
        FUN_068d3df8(lVar17,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
      }
      uVar7 = FUN_03c746a0(unaff_x25,&stack0x000000e0,*(undefined8 *)PTR_DAT_06f967e0);
      if ((uVar7 & 1) != 0) goto code_r0x0379b86c;
      goto LAB_0379bbfc;
    }
  }
  goto LAB_0379c3d0;
LAB_0379c1e8:
  lVar17 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0379c234;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379c234:
  iVar6 = (*(code *)*puVar9)();
  if (iVar6 <= iVar14) {
    if (*(int *)(*(long *)PTR_DAT_06f6ddb8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_069715b0(0);
    if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_0379c3d0;
    uVar16 = *(undefined8 *)(unaff_x29 + 0x30);
    lVar17 = FUN_037ced4c(*(long *)(unaff_x29 + 0x48),0);
    if (lVar17 == 0) goto LAB_0379c3d0;
    in_stack_00000030 = *(undefined8 *)(lVar17 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar17 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar17 + 0x20);
    uVar20 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar19 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f96648);
    FUN_03796e74(uVar19,uVar16,&stack0x00000020,in_stack_00000010,uVar20);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_0379c3d0;
    FUN_03799c84(*(long *)(unaff_x29 + 0x28),uVar19);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar17 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0), lVar17 == 0)) {
LAB_0379c3d0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_068f8b44(lVar17,0,0);
    }
    return 0;
  }
  lVar17 = FUN_068f8a88(in_stack_00000010,0);
  if ((lVar17 == 0) || (lVar17 = FUN_06906070(lVar17,iVar14,0), lVar17 == 0)) goto LAB_0379c3d0;
  lVar17 = FUN_068f5db8(lVar17,0);
  uVar20 = FUN_0379c600();
  if (lVar17 == 0) goto LAB_0379c3d0;
  uVar7 = FUN_03c746a0(lVar17,&stack0x000000b8,*(undefined8 *)puVar4);
  uVar18 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      uVar18 = FUN_0697470c(in_stack_000000b8,0);
    }
    else {
      uVar18 = FUN_0379c96c(uVar16,uVar19,uVar20,lVar17);
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      FUN_06974748(in_stack_000000b8,0);
    }
  }
  uVar7 = FUN_03c746a0(lVar17,&stack0x000000b0,*(undefined8 *)puVar3);
  if ((uVar7 & 1) == 0) {
    in_stack_000000b0 = FUN_03c732ac(lVar17,*(undefined8 *)puVar2);
  }
  if (in_stack_000000b0 == 0) goto LAB_0379c3d0;
  iVar14 = iVar14 + 1;
  *(int *)(in_stack_000000b0 + 0x20) = (int)uVar16;
  *(int *)(in_stack_000000b0 + 0x24) = (int)uVar19;
  *(undefined4 *)(in_stack_000000b0 + 0x28) = uVar18;
  *(int *)(in_stack_000000b0 + 0x2c) = (int)uVar20;
  goto LAB_0379c1e8;
code_r0x0379b86c:
  lVar17 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0379b8c4;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b8c4:
  (*(code *)*puVar9)(&stack0x00000040);
  if ((in_stack_00000060 == 0) || (unaff_x23 == 0)) goto LAB_0379c3d0;
  lVar17 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  unaff_w26 = *(int *)(in_stack_00000060 + 0x18) - 1;
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0379b944;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b944:
  (*(code *)*puVar9)(&stack0x00000040);
  unaff_x27 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de30,
                                   (*(int *)(unaff_x23 + 0x18) - in_stack_00000058) + 1);
  if ((int)unaff_w26 < 1) {
    unaff_w19 = 0;
  }
  else {
    uVar7 = 0;
    unaff_w19 = 0;
    do {
      lVar17 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0379b9ec;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379b9ec:
      (*(code *)*puVar9)(&stack0x00000040);
      if (in_stack_00000060 == 0) goto LAB_0379c3d0;
      uVar12 = FUN_04357e6c(in_stack_00000060,uVar7 & 0xffffffff,*(undefined8 *)PTR_DAT_06f71828);
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_0379c3d4;
        if (unaff_x27 == (long *)0x0) goto LAB_0379c3d0;
        lVar17 = *(long *)(unaff_x23 + uVar7 * 8 + 0x20);
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_03010710(lVar17,*(undefined8 *)(*unaff_x27 + 0x40)), lVar8 == 0))
        goto LAB_0379c3d8;
        if (*(uint *)(unaff_x27 + 3) <= unaff_w19) goto LAB_0379c3d4;
        lVar8 = (long)(int)unaff_w19;
        unaff_x27[lVar8 + 4] = lVar17;
        unaff_w19 = unaff_w19 + 1;
        thunk_FUN_03048534(unaff_x27 + lVar8 + 4,lVar17);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != unaff_w26);
  }
  lVar17 = *unaff_x21;
  unaff_x22 = &PTR_FUN_0738e000;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0379bae8;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02feb5b8();
LAB_0379bae8:
  in_x9 = (code *)*puVar9;
  param_1 = (undefined8 *)&stack0x00000040;
  goto code_r0x0379baf8;
}


