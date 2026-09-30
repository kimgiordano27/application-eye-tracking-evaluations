/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CheckIfRetrievingAnchorServiceHung>d__25$$MoveNext
ENTRY_POINT: 0776d050
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25__MoveNext
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uStack000000000000002c;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f330e8);
  FUN_04447ba8(PTR_DAT_09f330f0);
  FUN_04447ba8(PTR_DAT_09f330f8);
  *(undefined1 *)(unaff_x20 + 0x2f0) = 1;
  uStack000000000000002c = 0;
  if (4 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  lVar12 = *(long *)(unaff_x19 + 0x20);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar12 != 0) {
      if (3 < *(int *)(lVar12 + 0x10)) {
        lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
        if (lVar9 == 0) break;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0776d66c;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f330e0;
        thunk_FUN_044bb4b4();
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x70), lVar8 == 0)) break;
        uStack000000000000002c = *(undefined4 *)(lVar8 + 0x18);
        uVar14 = FUN_07a3b850(&stack0x0000002c,0);
        if (*(uint *)(lVar9 + 0x18) < 2) {
LAB_0776d66c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar14);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0776d66c;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f330f8;
        thunk_FUN_044bb4b4();
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x60), lVar8 == 0)) break;
        uStack000000000000002c = *(undefined4 *)(lVar8 + 0x18);
        uVar14 = FUN_07a3b850(&stack0x0000002c,0);
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_0776d66c;
        *(undefined8 *)(lVar9 + 0x38) = uVar14;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar14);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_0776d66c;
        *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f330e8;
        thunk_FUN_044bb4b4();
        lVar8 = *(long *)(unaff_x19 + 0x28);
        if (lVar8 == 0) break;
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar14 = FUN_079a04dc(lVar8 + 0x27,0);
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_0776d66c;
        *(undefined8 *)(lVar9 + 0x48) = uVar14;
        thunk_FUN_044bb4b4();
        uVar14 = FUN_078b57fc(lVar9,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar14,0);
      }
      lVar9 = *(long *)(unaff_x19 + 0x30);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (DAT_01c7660c,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)PTR_DAT_09f330f0,
                   *(undefined8 *)(lVar9 + 0x28));
      }
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30dd0);
      FUN_07782c68(lVar9,0);
      plVar13 = (long *)(unaff_x19 + 0x50);
      *plVar13 = lVar9;
      thunk_FUN_044bb4b4(plVar13,lVar9);
      uVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
      FUN_05bad610(uVar14,*(undefined8 *)PTR_DAT_09f1e860);
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        uVar14 = (**(code **)(*plVar13 + 0x178))
                           (plVar13,*(undefined8 *)(unaff_x19 + 0x30),
                            *(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x28),
                            lVar12,*(undefined8 *)(unaff_x19 + 0x40),uVar14,
                            *(undefined4 *)(lVar12 + 0x10));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar14);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
    break;
  case 1:
    lVar9 = *(long *)(unaff_x19 + 0x38);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        return 0;
      }
      if ((lVar12 != 0) && (plVar13 = *(long **)(unaff_x19 + 0x50), plVar13 != (long *)0x0)) {
        uVar14 = (**(code **)(*plVar13 + 0x188))
                           (plVar13,*(undefined8 *)(unaff_x19 + 0x30),lVar9,
                            *(undefined8 *)(unaff_x19 + 0x28),lVar12,
                            *(undefined8 *)(unaff_x19 + 0x40),*(undefined4 *)(lVar12 + 0x10),
                            *(undefined8 *)(*plVar13 + 400));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar14);
        uVar7 = 2;
LAB_0776d644:
        *(undefined4 *)(unaff_x19 + 0x10) = uVar7;
        return 1;
      }
    }
    break;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x38) + 0x10) == '\0') {
        return 0;
      }
      plVar13 = *(long **)(unaff_x19 + 0x50);
      if (plVar13 != (long *)0x0) {
        uVar14 = (**(code **)(*plVar13 + 0x1c8))
                           (plVar13,*(undefined8 *)(unaff_x19 + 0x28),
                            *(undefined8 *)(*plVar13 + 0x1d0));
        *(undefined8 *)(unaff_x19 + 0x58) = uVar14;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x58),uVar14);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          plVar13 = *(long **)(unaff_x19 + 0x50);
          uVar5 = FUN_07783be4(*(long *)(unaff_x19 + 0x28),0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) && (plVar13 != (long *)0x0)) {
            uVar14 = (**(code **)(*plVar13 + 0x1a8))
                               (plVar13,uVar5 & 1,
                                *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x30),
                                *(undefined8 *)(*plVar13 + 0x1b0));
            puVar6 = (undefined8 *)(unaff_x19 + 0x60);
            *puVar6 = uVar14;
            thunk_FUN_044bb4b4(puVar6,uVar14);
            puVar4 = PTR_DAT_09f330d8;
            plVar13 = (long *)*puVar6;
            if (plVar13 != (long *)0x0) {
              lVar9 = *plVar13;
              uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f330d8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0776d57c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f330d8,0);
LAB_0776d57c:
              uVar10 = (*(code *)*puVar6)(plVar13,uVar14,puVar6[1]);
              if ((uVar10 & 1) == 0) {
                if (*(long *)(unaff_x19 + 0x38) != 0) {
                  *(undefined1 *)(*(long *)(unaff_x19 + 0x38) + 0x10) = 0;
                  return 0;
                }
              }
              else if ((lVar12 != 0) &&
                      (plVar13 = *(long **)(unaff_x19 + 0x60), plVar13 != (long *)0x0)) {
                lVar9 = *plVar13;
                uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
                uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
                uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
                uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
                uVar7 = *(undefined4 *)(lVar12 + 0x10);
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_0776d60c;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar4,1);
LAB_0776d60c:
                uVar14 = (*(code *)*puVar6)(plVar13,uVar2,uVar1,uVar14,lVar12,uVar3,uVar7,puVar6[1])
                ;
                *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar14);
                uVar7 = 3;
                goto LAB_0776d644;
              }
            }
          }
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x38) + 0x10) == '\0') {
        return 0;
      }
      if ((lVar12 != 0) && (plVar13 = *(long **)(unaff_x19 + 0x60), plVar13 != (long *)0x0)) {
        lVar9 = *plVar13;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar7 = *(undefined4 *)(lVar12 + 0x10);
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f330d8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_0776d4f4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f330d8,2);
LAB_0776d4f4:
        lVar9 = (*(code *)*puVar6)(plVar13,uVar14,0,uVar7,puVar6[1]);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0776d66c;
          plVar13 = *(long **)(unaff_x19 + 0x50);
          if (plVar13 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(unaff_x19 + 0x38),
                                *(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x28),
                                lVar12,*(undefined8 *)(unaff_x19 + 0x60),
                                *(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(unaff_x19 + 0x40));
            *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
            thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18),uVar14);
            uVar7 = 4;
            goto LAB_0776d644;
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


