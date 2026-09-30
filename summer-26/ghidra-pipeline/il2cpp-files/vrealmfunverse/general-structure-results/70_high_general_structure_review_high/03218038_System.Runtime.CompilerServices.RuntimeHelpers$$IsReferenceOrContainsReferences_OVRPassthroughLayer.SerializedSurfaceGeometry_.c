/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03218038
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0321845c) */
/* WARNING: Removing unreachable block (ram,0x03218470) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar5;
  long unaff_x22;
  void *pvVar6;
  long unaff_x29;
  
  if (*(uint *)(unaff_x19 + 0x18) < 7) {
LAB_0321840c:
    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50));
    lVar5 = *(long *)(unaff_x20 + 0x38);
    plVar4 = *(long **)(unaff_x22 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0xf8);
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + 0x60);
    }
    pvVar6 = *(void **)(unaff_x29 + -0x108);
    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x100));
    lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(lVar5 + 0x38),pvVar6);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_03218424:
        uVar3 = thunk_FUN_02b870ec();
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar3,0);
        }
        goto LAB_032184c8;
      }
      if ((*(uint *)(plVar4 + 3) & 0xfffffff8) == 0) goto LAB_0321840c;
      plVar4[0xb] = lVar5;
      thunk_FUN_02bb0e9c(plVar4 + 0xb,lVar5);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      plVar4 = *(long **)(unaff_x22 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x110);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x40) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + 0x68);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x120);
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x118));
      lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(lVar5 + 0x40),pvVar6);
      if (plVar4 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_03218424;
        if (*(uint *)(plVar4 + 3) < 9) goto LAB_0321840c;
        plVar4[0xc] = lVar5;
        thunk_FUN_02bb0e9c(plVar4 + 0xc,lVar5);
        lVar5 = *(long *)(unaff_x20 + 0x38);
        plVar4 = *(long **)(unaff_x22 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x128);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x48) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x70);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x138);
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x130));
        lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(lVar5 + 0x48),pvVar6);
        if (plVar4 != (long *)0x0) {
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
          goto LAB_03218424;
          if (*(uint *)(plVar4 + 3) < 10) goto LAB_0321840c;
          plVar4[0xd] = lVar5;
          thunk_FUN_02bb0e9c(plVar4 + 0xd,lVar5);
          lVar5 = *(long *)(unaff_x20 + 0x38);
          plVar4 = *(long **)(unaff_x22 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x140);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x50) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x78);
          }
          pvVar6 = *(void **)(unaff_x29 + -0x150);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x148));
          lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(lVar5 + 0x50),pvVar6);
          if (plVar4 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_03218424;
            if (*(uint *)(plVar4 + 3) < 0xb) goto LAB_0321840c;
            plVar4[0xe] = lVar5;
            thunk_FUN_02bb0e9c(plVar4 + 0xe,lVar5);
            lVar5 = *(long *)(unaff_x20 + 0x38);
            plVar4 = *(long **)(unaff_x22 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x158);
            if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x80);
            }
            pvVar6 = *(void **)(unaff_x29 + -0x168);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x160));
            lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(lVar5 + 0x58),pvVar6);
            if (plVar4 != (long *)0x0) {
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
              goto LAB_03218424;
              if (*(uint *)(plVar4 + 3) < 0xc) goto LAB_0321840c;
              plVar4[0xf] = lVar5;
              thunk_FUN_02bb0e9c(plVar4 + 0xf,lVar5);
              plVar4 = *(long **)(unaff_x22 + 0x38);
              lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
              pvVar1 = *(void **)(unaff_x29 + -0x170);
              if (-1 < *(int *)(lVar5 + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + 0x88);
              }
              pvVar6 = *(void **)(unaff_x29 + -0x180);
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x178));
              lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(lVar5,pvVar6);
              if (plVar4 != (long *)0x0) {
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
                goto LAB_03218424;
                if (*(uint *)(plVar4 + 3) < 0xd) goto LAB_0321840c;
                plVar4[0x10] = lVar5;
                thunk_FUN_02bb0e9c(plVar4 + 0x10,lVar5);
                uVar3 = FUN_0524b830();
                *(undefined8 *)(unaff_x29 + -0x58) = uVar3;
                *(undefined8 *)(unaff_x29 + -0x70) = 0;
                *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
                *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x58;
                if (*(long *)(*(long *)(unaff_x29 + -0x188) + 0x18) == 0) {
                  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)
                     ) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  goto LAB_032184c8;
                }
                FUN_0524c15c();
                if (*(long *)(unaff_x29 + -0x50) != 0) {
                  FUN_0524b8b0(*(long *)(unaff_x29 + -0x50),**(undefined8 **)(unaff_x29 + -0x60),0);
                  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)
                     ) {
                    return;
                  }
                  goto LAB_032184c8;
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
  }
LAB_032184c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


