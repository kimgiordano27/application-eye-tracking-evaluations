/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0379b95c
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


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_AppPerfFrameStats>(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long *unaff_x21;
  int iVar16;
  long unaff_x22;
  long unaff_x23;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x25;
  uint unaff_w26;
  ulong uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
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
  
code_r0x0379b95c:
  plVar7 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de30,
                                (*(int *)(unaff_x23 + 0x18) - in_stack_00000058) + 1);
  if ((int)unaff_w26 < 1) {
    uVar15 = 0;
  }
  else {
    uVar19 = 0;
    uVar15 = 0;
    do {
      lVar12 = *unaff_x21;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0379b9ec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b9ec:
      (*(code *)*puVar8)(&stack0x00000040);
      if (in_stack_00000060 == 0) goto LAB_0379c3d0;
      uVar13 = FUN_04357e6c(in_stack_00000060,uVar19 & 0xffffffff,*(undefined8 *)PTR_DAT_06f71828);
      if ((uVar13 & 1) == 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar19) goto LAB_0379c3d4;
        if (plVar7 == (long *)0x0) goto LAB_0379c3d0;
        lVar12 = *(long *)(unaff_x23 + uVar19 * 8 + 0x20);
        if ((lVar12 != 0) &&
           (lVar9 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_0379c3d8;
        if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_0379c3d4;
        lVar9 = (long)(int)uVar15;
        plVar7[lVar9 + 4] = lVar12;
        uVar15 = uVar15 + 1;
        thunk_FUN_03048534(plVar7 + lVar9 + 4,lVar12);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != unaff_w26);
  }
  lVar12 = *unaff_x21;
  uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0379bae8;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bae8:
  (*(code *)*puVar8)(&stack0x00000040);
  if (in_stack_00000060 == 0) goto LAB_0379c3d0;
  uVar19 = FUN_04357e6c(in_stack_00000060,unaff_w26,*(undefined8 *)PTR_DAT_06f71828);
  if ((uVar19 & 1) == 0) {
    if ((*(long *)(unaff_x22 + 0x30) == 0) || (plVar7 == (long *)0x0)) goto LAB_0379c3d0;
    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x20);
    if ((lVar12 != 0) &&
       (lVar9 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0379c3d8:
      uVar18 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                         ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar18,0);
    }
    if (*(uint *)(plVar7 + 3) <= uVar15) {
LAB_0379c3d4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar9 = (long)(int)uVar15;
    plVar7[lVar9 + 4] = lVar12;
    uVar15 = uVar15 + 1;
    thunk_FUN_03048534(plVar7 + lVar9 + 4,lVar12);
  }
  uVar10 = *(uint *)(unaff_x23 + 0x18);
  if ((int)unaff_w26 < (int)uVar10) {
    plVar17 = (long *)(in_stack_00000008 + (long)(int)unaff_w26 * 8);
    do {
      if (uVar10 <= unaff_w26) goto LAB_0379c3d4;
      if (plVar7 == (long *)0x0) goto LAB_0379c3d0;
      lVar12 = *plVar17;
      if ((lVar12 != 0) &&
         (lVar9 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0379c3d8;
      if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_0379c3d4;
      lVar9 = (long)(int)uVar15;
      plVar7[lVar9 + 4] = lVar12;
      uVar15 = uVar15 + 1;
      thunk_FUN_03048534(plVar7 + lVar9 + 4,lVar12);
      uVar10 = *(uint *)(unaff_x23 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      plVar17 = plVar17 + 1;
    } while ((int)unaff_w26 < (int)uVar10);
  }
  if (in_stack_000000e0 != 0) {
    thunk_FUN_068cd66c(in_stack_000000e0,plVar7,0);
    puVar2 = PTR_DAT_06f6d618;
LAB_0379bbfc:
    uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000d8,*(undefined8 *)PTR_DAT_06f967d0);
    if ((uVar19 & 1) != 0) {
      lVar12 = *unaff_x21;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar19 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0379bc70;
          }
          uVar19 = uVar19 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar19 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bc70:
      (*(code *)*puVar8)(&stack0x00000040);
      if ((uStack0000000000000048 & 1) == 0) {
        lVar12 = *unaff_x21;
        uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar19 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0379bce4;
            }
            uVar19 = uVar19 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar19 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bce4:
        (*(code *)*puVar8)(&stack0x00000040);
        if ((uStack0000000000000048 >> 1 & 1) != 0) goto LAB_0379bd00;
      }
      else {
LAB_0379bd00:
        if ((*(long *)(unaff_x22 + 0x48) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x38), lVar12 == 0)) goto LAB_0379c3d0;
        iVar16 = *(int *)(lVar12 + 0x38);
        if (iVar16 != 0) {
          if (iVar16 != 2) goto LAB_0379bef0;
          if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar19 = FUN_068b7080(0);
          lVar12 = in_stack_000000d8;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)puVar2);
          }
          if ((uVar19 & 1) == 0) {
            FUN_068fd4b4(lVar12,0);
          }
          else {
            FUN_068fd3f8();
          }
          lVar12 = FUN_03c732ac(unaff_x25,*(undefined8 *)PTR_DAT_06f70f30);
          lVar9 = *unaff_x21;
          uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar19 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto FUN_0379be10;
              }
              uVar19 = uVar19 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar19 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
FUN_0379be10:
          (*(code *)*puVar8)(&stack0x00000040);
          if ((CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) ||
             (FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),
                           0), lVar12 == 0)) goto LAB_0379c3d0;
          FUN_0697713c(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,lVar12,0
                      );
          lVar9 = *unaff_x21;
          uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar19 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0379bea8;
              }
              uVar19 = uVar19 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar19 != 0);
          }
          puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379bea8:
          (*(code *)*puVar8)(&stack0x00000040);
          if (CONCAT44(uStack0000000000000044,uStack0000000000000040) == 0) goto LAB_0379c3d0;
          FUN_068d6878(&stack0x00000040,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
          FUN_06977274(fStack000000000000004c + fStack000000000000004c,
                       fStack0000000000000050 + fStack0000000000000050,
                       fStack0000000000000054 + fStack0000000000000054,lVar12,0);
          goto LAB_0379bef0;
        }
      }
      lVar12 = in_stack_000000d8;
      if ((in_stack_000000e8 == 0) || (uVar18 = FUN_068d3dbc(in_stack_000000e8,0), lVar12 == 0))
      goto LAB_0379c3d0;
      FUN_06976c80(lVar12,uVar18,0);
    }
