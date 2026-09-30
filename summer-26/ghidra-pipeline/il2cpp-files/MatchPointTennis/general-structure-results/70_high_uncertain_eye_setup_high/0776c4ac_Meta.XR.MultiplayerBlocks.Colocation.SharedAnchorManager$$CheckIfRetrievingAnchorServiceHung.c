/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$CheckIfRetrievingAnchorServiceHung
ENTRY_POINT: 0776c4ac
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
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__CheckIfRetrievingAnchorServiceHung(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long lVar14;
  int iVar15;
  long unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iStack000000000000001c;
  long in_stack_00000028;
  
  FUN_04447ba8(PTR_DAT_09f30dd0);
  FUN_04447ba8(PTR_DAT_09f33080);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f2fba0);
  FUN_04447ba8(PTR_DAT_09f33088);
  FUN_04447ba8(PTR_DAT_09f33090);
  FUN_04447ba8(PTR_DAT_09f33098);
  FUN_04447ba8(PTR_DAT_09f30ea0);
  FUN_04447ba8(PTR_DAT_09f330a0);
  FUN_04447ba8(PTR_DAT_09f330a8);
  FUN_04447ba8(PTR_DAT_09f330b0);
  FUN_04447ba8(PTR_DAT_09f30ce8);
  FUN_04447ba8(PTR_DAT_09f330b8);
  *(undefined1 *)(unaff_x19 + 0x2ee) = 1;
  iStack000000000000001c = 0;
  if (*(int *)(unaff_x20 + 0x10) - 1U < 2) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffd;
    FUN_0776ccfc();
  }
  else if (*(int *)(unaff_x20 + 0x10) == 0) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    lVar14 = *(long *)(unaff_x20 + 0x20);
    uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2fba0);
    FUN_087dab30(uVar4,0);
    *(undefined8 *)(in_stack_00000028 + 0x78) = uVar4;
    thunk_FUN_044bb4b4((undefined8 *)(in_stack_00000028 + 0x78),uVar4);
    if (*(long *)(in_stack_00000028 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_087dab38(*(long *)(in_stack_00000028 + 0x78),0);
    *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar11 = *(long *)(lVar14 + 0x60);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar10 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar10) {
      FUN_07a61000(*(undefined8 *)(lVar11 + 0x10),0,iVar10,0);
    }
    **(undefined1 **)(*(long *)PTR_DAT_09f33080 + 0xb8) = 0;
    puVar2 = PTR_DAT_09f308d8;
    plVar16 = *(long **)(in_stack_00000028 + 0x28);
    if (plVar16 != (long *)0x0) {
      lVar11 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f308d8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0776c688;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f308d8,0);
LAB_0776c688:
      (*(code *)*puVar5)(plVar16,puVar5[1]);
      plVar16 = *(long **)(in_stack_00000028 + 0x28);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar11 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
            goto LAB_0776c6f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar16,*(long *)puVar2,0xf);
