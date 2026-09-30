/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.Vector4f>
ENTRY_POINT: 032184fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03218f50) */
/* WARNING: Removing unreachable block (ram,0x03218f64) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_Vector4f>
               (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long in_x9;
  long in_x10;
  long lVar21;
  undefined1 *__dest;
  undefined1 *__dest_00;
  void *pvVar22;
  undefined1 *__dest_01;
  undefined1 *__dest_02;
  long *plVar23;
  long unaff_x29;
  
  lVar21 = *(long *)(unaff_x29 + 0x98);
  *(undefined8 *)(in_x9 + -0x100) = param_1;
  *(undefined8 *)(unaff_x29 + -0x170) = *(undefined8 *)(unaff_x29 + 0x88);
  *(undefined8 *)(unaff_x29 + -0x158) = *(undefined8 *)(unaff_x29 + 0x80);
  *(undefined8 *)(unaff_x29 + -0x140) = *(undefined8 *)(unaff_x29 + 0x78);
  *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + 0x70);
  lVar20 = tpidr_el0;
  *(long *)(unaff_x29 + -0x78) = lVar20;
  *(undefined8 *)(in_x10 + -0x100) = *(undefined8 *)(unaff_x29 + 0x68);
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + 0x60);
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar20 + 0x28);
  plVar19 = *(long **)(lVar21 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x20) = param_4;
  *(void **)(unaff_x29 + -0x18) = param_3;
  *(undefined8 *)(unaff_x29 + -0x80) = param_4;
  *(undefined8 *)(unaff_x29 + -0x90) = param_5;
  *(undefined8 *)(unaff_x29 + -0x30) = param_6;
  *(undefined8 *)(unaff_x29 + -0x28) = param_5;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_6;
  *(undefined8 *)(unaff_x29 + -0xb0) = param_7;
  *(undefined8 *)(unaff_x29 + -0x40) = param_8;
  *(undefined8 *)(unaff_x29 + -0x38) = param_7;
  *(undefined8 *)(unaff_x29 + -200) = param_8;
  *(undefined8 *)(unaff_x29 + -0xe0) = param_9;
  *(undefined8 *)(unaff_x29 + -0x48) = param_9;
  if (plVar19 == (long *)0x0) {
    FUN_02b76274(lVar21);
    plVar19 = *(long **)(lVar21 + 0x38);
  }
  uVar2 = *(uint *)(*plVar19 + 0xfc);
  uVar3 = *(uint *)(plVar19[1] + 0xfc);
  uVar4 = *(uint *)(plVar19[2] + 0xfc);
  uVar5 = *(uint *)(plVar19[3] + 0xfc);
  uVar6 = *(uint *)(plVar19[6] + 0xfc);
  uVar7 = *(uint *)(plVar19[7] + 0xfc);
  uVar8 = *(uint *)(plVar19[4] + 0xfc);
  uVar9 = *(uint *)(plVar19[5] + 0xfc);
  uVar10 = *(uint *)(plVar19[10] + 0xfc);
  uVar11 = *(uint *)(plVar19[0xb] + 0xfc);
  uVar12 = *(uint *)(plVar19[8] + 0xfc);
  uVar13 = *(uint *)(plVar19[9] + 0xfc);
  uVar14 = *(uint *)(plVar19[0xd] + 0xfc);
  uVar15 = *(uint *)(plVar19[0xc] + 0xfc);
  __dest = &stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x88) = (ulong)uVar3;
  __dest_02 = __dest + -((ulong)uVar3 + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x98) = (ulong)uVar4;
  __dest_01 = __dest_02 + -((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar5;
  __dest_00 = __dest_01 + -((ulong)uVar5 + 0xf & 0x1fffffff0);
  lVar20 = (long)__dest_00 - ((ulong)uVar8 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xc0) = lVar20;
  *(ulong *)(unaff_x29 + -0xb8) = (ulong)uVar8;
  lVar20 = lVar20 - ((ulong)uVar9 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xd8) = lVar20;
  *(ulong *)(unaff_x29 + -0xd0) = (ulong)uVar9;
  lVar20 = lVar20 - ((ulong)uVar6 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf0) = lVar20;
  *(ulong *)(unaff_x29 + -0xe8) = (ulong)uVar6;
  *(ulong *)(unaff_x29 + -0x100) = (ulong)uVar7;
  lVar20 = lVar20 - ((ulong)uVar7 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x108) = lVar20;
  *(ulong *)(unaff_x29 + -0x118) = (ulong)uVar12;
  lVar20 = lVar20 - ((ulong)uVar12 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar20;
  *(ulong *)(unaff_x29 + -0x130) = (ulong)uVar13;
  lVar20 = lVar20 - ((ulong)uVar13 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar20;
  *(ulong *)(unaff_x29 + -0x148) = (ulong)uVar10;
  lVar20 = lVar20 - ((ulong)uVar10 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x150) = lVar20;
  *(ulong *)(unaff_x29 + -0x160) = (ulong)uVar11;
  lVar20 = lVar20 - ((ulong)uVar11 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x168) = lVar20;
  *(ulong *)(unaff_x29 + -0x178) = (ulong)uVar15;
  lVar20 = lVar20 - ((ulong)uVar15 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x180) = lVar20;
  *(ulong *)(unaff_x29 + -400) = (ulong)uVar14;
  *(ulong *)(unaff_x29 + -0x198) = lVar20 - ((ulong)uVar14 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x1a0) = param_2;
  lVar20 = FUN_0525d628(param_2,0);
  *(long *)(unaff_x29 + -0x50) = lVar20;
  if (lVar20 != 0) {
    plVar23 = *(long **)(lVar21 + 0x38);
    plVar19 = *(long **)(lVar20 + 0x38);
    if (-1 < *(int *)(*plVar23 + 0x28)) {
      param_3 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest,param_3,(ulong)uVar2);
    lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*plVar23,__dest);
    if (plVar19 != (long *)0x0) {
      if ((lVar16 != 0) &&
         (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0)) {
LAB_03218f18:
        uVar18 = thunk_FUN_02b870ec();
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar18,0);
        }
        goto LAB_03218fbc;
      }
      if ((int)plVar19[3] == 0) {
LAB_03218f00:
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_03218fbc;
      }
      plVar19[4] = lVar16;
      thunk_FUN_02bb0e9c(plVar19 + 4,lVar16);
      lVar16 = *(long *)(lVar21 + 0x38);
      plVar19 = *(long **)(lVar20 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x80);
      if (-1 < *(int *)(*(long *)(lVar16 + 8) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest_02,pvVar1,*(size_t *)(unaff_x29 + -0x88));
      lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                         (*(undefined8 *)(lVar16 + 8),__dest_02);
      if (plVar19 != (long *)0x0) {
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0))
        goto LAB_03218f18;
        if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_03218f00;
        plVar19[5] = lVar16;
        thunk_FUN_02bb0e9c(plVar19 + 5,lVar16);
        lVar16 = *(long *)(lVar21 + 0x38);
        plVar19 = *(long **)(lVar20 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x90);
        if (-1 < *(int *)(*(long *)(lVar16 + 0x10) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(__dest_01,pvVar1,*(size_t *)(unaff_x29 + -0x98));
        lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(lVar16 + 0x10),__dest_01);
        if (plVar19 != (long *)0x0) {
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0))
          goto LAB_03218f18;
          if (*(uint *)(plVar19 + 3) < 3) goto LAB_03218f00;
          plVar19[6] = lVar16;
          thunk_FUN_02bb0e9c(plVar19 + 6,lVar16);
          lVar16 = *(long *)(lVar21 + 0x38);
          plVar19 = *(long **)(lVar20 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0xa0);
          if (-1 < *(int *)(*(long *)(lVar16 + 0x18) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x30);
          }
          memcpy(__dest_00,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(lVar16 + 0x18),__dest_00);
          if (plVar19 != (long *)0x0) {
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0))
            goto LAB_03218f18;
            if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0) goto LAB_03218f00;
            plVar19[7] = lVar16;
            thunk_FUN_02bb0e9c(plVar19 + 7,lVar16);
            lVar16 = *(long *)(lVar21 + 0x38);
            pvVar22 = *(void **)(unaff_x29 + -0xc0);
            plVar19 = *(long **)(lVar20 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0xb0);
            if (-1 < *(int *)(*(long *)(lVar16 + 0x20) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x38);
            }
            memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0xb8));
            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(lVar16 + 0x20),pvVar22);
            if (plVar19 != (long *)0x0) {
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0)
                 ) goto LAB_03218f18;
              if (*(uint *)(plVar19 + 3) < 5) goto LAB_03218f00;
              plVar19[8] = lVar16;
              thunk_FUN_02bb0e9c(plVar19 + 8,lVar16);
              lVar16 = *(long *)(lVar21 + 0x38);
              pvVar22 = *(void **)(unaff_x29 + -0xd8);
              plVar19 = *(long **)(lVar20 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -200);
              if (-1 < *(int *)(*(long *)(lVar16 + 0x28) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x40);
              }
              memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0xd0));
              lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                 (*(undefined8 *)(lVar16 + 0x28),pvVar22);
              if (plVar19 != (long *)0x0) {
                if ((lVar16 != 0) &&
                   (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar17 == 0)) goto LAB_03218f18;
                if (*(uint *)(plVar19 + 3) < 6) goto LAB_03218f00;
                plVar19[9] = lVar16;
                thunk_FUN_02bb0e9c(plVar19 + 9,lVar16);
                lVar16 = *(long *)(lVar21 + 0x38);
                pvVar22 = *(void **)(unaff_x29 + -0xf0);
                plVar19 = *(long **)(lVar20 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xe0);
                if (-1 < *(int *)(*(long *)(lVar16 + 0x30) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x48);
                }
                memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0xe8));
                lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                   (*(undefined8 *)(lVar16 + 0x30),pvVar22);
                if (plVar19 != (long *)0x0) {
                  if ((lVar16 != 0) &&
                     (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar17 == 0)) goto LAB_03218f18;
                  if (*(uint *)(plVar19 + 3) < 7) goto LAB_03218f00;
                  plVar19[10] = lVar16;
                  thunk_FUN_02bb0e9c(plVar19 + 10,lVar16);
                  lVar16 = *(long *)(lVar21 + 0x38);
                  plVar19 = *(long **)(lVar20 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xf8);
                  if (-1 < *(int *)(*(long *)(lVar16 + 0x38) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x60);
                  }
                  pvVar22 = *(void **)(unaff_x29 + -0x108);
                  memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x100));
                  lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                     (*(undefined8 *)(lVar16 + 0x38),pvVar22);
                  if (plVar19 != (long *)0x0) {
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                       lVar17 == 0)) goto LAB_03218f18;
                    if ((*(uint *)(plVar19 + 3) & 0xfffffff8) == 0) goto LAB_03218f00;
                    plVar19[0xb] = lVar16;
                    thunk_FUN_02bb0e9c(plVar19 + 0xb,lVar16);
                    lVar16 = *(long *)(lVar21 + 0x38);
                    plVar19 = *(long **)(lVar20 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0x110);
                    if (-1 < *(int *)(*(long *)(lVar16 + 0x40) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x68);
                    }
                    pvVar22 = *(void **)(unaff_x29 + -0x120);
                    memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x118));
                    lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                       (*(undefined8 *)(lVar16 + 0x40),pvVar22);
                    if (plVar19 != (long *)0x0) {
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                         lVar17 == 0)) goto LAB_03218f18;
                      if (*(uint *)(plVar19 + 3) < 9) goto LAB_03218f00;
                      plVar19[0xc] = lVar16;
                      thunk_FUN_02bb0e9c(plVar19 + 0xc,lVar16);
                      lVar16 = *(long *)(lVar21 + 0x38);
                      plVar19 = *(long **)(lVar20 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0x128);
                      if (-1 < *(int *)(*(long *)(lVar16 + 0x48) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x70);
                      }
                      pvVar22 = *(void **)(unaff_x29 + -0x138);
                      memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x130));
                      lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                         (*(undefined8 *)(lVar16 + 0x48),pvVar22);
                      if (plVar19 != (long *)0x0) {
                        if ((lVar16 != 0) &&
                           (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar17 == 0)) goto LAB_03218f18;
                        if (*(uint *)(plVar19 + 3) < 10) goto LAB_03218f00;
                        plVar19[0xd] = lVar16;
                        thunk_FUN_02bb0e9c(plVar19 + 0xd,lVar16);
                        lVar16 = *(long *)(lVar21 + 0x38);
                        plVar19 = *(long **)(lVar20 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x140);
                        if (-1 < *(int *)(*(long *)(lVar16 + 0x50) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x78);
                        }
                        pvVar22 = *(void **)(unaff_x29 + -0x150);
                        memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x148));
                        lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)(lVar16 + 0x50),pvVar22);
                        if (plVar19 != (long *)0x0) {
                          if ((lVar16 != 0) &&
                             (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                             lVar17 == 0)) goto LAB_03218f18;
                          if (*(uint *)(plVar19 + 3) < 0xb) goto LAB_03218f00;
                          plVar19[0xe] = lVar16;
                          thunk_FUN_02bb0e9c(plVar19 + 0xe,lVar16);
                          lVar16 = *(long *)(lVar21 + 0x38);
                          plVar19 = *(long **)(lVar20 + 0x38);
                          pvVar1 = *(void **)(unaff_x29 + -0x158);
                          if (-1 < *(int *)(*(long *)(lVar16 + 0x58) + 0x28)) {
                            pvVar1 = (void *)(unaff_x29 + 0x80);
                          }
                          pvVar22 = *(void **)(unaff_x29 + -0x168);
                          memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x160));
                          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                             (*(undefined8 *)(lVar16 + 0x58),pvVar22);
                          if (plVar19 != (long *)0x0) {
                            if ((lVar16 != 0) &&
                               (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar19 + 0x40))
                               , lVar17 == 0)) goto LAB_03218f18;
                            if (*(uint *)(plVar19 + 3) < 0xc) goto LAB_03218f00;
                            plVar19[0xf] = lVar16;
                            thunk_FUN_02bb0e9c(plVar19 + 0xf,lVar16);
                            lVar16 = *(long *)(lVar21 + 0x38);
                            plVar19 = *(long **)(lVar20 + 0x38);
                            pvVar1 = *(void **)(unaff_x29 + -0x170);
                            if (-1 < *(int *)(*(long *)(lVar16 + 0x60) + 0x28)) {
                              pvVar1 = (void *)(unaff_x29 + 0x88);
                            }
                            pvVar22 = *(void **)(unaff_x29 + -0x180);
                            memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -0x178));
                            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                               (*(undefined8 *)(lVar16 + 0x60),pvVar22);
                            if (plVar19 != (long *)0x0) {
                              if ((lVar16 != 0) &&
                                 (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)
                                                                      (*plVar19 + 0x40)),
                                 lVar17 == 0)) goto LAB_03218f18;
                              if (*(uint *)(plVar19 + 3) < 0xd) goto LAB_03218f00;
                              plVar19[0x10] = lVar16;
                              thunk_FUN_02bb0e9c(plVar19 + 0x10,lVar16);
                              plVar19 = *(long **)(lVar20 + 0x38);
                              lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + 0x68);
                              pvVar1 = *(void **)(unaff_x29 + -0x188);
                              if (-1 < *(int *)(lVar21 + 0x28)) {
                                pvVar1 = (void *)(unaff_x29 + 0x90);
                              }
                              pvVar22 = *(void **)(unaff_x29 + -0x198);
                              memcpy(pvVar22,pvVar1,*(size_t *)(unaff_x29 + -400));
                              lVar21 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                 (lVar21,pvVar22);
                              if (plVar19 != (long *)0x0) {
                                if ((lVar21 != 0) &&
                                   (lVar16 = thunk_FUN_02b79548(lVar21,*(undefined8 *)
                                                                        (*plVar19 + 0x40)),
                                   lVar16 == 0)) goto LAB_03218f18;
                                if (*(uint *)(plVar19 + 3) < 0xe) goto LAB_03218f00;
                                plVar19[0x11] = lVar21;
                                thunk_FUN_02bb0e9c(plVar19 + 0x11,lVar21);
                                uVar18 = FUN_0524b830(lVar20,0);
                                *(undefined8 *)(unaff_x29 + -0x58) = uVar18;
                                *(undefined8 *)(unaff_x29 + -0x70) = 0;
                                *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
                                *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x58;
                                lVar21 = *(long *)(*(long *)(unaff_x29 + -0x1a0) + 0x18);
                                if (lVar21 == 0) {
                                  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) ==
                                      *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02b3cac4();
                                  }
                                  goto LAB_03218fbc;
                                }
                                FUN_0524c15c(lVar21,lVar20,0);
                                if (*(long *)(unaff_x29 + -0x50) != 0) {
                                  FUN_0524b8b0(*(long *)(unaff_x29 + -0x50),
                                               **(undefined8 **)(unaff_x29 + -0x60),0);
                                  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) ==
                                      *(long *)(unaff_x29 + -0x10)) {
                                    return;
                                  }
                                  goto LAB_03218fbc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
LAB_03218fbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


