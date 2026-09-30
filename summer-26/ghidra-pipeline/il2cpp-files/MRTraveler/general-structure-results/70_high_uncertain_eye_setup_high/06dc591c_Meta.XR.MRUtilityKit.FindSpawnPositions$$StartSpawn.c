/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$StartSpawn
ENTRY_POINT: 06dc591c
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

void Meta_XR_MRUtilityKit_FindSpawnPositions__StartSpawn(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar17;
  ulong unaff_x21;
  undefined8 uVar18;
  long *unaff_x27;
  long lVar19;
  undefined8 *unaff_x29;
  long in_stack_00000020;
  
  do {
    do {
      puVar3 = PTR_DAT_08e90c10;
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x21) {
        lVar9 = *(long *)PTR_DAT_08e90c10;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar9 = *(long *)puVar3;
        }
        *(long *)(*(long *)(lVar9 + 0xb8) + 8) = unaff_x19;
        thunk_FUN_03d233cc();
        return;
      }
      if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar4 = *(long **)(param_1 + unaff_x21 * 8 + 0x20);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      param_1 = in_stack_00000020;
    } while ((int)*(ulong *)(lVar9 + 0x18) < 1);
    uVar14 = 0;
    uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar19 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar5 = FUN_0711be74(lVar19,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar10 = 0;
        uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          uVar17 = *(undefined8 *)(lVar5 + uVar10 * 8 + 0x20);
          uVar18 = *(undefined8 *)PTR_DAT_08e90c40;
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar18 = FUN_0710fcf0(uVar18,0);
          plVar4 = (long *)FUN_07034530(uVar17,uVar18,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar12 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e85630) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_06dc5014;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e85630,0);
LAB_06dc5014:
          plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
LAB_06dc5028:
          lVar12 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x27) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_06dc5074;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*unaff_x27,0);
LAB_06dc5074:
          uVar11 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if ((uVar11 & 1) != 0) {
            lVar12 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e85638) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06dc50d8;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e85638,0);
LAB_06dc50d8:
            plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_08e90c48 + 0x130);
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_08e90c48)) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fecc(plVar7);
            }
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar12 = FUN_0681e440();
            lVar8 = thunk_FUN_03cf5234(*unaff_x29);
            FUN_07145224(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            *(long *)(lVar8 + 0x10) = lVar19;
            thunk_FUN_03d233cc((long *)(lVar8 + 0x10),lVar19);
            *(undefined8 *)(lVar8 + 0x18) = uVar17;
            thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x18),uVar17);
            *(long *)(lVar8 + 0x20) = (long)plVar7;
            thunk_FUN_03d233cc((long *)(lVar8 + 0x20),plVar7);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *unaff_x20;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = lVar8;
              thunk_FUN_03d233cc(plVar7,lVar8);
            }
            else {
              FUN_05212cf4(lVar12,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_06dc5028;
          }
          if (plVar4 != (long *)0x0) {
            lVar12 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06dc5418;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc5418:
            (*(code *)*puVar6)(plVar4,puVar6[1]);
          }
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(lVar9 + 0x18));
  } while( true );
}


