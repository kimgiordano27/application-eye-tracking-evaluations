/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh.EffectMeshObject$$.ctor
ENTRY_POINT: 06dc5274
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc4e50) */
/* WARNING: Removing unreachable block (ram,0x06dc545c) */

void Meta_XR_MRUtilityKit_EffectMesh_EffectMeshObject___ctor(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long *plVar14;
  long *plVar15;
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
  
  plVar15 = (long *)*unaff_x22;
  __cxa_end_catch();
  lVar4 = thunk_FUN_03ce5214(PTR_DAT_08e90c10);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09419d2e == '\0') {
    FUN_03c8f898(PTR_DAT_08e90c10);
    DAT_09419d2e = '\x01';
  }
  lVar4 = *(long *)PTR_DAT_08e90c10;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)PTR_DAT_08e90c10;
  }
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar14 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  uVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
  uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e90c58);
  uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e90c60);
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar4) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
        goto code_r0x06dc5380;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348(plVar14,lVar4,9);
code_r0x06dc5380:
  (*(code *)*puVar8)(plVar14,uVar5,0,0,0,0,uVar6,uVar7);
LAB_06dc5028:
  do {
    lVar4 = *unaff_x26;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06dc5074;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x27,0);
LAB_06dc5074:
    uVar12 = (*(code *)*puVar8)(unaff_x26,puVar8[1]);
    if ((uVar12 & 1) != 0) {
      lVar4 = *unaff_x26;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e85638) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06dc50d8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
      plVar15 = (long *)(*(code *)*puVar8)(unaff_x26,puVar8[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e90c48)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar15);
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = FUN_0681e440();
      lVar10 = thunk_FUN_03cf5234(*unaff_x29);
      FUN_07145224(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(long *)(lVar10 + 0x10) = unaff_x28;
      thunk_FUN_03d233cc((long *)(lVar10 + 0x10),unaff_x28);
      *(undefined8 *)(lVar10 + 0x18) = unaff_x21;
      thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x18),unaff_x21);
      *(long *)(lVar10 + 0x20) = (long)plVar15;
      thunk_FUN_03d233cc((long *)(lVar10 + 0x20),plVar15);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = *(long *)(lVar4 + 0x10);
      lVar11 = *unaff_x20;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        plVar15 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *plVar15 = lVar10;
        thunk_FUN_03d233cc(plVar15,lVar10);
      }
      else {
        FUN_05212cf4(lVar4,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_06dc5028;
    }
    if (unaff_x26 != (long *)0x0) {
      lVar4 = *unaff_x26;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06dc5418;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
      (*(code *)*puVar8)(unaff_x26,puVar8[1]);
    }
    uVar12 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
    in_stack_00000040 = in_stack_00000040 + 1;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
      do {
        uVar12 = (ulong)*(uint *)(in_stack_00000030 + 0x18);
        in_stack_00000038 = in_stack_00000038 + 1;
        if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
          do {
            puVar3 = PTR_DAT_08e90c10;
            in_stack_00000028 = in_stack_00000028 + 1;
            if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
              lVar4 = *(long *)PTR_DAT_08e90c10;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar4 = *(long *)puVar3;
              }
              *(long *)(*(long *)(lVar4 + 0xb8) + 8) = unaff_x19;
              thunk_FUN_03d233cc();
              return;
            }
            if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            plVar15 = *(long **)(in_stack_00000020 + in_stack_00000028 * 8 + 0x20);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            in_stack_00000030 =
                 (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
          } while ((int)*(ulong *)(in_stack_00000030 + 0x18) < 1);
          in_stack_00000038 = 0;
          uVar12 = *(ulong *)(in_stack_00000030 + 0x18) & 0xffffffff;
        }
        if (uVar12 <= in_stack_00000038) {
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
      uVar12 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
    }
    if (uVar12 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x21 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
    uVar5 = *(undefined8 *)PTR_DAT_08e90c40;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_0710fcf0(uVar5,0);
    plVar15 = (long *)FUN_07034530(unaff_x21,uVar5,0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e85630) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06dc5014;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
    unaff_x26 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  } while( true );
}


