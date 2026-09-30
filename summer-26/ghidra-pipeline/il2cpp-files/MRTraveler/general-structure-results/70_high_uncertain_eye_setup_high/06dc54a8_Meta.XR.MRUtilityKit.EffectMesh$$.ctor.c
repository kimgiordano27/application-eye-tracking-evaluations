/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$.ctor
ENTRY_POINT: 06dc54a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc5b80) */

void Meta_XR_MRUtilityKit_EffectMesh___ctor(undefined8 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar14 = *plVar6;
    __cxa_end_catch();
    iVar16 = 0;
    goto joined_r0x06dc5510;
  }
  if (unaff_x26 != (long *)0x0) {
    lVar14 = *unaff_x26;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x06dc5574;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
code_r0x06dc5574:
    (*(code *)*puVar4)();
  }
  if (param_2 != 1) {
    if (param_2 != 1) {
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03d91ca0(param_1);
      }
      puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
      uVar10 = thunk_FUN_03ce0d60(uVar13,*(undefined8 *)*puVar4);
      if ((uVar10 & 1) == 0) {
        puVar8 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_088de0a8,0);
      }
      plVar6 = (long *)*puVar4;
      __cxa_end_catch();
      lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e90c10);
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_09419d2e == '\0') {
        FUN_03c8f898(PTR_DAT_08e90c10);
        DAT_09419d2e = '\x01';
      }
      lVar14 = *(long *)PTR_DAT_08e90c10;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar14 = *(long *)PTR_DAT_08e90c10;
      }
      if (plVar6 != (long *)0x0) {
        plVar15 = (long *)**(undefined8 **)(lVar14 + 0xb8);
        uVar13 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (plVar15 != (long *)0x0) {
          lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
          uVar17 = thunk_FUN_03ce5214(PTR_DAT_08e90c58);
          uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e90c60);
          lVar5 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar14) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto code_r0x06dc5af8;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar15,lVar14,9);
code_r0x06dc5af8:
          (*(code *)*puVar4)(plVar15,uVar13,0,0,0,0,uVar17,uVar7);
          goto LAB_06dc5918;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
    uVar10 = thunk_FUN_03ce0d60(uVar13,*(undefined8 *)*puVar4);
    if ((uVar10 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_088de0a8,0);
    }
    plVar6 = (long *)*puVar4;
    __cxa_end_catch();
    lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e90c10);
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_09419d2e == '\0') {
      FUN_03c8f898(PTR_DAT_08e90c10);
      DAT_09419d2e = '\x01';
    }
    lVar14 = *(long *)PTR_DAT_08e90c10;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar14 = *(long *)PTR_DAT_08e90c10;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar15 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    uVar13 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
    uVar17 = thunk_FUN_03ce5214(PTR_DAT_08e90c58);
    uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e90c60);
    lVar5 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto code_r0x06dc58d0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar15,lVar14,9);
code_r0x06dc58d0:
    (*(code *)*puVar4)(plVar15,uVar13,0,0,0,0,uVar17,uVar7);
    goto LAB_06dc5904;
  }
  puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar13 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
  uVar10 = thunk_FUN_03ce0d60(uVar13,*(undefined8 *)*puVar4);
  if ((uVar10 & 1) == 0) {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&PTR_PTR_088de0a8,0);
  }
  plVar6 = (long *)*puVar4;
  __cxa_end_catch();
  lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e90c10);
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09419d2e == '\0') {
    FUN_03c8f898(PTR_DAT_08e90c10);
    DAT_09419d2e = '\x01';
  }
  lVar14 = *(long *)PTR_DAT_08e90c10;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *(long *)PTR_DAT_08e90c10;
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar15 = (long *)**(undefined8 **)(lVar14 + 0xb8);
  uVar13 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar14 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
  uVar17 = thunk_FUN_03ce5214(PTR_DAT_08e90c58);
  uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e90c60);
  lVar5 = *plVar15;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar14) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
        goto code_r0x06dc56c0;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar15,lVar14,9);
code_r0x06dc56c0:
  (*(code *)*puVar4)(plVar15,uVar13,0,0,0,0,uVar17,uVar7);
  do {
    uVar10 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
    in_stack_00000040 = in_stack_00000040 + 1;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
LAB_06dc5904:
      do {
        uVar10 = (ulong)*(uint *)(in_stack_00000030 + 0x18);
        in_stack_00000038 = in_stack_00000038 + 1;
        if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
LAB_06dc5918:
          do {
            puVar3 = PTR_DAT_08e90c10;
            in_stack_00000028 = in_stack_00000028 + 1;
            if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
              lVar14 = *(long *)PTR_DAT_08e90c10;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar14 = *(long *)puVar3;
              }
              *(long *)(*(long *)(lVar14 + 0xb8) + 8) = unaff_x19;
              thunk_FUN_03d233cc();
              return;
            }
            if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar6 = *(long **)(in_stack_00000020 + in_stack_00000028 * 8 + 0x20);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            in_stack_00000030 =
                 (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
          } while ((int)*(ulong *)(in_stack_00000030 + 0x18) < 1);
          in_stack_00000038 = 0;
          uVar10 = *(ulong *)(in_stack_00000030 + 0x18) & 0xffffffff;
        }
        if (uVar10 <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        unaff_x28 = *(long *)(in_stack_00000030 + in_stack_00000038 * 8 + 0x20);
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        in_stack_00000048 = FUN_0711be74(unaff_x28,0);
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
      } while ((int)*(ulong *)(in_stack_00000048 + 0x18) < 1);
      in_stack_00000040 = 0;
      uVar10 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
    }
    if (uVar10 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar13 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
    uVar17 = *(undefined8 *)PTR_DAT_08e90c40;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar17 = FUN_0710fcf0(uVar17,0);
    plVar6 = (long *)FUN_07034530(uVar13,uVar17,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar14 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e85630) {
          puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06dc5014;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
    unaff_x26 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
LAB_06dc5028:
    lVar14 = *unaff_x26;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06dc5074;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x27,0);
LAB_06dc5074:
    uVar10 = (*(code *)*puVar4)(unaff_x26,puVar4[1]);
    if ((uVar10 & 1) != 0) {
      lVar14 = *unaff_x26;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e85638) {
            puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06dc50d8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
      plVar6 = (long *)(*(code *)*puVar4)(unaff_x26,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e90c48))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar6);
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar14 = FUN_0681e440();
      lVar5 = thunk_FUN_03cf5234(*unaff_x29);
      FUN_07145224(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(long *)(lVar5 + 0x10) = unaff_x28;
      thunk_FUN_03d233cc((long *)(lVar5 + 0x10),unaff_x28);
      *(undefined8 *)(lVar5 + 0x18) = uVar13;
      thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x18),uVar13);
      *(long *)(lVar5 + 0x20) = (long)plVar6;
      thunk_FUN_03d233cc((long *)(lVar5 + 0x20),plVar6);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = *(long *)(lVar14 + 0x10);
      lVar11 = *unaff_x20;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        plVar6 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *plVar6 = lVar5;
        thunk_FUN_03d233cc(plVar6,lVar5);
      }
      else {
        FUN_05212cf4(lVar14,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_06dc5028;
    }
    lVar14 = 0;
    iVar16 = 0xc;
joined_r0x06dc5510:
    if (unaff_x26 != (long *)0x0) {
      lVar5 = *unaff_x26;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06dc5418;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
      (*(code *)*puVar4)(unaff_x26,puVar4[1]);
    }
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb28(lVar14);
    }
    if ((iVar16 != 0) && (iVar16 != 0xc)) {
      return;
    }
  } while( true );
}