LAB_0379bef0:
    if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar19 = FUN_068b7080(0);
    if (((uVar19 & 1) != 0) &&
       (uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000c0,*(undefined8 *)PTR_DAT_06f967b8),
       (uVar19 & 1) != 0)) {
      if (in_stack_000000c0 == 0) goto LAB_0379c3d0;
      *(undefined1 *)(in_stack_000000c0 + 0x20) = 1;
    }
    uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000d0,*(undefined8 *)PTR_DAT_06f967c0);
    if ((uVar19 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
      *(undefined8 *)(in_stack_000000d0 + 0x20) =
           *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x20);
      thunk_FUN_03048534();
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
      *(undefined8 *)(in_stack_000000d0 + 0x30) =
           *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x30);
      thunk_FUN_03048534();
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
      *(undefined8 *)(in_stack_000000d0 + 0x38) =
           *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x38);
      thunk_FUN_03048534();
      lVar12 = *(long *)(unaff_x22 + 0x30);
      if ((lVar12 == 0) || (in_stack_000000d0 == 0)) goto LAB_0379c3d0;
      *(uint *)(in_stack_000000d0 + 0x5c) =
           *(int *)(lVar12 + 0x5c) - (uint)(0 < *(int *)(lVar12 + 0x5c));
      uVar1 = *(undefined1 *)(lVar12 + 0x80);
      *(undefined4 *)(in_stack_000000d0 + 0xa0) = 1;
      *(undefined1 *)(in_stack_000000d0 + 0x80) = uVar1;
    }
    lVar12 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0379c03c;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379c03c:
    (*(code *)*puVar8)(&stack0x00000040);
    puVar5 = PTR_DAT_06f96800;
    if (uStack0000000000000048 != 0) {
      if ((*(long *)(unaff_x22 + 0x48) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x38), lVar12 == 0)) goto LAB_0379c3d0;
      if (*(int *)(lVar12 + 0x38) == 1) {
        FUN_068f8b44(unaff_x25,0,0);
      }
    }
    iVar16 = in_stack_000000f8._4_4_ + 1;
    lVar12 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
    in_stack_000000f8._4_4_ = iVar16;
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0379b344;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b344:
    iVar6 = (*(code *)*puVar8)();
    if (iVar6 <= iVar16) {
      if (*(char *)(unaff_x22 + 0x40) == '\0') {
        uVar18 = 0;
      }
      else {
        if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_0379c3d0;
        FUN_068f5db8(*(long *)(unaff_x22 + 0x30),0);
        uVar18 = FUN_0379c3e4();
      }
      uVar21 = FUN_0379c4ec(in_stack_00000010);
      puVar4 = PTR_DAT_06f967f0;
      puVar3 = PTR_DAT_06f967c8;
      puVar2 = PTR_DAT_06f96668;
      iVar16 = 0;
      goto LAB_0379c1e8;
    }
    if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_0379c3d0;
    uVar18 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar19 = FUN_068f8810(uVar18,0,0);
    lVar12 = *(long *)(unaff_x22 + 0x30);
    if (lVar12 == 0) goto LAB_0379c3d0;
    if ((uVar19 & 1) == 0) {
      uVar18 = FUN_068f5db8(lVar12,0);
    }
    else {
      uVar18 = *(undefined8 *)(lVar12 + 0x30);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    unaff_x25 = FUN_03d29674(uVar18,*(undefined8 *)PTR_DAT_06f704c8);
    uVar18 = FUN_05aec914((long)&stack0x000000f8 + 4,0);
    uVar18 = FUN_059687dc(*(undefined8 *)PTR_DAT_06f96820,uVar18,0);
    if (unaff_x25 == 0) goto LAB_0379c3d0;
    FUN_068fc96c(unaff_x25,uVar18,0);
    lVar12 = FUN_068f8a88(unaff_x25,0);
    uVar18 = FUN_068f8a88(in_stack_00000010,0);
    if (lVar12 == 0) goto LAB_0379c3d0;
    FUN_06904d10(lVar12,uVar18,0,0);
    lVar12 = FUN_068f8a88(unaff_x25,0);
    lVar9 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0379b4a8;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b4a8:
    (*(code *)*puVar8)(&stack0x00000040);
    if (lVar12 == 0) goto LAB_0379c3d0;
    FUN_06903914(fStack000000000000004c,fStack0000000000000050,fStack0000000000000054,lVar12,0);
    lVar12 = FUN_068f8a88(unaff_x25,0);
    if (DAT_0738e663 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d7e8);
      DAT_0738e663 = '\x01';
    }
    if (lVar12 == 0) goto LAB_0379c3d0;
    puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
    UnityEngine_UIElements_BaseVerticalCollectionView_Selection__AddIndex
              (*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar12,0);
    lVar12 = FUN_068f8a88(unaff_x25,0);
    if (DAT_0738e666 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e666 = '\x01';
    }
    if (lVar12 == 0) goto LAB_0379c3d0;
    lVar9 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    FUN_06904aa4(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                 *(undefined4 *)(lVar9 + 0x14),lVar12,0);
    FUN_068f8b44(unaff_x25,1,0);
    if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_0379c3d0;
    uVar19 = FUN_068f9b78(*(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x30),0,0);
    if (((uVar19 & 1) != 0) &&
       (uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000f0,*(undefined8 *)PTR_DAT_06f967e8),
       (uVar19 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar19 = FUN_068b7080(0);
      uVar18 = in_stack_000000f0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar2);
      }
      if ((uVar19 & 1) == 0) {
        FUN_068fd4b4(uVar18,0);
      }
      else {
        FUN_068fd3f8();
      }
    }
    lVar12 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0379b678;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b678:
    (*(code *)*puVar8)(&stack0x00000040);
    lVar12 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    uVar18 = FUN_068fc8bc(unaff_x25,0);
    if (lVar12 == 0) goto LAB_0379c3d0;
    FUN_068fc96c(lVar12,uVar18,0);
    uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000e8,*(undefined8 *)PTR_DAT_06f967d8);
    lVar12 = in_stack_000000e8;
    if ((uVar19 & 1) == 0) {
      uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000c8,*(undefined8 *)PTR_DAT_06f967f8);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_00000018._4_4_ & 1) == 0) {
          if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_0379c3d0;
          uVar18 = FUN_068f5db8(*(long *)(unaff_x22 + 0x30),0);
          if (*(int *)(*(long *)PTR_DAT_06f95780 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f95780);
          }
          FUN_037be8ac(6,*(undefined8 *)PTR_DAT_06f96838,uVar18,0);
        }
        lVar12 = in_stack_000000c8;
        lVar9 = *unaff_x21;
        uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar19 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0379b820;
            }
            uVar19 = uVar19 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar19 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b820:
        (*(code *)*puVar8)(&stack0x00000040);
        if (lVar12 == 0) goto LAB_0379c3d0;
        FUN_068d55d0(lVar12,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
        in_stack_00000018._4_4_ = 1;
      }
    }
    else {
      lVar9 = *unaff_x21;
      uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar19 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0379b7e8;
          }
          uVar19 = uVar19 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar19 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b7e8:
      (*(code *)*puVar8)(&stack0x00000040);
      if (lVar12 == 0) goto LAB_0379c3d0;
      FUN_068d3df8(lVar12,CONCAT44(uStack0000000000000044,uStack0000000000000040),0);
    }
    uVar19 = FUN_03c746a0(unaff_x25,&stack0x000000e0,*(undefined8 *)PTR_DAT_06f967e0);
    if ((uVar19 & 1) != 0) goto code_r0x0379b86c;
    goto LAB_0379bbfc;
  }
  goto LAB_0379c3d0;