LAB_0776c6f0:
      (*(code *)*puVar5)(plVar16,puVar5[1]);
    }
    puVar3 = PTR_DAT_09f1e8c0;
    puVar2 = PTR_DAT_09f1e538;
    if ((*(char *)(in_stack_00000028 + 0x30) == '\0') ||
       (*(char *)(in_stack_00000028 + 0x31) != '\0')) {
      lVar11 = *(long *)(in_stack_00000028 + 0x40);
      if ((lVar11 == 0) || (iVar10 = *(int *)(lVar11 + 0x18), iVar10 == 0)) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30ce8,0);
        lVar14 = *(long *)(in_stack_00000028 + 0x38);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      }
      else if (*(int *)(lVar14 + 0x20) < 0) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f330b0,0);
        lVar14 = *(long *)(in_stack_00000028 + 0x38);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      }
      else if (*(int *)(lVar14 + 0x38) - 2U < 0x1fff) {
        if (0 < iVar10) {
          iVar15 = 0;
          do {
            uVar4 = FUN_05badb74(lVar11,iVar15,*(undefined8 *)puVar3);
            lVar11 = FUN_0775e914(uVar4,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
              uVar12 = 0;
              uVar9 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
              do {
                if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                uVar4 = *(undefined8 *)(lVar11 + 0x20 + uVar12 * 8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar9 = FUN_0952c404(uVar4,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(long *)(in_stack_00000028 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  plVar16 = (long *)FUN_05badb74(*(long *)(in_stack_00000028 + 0x40),iVar15,
                                                 *(undefined8 *)puVar3);
                  uVar4 = *(undefined8 *)PTR_DAT_09f30ea0;
                  if (plVar16 == (long *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar16 + 0x168))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                  }
                  uVar4 = FUN_078b4f58(uVar4,uVar8,*(undefined8 *)PTR_DAT_09f330a0,0);
                  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  FUN_094c6b48(uVar4,0);
                  lVar14 = *(long *)(in_stack_00000028 + 0x38);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  goto 
                  Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext
                  ;
                }
                uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
            }
            lVar11 = *(long *)(in_stack_00000028 + 0x40);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            iVar10 = *(int *)(lVar11 + 0x18);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar10);
        }
        lVar11 = *(long *)(in_stack_00000028 + 0x48);
        if (lVar11 != 0) {
          iStack000000000000001c = iVar10;
          uVar4 = FUN_07a3b850(&stack0x0000001c,0);
          uVar4 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f33090,uVar4,*(undefined8 *)PTR_DAT_09f33098
                               ,0);
          (**(code **)(lVar11 + 0x18))
                    (DAT_01c7660c,*(undefined8 *)(lVar11 + 0x40),uVar4,
                     *(undefined8 *)(lVar11 + 0x28));
        }
        uVar17 = *(undefined8 *)(in_stack_00000028 + 0x50);
        uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e70);
        FUN_05bad610(uVar6,*(undefined8 *)PTR_DAT_09f30e78);
        uVar18 = *(undefined8 *)(in_stack_00000028 + 0x40);
        uVar4 = *(undefined8 *)(in_stack_00000028 + 0x58);
        uVar8 = *(undefined8 *)(in_stack_00000028 + 0x60);
        uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32fc0);
        FUN_05bad610(uVar7,*(undefined8 *)PTR_DAT_09f32fb8);
        lVar11 = FUN_07769854(lVar14,uVar17,uVar6,uVar18,uVar4,uVar8,uVar7,0);
        uVar1 = *(undefined4 *)(lVar14 + 0x10);
        if (*(int *)(*(long *)PTR_DAT_09f30dd0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar12 = FUN_0777ff38(lVar11,uVar1,0);
        if ((uVar12 & 1) != 0) {
          if (((*(char *)(lVar14 + 0x33) != '\0') && (*(int *)(lVar14 + 0x44) - 3U < 2)) &&
             (2 < *(int *)(lVar14 + 0x10))) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c33b0(*(undefined8 *)PTR_DAT_09f33088,0);
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_0776ccc0(*(long *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x90));
          if (*(char *)(in_stack_00000028 + 0x31) != '\0') {
            uVar4 = FUN_07769b6c(lVar14,*(undefined8 *)(in_stack_00000028 + 0x38),
                                 *(undefined8 *)(in_stack_00000028 + 0x68),lVar11,
                                 *(undefined1 *)(in_stack_00000028 + 0x30),
                                 *(undefined8 *)(in_stack_00000028 + 0x28),
                                 *(undefined8 *)(in_stack_00000028 + 0x70),0);
            *(undefined8 *)(in_stack_00000028 + 0x18) = uVar4;
            thunk_FUN_044bb4b4();
            *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
            return 1;
          }
          uVar4 = FUN_07769a7c(lVar14,*(undefined8 *)(in_stack_00000028 + 0x48),
                               *(undefined8 *)(in_stack_00000028 + 0x38),
                               *(undefined8 *)(in_stack_00000028 + 0x68),lVar11,
                               *(undefined8 *)(in_stack_00000028 + 0x28),0);
          *(undefined8 *)(in_stack_00000028 + 0x18) = uVar4;
          thunk_FUN_044bb4b4();
          *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
          return 1;
        }
        lVar14 = *(long *)(in_stack_00000028 + 0x38);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f330b8,0);
        lVar14 = *(long *)(in_stack_00000028 + 0x38);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f330a8,0);
      lVar14 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext:
    *(undefined1 *)(lVar14 + 0x10) = 0;
    FUN_0776ccfc();
  }
  return 0;
}


