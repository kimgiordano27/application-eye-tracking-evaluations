/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh.TextureCoordinateModes$$.ctor
ENTRY_POINT: 06dc55e8
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

void Meta_XR_MRUtilityKit_EffectMesh_TextureCoordinateModes___ctor(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *plVar15;
  long *unaff_x23;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  FUN_03c8f898();
  DAT_09419d2e = 1;
  lVar5 = *(long *)PTR_DAT_08e90c10;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *(long *)PTR_DAT_08e90c10;
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar15 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  uVar6 = (**(code **)(*unaff_x23 + 0x188))();
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82378);
  uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e90c58);
  uVar8 = thunk_FUN_03ce5214(PTR_DAT_08e90c60);
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar5) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
        goto code_r0x06dc56c0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348(plVar15,lVar5,9);
code_r0x06dc56c0:
  (*(code *)*puVar9)(plVar15,uVar6,0,0,0,0,uVar7,uVar8);
  do {
    do {
      uVar13 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
      in_stack_00000040 = in_stack_00000040 + 1;
      if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
        do {
          uVar13 = (ulong)*(uint *)(in_stack_00000030 + 0x18);
          in_stack_00000038 = in_stack_00000038 + 1;
          if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
            do {
              puVar3 = PTR_DAT_08e90c10;
              in_stack_00000028 = in_stack_00000028 + 1;
              if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
                lVar5 = *(long *)PTR_DAT_08e90c10;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar5 = *(long *)puVar3;
                }
                *(long *)(*(long *)(lVar5 + 0xb8) + 8) = unaff_x19;
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
            uVar13 = *(ulong *)(in_stack_00000030 + 0x18) & 0xffffffff;
          }
          if (uVar13 <= in_stack_00000038) {
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
        uVar13 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
      }
      if (uVar13 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar6 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
      uVar7 = *(undefined8 *)PTR_DAT_08e90c40;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar7 = FUN_0710fcf0(uVar7,0);
      plVar15 = (long *)FUN_07034530(uVar6,uVar7,0);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar5 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e85630) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06dc5014;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
      plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_06dc5028:
      lVar5 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06dc5074;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar15,*unaff_x27,0);
LAB_06dc5074:
      uVar13 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if ((uVar13 & 1) != 0) {
        lVar5 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e85638) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06dc50d8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
        plVar4 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e90c48
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar4);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar5 = FUN_0681e440();
        lVar11 = thunk_FUN_03cf5234(*unaff_x29);
        FUN_07145224(lVar11,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *(long *)(lVar11 + 0x10) = unaff_x28;
        thunk_FUN_03d233cc((long *)(lVar11 + 0x10),unaff_x28);
        *(undefined8 *)(lVar11 + 0x18) = uVar6;
        thunk_FUN_03d233cc((undefined8 *)(lVar11 + 0x18),uVar6);
        *(long *)(lVar11 + 0x20) = (long)plVar4;
        thunk_FUN_03d233cc((long *)(lVar11 + 0x20),plVar4);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar10 = *(long *)(lVar5 + 0x10);
        lVar12 = *unaff_x20;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          plVar4 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *plVar4 = lVar11;
          thunk_FUN_03d233cc(plVar4,lVar11);
        }
        else {
          FUN_05212cf4(lVar5,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06dc5028;
      }
    } while (plVar15 == (long *)0x0);
    lVar5 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06dc5418;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  } while( true );
}


