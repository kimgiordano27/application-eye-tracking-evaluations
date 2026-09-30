/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 0507f8fc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0507fb88) */

int Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  int iVar14;
  long *plVar15;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  
code_r0x0507f8fc:
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar7 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  uVar7 = FUN_06fd2898(*(undefined8 *)PTR_DAT_091fa858,unaff_x19,uVar7,0);
  if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a106ac(uVar7,0);
LAB_0507f88c:
  do {
    plVar15 = (long *)*unaff_x22;
    unaff_w28 = unaff_w28 + 1;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0507ef1c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar15,*unaff_x23,0);
LAB_0507ef1c:
    iVar3 = (*(code *)*puVar5)(plVar15,puVar5[1]);
    if (iVar3 <= unaff_w28) {
      lVar9 = *in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (lVar9 != 0) {
        if (in_stack_00000088 != (undefined8 *)0x0) {
          iVar3 = *(int *)(lVar9 + 8);
          if (*(int *)(lVar9 + 8) <= *(int *)(lVar9 + 0xc)) {
            iVar3 = *(int *)(lVar9 + 0xc);
          }
          iVar4 = *(int *)(in_stack_00000088 + 1);
          if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
            iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
          }
          if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_08082b08(&stack0x00000088,0);
          return iVar4 + iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar15 = (long *)*unaff_x22;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *plVar15;
    lVar13 = *(long *)(unaff_x27 + 0x40);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x29) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0507ef88;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar15,*unaff_x29,0);
LAB_0507ef88:
    uVar7 = (*(code *)*puVar5)(plVar15,unaff_w28,puVar5[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar7,uVar7);
    }
    uVar10 = FUN_055ec514(lVar13,uVar7,*(undefined8 *)PTR_DAT_091fa838);
  } while ((uVar10 & 1) != 0);
  uVar7 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar7 = FUN_07186ef4(uVar7,0);
  uVar6 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49745_091fa7b8,0);
  uVar10 = FUN_0719124c(uVar7,uVar6,0);
  if ((uVar10 & 1) != 0) goto code_r0x0507f010;
  goto LAB_0507f0cc;
code_r0x0507f010:
  uVar7 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07186ef4(uVar7,0);
  plVar15 = (long *)*unaff_x22;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar9 = *plVar15;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0507f094;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar15,*unaff_x29,0);
LAB_0507f094:
  (*(code *)*puVar5)(plVar15,unaff_w28,puVar5[1]);
  iVar3 = FUN_0805c3f8();
  if ((iVar3 < 0) || (iVar3 != in_stack_00000008._4_4_)) goto LAB_0507f88c;
LAB_0507f0cc:
  plVar15 = (long *)*unaff_x22;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar9 = *plVar15;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0507f120;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar15,*unaff_x29,0);
