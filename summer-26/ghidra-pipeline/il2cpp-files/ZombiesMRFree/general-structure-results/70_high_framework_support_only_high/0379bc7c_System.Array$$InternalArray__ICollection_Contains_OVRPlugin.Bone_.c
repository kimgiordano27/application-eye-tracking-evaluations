/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 0379bc7c
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


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *in_x9;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 unaff_x19;
  long *unaff_x21;
  int iVar17;
  undefined **unaff_x22;
  long unaff_x23;
  long *plVar18;
  long *unaff_x24;
  undefined8 uVar19;
  long unaff_x25;
  uint uVar20;
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
  
  do {
    (*in_x9)(param_1);
    if ((uStack0000000000000048 & 1) == 0) {
      lVar11 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379bce4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bce4:
      (*(code *)*puVar8)(&stack0x00000040);
      if ((uStack0000000000000048 >> 1 & 1) != 0) goto LAB_0379bd00;
LAB_0379bd70:
      lVar11 = in_stack_000000d8;
      if ((in_stack_000000e8 == 0) || (uVar19 = FUN_068d3dbc(in_stack_000000e8,0), lVar11 == 0))
      goto LAB_0379c3d0;
      FUN_06976c80(lVar11,uVar19,0);
    }
    else {
LAB_0379bd00:
      if ((*(long *)(unaff_x29 + 0x48) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar11 == 0)) goto LAB_0379c3d0;
      iVar17 = *(int *)(lVar11 + 0x38);
      if (iVar17 == 0) goto LAB_0379bd70;
      if (iVar17 == 2) {
        if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar14 = FUN_068b7080(0);
        lVar11 = in_stack_000000d8;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x24);
        }
        if ((uVar14 & 1) == 0) {
          FUN_068fd4b4(lVar11,0);
        }
        else {
          FUN_068fd3f8();
        }
        lVar11 = FUN_03c732ac(unaff_x25,*(undefined8 *)PTR_DAT_06f70f30);
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto FUN_0379be10;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
FUN_0379be10:
        (*(code *)*puVar8)(&stack0x00000040);
        if ((CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) ||
           (FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),0)
           , lVar11 == 0)) goto LAB_0379c3d0;
        FUN_0697713c(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,lVar11,0);
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379bea8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bea8:
        (*(code *)*puVar8)(&stack0x00000040);
        if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_0379c3d0;
        FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        FUN_06977274(fStack000000000000004c + fStack000000000000004c,
                     fStack0000000000000050 + fStack0000000000000050,
                     fStack0000000000000054 + fStack0000000000000054,lVar11,0);
      }
    }
    do {
      if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar14 = FUN_068b7080(0);
      if (((uVar14 & 1) != 0) &&
         (uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000c0,*(undefined8 *)PTR_DAT_06f967b8),
         (uVar14 & 1) != 0)) {
        if (in_stack_000000c0 == 0) goto LAB_0379c3d0;
        *(undefined1 *)(in_stack_000000c0 + 0x20) = 1;
      }
      uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000d0,*(undefined8 *)PTR_DAT_06f967c0);
      if ((uVar14 & 1) != 0) {
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
        lVar11 = *(long *)(unaff_x29 + 0x30);
        if ((lVar11 == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
        *(uint *)(in_stack_000000d0 + 0x5c) =
             *(int *)(lVar11 + 0x5c) - (uint)(0 < *(int *)(lVar11 + 0x5c));
        uVar1 = *(undefined1 *)(lVar11 + 0x80);
        *(undefined4 *)(in_stack_000000d0 + 0xa0) = 1;
        *(undefined1 *)(in_stack_000000d0 + 0x80) = uVar1;
      }
      lVar11 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379c03c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379c03c:
      (*(code *)*puVar8)(&stack0x00000040);
      puVar5 = PTR_DAT_06f96800;
      if (uStack0000000000000048 != 0) {
        if ((*(long *)(unaff_x29 + 0x48) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x29 + 0x48) + 0x38), lVar11 == 0)) goto LAB_0379c3d0;
        if (*(int *)(lVar11 + 0x38) == 1) {
          FUN_068f8b44(unaff_x25,0,0);
        }
      }
      iVar17 = in_stack_000000f8._4_4_ + 1;
      lVar11 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      in_stack_000000f8._4_4_ = iVar17;
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379b344;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b344:
      iVar6 = (*(code *)*puVar8)();
      if (iVar6 <= iVar17) {
        if (*(char *)(unaff_x29 + 0x40) == '\0') {
          uVar19 = 0;
        }
        else {
          if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
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
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
      uVar19 = *(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar14 = FUN_068f8810(uVar19,0,0);
      lVar11 = *(long *)(unaff_x29 + 0x30);
      if (lVar11 == 0) goto LAB_0379c3d0;
      if ((uVar14 & 1) == 0) {
        uVar19 = FUN_068f5db8(lVar11,0);
      }
      else {
        uVar19 = *(undefined8 *)(lVar11 + 0x30);
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      unaff_x25 = FUN_03d29674(uVar19,*(undefined8 *)PTR_DAT_06f704c8);
      uVar19 = FUN_05aec914((long)&stack0x000000f8 + 4,0);
      uVar19 = FUN_059687dc(*(undefined8 *)PTR_DAT_06f96820,uVar19,0);
      if (unaff_x25 == 0) goto LAB_0379c3d0;
      FUN_068fc96c(unaff_x25,uVar19,0);
      lVar11 = FUN_068f8a88(unaff_x25,0);
      uVar19 = FUN_068f8a88(unaff_x19,0);
      if (lVar11 == 0) goto LAB_0379c3d0;
      FUN_06904d10(lVar11,uVar19,0,0);
      lVar11 = FUN_068f8a88(unaff_x25,0);
      lVar12 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379b4a8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b4a8:
      (*(code *)*puVar8)(&stack0x00000040);
      if (lVar11 == 0) goto LAB_0379c3d0;
      FUN_06903914(fStack000000000000004c,fStack0000000000000050,fStack0000000000000054,lVar11,0);
      lVar11 = FUN_068f8a88(unaff_x25,0);
      if (DAT_0738e663 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d7e8);
        DAT_0738e663 = '\x01';
      }
      if (lVar11 == 0) goto LAB_0379c3d0;
      puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
      UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
                (*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar11,0);
      lVar11 = FUN_068f8a88(unaff_x25,0);
      if (*(char *)((long)unaff_x22 + 0x666) == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        *(undefined1 *)((long)unaff_x22 + 0x666) = 1;
      }
      if (lVar11 == 0) goto LAB_0379c3d0;
      lVar12 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      FUN_06904aa4(*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                   *(undefined4 *)(lVar12 + 0x14),lVar11,0);
      FUN_068f8b44(unaff_x25,1,0);
      if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
      uVar14 = FUN_068f9b78(*(undefined8 *)(*(long *)(unaff_x29 + 0x30) + 0x30),0,0);
      if (((uVar14 & 1) != 0) &&
         (uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000f0,*(undefined8 *)PTR_DAT_06f967e8),
         (uVar14 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar14 = FUN_068b7080(0);
        uVar19 = in_stack_000000f0;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x24);
        }
        if ((uVar14 & 1) == 0) {
          FUN_068fd4b4(uVar19,0);
        }
        else {
          FUN_068fd3f8();
        }
      }
      lVar11 = *unaff_x21;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0379b678;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b678:
      (*(code *)*puVar8)(&stack0x00000040);
      lVar11 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      uVar19 = FUN_068fc8bc(unaff_x25,0);
      if (lVar11 == 0) goto LAB_0379c3d0;
      FUN_068fc96c(lVar11,uVar19,0);
      uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000e8,*(undefined8 *)PTR_DAT_06f967d8);
      lVar11 = in_stack_000000e8;
      if ((uVar14 & 1) == 0) {
        uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000c8,*(undefined8 *)PTR_DAT_06f967f8);
        if ((uVar14 & 1) != 0) {
          if ((in_stack_00000018._4_4_ & 1) == 0) {
            if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_0379c3d0;
            uVar19 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0);
            if (*(int *)(*(long *)PTR_DAT_06f95780 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f95780);
            }
            FUN_037be8ac(6,*(undefined8 *)PTR_DAT_06f96838,uVar19,0);
          }
          lVar11 = in_stack_000000c8;
          lVar12 = *unaff_x21;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0379b820;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b820:
          (*(code *)*puVar8)(&stack0x00000040);
          if (lVar11 == 0) goto LAB_0379c3d0;
          FUN_068d55d0(lVar11,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
          in_stack_00000018._4_4_ = 1;
        }
      }
      else {
        lVar12 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379b7e8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b7e8:
        (*(code *)*puVar8)(&stack0x00000040);
        if (lVar11 == 0) goto LAB_0379c3d0;
        FUN_068d3df8(lVar11,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
      }
      uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000e0,*(undefined8 *)PTR_DAT_06f967e0);
      if ((uVar14 & 1) != 0) {
        lVar11 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379b8c4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b8c4:
        (*(code *)*puVar8)(&stack0x00000040);
        if ((in_stack_00000060 == 0) || (unaff_x23 == 0)) goto LAB_0379c3d0;
        lVar11 = *unaff_x21;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        uVar20 = *(int *)(in_stack_00000060 + 0x18) - 1;
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379b944;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b944:
        (*(code *)*puVar8)(&stack0x00000040);
        plVar7 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de30,
                                      (*(int *)(unaff_x23 + 0x18) - in_stack_00000058) + 1);
        if ((int)uVar20 < 1) {
          uVar16 = 0;
        }
        else {
          uVar14 = 0;
          uVar16 = 0;
          do {
            lVar11 = *unaff_x21;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0379b9ec;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b9ec:
            (*(code *)*puVar8)(&stack0x00000040);
            if (in_stack_00000060 == 0) goto LAB_0379c3d0;
            uVar13 = FUN_04357e6c(in_stack_00000060,uVar14 & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_06f71828);
            if ((uVar13 & 1) == 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= uVar14) goto LAB_0379c3d4;
              if (plVar7 == (long *)0x0) goto LAB_0379c3d0;
              lVar11 = *(long *)(unaff_x23 + uVar14 * 8 + 0x20);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0))
              goto LAB_0379c3d8;
              if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_0379c3d4;
              lVar12 = (long)(int)uVar16;
              plVar7[lVar12 + 4] = lVar11;
              uVar16 = uVar16 + 1;
              thunk_FUN_03048534(plVar7 + lVar12 + 4,lVar11);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar20);
        }
        lVar11 = *unaff_x21;
        unaff_x22 = &PTR_FUN_0738e000;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0379bae8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bae8:
        (*(code *)*puVar8)(&stack0x00000040);
        if (in_stack_00000060 == 0) goto LAB_0379c3d0;
        uVar14 = FUN_04357e6c(in_stack_00000060,uVar20,*(undefined8 *)PTR_DAT_06f71828);
        if ((uVar14 & 1) == 0) {
          if ((*(long *)(unaff_x29 + 0x30) == 0) || (plVar7 == (long *)0x0)) goto LAB_0379c3d0;
          lVar11 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x20);
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
LAB_0379c3d8:
            uVar19 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                               ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar19,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar16) {
LAB_0379c3d4:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          lVar12 = (long)(int)uVar16;
          plVar7[lVar12 + 4] = lVar11;
          uVar16 = uVar16 + 1;
          thunk_FUN_03048534(plVar7 + lVar12 + 4,lVar11);
        }
        uVar9 = *(uint *)(unaff_x23 + 0x18);
        if ((int)uVar20 < (int)uVar9) {
          plVar18 = (long *)(in_stack_00000008 + (long)(int)uVar20 * 8);
          do {
            if (uVar9 <= uVar20) goto LAB_0379c3d4;
            if (plVar7 == (long *)0x0) goto LAB_0379c3d0;
            lVar11 = *plVar18;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_03010710(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0))
            goto LAB_0379c3d8;
            if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_0379c3d4;
            lVar12 = (long)(int)uVar16;
            plVar7[lVar12 + 4] = lVar11;
            uVar16 = uVar16 + 1;
            thunk_FUN_03048534(plVar7 + lVar12 + 4,lVar11);
            uVar9 = *(uint *)(unaff_x23 + 0x18);
            uVar20 = uVar20 + 1;
            plVar18 = plVar18 + 1;
          } while ((int)uVar20 < (int)uVar9);
        }
        if (in_stack_000000e0 == 0) goto LAB_0379c3d0;
        thunk_FUN_068cd66c(in_stack_000000e0,plVar7,0);
        unaff_x19 = in_stack_00000010;
        unaff_x24 = (long *)PTR_DAT_06f6d618;
      }
      uVar14 = FUN_03c746a0(unaff_x25,&stack0x000000d8,*(undefined8 *)PTR_DAT_06f967d0);
    } while ((uVar14 & 1) == 0);
    lVar11 = *unaff_x21;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0379bc70;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bc70:
    in_x9 = (code *)*puVar8;
    param_1 = (undefined8 *)&stack0x00000040;
  } while( true );
