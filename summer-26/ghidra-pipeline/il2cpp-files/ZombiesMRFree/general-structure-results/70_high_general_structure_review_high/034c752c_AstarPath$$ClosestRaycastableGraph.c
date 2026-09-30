/*
FUNCTION_NAME: AstarPath$$ClosestRaycastableGraph
ENTRY_POINT: 034c752c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034c7c88) */

void AstarPath__ClosestRaycastableGraph(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar15;
  
  FUN_02fe925c(PTR_DAT_06f803f8);
  FUN_02fe925c(PTR_DAT_06f7c560);
  FUN_02fe925c(PTR_DAT_06f7c578);
  FUN_02fe925c(PTR_DAT_06f7c588);
  FUN_02fe925c(PTR_DAT_06f6d618);
  FUN_02fe925c(PTR_DAT_06f80400);
  FUN_02fe925c(PTR_DAT_06f80408);
  FUN_02fe925c(PTR_DAT_06f803e0);
  FUN_02fe925c(PTR_DAT_06f7c700);
  FUN_02fe925c(PTR_DAT_06f6d6a0);
  FUN_02fe925c(PTR_DAT_06f7c4f8);
  FUN_02fe925c(PTR_DAT_06f7c9f8);
  FUN_02fe925c(PTR_DAT_06f7c518);
  FUN_02fe925c(PTR_DAT_06f7c520);
  *(undefined1 *)(unaff_x19 + 0xf7a) = 1;
  if ((unaff_x21 != (long *)0x0) && (*unaff_x21 != *(long *)PTR_DAT_06f803e0)) {
                    /* try { // try from 034c7c90 to 035c7c9b has its CatchHandler @ 034c82d0 */
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar12 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f7c588) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_034c7650;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_034c7650:
    plVar9 = (long *)(*(code *)*puVar8)();
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f7c540) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_034c76b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)PTR_DAT_06f7c540,0);
LAB_034c76b8:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar7 = PTR_DAT_06f7c9f8;
      puVar6 = PTR_DAT_06f7c578;
      puVar5 = PTR_DAT_06f7c548;
      puVar4 = PTR_DAT_06f7c4f8;
      puVar3 = PTR_DAT_06f70b38;
      puVar2 = PTR_DAT_06f6d618;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      do {
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_034c7748;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)puVar3,0);
LAB_034c7748:
        uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_034c7c20;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_034c7c08;
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_034c77a4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)puVar5,0);
LAB_034c77a4:
        uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        uVar13 = thunk_FUN_05971620(uVar10,*(undefined8 *)puVar7,0);
        if ((uVar13 & 1) == 0) {
          uVar13 = thunk_FUN_05971620(uVar10,*(undefined8 *)puVar4,0);
          if ((uVar13 & 1) == 0) {
            uVar13 = thunk_FUN_05971620(uVar10,*(undefined8 *)PTR_DAT_06f7c520,0);
            if ((uVar13 & 1) == 0) {
              uVar13 = thunk_FUN_05971620(uVar10,*(undefined8 *)PTR_DAT_06f7c518,0);
              if ((uVar13 & 1) != 0) {
                lVar15 = *(long *)PTR_DAT_06f7c560;
                lVar12 = *unaff_x20;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_034c7bac;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                lVar12 = FUN_02feb5b8();
LAB_034c7bac:
                lVar12 = thunk_FUN_02fffafc(*(undefined8 *)(lVar12 + 8),lVar15);
                uVar13 = (**(code **)(lVar12 + 8))();
                if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8(uVar13,uVar13 & 0xffffffff);
                }
                FUN_068fd73c();
              }
            }
            else {
              lVar15 = *(long *)puVar6;
              lVar12 = *unaff_x20;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_034c7b68;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              lVar12 = FUN_02feb5b8();
LAB_034c7b68:
              lVar12 = thunk_FUN_02fffafc(*(undefined8 *)(lVar12 + 8),lVar15);
              uVar10 = (**(code **)(lVar12 + 8))();
              if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8(uVar10,uVar10);
              }
              FUN_068fc96c();
            }
          }
          else {
            lVar15 = *(long *)puVar6;
            lVar12 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_034c7a80;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            lVar12 = FUN_02feb5b8();
LAB_034c7a80:
            lVar12 = thunk_FUN_02fffafc(*(undefined8 *)(lVar12 + 8),lVar15);
            uVar10 = (**(code **)(lVar12 + 8))();
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8(uVar10,uVar10);
            }
            FUN_068f635c();
          }
        }
        else {
          lVar15 = *(long *)puVar6;
          lVar12 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_034c78d0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          lVar12 = FUN_02feb5b8();
LAB_034c78d0:
          lVar12 = thunk_FUN_02fffafc(*(undefined8 *)(lVar12 + 8),lVar15);
          uVar10 = (**(code **)(lVar12 + 8))();
          if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          FUN_02fe96e0(uVar10,*(undefined8 *)PTR_DAT_06f7c700,*(undefined8 *)PTR_DAT_06f80400);
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          uVar10 = FUN_06995e68();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar13 = FUN_068f9b78(uVar10,0,0);
          if ((uVar13 & 1) == 0) {
            FUN_06995e68();
            lVar15 = *(long *)PTR_DAT_06f803f8;
            lVar12 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar15 + 0x20)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_034c7b34;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            lVar12 = FUN_02feb5b8();
LAB_034c7b34:
            lVar12 = thunk_FUN_02fffafc(*(undefined8 *)(lVar12 + 8),lVar15);
            (**(code **)(lVar12 + 8))();
          }
          else {
            lVar12 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f7c588) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                  goto LAB_034c7ac4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_034c7ac4:
            plVar11 = (long *)(*(code *)*puVar8)();
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06f80408 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06f80408)) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe9884(plVar11);
              }
            }
            FUN_06995ea4();
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_034c7c08:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06f70b30) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_034c7c3c;
    }
  }
LAB_034c7c20:
  puVar8 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)PTR_DAT_06f70b30,0);
LAB_034c7c3c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


