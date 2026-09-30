/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03219624
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03219afc) */
/* WARNING: Removing unreachable block (ram,0x03219b10) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *plVar5;
  long unaff_x20;
  void *pvVar6;
  long unaff_x23;
  long unaff_x29;
  
  lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody();
  if (unaff_x19 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_03219ac4:
      uVar4 = thunk_FUN_02b870ec();
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,0);
      }
      goto LAB_03219b68;
    }
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffff8) == 0) {
LAB_03219aac:
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_03219b68;
    }
    unaff_x19[0xb] = lVar2;
    thunk_FUN_02bb0e9c(unaff_x19 + 0xb,lVar2);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    plVar5 = *(long **)(unaff_x23 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x110);
    if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + 0x68);
    }
    pvVar6 = *(void **)(unaff_x29 + -0x120);
    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x118));
    lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(lVar2 + 0x40),pvVar6);
    if (plVar5 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
      goto LAB_03219ac4;
      if (*(uint *)(plVar5 + 3) < 9) goto LAB_03219aac;
      plVar5[0xc] = lVar2;
      thunk_FUN_02bb0e9c(plVar5 + 0xc,lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x38);
      plVar5 = *(long **)(unaff_x23 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x128);
      if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + 0x70);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x138);
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x130));
      lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(lVar2 + 0x48),pvVar6);
      if (plVar5 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_03219ac4;
        if (*(uint *)(plVar5 + 3) < 10) goto LAB_03219aac;
        plVar5[0xd] = lVar2;
        thunk_FUN_02bb0e9c(plVar5 + 0xd,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar5 = *(long **)(unaff_x23 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x140);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x78);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x150);
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x148));
        lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(lVar2 + 0x50),pvVar6);
        if (plVar5 != (long *)0x0) {
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_03219ac4;
          if (*(uint *)(plVar5 + 3) < 0xb) goto LAB_03219aac;
          plVar5[0xe] = lVar2;
          thunk_FUN_02bb0e9c(plVar5 + 0xe,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          plVar5 = *(long **)(unaff_x23 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x158);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x58) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x80);
          }
          pvVar6 = *(void **)(unaff_x29 + -0x168);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x160));
          lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(lVar2 + 0x58),pvVar6);
          if (plVar5 != (long *)0x0) {
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_03219ac4;
            if (*(uint *)(plVar5 + 3) < 0xc) goto LAB_03219aac;
            plVar5[0xf] = lVar2;
            thunk_FUN_02bb0e9c(plVar5 + 0xf,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            plVar5 = *(long **)(unaff_x23 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x170);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x88);
            }
            pvVar6 = *(void **)(unaff_x29 + -0x180);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x178));
            lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(lVar2 + 0x60),pvVar6);
            if (plVar5 != (long *)0x0) {
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
              goto LAB_03219ac4;
              if (*(uint *)(plVar5 + 3) < 0xd) goto LAB_03219aac;
              plVar5[0x10] = lVar2;
              thunk_FUN_02bb0e9c(plVar5 + 0x10,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              plVar5 = *(long **)(unaff_x23 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x188);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x68) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + 0x90);
              }
              pvVar6 = *(void **)(unaff_x29 + -0x198);
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -400));
              lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(lVar2 + 0x68),pvVar6);
              if (plVar5 != (long *)0x0) {
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_03219ac4;
                if (*(uint *)(plVar5 + 3) < 0xe) goto LAB_03219aac;
                plVar5[0x11] = lVar2;
                thunk_FUN_02bb0e9c(plVar5 + 0x11,lVar2);
                plVar5 = *(long **)(unaff_x23 + 0x38);
                lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x70);
                pvVar1 = *(void **)(unaff_x29 + -0x1a0);
                if (-1 < *(int *)(lVar2 + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + 0x98);
                }
                pvVar6 = *(void **)(unaff_x29 + -0x1b0);
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x1a8));
                lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(lVar2,pvVar6);
                if (plVar5 != (long *)0x0) {
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
                     ) goto LAB_03219ac4;
                  if (*(uint *)(plVar5 + 3) < 0xf) goto LAB_03219aac;
                  plVar5[0x12] = lVar2;
                  thunk_FUN_02bb0e9c(plVar5 + 0x12,lVar2);
                  uVar4 = FUN_0524b830();
                  *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
                  *(undefined8 *)(unaff_x29 + -0x70) = 0;
                  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
                  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x58;
                  if (*(long *)(*(long *)(unaff_x29 + -0x1b8) + 0x18) == 0) {
                    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) ==
                        *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_03219b68;
                  }
                  FUN_0524c15c();
                  if (*(long *)(unaff_x29 + -0x50) != 0) {
                    FUN_0524b8b0(*(long *)(unaff_x29 + -0x50),**(undefined8 **)(unaff_x29 + -0x60),0
                                );
                    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) ==
                        *(long *)(unaff_x29 + -0x10)) {
                      return;
                    }
                    goto LAB_03219b68;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03219b68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


