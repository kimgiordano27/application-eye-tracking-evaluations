/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$<Start>b__30_0
ENTRY_POINT: 06dc565c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc4e50) */
/* WARNING: Removing unreachable block (ram,0x06dc545c) */

void Meta_XR_MRUtilityKit_EffectMesh__<Start>b__30_0(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long *unaff_x21;
  undefined8 uVar14;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  thunk_FUN_03ce5214(PTR_DAT_08e90c60);
  lVar9 = *unaff_x21;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == unaff_x25) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
        goto code_r0x06dc56c0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348();
code_r0x06dc56c0:
  (*(code *)*puVar7)();
  do {
    do {
      uVar11 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
      in_stack_00000040 = in_stack_00000040 + 1;
      if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
        do {
          uVar11 = (ulong)*(uint *)(in_stack_00000030 + 0x18);
          in_stack_00000038 = in_stack_00000038 + 1;
          if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
            do {
              puVar3 = PTR_DAT_08e90c10;
              in_stack_00000028 = in_stack_00000028 + 1;
              if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
                lVar9 = *(long *)PTR_DAT_08e90c10;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar9 = *(long *)puVar3;
                }
                *(long *)(*(long *)(lVar9 + 0xb8) + 8) = unaff_x19;
                thunk_FUN_03d233cc();
                return;
              }
              if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              plVar4 = *(long **)(in_stack_00000020 + in_stack_00000028 * 8 + 0x20);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              in_stack_00000030 =
                   (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
              if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
            } while ((int)*(ulong *)(in_stack_00000030 + 0x18) < 1);
            in_stack_00000038 = 0;
            uVar11 = *(ulong *)(in_stack_00000030 + 0x18) & 0xffffffff;
          }
          if (uVar11 <= in_stack_00000038) {
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
        uVar11 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
      }
      if (uVar11 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar13 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
      uVar14 = *(undefined8 *)PTR_DAT_08e90c40;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar14 = FUN_0710fcf0(uVar14,0);
      plVar4 = (long *)FUN_07034530(uVar13,uVar14,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e85630) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06dc5014;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_06dc5028:
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06dc5074;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar4,*unaff_x27,0);
LAB_06dc5074:
      uVar11 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e85638) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06dc50d8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
        plVar5 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e90c48
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar5);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar9 = FUN_0681e440();
        lVar6 = thunk_FUN_03cf5234(*unaff_x29);
        FUN_07145224(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *(long *)(lVar6 + 0x10) = unaff_x28;
        thunk_FUN_03d233cc((long *)(lVar6 + 0x10),unaff_x28);
        *(undefined8 *)(lVar6 + 0x18) = uVar13;
        thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x18),uVar13);
        *(long *)(lVar6 + 0x20) = (long)plVar5;
        thunk_FUN_03d233cc((long *)(lVar6 + 0x20),plVar5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar8 = *(long *)(lVar9 + 0x10);
        lVar10 = *unaff_x20;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar5 = lVar6;
          thunk_FUN_03d233cc(plVar5,lVar6);
        }
        else {
          FUN_05212cf4(lVar9,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06dc5028;
      }
    } while (plVar4 == (long *)0x0);
    lVar9 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06dc5418;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  } while( true );
}


