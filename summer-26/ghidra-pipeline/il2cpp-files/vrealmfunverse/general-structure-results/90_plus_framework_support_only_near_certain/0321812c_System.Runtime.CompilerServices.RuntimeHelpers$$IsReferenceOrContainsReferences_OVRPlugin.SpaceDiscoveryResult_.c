/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0321812c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0321845c) */
/* WARNING: Removing unreachable block (ram,0x03218470) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  void *pvVar6;
  long unaff_x29;
  
  lVar2 = thunk_FUN_02b79548();
  if (lVar2 == 0) {
LAB_03218424:
    uVar4 = thunk_FUN_02b870ec();
    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,0);
    }
  }
  else {
    if (*(uint *)(unaff_x19 + 0x18) < 9) {
LAB_0321840c:
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_032184c8;
    }
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x21;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x60));
    lVar2 = *(long *)(unaff_x20 + 0x38);
    plVar5 = *(long **)(unaff_x22 + 0x38);
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
      goto LAB_03218424;
      if (*(uint *)(plVar5 + 3) < 10) goto LAB_0321840c;
      plVar5[0xd] = lVar2;
      thunk_FUN_02bb0e9c(plVar5 + 0xd,lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x38);
      plVar5 = *(long **)(unaff_x22 + 0x38);
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
        goto LAB_03218424;
        if (*(uint *)(plVar5 + 3) < 0xb) goto LAB_0321840c;
        plVar5[0xe] = lVar2;
        thunk_FUN_02bb0e9c(plVar5 + 0xe,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar5 = *(long **)(unaff_x22 + 0x38);
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
          goto LAB_03218424;
          if (*(uint *)(plVar5 + 3) < 0xc) goto LAB_0321840c;
          plVar5[0xf] = lVar2;
          thunk_FUN_02bb0e9c(plVar5 + 0xf,lVar2);
          plVar5 = *(long **)(unaff_x22 + 0x38);
          lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
          pvVar1 = *(void **)(unaff_x29 + -0x170);
          if (-1 < *(int *)(lVar2 + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x88);
          }
          pvVar6 = *(void **)(unaff_x29 + -0x180);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x178));
          lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(lVar2,pvVar6);
          if (plVar5 != (long *)0x0) {
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_03218424;
            if (*(uint *)(plVar5 + 3) < 0xd) goto LAB_0321840c;
            plVar5[0x10] = lVar2;
            thunk_FUN_02bb0e9c(plVar5 + 0x10,lVar2);
            uVar4 = FUN_0524b830();
            *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
            *(undefined8 *)(unaff_x29 + -0x70) = 0;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
            *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x58;
            if (*(long *)(*(long *)(unaff_x29 + -0x188) + 0x18) == 0) {
              if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_032184c8;
            }
            FUN_0524c15c();
            if (*(long *)(unaff_x29 + -0x50) != 0) {
              FUN_0524b8b0(*(long *)(unaff_x29 + -0x50),**(undefined8 **)(unaff_x29 + -0x60),0);
              if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                return;
              }
              goto LAB_032184c8;
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