LAB_0379c1e8:
  lVar12 = *unaff_x21;
  uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0379c234;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379c234:
  iVar6 = (*(code *)*puVar8)();
  if (iVar6 <= iVar16) {
    if (*(int *)(*(long *)PTR_DAT_06f6ddb8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_069715b0(0);
    if (*(long *)(unaff_x22 + 0x48) == 0) goto LAB_0379c3d0;
    uVar18 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar12 = FUN_037ced4c(*(long *)(unaff_x22 + 0x48),0);
    if (lVar12 == 0) goto LAB_0379c3d0;
    in_stack_00000030 = *(undefined8 *)(lVar12 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar12 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar12 + 0x20);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar21 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f96648);
    FUN_03796e74(uVar21,uVar18,&stack0x00000020,in_stack_00000010,uVar22);
    if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_0379c3d0;
    FUN_03799c84(*(long *)(unaff_x22 + 0x28),uVar21);
    if (*(char *)(unaff_x22 + 0x41) != '\0') {
      if ((*(long *)(unaff_x22 + 0x30) == 0) ||
         (lVar12 = FUN_068f5db8(*(long *)(unaff_x22 + 0x30),0), lVar12 == 0)) {
LAB_0379c3d0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_068f8b44(lVar12,0,0);
    }
    return 0;
  }
  lVar12 = FUN_068f8a88(in_stack_00000010,0);
  if ((lVar12 == 0) || (lVar12 = FUN_06906070(lVar12,iVar16,0), lVar12 == 0)) goto LAB_0379c3d0;
  lVar12 = FUN_068f5db8(lVar12,0);
  uVar22 = FUN_0379c600();
  if (lVar12 == 0) goto LAB_0379c3d0;
  uVar19 = FUN_03c746a0(lVar12,&stack0x000000b8,*(undefined8 *)puVar4);
  uVar20 = 0;
  if ((uVar19 & 1) != 0) {
    if (*(char *)(unaff_x22 + 0x40) == '\0') {
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      uVar20 = FUN_0697470c(in_stack_000000b8,0);
    }
    else {
      uVar20 = FUN_0379c96c(uVar18,uVar21,uVar22,lVar12);
      if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
      FUN_06974748(in_stack_000000b8,0);
    }
  }
  uVar19 = FUN_03c746a0(lVar12,&stack0x000000b0,*(undefined8 *)puVar3);
  if ((uVar19 & 1) == 0) {
    in_stack_000000b0 = FUN_03c732ac(lVar12,*(undefined8 *)puVar2);
  }
  if (in_stack_000000b0 == 0) goto LAB_0379c3d0;
  iVar16 = iVar16 + 1;
  *(int *)(in_stack_000000b0 + 0x20) = (int)uVar18;
  *(int *)(in_stack_000000b0 + 0x24) = (int)uVar21;
  *(undefined4 *)(in_stack_000000b0 + 0x28) = uVar20;
  *(int *)(in_stack_000000b0 + 0x2c) = (int)uVar22;
  goto LAB_0379c1e8;
code_r0x0379b86c:
  lVar12 = *unaff_x21;
  uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0379b8c4;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b8c4:
  (*(code *)*puVar8)(&stack0x00000040);
  if ((in_stack_00000060 == 0) || (unaff_x23 == 0)) goto LAB_0379c3d0;
  lVar12 = *unaff_x21;
  uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
  unaff_w26 = *(int *)(in_stack_00000060 + 0x18) - 1;
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f96808) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0379b944;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_0379b944:
  (*(code *)*puVar8)(&stack0x00000040);
  goto code_r0x0379b95c;
}


