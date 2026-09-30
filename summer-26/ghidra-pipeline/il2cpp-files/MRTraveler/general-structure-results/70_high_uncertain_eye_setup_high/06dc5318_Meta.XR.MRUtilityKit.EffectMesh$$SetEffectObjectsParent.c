/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$SetEffectObjectsParent
ENTRY_POINT: 06dc5318
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

void Meta_XR_MRUtilityKit_EffectMesh__SetEffectObjectsParent(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar12;
  long *unaff_x23;
  long unaff_x24;
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
  
  thunk_FUN_03ce5214();
  thunk_FUN_03ce5214(PTR_DAT_08e90c60);
  lVar8 = *unaff_x23;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == unaff_x24) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto code_r0x06dc5380;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
code_r0x06dc5380:
  (*(code *)*puVar6)();
LAB_06dc5028:
  do {
    lVar8 = *unaff_x26;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06dc5074;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x27,0);
LAB_06dc5074:
    uVar10 = (*(code *)*puVar6)(unaff_x26,puVar6[1]);
    if ((uVar10 & 1) != 0) {
      lVar8 = *unaff_x26;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e85638) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06dc50d8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
      plVar4 = (long *)(*(code *)*puVar6)(unaff_x26,puVar6[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e90c48))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar4);
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = FUN_0681e440();
      lVar5 = thunk_FUN_03cf5234(*unaff_x29);
      FUN_07145224(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      *(long *)(lVar5 + 0x10) = unaff_x28;
      thunk_FUN_03d233cc((long *)(lVar5 + 0x10),unaff_x28);
      *(undefined8 *)(lVar5 + 0x18) = unaff_x21;
      thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x18),unaff_x21);
      *(long *)(lVar5 + 0x20) = (long)plVar4;
      thunk_FUN_03d233cc((long *)(lVar5 + 0x20),plVar4);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar9 = *unaff_x20;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        plVar4 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *plVar4 = lVar5;
        thunk_FUN_03d233cc(plVar4,lVar5);
      }
      else {
        FUN_05212cf4(lVar8,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_06dc5028;
    }
    if (unaff_x26 != (long *)0x0) {
      lVar8 = *unaff_x26;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06dc5418;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(unaff_x26,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
      (*(code *)*puVar6)(unaff_x26,puVar6[1]);
    }
    uVar10 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
    in_stack_00000040 = in_stack_00000040 + 1;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
      do {
        uVar10 = (ulong)*(uint *)(in_stack_00000030 + 0x18);
        in_stack_00000038 = in_stack_00000038 + 1;
        if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)in_stack_00000038) {
          do {
            puVar3 = PTR_DAT_08e90c10;
            in_stack_00000028 = in_stack_00000028 + 1;
            if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
              lVar8 = *(long *)PTR_DAT_08e90c10;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar8 = *(long *)puVar3;
              }
              *(long *)(*(long *)(lVar8 + 0xb8) + 8) = unaff_x19;
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
    unaff_x21 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
    uVar12 = *(undefined8 *)PTR_DAT_08e90c40;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_0710fcf0(uVar12,0);
    plVar4 = (long *)FUN_07034530(unaff_x21,uVar12,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e85630) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06dc5014;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
    unaff_x26 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  } while( true );
}