LAB_0379c1e8:
  lVar11 = *unaff_x21;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0379c234;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
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
    lVar11 = FUN_037ced4c(*(long *)(unaff_x29 + 0x48),0);
    if (lVar11 == 0) goto LAB_0379c3d0;
    in_stack_00000030 = *(undefined8 *)(lVar11 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar11 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar11 + 0x20);
    uVar23 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar22 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f96648);
    FUN_03796e74(uVar22,uVar19,&stack0x00000020,unaff_x19,uVar23);
    if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_0379c3d0;
    FUN_03799c84(*(long *)(unaff_x29 + 0x28),uVar22);
    if (*(char *)(unaff_x29 + 0x41) != '\0') {
      if ((*(long *)(unaff_x29 + 0x30) == 0) ||
         (lVar11 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0), lVar11 == 0)) {
LAB_0379c3d0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_068f8b44(lVar11,0,0);
    }
    return 0;
  }
  lVar11 = FUN_068f8a88(unaff_x19,0);
  if ((lVar11 == 0) || (lVar11 = FUN_06906070(lVar11,iVar17,0), lVar11 == 0)) goto LAB_0379c3d0;
  lVar11 = FUN_068f5db8(lVar11,0);
  uVar23 = FUN_0379c600();
  if (lVar11 == 0) goto LAB_0379c3d0;
  uVar14 = FUN_03c746a0(lVar11,&stack0x000000b8,*(undefined8 *)puVar4);
  uVar21 = 0;
  if ((uVar14 & 1) != 0) {
    if (*(char *)(unaff_x29 + 0x40) == '\0') {
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      uVar21 = FUN_0697470c(in_stack_000000b8,0);
    }
    else {
      uVar21 = FUN_0379c96c(uVar19,uVar22,uVar23,lVar11);
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      FUN_06974748(in_stack_000000b8,0);
    }
  }
  uVar14 = FUN_03c746a0(lVar11,&stack0x000000b0,*(undefined8 *)puVar3);
  if ((uVar14 & 1) == 0) {
    in_stack_000000b0 = FUN_03c732ac(lVar11,*(undefined8 *)puVar2);
  }
  if (in_stack_000000b0 == 0) goto LAB_0379c3d0;
  iVar17 = iVar17 + 1;
  *(int *)(in_stack_000000b0 + 0x20) = (int)uVar19;
  *(int *)(in_stack_000000b0 + 0x24) = (int)uVar22;
  *(undefined4 *)(in_stack_000000b0 + 0x28) = uVar21;
  *(int *)(in_stack_000000b0 + 0x2c) = (int)uVar23;
  goto LAB_0379c1e8;
}


