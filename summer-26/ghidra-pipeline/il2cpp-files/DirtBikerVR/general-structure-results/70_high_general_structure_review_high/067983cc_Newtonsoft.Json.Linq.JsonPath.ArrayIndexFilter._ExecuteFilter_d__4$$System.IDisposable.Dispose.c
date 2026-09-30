/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 067983cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06798808) */
/* WARNING: Removing unreachable block (ram,0x0679880c) */

long * Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__System_IDisposable_Dispose
                 (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  int iVar15;
  uint unaff_w21;
  long *plVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  uint unaff_w28;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  long *in_stack_00000050;
  
  (*(code *)*param_1)();
  if (unaff_x25 == (long *)0x0) goto LAB_0679886c;
  plVar4 = (long *)(**(code **)(*unaff_x25 + 0x2e8))();
  puVar1 = PTR_DAT_08486760;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_067690d8(plVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_04de90b8(&stack0x00000010,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_084ab458);
      puVar3 = PTR_DAT_084ab480;
      puVar2 = PTR_DAT_084ab438;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000010 = 0;
      plVar7 = plVar4;
      in_stack_00000018 = &stack0x00000040;
      do {
        plVar4 = plVar7;
        uVar5 = FUN_061c1964(&stack0x00000040,*(undefined8 *)puVar2);
        plVar16 = in_stack_00000050;
        if ((uVar5 & 1) == 0) {
          iVar15 = 0x11;
          goto LAB_067985c0;
        }
        if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar13 = *in_stack_00000050;
        uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06798554;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000050,*(long *)puVar3,0);
LAB_06798554:
        uVar11 = (*(code *)*puVar6)(plVar16,puVar6[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(uVar11,uVar11);
        }
        plVar7 = (long *)(**(code **)(*plVar4 + 0x7e8))
                                   (plVar4,uVar11,0x30,*(undefined8 *)(*plVar4 + 0x7f0));
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_067690d8(plVar7,0,0);
      } while ((uVar5 & 1) == 0);
      if ((unaff_w21 & 1) != 0) {
        uVar11 = thunk_FUN_03af1434(PTR_DAT_084ab490);
        uVar10 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
        uVar12 = thunk_FUN_03af1434(PTR_DAT_0848f320);
        uVar11 = FUN_065cddf0(uVar11,uVar10,uVar12,0);
        thunk_FUN_03af1434(PTR_DAT_084a2d10);
        uVar10 = thunk_FUN_03ac74bc();
        FUN_06793d30(uVar10,uVar11);
        uVar11 = thunk_FUN_03af1434(PTR_DAT_084ab498);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar10,uVar11);
      }
      iVar15 = 0x1a;
LAB_067985c0:
      lVar13 = in_stack_00000010;
      FUN_061c1960(in_stack_00000018,*(undefined8 *)PTR_DAT_084ab428);
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8(lVar13);
      }
      if ((iVar15 != 0x11) && (iVar15 != 0))
      goto Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__MoveNext;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,
                                    *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
      if (plVar7 == (long *)0x0) goto LAB_0679886c;
      if (0 < (int)plVar7[3]) {
        uVar5 = 0;
        plVar16 = plVar7 + 4;
        do {
          puVar1 = PTR_DAT_08486760;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar13 = FUN_04de82e0(*(long *)(unaff_x19 + 0x28),uVar5 & 0xffffffff,
                                    *(undefined8 *)PTR_DAT_084ab470), lVar13 == 0))
          goto LAB_0679886c;
          lVar13 = FUN_067980f8(lVar13,unaff_x24,unaff_x23,unaff_w21 & 1,unaff_w28 & 1);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)(puVar1 + 0xe0));
          }
          uVar8 = FUN_067690d8(lVar13,0,0);
          if ((uVar8 & 1) != 0) {
            if ((unaff_w21 & 1) == 0)
            goto Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__MoveNext;
            lVar13 = *(long *)(unaff_x19 + 0x28);
            if (lVar13 == 0) goto LAB_0679886c;
            uVar11 = thunk_FUN_03af1434(PTR_DAT_084ab470);
            lVar13 = FUN_04de82e0(lVar13,uVar5 & 0xffffffff,uVar11);
            if (lVar13 == 0) goto LAB_0679886c;
            plVar4 = *(long **)(lVar13 + 0x10);
            goto LAB_06798890;
          }
          if ((lVar13 != 0) &&
             (lVar9 = thunk_FUN_03ac73c0(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar11 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar11,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          *plVar16 = lVar13;
          thunk_FUN_03afed3c(plVar16,lVar13);
          uVar5 = uVar5 + 1;
          plVar16 = plVar16 + 1;
        } while ((long)uVar5 < (long)(int)plVar7[3]);
      }
      if (plVar4 == (long *)0x0) goto LAB_0679886c;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x978))
                                 (plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x980));
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_04de90b8(&stack0x00000028,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_084ab460);
      puVar2 = PTR_DAT_084ab478;
      puVar1 = PTR_DAT_084ab440;
      in_stack_00000010 = 0;
      in_stack_00000018 = (undefined8 *)&stack0x00000028;
      while (uVar5 = FUN_061c1964(&stack0x00000028,*(undefined8 *)puVar1),
            plVar7 = in_stack_00000038, lVar13 = in_stack_00000010, (uVar5 & 1) != 0) {
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar13 = *in_stack_00000038;
        uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_067987c8;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)puVar2,0);
LAB_067987c8:
        plVar4 = (long *)(*(code *)*puVar6)(plVar7,plVar4,puVar6[1]);
      }
      FUN_061c1960(in_stack_00000018,*(undefined8 *)PTR_DAT_084ab430);
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8(lVar13);
      }
    }
    if (*(char *)(unaff_x19 + 0x38) != '\0') {
      if (plVar4 == (long *)0x0) {
LAB_0679886c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x968))(plVar4,*(undefined8 *)(*plVar4 + 0x970));
    }
  }
  else {
    if ((unaff_w21 & 1) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0x10);
LAB_06798890:
      uVar10 = thunk_FUN_03af1434(PTR_DAT_084ab490);
      uVar11 = 0;
      if (plVar4 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      uVar12 = thunk_FUN_03af1434(PTR_DAT_0848f320);
      uVar11 = FUN_065cddf0(uVar10,uVar11,uVar12,0);
      thunk_FUN_03af1434(PTR_DAT_084a2d10);
      uVar10 = thunk_FUN_03ac74bc();
      FUN_06793d30(uVar10,uVar11);
      uVar11 = thunk_FUN_03af1434(PTR_DAT_084ab498);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar10,uVar11);
    }
Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__MoveNext:
    plVar4 = (long *)0x0;
  }
  return plVar4;
}


