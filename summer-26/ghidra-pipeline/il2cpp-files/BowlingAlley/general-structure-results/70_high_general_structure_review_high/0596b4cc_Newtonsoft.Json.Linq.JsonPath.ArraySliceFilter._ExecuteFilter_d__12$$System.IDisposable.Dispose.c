/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter.<ExecuteFilter>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 0596b4cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0596b528) */

long * Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12__System_IDisposable_Dispose
                 (void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x19;
  uint unaff_w21;
  long *plVar11;
  long *unaff_x25;
  ulong uVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if (!in_ZR) {
    FUN_052d44b0(&stack0x00000040,*(undefined8 *)PTR_DAT_0729b770);
                    /* WARNING: Subroutine does not return */
    FUN_033a8ff4();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar13 = *plVar9;
  __cxa_end_catch();
  FUN_052d44b0(&stack0x00000040,*(undefined8 *)PTR_DAT_0729b770);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar13);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar9 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727f888,
                                  *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar9 == (long *)0x0) goto LAB_0596b488;
    if (0 < (int)plVar9[3]) {
      uVar12 = 0;
      plVar11 = plVar9 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar13 = FUN_041e29a8(*(long *)(unaff_x19 + 0x28),uVar12 & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_0729b7b8), lVar13 == 0)) goto LAB_0596b488;
        lVar13 = FUN_0596ac90();
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
        }
        uVar5 = FUN_0593b434(lVar13,0,0);
        if ((uVar5 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          if (lVar13 != 0) {
            uVar8 = thunk_FUN_032e1da0(PTR_DAT_0729b7b8);
            lVar13 = FUN_041e29a8(lVar13,uVar12 & 0xffffffff,uVar8);
            if (lVar13 != 0) {
              plVar9 = *(long **)(lVar13 + 0x10);
              uVar3 = thunk_FUN_032e1da0(PTR_DAT_0729b7d8);
              uVar8 = 0;
              if (plVar9 != (long *)0x0) {
                uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              }
              uVar4 = thunk_FUN_032e1da0(PTR_DAT_072808d0);
              uVar8 = FUN_057aaeec(uVar3,uVar8,uVar4,0);
              thunk_FUN_032e1da0(PTR_DAT_07293e20);
              uVar3 = thunk_FUN_032a56a0();
              FUN_05966a20(uVar3,uVar8);
              uVar8 = thunk_FUN_032e1da0(PTR_DAT_0729b7e0);
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar3,uVar8);
            }
          }
          goto LAB_0596b488;
        }
        if ((lVar13 != 0) &&
           (lVar6 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
          uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar8,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *plVar11 = lVar13;
        thunk_FUN_0333a630(plVar11,lVar13);
        uVar12 = uVar12 + 1;
        plVar11 = plVar11 + 1;
      } while ((long)uVar12 < (long)(int)plVar9[3]);
    }
    if (unaff_x25 == (long *)0x0) goto LAB_0596b488;
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x958))();
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_041e3694(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_0729b7a8);
    puVar2 = PTR_DAT_0729b7c0;
    puVar1 = PTR_DAT_0729b788;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar12 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)puVar1), plVar9 = in_stack_00000030
          , (uVar12 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar13 = *in_stack_00000030;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0596b32c;
          }
          uVar12 = uVar12 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(in_stack_00000030,*(long *)puVar2,0);
LAB_0596b32c:
      unaff_x25 = (long *)(*(code *)*puVar7)(plVar9,unaff_x25,puVar7[1]);
    }
    FUN_052d44b0(&stack0x00000020,*(undefined8 *)PTR_DAT_0729b778);
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    if (unaff_x25 == (long *)0x0) {
LAB_0596b488:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x948))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x950));
  }
  return unaff_x25;
}


