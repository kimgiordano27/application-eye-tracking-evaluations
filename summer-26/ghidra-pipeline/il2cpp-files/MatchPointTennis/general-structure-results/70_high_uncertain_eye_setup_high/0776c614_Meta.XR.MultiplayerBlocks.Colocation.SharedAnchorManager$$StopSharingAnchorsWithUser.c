/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$StopSharingAnchorsWithUser
ENTRY_POINT: 0776c614
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__StopSharingAnchorsWithUser(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  int iVar12;
  long *plVar13;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  **(undefined1 **)(*(long *)PTR_DAT_09f33080 + 0xb8) = 0;
  puVar2 = PTR_DAT_09f308d8;
  plVar13 = *(long **)(in_stack_00000028 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f308d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0776c688;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f308d8,0);
LAB_0776c688:
    (*(code *)*puVar4)(plVar13,puVar4[1]);
    plVar13 = *(long **)(in_stack_00000028 + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_0776c6f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar2,0xf);
LAB_0776c6f0:
    (*(code *)*puVar4)(plVar13,puVar4[1]);
  }
  puVar3 = PTR_DAT_09f1e8c0;
  puVar2 = PTR_DAT_09f1e538;
  if ((*(char *)(in_stack_00000028 + 0x30) == '\0') || (*(char *)(in_stack_00000028 + 0x31) != '\0')
     ) {
    lVar7 = *(long *)(in_stack_00000028 + 0x40);
    if ((lVar7 == 0) || (iVar9 = *(int *)(lVar7 + 0x18), iVar9 == 0)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30ce8,0);
      lVar7 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    else if (*(int *)(unaff_x19 + 0x20) < 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f330b0,0);
      lVar7 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    else if (*(int *)(unaff_x19 + 0x38) - 2U < 0x1fff) {
      if (0 < iVar9) {
        iVar12 = 0;
        do {
          uVar5 = FUN_05badb74(lVar7,iVar12,*(undefined8 *)puVar3);
          lVar7 = FUN_0775e914(uVar5,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar10 = 0;
            uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar5 = *(undefined8 *)(lVar7 + 0x20 + uVar10 * 8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar8 = FUN_0952c404(uVar5,0,0);
              if ((uVar8 & 1) != 0) {
                if (*(long *)(in_stack_00000028 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                plVar13 = (long *)FUN_05badb74(*(long *)(in_stack_00000028 + 0x40),iVar12,
                                               *(undefined8 *)puVar3);
                uVar5 = *(undefined8 *)PTR_DAT_09f30ea0;
                if (plVar13 == (long *)0x0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170))
                  ;
                }
                uVar5 = FUN_078b4f58(uVar5,uVar6,*(undefined8 *)PTR_DAT_09f330a0,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                FUN_094c6b48(uVar5,0);
                lVar7 = *(long *)(in_stack_00000028 + 0x38);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                goto 
                Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext
                ;
              }
              uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          lVar7 = *(long *)(in_stack_00000028 + 0x40);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          iVar9 = *(int *)(lVar7 + 0x18);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar9);
      }
      lVar7 = *(long *)(in_stack_00000028 + 0x48);
      if (lVar7 != 0) {
        in_stack_00000018._4_4_ = iVar9;
        uVar5 = FUN_07a3b850((long)&stack0x00000018 + 4,0);
        uVar5 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f33090,uVar5,*(undefined8 *)PTR_DAT_09f33098,0
                            );
        (**(code **)(lVar7 + 0x18))
                  (DAT_01c7660c,*(undefined8 *)(lVar7 + 0x40),uVar5,*(undefined8 *)(lVar7 + 0x28));
      }
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e70);
      FUN_05bad610(uVar5,*(undefined8 *)PTR_DAT_09f30e78);
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32fc0);
      FUN_05bad610(uVar5,*(undefined8 *)PTR_DAT_09f32fb8);
      lVar7 = FUN_07769854();
      uVar1 = *(undefined4 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_09f30dd0 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar10 = FUN_0777ff38(lVar7,uVar1,0);
      if ((uVar10 & 1) != 0) {
        if (((*(char *)(unaff_x19 + 0x33) != '\0') && (*(int *)(unaff_x19 + 0x44) - 3U < 2)) &&
           (2 < *(int *)(unaff_x19 + 0x10))) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c33b0(*(undefined8 *)PTR_DAT_09f33088,0);
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(lVar7 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_0776ccc0(*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x90));
        if (*(char *)(in_stack_00000028 + 0x31) != '\0') {
          uVar5 = FUN_07769b6c();
          *(undefined8 *)(in_stack_00000028 + 0x18) = uVar5;
          thunk_FUN_044bb4b4();
          *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
          return 1;
        }
        uVar5 = FUN_07769a7c();
        *(undefined8 *)(in_stack_00000028 + 0x18) = uVar5;
        thunk_FUN_044bb4b4();
        *(undefined4 *)(in_stack_00000028 + 0x10) = 2;
        return 1;
      }
      lVar7 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f330b8,0);
      lVar7 = *(long *)(in_stack_00000028 + 0x38);
      if (lVar7 == 0) {
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
    lVar7 = *(long *)(in_stack_00000028 + 0x38);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<AnchorCreationTask>d__21__MoveNext:
  *(undefined1 *)(lVar7 + 0x10) = 0;
  FUN_0776ccfc();
  return 0;
}


