/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0596ad3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
                 (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x20;
  uint unaff_w21;
  long *plVar12;
  long unaff_x23;
  long unaff_x24;
  long lVar13;
  long *plVar14;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  thunk_FUN_032e1da0(PTR_DAT_0729b7b0);
  thunk_FUN_032e1da0(PTR_DAT_0729b7b8);
  thunk_FUN_032e1da0(PTR_DAT_0729b7c0);
  thunk_FUN_032e1da0(PTR_DAT_07281320);
  thunk_FUN_032e1da0(PTR_DAT_0729b7c8);
  thunk_FUN_032e1da0(PTR_DAT_0727f888);
  thunk_FUN_032e1da0(PTR_DAT_07279510);
  *(undefined1 *)(unaff_x20 + 0x6cd) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if ((unaff_x24 == 0) && (unaff_x23 == 0)) {
    uVar3 = FUN_0597c5cc();
    if (*(int *)(*(long *)PTR_DAT_07281320 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_07281320);
    }
    plVar4 = (long *)FUN_0595c42c(uVar3,unaff_w21 & 1,unaff_w29 & 1,0);
    return plVar4;
  }
  lVar13 = *(long *)(unaff_x19 + 0x18);
  plVar4 = (long *)0x0;
  if (lVar13 != 0) {
    if (unaff_x24 == 0) {
      plVar4 = (long *)FUN_058613b0(lVar13,0);
    }
    else {
      uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072938a8);
      FUN_058616e8(uVar3,lVar13,0);
      plVar4 = (long *)(**(code **)(unaff_x24 + 0x18))
                                 (*(undefined8 *)(unaff_x24 + 0x40),uVar3,
                                  *(undefined8 *)(unaff_x24 + 0x28));
    }
    uVar5 = FUN_0586160c(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if ((unaff_w21 & 1) == 0) {
        return (long *)0x0;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7d0);
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_072808d0);
      uVar3 = FUN_057aaeec(uVar3,uVar11,uVar6,0);
      thunk_FUN_032e1da0(PTR_DAT_0727ed90);
      uVar6 = thunk_FUN_032a56a0();
      FUN_0586de9c(uVar6,uVar3,0);
      goto LAB_0596b014;
    }
  }
  puVar2 = PTR_DAT_0729b7c8;
  plVar14 = *(long **)(unaff_x19 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_0596b488;
  lVar13 = *plVar14;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0729b7c8) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0596af1c;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_0729b7c8,0);
LAB_0596af1c:
  uVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
  if (unaff_x23 == 0) {
    if (plVar4 == (long *)0x0) goto LAB_0596b488;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x2a8))
                               (plVar4,uVar3,0,unaff_w29 & 1,*(undefined8 *)(*plVar4 + 0x2b0));
  }
  else {
    plVar4 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (*(undefined8 *)(unaff_x23 + 0x40),plVar4,uVar3,unaff_w29 & 1,
                                *(undefined8 *)(unaff_x23 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_0593b434(plVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if ((unaff_w21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar4 = *(long **)(unaff_x19 + 0x10);
LAB_0596afac:
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_0729b7d8);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_072808d0);
    uVar3 = FUN_057aaeec(uVar6,uVar3,uVar11,0);
    thunk_FUN_032e1da0(PTR_DAT_07293e20);
    uVar6 = thunk_FUN_032a56a0();
    FUN_05966a20(uVar6,uVar3);
LAB_0596b014:
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7e0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6,uVar3);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_041e3694(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_0729b7a0);
    puVar1 = PTR_DAT_0729b780;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar5 = FUN_052d44b4(&stack0x00000040,*(undefined8 *)puVar1), plVar14 = in_stack_00000050
          , (uVar5 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar13 = *in_stack_00000050;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0596b0cc;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(in_stack_00000050,*(long *)puVar2,0);
LAB_0596b0cc:
      uVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8(uVar3,uVar3);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x7f8))
                                 (plVar4,uVar3,0x30,*(undefined8 *)(*plVar4 + 0x800));
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_0593b434(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((unaff_w21 & 1) == 0) {
          FUN_052d44b0(&stack0x00000040,*(undefined8 *)PTR_DAT_0729b770);
          return (long *)0x0;
        }
        uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7d8);
        uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        uVar11 = thunk_FUN_032e1da0(PTR_DAT_072808d0);
        uVar3 = FUN_057aaeec(uVar3,uVar6,uVar11,0);
        thunk_FUN_032e1da0(PTR_DAT_07293e20);
        uVar6 = thunk_FUN_032a56a0();
        FUN_05932744(uVar6,uVar3,0);
        FUN_0595b54c(uVar6,0x80131522,0);
        uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7e0);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar6,uVar3);
      }
    }
    FUN_052d44b0(&stack0x00000040,*(undefined8 *)PTR_DAT_0729b770);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar14 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727f888,
                                   *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar14 == (long *)0x0) goto LAB_0596b488;
    if (0 < (int)plVar14[3]) {
      uVar5 = 0;
      plVar12 = plVar14 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar13 = FUN_041e29a8(*(long *)(unaff_x19 + 0x28),uVar5 & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_0729b7b8), lVar13 == 0)) goto LAB_0596b488;
        lVar13 = FUN_0596ac90();
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
        }
        uVar8 = FUN_0593b434(lVar13,0,0);
        if ((uVar8 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          if (lVar13 == 0) goto LAB_0596b488;
          uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7b8);
          lVar13 = FUN_041e29a8(lVar13,uVar5 & 0xffffffff,uVar3);
          if (lVar13 == 0) goto LAB_0596b488;
          plVar4 = *(long **)(lVar13 + 0x10);
          goto LAB_0596afac;
        }
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
          uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar3,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *plVar12 = lVar13;
        thunk_FUN_0333a630(plVar12,lVar13);
        uVar5 = uVar5 + 1;
        plVar12 = plVar12 + 1;
      } while ((long)uVar5 < (long)(int)plVar14[3]);
    }
    if (plVar4 == (long *)0x0) goto LAB_0596b488;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x958))(plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x960))
    ;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_041e3694(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_0729b7a8);
    puVar1 = PTR_DAT_0729b7c0;
    puVar2 = PTR_DAT_0729b788;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)puVar2), plVar14 = in_stack_00000030
          , (uVar5 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar13 = *in_stack_00000030;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0596b32c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(in_stack_00000030,*(long *)puVar1,0);
LAB_0596b32c:
      plVar4 = (long *)(*(code *)*puVar7)(plVar14,plVar4,puVar7[1]);
    }
    FUN_052d44b0(&stack0x00000020,*(undefined8 *)PTR_DAT_0729b778);
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return plVar4;
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x948))(plVar4,*(undefined8 *)(*plVar4 + 0x950));
    return plVar4;
  }
LAB_0596b488:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


