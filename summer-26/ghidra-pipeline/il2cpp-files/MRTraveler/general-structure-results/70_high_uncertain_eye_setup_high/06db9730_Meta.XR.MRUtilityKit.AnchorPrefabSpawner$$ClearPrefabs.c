/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefabs
ENTRY_POINT: 06db9730
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dba104) */

uint Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefabs(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  uint uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03c8f898(PTR_DAT_08e904e8);
  FUN_03c8f898(PTR_DAT_08e90500);
  FUN_03c8f898(PTR_DAT_08e901e8);
  FUN_03c8f898(PTR_DAT_08e90210);
  FUN_03c8f898(PTR_DAT_08e90288);
  FUN_03c8f898(PTR_DAT_08e90508);
  FUN_03c8f898(PTR_DAT_08e90510);
  FUN_03c8f898(PTR_DAT_08e90570);
  FUN_03c8f898(PTR_DAT_08e90578);
  FUN_03c8f898(PTR_DAT_08e90580);
  FUN_03c8f898(PTR_DAT_08e90518);
  FUN_03c8f898(PTR_DAT_08e902a8);
  FUN_03c8f898(PTR_DAT_08e90588);
  FUN_03c8f898(PTR_DAT_08e6a288);
  FUN_03c8f898(PTR_DAT_08e90520);
  FUN_03c8f898(PTR_DAT_08e90528);
  FUN_03c8f898(PTR_DAT_08e6a290);
  FUN_03c8f898(PTR_DAT_08e90530);
  FUN_03c8f898(PTR_DAT_08e902b0);
  FUN_03c8f898(PTR_DAT_08e90590);
  FUN_03c8f898(PTR_DAT_08e90538);
  FUN_03c8f898(PTR_DAT_08e90238);
  FUN_03c8f898(PTR_DAT_08e90240);
  FUN_03c8f898(PTR_DAT_08e90540);
  FUN_03c8f898(PTR_DAT_08e90548);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08e90598);
  FUN_03c8f898(PTR_DAT_08e905a0);
  FUN_03c8f898(PTR_DAT_08e90560);
  FUN_03c8f898(PTR_DAT_08e7e268);
  FUN_03c8f898(PTR_DAT_08e905a8);
  FUN_03c8f898(PTR_DAT_08e90568);
  FUN_03c8f898(PTR_DAT_08e904e0);
  *(undefined1 *)(unaff_x20 + 0xbc7) = 1;
  puVar7 = PTR_DAT_08e90588;
  puVar6 = PTR_DAT_08e90578;
  puVar5 = PTR_DAT_08e90508;
  puVar4 = PTR_DAT_08e7e268;
  puVar3 = PTR_DAT_08e695f0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_05213710(&stack0x00000008,*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_08e90590);
    in_stack_00000030 = in_stack_00000018;
    uStack0000000000000004 = 1;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