LAB_0507f120:
  uVar7 = (*(code *)*puVar5)(plVar15,unaff_w28,puVar5[1]);
  uVar6 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07186ef4(uVar6,0);
  uVar10 = FUN_0805c5fc();
  unaff_x22 = in_stack_00000010;
  unaff_x23 = (long *)PTR_DAT_091a7758;
  unaff_x29 = (long *)PTR_DAT_091a7760;
  if ((uVar10 & 1) == 0) goto LAB_0507f88c;
  if (unaff_w24 == 4) {
    iVar3 = in_stack_00000018._4_4_;
    iVar4 = *(int *)(unaff_x27 + 0x90);
  }
  else {
    if (*(long *)(unaff_x27 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar10 = FUN_06c4a278(*(long *)(unaff_x27 + 0x98),uVar7,(long)&stack0x00000078 + 4,
                          *(undefined8 *)PTR_DAT_091fa820);
    lVar9 = *in_stack_00000020;
    iVar3 = in_stack_00000078._4_4_;
    if ((uVar10 & 1) == 0) {
      iVar3 = in_stack_00000018._4_4_;
    }
    if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)PTR_DAT_091a7798);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    iVar4 = iVar3;
    if (iVar3 <= *(int *)(lVar9 + 8)) goto LAB_0507f89c;
  }
  lVar9 = *(long *)(unaff_x27 + 0x60);
  if (lVar9 == 0) {
LAB_0507fb00:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar14 = 0;
  while (iVar14 < *(int *)(lVar9 + 0x18)) {
    plVar15 = (long *)FUN_05a39464(lVar9,iVar14,*(undefined8 *)PTR_DAT_091fa7d0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *plVar15;
    lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_0507f284;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = FUN_03d8f370(plVar15);
LAB_0507f284:
    lVar9 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar9 + 8),lVar13);
    (**(code **)(lVar9 + 8))(plVar15,uVar7);
    lVar9 = *(long *)(unaff_x27 + 0x60);
    iVar14 = iVar14 + 1;
    if (lVar9 == 0) goto LAB_0507fb00;
  }
  if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar9 = FUN_06c41bb0(*(long *)(unaff_x27 + 0x38),uVar7,*(undefined8 *)PTR_DAT_091fa830);
  in_stack_00000080 = lVar9;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar13 = in_stack_00000080;
  if (*(int *)(lVar9 + 8) == 0) {
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    FUN_0805d00c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    FUN_05e0b1c8(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_091fa840);
    lVar9 = FUN_05e0af90(&stack0x00000080,0,*(undefined8 *)PTR_DAT_091fa848);
    if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (DAT_0983c3d0 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983c3d0 = '\x01';
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    iVar4 = FUN_0717946c(0x10,uVar2,0);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    lVar9 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar13 + 8) + -1,*(undefined8 *)PTR_DAT_091fa848)
    ;
    if (*(int *)(lVar9 + 0x18) == unaff_w24) {
      if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar13 = *in_stack_00000020;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      iVar14 = *(int *)(lVar13 + 8);
      if (*(int *)(lVar13 + 8) <= *(int *)(lVar13 + 0xc)) {
        iVar14 = *(int *)(lVar13 + 0xc);
      }
      iVar1 = *(int *)(in_stack_00000088 + 1);
      if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
        iVar1 = *(int *)((long)in_stack_00000088 + 0xc);
      }
      if (iVar1 + iVar14 <= *(int *)(lVar9 + 0x14) - *(int *)(lVar9 + 8)) goto LAB_0507f5ac;
    }
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    FUN_0805d00c(&stack0x00000030,unaff_w24,iVar4,3,iVar3,0);
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    FUN_05e0b1c8(&stack0x00000080,&stack0x00000050,*(undefined8 *)PTR_DAT_091fa840);
    lVar9 = in_stack_00000080;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    lVar9 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar9 + 8) + -1,*(undefined8 *)PTR_DAT_091fa848);
    if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (DAT_0983c3d0 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983c3d0 = '\x01';
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    iVar4 = FUN_0717946c(0x10,uVar2,0);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  iVar14 = *(int *)(lVar9 + 8);
  if ((iVar4 < iVar14) && (*(int *)(lVar9 + 0xc) < iVar14)) {
    *(int *)(lVar9 + 0xc) = iVar14;
  }
  *(int *)(lVar9 + 8) = iVar4;
LAB_0507f5ac:
  lVar9 = in_stack_00000080;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091fa850 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar9 = FUN_05e0af90(&stack0x00000080,*(int *)(lVar9 + 8) + -1,*(undefined8 *)PTR_DAT_091fa848);
  lVar13 = *in_stack_00000020;
  if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar4 = *(int *)(lVar13 + 8);
  if (*(int *)(lVar13 + 8) <= *(int *)(lVar13 + 0xc)) {
    iVar4 = *(int *)(lVar13 + 0xc);
  }
  iVar14 = *(int *)(in_stack_00000088 + 1);
  if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
    iVar14 = *(int *)((long)in_stack_00000088 + 0xc);
  }
  if (DAT_0983c3d5 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a7798);
    DAT_0983c3d5 = '\x01';
  }
  plVar15 = (long *)(lVar9 + 0x10);
  lVar13 = *plVar15;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar1 = *(int *)(lVar13 + 8) + iVar14 + iVar4;
  in_stack_00000018._4_4_ = iVar3;
  if (*(int *)(lVar13 + 0x10) < iVar1) {
    if ((*(int *)(lVar13 + 0x14) < iVar1) || (*(int *)(lVar13 + 0x14) <= *(int *)(lVar13 + 0x10))) {
      lVar9 = *in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      unaff_x29 = (long *)PTR_DAT_091a7760;
      unaff_x23 = (long *)PTR_DAT_091a7758;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      iVar3 = *(int *)(lVar9 + 8);
      if (*(int *)(lVar9 + 8) <= *(int *)(lVar9 + 0xc)) {
        iVar3 = *(int *)(lVar9 + 0xc);
      }
      iVar4 = *(int *)(in_stack_00000088 + 1);
      if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
        iVar4 = *(int *)((long)in_stack_00000088 + 0xc);
      }
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar4 + iVar3);
      uVar7 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,&stack0x00000030);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uStack000000000000002c = *(undefined4 *)(*plVar15 + 8);
      uVar6 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,(long)&stack0x00000028 + 4);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uStack0000000000000028 = *(undefined4 *)(*plVar15 + 0x10);
      uVar8 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091a0d08,&stack0x00000028);
      uVar7 = FUN_06fd28dc(*(undefined8 *)PTR_DAT_091fa860,uVar7,uVar6,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_08a106ac(uVar7,0);
      goto LAB_0507f88c;
    }
    if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08082ca4(plVar15,iVar14 + iVar4,0);
  }
  if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar11 = (long *)*plVar15;
  iVar3 = *(int *)(in_stack_00000088 + 1);
  if (*(int *)(in_stack_00000088 + 1) <= *(int *)((long)in_stack_00000088 + 0xc)) {
    iVar3 = *(int *)((long)in_stack_00000088 + 0xc);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_08a06cdc((long)(int)plVar11[1] + *plVar11,*in_stack_00000088,(long)iVar3,0);
  plVar11 = (long *)*plVar15;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar3 = (int)plVar11[1] + iVar3;
  *(int *)(plVar11 + 1) = iVar3;
  puVar5 = (undefined8 *)*in_stack_00000020;
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar4 = *(int *)(puVar5 + 1);
  if (*(int *)(puVar5 + 1) <= *(int *)((long)puVar5 + 0xc)) {
    iVar4 = *(int *)((long)puVar5 + 0xc);
  }
  FUN_08a06cdc(*plVar11 + (long)iVar3,*puVar5,(long)iVar4,0);
  lVar13 = *plVar15;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + iVar4;
  *(short *)(lVar9 + 2) = *(short *)(lVar9 + 2) + 1;
  lVar9 = *(long *)(unaff_x27 + 0x60);
  if (lVar9 == 0) {
LAB_0507fb08:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar3 = 0;
  while (unaff_x23 = (long *)PTR_DAT_091a7758, unaff_x29 = (long *)PTR_DAT_091a7760,
        iVar3 < *(int *)(lVar9 + 0x18)) {
    plVar15 = (long *)FUN_05a39464(lVar9,iVar3,*(undefined8 *)PTR_DAT_091fa7d0);
    lVar9 = *in_stack_00000020;
    if (*(int *)(*(long *)PTR_DAT_091a7798 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (in_stack_00000088 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar9 = *plVar15;
    lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_0507f83c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = FUN_03d8f370(plVar15);
LAB_0507f83c:
    lVar9 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar9 + 8),lVar13);
    (**(code **)(lVar9 + 8))(plVar15,uVar7);
    lVar9 = *(long *)(unaff_x27 + 0x60);
    iVar3 = iVar3 + 1;
    if (lVar9 == 0) goto LAB_0507fb08;
  }
  goto LAB_0507f88c;
LAB_0507f89c:
  in_stack_00000030 = uVar7;
  unaff_x19 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091adc10,&stack0x00000030);
  unaff_x29 = (long *)PTR_DAT_091a7760;
  unaff_x23 = (long *)PTR_DAT_091a7758;
  uVar7 = **(undefined8 **)(unaff_x20 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  param_1 = (long *)FUN_07186ef4(uVar7,0);
  in_stack_00000018._4_4_ = iVar3;
  goto code_r0x0507f8fc;
}


