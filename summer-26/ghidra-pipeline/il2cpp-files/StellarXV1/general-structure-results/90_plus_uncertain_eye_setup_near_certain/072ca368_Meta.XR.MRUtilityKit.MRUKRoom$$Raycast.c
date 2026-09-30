/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 072ca368
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072ca10c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long *plVar18;
  long *unaff_x24;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000048;
  int in_stack_00000090;
  long *in_stack_00000098;
  
  puVar7 = (undefined8 *)__cxa_begin_catch();
  uVar8 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
  uVar9 = thunk_FUN_040daa88(uVar8,*(undefined8 *)*puVar7);
  iVar4 = in_stack_00000090;
  if ((uVar9 & 1) == 0) {
    puVar12 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar12 = *puVar7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar12,&PTR_PTR_08d635d8,0);
  }
  plVar18 = (long *)*puVar7;
  *(long **)(&stack0x00000070 + (long)in_stack_00000090 * 8) = plVar18;
  in_stack_00000090 = in_stack_00000090 + 1;
  __cxa_end_catch();
  lVar10 = thunk_FUN_040dedf8(PTR_DAT_092c37e0);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = FUN_072dfc88(0);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar11 = thunk_FUN_040dedf8(PTR_DAT_092b9200);
  thunk_FUN_040dedf8(PTR_DAT_092c3828);
  thunk_FUN_040dedf8(PTR_DAT_092c3830);
  FUN_03c4ec38(9,uVar11,lVar10,uVar8,0,0,0,0);
  in_stack_00000090 = iVar4;
  do {
    do {
      uVar9 = (ulong)*(uint *)(in_stack_00000040 + 0x18);
      in_stack_00000048 = in_stack_00000048 + 1;
      if ((long)(int)*(uint *)(in_stack_00000040 + 0x18) <= (long)in_stack_00000048) {
        do {
          puVar3 = PTR_DAT_092c37e0;
          in_stack_00000038 = in_stack_00000038 + 1;
          if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
            lVar10 = *(long *)PTR_DAT_092c37e0;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar10 = *(long *)puVar3;
            }
            *(long *)(*(long *)(lVar10 + 0xb8) + 8) = unaff_x19;
            thunk_FUN_040ec700();
            return;
          }
          if (*(uint *)(in_stack_00000030 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar18 = *(long **)(in_stack_00000030 + in_stack_00000038 * 8 + 0x20);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000040 =
               (**(code **)(*plVar18 + 0x268))(plVar18,*(undefined8 *)(*plVar18 + 0x270));
          if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
        } while ((int)*(ulong *)(in_stack_00000040 + 0x18) < 1);
        in_stack_00000048 = 0;
        uVar9 = *(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff;
      }
      if (uVar9 <= in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar10 = *(long *)(in_stack_00000040 + in_stack_00000048 * 8 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = FUN_07694508(lVar10,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    } while ((int)*(ulong *)(lVar5 + 0x18) < 1);
    uVar9 = 0;
    uVar13 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar13 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar11 = *(undefined8 *)(lVar5 + uVar9 * 8 + 0x20);
      uVar8 = *(undefined8 *)PTR_DAT_092c3810;
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar8 = FUN_0768890c(uVar8,0);
      plVar18 = (long *)FUN_075a8768(uVar11,uVar8,0);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar18;
      uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar13 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092bad68) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_072c9d2c;
          }
          uVar13 = uVar13 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092bad68,0);
LAB_072c9d2c:
      plVar18 = (long *)(*(code *)*puVar7)(plVar18,puVar7[1]);
joined_r0x072c9d48:
      in_stack_00000098 = plVar18;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar18;
      uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar13 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_072c9d98;
          }
          uVar13 = uVar13 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*unaff_x27,0);
LAB_072c9d98:
      uVar13 = (*(code *)*puVar7)(plVar18,puVar7[1]);
      plVar18 = in_stack_00000098;
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar14 = *in_stack_00000098;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092bad70) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_072c9e04;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000098,*(long *)PTR_DAT_092bad70,0);
LAB_072c9e04:
        plVar18 = (long *)(*(code *)*puVar7)(plVar18,puVar7[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        bVar1 = *(byte *)(*unaff_x20 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar18);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar14 = FUN_06cd2d7c();
        lVar6 = thunk_FUN_040b4efc(*unaff_x29);
        FUN_076bca34(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        *(long *)(lVar6 + 0x10) = lVar10;
        thunk_FUN_040ec700((long *)(lVar6 + 0x10),lVar10);
        *(undefined8 *)(lVar6 + 0x18) = uVar11;
        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x18),uVar11);
        *(long *)(lVar6 + 0x20) = (long)plVar18;
        thunk_FUN_040ec700((long *)(lVar6 + 0x20),plVar18);
        if (lVar14 == 0) {
LAB_072c9f1c:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *unaff_x24;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_072c9f1c;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          plVar18 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
          *plVar18 = lVar6;
          thunk_FUN_040ec700(plVar18,lVar6);
          plVar18 = in_stack_00000098;
        }
        else {
          FUN_05c26d88(lVar14,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          plVar18 = in_stack_00000098;
        }
        goto joined_r0x072c9d48;
      }
      if (in_stack_00000098 != (long *)0x0) {
        lVar14 = *in_stack_00000098;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_072ca0bc;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000098,*(long *)PTR_DAT_092860c0,0);
LAB_072ca0bc:
        (*(code *)*puVar7)(plVar18,puVar7[1]);
      }
      uVar13 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
  } while( true );
}