LAB_06db9928:
    uVar9 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar6);
    lVar14 = in_stack_00000030;
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_06db841c();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar12 = *(long **)(lVar10 + 0x10);
      uVar13 = *(undefined8 *)(lVar10 + 0x18);
      uVar9 = FUN_0702dcc0(plVar12,0,0);
      if ((uVar9 & 1) == 0) {
        uVar18 = *(undefined8 *)PTR_DAT_08e902a8;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar18 = FUN_0710fcf0(uVar18,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30(uVar18,uVar18);
        }
        lVar10 = (**(code **)(*plVar12 + 0x218))(plVar12,uVar18,0,*(undefined8 *)(*plVar12 + 0x220))
        ;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
          plVar11 = (long *)thunk_FUN_03d12a58();
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar13 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          uVar18 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90568,plVar12,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_06dfdedc(uVar13,uVar18,0,0);
          uStack0000000000000004 = 0;
          goto LAB_06db9928;
        }
        plVar11 = (long *)FUN_0461aa48(lVar10,*(undefined8 *)puVar5);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90530);
            FUN_06db7dd4();
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            *(undefined8 *)(lVar10 + 0x10) = uVar13;
            thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x10),uVar13);
            *(long *)(lVar10 + 0x18) = (long)plVar12;
            thunk_FUN_03d233cc((long *)(lVar10 + 0x18),plVar12);
            uVar13 = *(undefined8 *)PTR_DAT_08e902a8;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar13 = FUN_0710fcf0(uVar13,0);
            *(undefined8 *)(lVar10 + 0x38) = uVar13;
            thunk_FUN_03d233cc();
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar9 = FUN_06a4e574(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar14 + 0x20),
                                 *(undefined8 *)PTR_DAT_08e901e8);
            if ((uVar9 & 1) == 0) {
              lVar19 = *(long *)(unaff_x19 + 0x40);
              uVar18 = *(undefined8 *)(lVar14 + 0x20);
              uVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90240);
              FUN_052124c0(uVar13,*(undefined8 *)PTR_DAT_08e90238);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_06a4e380(lVar19,uVar18,uVar13,*(undefined8 *)PTR_DAT_08e90500);
            }
            if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar14 = FUN_06a4e300(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar14 + 0x20),
                                  *(undefined8 *)PTR_DAT_08e90210);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar19 = *(long *)(lVar14 + 0x10);
            lVar16 = *(long *)PTR_DAT_08e902b0;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              plVar12 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              *plVar12 = lVar10;
              thunk_FUN_03d233cc(plVar12,lVar10);
            }
            else {
              FUN_05212cf4(lVar14,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_06db9928;
          }
        }
        plVar12 = (long *)thunk_FUN_03d12a58();
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06dfdedc(uVar13,*(undefined8 *)PTR_DAT_08e905a8,0,0);
        goto LAB_06db9928;
      }
      plVar12 = (long *)thunk_FUN_03d12a58();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar18 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904e0,*(undefined8 *)(lVar14 + 0x10),0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar13,uVar18,0,0);
      uStack0000000000000004 = 0;
      goto LAB_06db9928;
    }
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90570);
    puVar3 = PTR_DAT_08e90560;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      uVar13 = FUN_06a4e1b0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08e90288);
      lVar14 = *(long *)puVar3;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar14);
        lVar14 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
      if (lVar10 == 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar14);
          lVar14 = *(long *)puVar3;
        }
        uVar18 = **(undefined8 **)(lVar14 + 0xb8);
        lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90518);
        FUN_04d5ef3c(lVar10,uVar18,*(undefined8 *)PTR_DAT_08e90598,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        *plVar12 = lVar10;
        thunk_FUN_03d233cc(plVar12,lVar10);
      }
      plVar12 = (long *)FUN_04639e6c(uVar13,lVar10,*(undefined8 *)PTR_DAT_08e90510);
      if (plVar12 != (long *)0x0) {
        lVar14 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e90520) {
              puVar15 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06db9dd4;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar15 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e90520,0);
LAB_06db9dd4:
        plVar12 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
        puVar8 = PTR_DAT_08e905a0;
        puVar7 = PTR_DAT_08e90538;
        puVar6 = PTR_DAT_08e90528;
        puVar5 = PTR_DAT_08e904e8;
        puVar4 = PTR_DAT_08e6a290;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar14 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_06db9e5c;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar15 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar4,0);
LAB_06db9e5c:
          uVar9 = (*(code *)*puVar15)(plVar12,puVar15[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_06db9fc0;
            lVar14 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar9 == 0) goto LAB_06db9f90;
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_06db9f78;
          }
          lVar14 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_06db9eb8;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar15 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)puVar6,0);
LAB_06db9eb8:
          lVar14 = (*(code *)*puVar15)(plVar12,puVar15[1]);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar10);
            lVar10 = *(long *)puVar3;
          }
          lVar19 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
          if (lVar19 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar10);
              lVar10 = *(long *)puVar3;
            }
            uVar13 = **(undefined8 **)(lVar10 + 0xb8);
            lVar19 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
            FUN_06732cbc(lVar19,uVar13,*(undefined8 *)puVar8,0);
            plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
            *plVar11 = lVar19;
            thunk_FUN_03d233cc(plVar11,lVar19);
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_052146dc(lVar14,lVar19,*(undefined8 *)puVar7);
        } while( true );
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uStack0000000000000004 = 1;
  goto LAB_06db9fc0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_06db9f78:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar15 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06db9fac;
    }
  }
LAB_06db9f90:
  puVar15 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e6a288,0);
LAB_06db9fac:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_06db9fc0:
  return uStack0000000000000004 & 1;
}


