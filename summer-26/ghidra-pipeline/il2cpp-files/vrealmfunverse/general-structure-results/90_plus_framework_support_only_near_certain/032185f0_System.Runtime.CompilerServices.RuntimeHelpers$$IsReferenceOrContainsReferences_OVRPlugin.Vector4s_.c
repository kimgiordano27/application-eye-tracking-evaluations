/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.Vector4s>
ENTRY_POINT: 032185f0
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

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_Vector4s>
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  long in_x10;
  long in_x12;
  long in_x13;
  long in_x14;
  long in_x15;
  long in_x16;
  long in_x17;
  undefined8 unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined1 *__dest;
  undefined1 *__dest_00;
  void *pvVar8;
  size_t unaff_x24;
  undefined1 *__dest_01;
  undefined1 *__dest_02;
  void *unaff_x27;
  long *plVar9;
  long unaff_x29;
  
  uVar2 = *(uint *)(in_x13 + 0xfc);
  __dest = &stack0x00000000 + -in_x9;
  *(long *)(unaff_x29 + -0x88) = param_6;
  __dest_02 = __dest + -(param_6 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = param_5;
  __dest_01 = __dest_02 + -(param_5 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xa8) = param_4;
  __dest_00 = __dest_01 + -(param_4 + 0xfU & 0x1fffffff0);
  lVar6 = (long)__dest_00 - (param_3 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xc0) = lVar6;
  *(long *)(unaff_x29 + -0xb8) = param_3;
  lVar6 = lVar6 - (param_2 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xd8) = lVar6;
  *(long *)(unaff_x29 + -0xd0) = param_2;
  lVar6 = lVar6 - (param_1 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf0) = lVar6;
  *(long *)(unaff_x29 + -0xe8) = param_1;
  *(long *)(unaff_x29 + -0x100) = in_x17;
  lVar6 = lVar6 - (in_x17 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x108) = lVar6;
  *(long *)(unaff_x29 + -0x118) = in_x16;
  lVar6 = lVar6 - (in_x16 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar6;
  *(long *)(unaff_x29 + -0x130) = in_x15;
  lVar6 = lVar6 - (in_x15 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar6;
  *(long *)(unaff_x29 + -0x148) = in_x14;
  lVar6 = lVar6 - (in_x14 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x150) = lVar6;
  *(long *)(unaff_x29 + -0x160) = in_x12;
  lVar6 = lVar6 - (in_x12 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x168) = lVar6;
  *(ulong *)(unaff_x29 + -0x178) = (ulong)uVar2;
  lVar6 = lVar6 - ((ulong)uVar2 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x180) = lVar6;
  *(long *)(unaff_x29 + -400) = in_x10;
  *(ulong *)(unaff_x29 + -0x198) = lVar6 - (in_x10 + 0xfU & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x1a0) = unaff_x19;
  lVar6 = FUN_0525d628();
  *(long *)(unaff_x29 + -0x50) = lVar6;
  if (lVar6 != 0) {
    plVar9 = *(long **)(unaff_x20 + 0x38);
    plVar7 = *(long **)(lVar6 + 0x38);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      unaff_x27 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest,unaff_x27,unaff_x24);
    lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*plVar9,__dest);
    if (plVar7 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_03218f18:
        uVar5 = thunk_FUN_02b870ec();
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar5,0);
        }
        goto LAB_03218fbc;
      }
      if ((int)plVar7[3] == 0) {
LAB_03218f00:
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_03218fbc;
      }
      plVar7[4] = lVar3;
      thunk_FUN_02bb0e9c(plVar7 + 4,lVar3);
      lVar3 = *(long *)(unaff_x20 + 0x38);
      plVar7 = *(long **)(lVar6 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x80);
      if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest_02,pvVar1,*(size_t *)(unaff_x29 + -0x88));
      lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(lVar3 + 8),__dest_02);
      if (plVar7 != (long *)0x0) {
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
        goto LAB_03218f18;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_03218f00;
        plVar7[5] = lVar3;
        thunk_FUN_02bb0e9c(plVar7 + 5,lVar3);
        lVar3 = *(long *)(unaff_x20 + 0x38);
        plVar7 = *(long **)(lVar6 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x90);
        if (-1 < *(int *)(*(long *)(lVar3 + 0x10) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(__dest_01,pvVar1,*(size_t *)(unaff_x29 + -0x98));
        lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(lVar3 + 0x10),__dest_01);
        if (plVar7 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
          goto LAB_03218f18;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_03218f00;
          plVar7[6] = lVar3;
          thunk_FUN_02bb0e9c(plVar7 + 6,lVar3);
          lVar3 = *(long *)(unaff_x20 + 0x38);
          plVar7 = *(long **)(lVar6 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0xa0);
          if (-1 < *(int *)(*(long *)(lVar3 + 0x18) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x30);
          }
          memcpy(__dest_00,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
          lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(lVar3 + 0x18),__dest_00);
          if (plVar7 != (long *)0x0) {
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_03218f18;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_03218f00;
            plVar7[7] = lVar3;
            thunk_FUN_02bb0e9c(plVar7 + 7,lVar3);
            lVar3 = *(long *)(unaff_x20 + 0x38);
            pvVar8 = *(void **)(unaff_x29 + -0xc0);
            plVar7 = *(long **)(lVar6 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0xb0);
            if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x38);
            }
            memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0xb8));
            lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(lVar3 + 0x20),pvVar8);
            if (plVar7 != (long *)0x0) {
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_03218f18;
              if (*(uint *)(plVar7 + 3) < 5) goto LAB_03218f00;
              plVar7[8] = lVar3;
              thunk_FUN_02bb0e9c(plVar7 + 8,lVar3);
              lVar3 = *(long *)(unaff_x20 + 0x38);
              pvVar8 = *(void **)(unaff_x29 + -0xd8);
              plVar7 = *(long **)(lVar6 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -200);
              if (-1 < *(int *)(*(long *)(lVar3 + 0x28) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x40);
              }
              memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0xd0));
              lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(lVar3 + 0x28),pvVar8);
              if (plVar7 != (long *)0x0) {
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_03218f18;
                if (*(uint *)(plVar7 + 3) < 6) goto LAB_03218f00;
                plVar7[9] = lVar3;
                thunk_FUN_02bb0e9c(plVar7 + 9,lVar3);
                lVar3 = *(long *)(unaff_x20 + 0x38);
                pvVar8 = *(void **)(unaff_x29 + -0xf0);
                plVar7 = *(long **)(lVar6 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xe0);
                if (-1 < *(int *)(*(long *)(lVar3 + 0x30) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x48);
                }
                memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0xe8));
                lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(lVar3 + 0x30),pvVar8);
                if (plVar7 != (long *)0x0) {
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)
                     ) goto LAB_03218f18;
                  if (*(uint *)(plVar7 + 3) < 7) goto LAB_03218f00;
                  plVar7[10] = lVar3;
                  thunk_FUN_02bb0e9c(plVar7 + 10,lVar3);
                  lVar3 = *(long *)(unaff_x20 + 0x38);
                  plVar7 = *(long **)(lVar6 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xf8);
                  if (-1 < *(int *)(*(long *)(lVar3 + 0x38) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x60);
                  }
                  pvVar8 = *(void **)(unaff_x29 + -0x108);
                  memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x100));
                  lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(lVar3 + 0x38),pvVar8);
                  if (plVar7 != (long *)0x0) {
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar4 == 0)) goto LAB_03218f18;
                    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_03218f00;
                    plVar7[0xb] = lVar3;
                    thunk_FUN_02bb0e9c(plVar7 + 0xb,lVar3);
                    lVar3 = *(long *)(unaff_x20 + 0x38);
                    plVar7 = *(long **)(lVar6 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0x110);
                    if (-1 < *(int *)(*(long *)(lVar3 + 0x40) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x68);
                    }
                    pvVar8 = *(void **)(unaff_x29 + -0x120);
                    memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x118));
                    lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(lVar3 + 0x40),pvVar8);
                    if (plVar7 != (long *)0x0) {
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar4 == 0)) goto LAB_03218f18;
                      if (*(uint *)(plVar7 + 3) < 9) goto LAB_03218f00;
                      plVar7[0xc] = lVar3;
                      thunk_FUN_02bb0e9c(plVar7 + 0xc,lVar3);
                      lVar3 = *(long *)(unaff_x20 + 0x38);
                      plVar7 = *(long **)(lVar6 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0x128);
                      if (-1 < *(int *)(*(long *)(lVar3 + 0x48) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x70);
                      }
                      pvVar8 = *(void **)(unaff_x29 + -0x138);
                      memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x130));
                      lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                        (*(undefined8 *)(lVar3 + 0x48),pvVar8);
                      if (plVar7 != (long *)0x0) {
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar4 == 0)) goto LAB_03218f18;
                        if (*(uint *)(plVar7 + 3) < 10) goto LAB_03218f00;
                        plVar7[0xd] = lVar3;
                        thunk_FUN_02bb0e9c(plVar7 + 0xd,lVar3);
                        lVar3 = *(long *)(unaff_x20 + 0x38);
                        plVar7 = *(long **)(lVar6 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x140);
                        if (-1 < *(int *)(*(long *)(lVar3 + 0x50) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x78);
                        }
                        pvVar8 = *(void **)(unaff_x29 + -0x150);
                        memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x148));
                        lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                          (*(undefined8 *)(lVar3 + 0x50),pvVar8);
                        if (plVar7 != (long *)0x0) {
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar4 == 0)) goto LAB_03218f18;
                          if (*(uint *)(plVar7 + 3) < 0xb) goto LAB_03218f00;
                          plVar7[0xe] = lVar3;
                          thunk_FUN_02bb0e9c(plVar7 + 0xe,lVar3);
                          lVar3 = *(long *)(unaff_x20 + 0x38);
                          plVar7 = *(long **)(lVar6 + 0x38);
                          pvVar1 = *(void **)(unaff_x29 + -0x158);
                          if (-1 < *(int *)(*(long *)(lVar3 + 0x58) + 0x28)) {
                            pvVar1 = (void *)(unaff_x29 + 0x80);
                          }
                          pvVar8 = *(void **)(unaff_x29 + -0x168);
                          memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x160));
                          lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                            (*(undefined8 *)(lVar3 + 0x58),pvVar8);
                          if (plVar7 != (long *)0x0) {
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar4 == 0)) goto LAB_03218f18;
                            if (*(uint *)(plVar7 + 3) < 0xc) goto LAB_03218f00;
                            plVar7[0xf] = lVar3;
                            thunk_FUN_02bb0e9c(plVar7 + 0xf,lVar3);
                            lVar3 = *(long *)(unaff_x20 + 0x38);
                            plVar7 = *(long **)(lVar6 + 0x38);
                            pvVar1 = *(void **)(unaff_x29 + -0x170);
                            if (-1 < *(int *)(*(long *)(lVar3 + 0x60) + 0x28)) {
                              pvVar1 = (void *)(unaff_x29 + 0x88);
                            }
                            pvVar8 = *(void **)(unaff_x29 + -0x180);
                            memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -0x178));
                            lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                              (*(undefined8 *)(lVar3 + 0x60),pvVar8);
                            if (plVar7 != (long *)0x0) {
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar4 == 0)) goto LAB_03218f18;
                              if (*(uint *)(plVar7 + 3) < 0xd) goto LAB_03218f00;
                              plVar7[0x10] = lVar3;
                              thunk_FUN_02bb0e9c(plVar7 + 0x10,lVar3);
                              plVar7 = *(long **)(lVar6 + 0x38);
                              lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x68);
                              pvVar1 = *(void **)(unaff_x29 + -0x188);
                              if (-1 < *(int *)(lVar3 + 0x28)) {
                                pvVar1 = (void *)(unaff_x29 + 0x90);
                              }
                              pvVar8 = *(void **)(unaff_x29 + -0x198);
                              memcpy(pvVar8,pvVar1,*(size_t *)(unaff_x29 + -400));
                              lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                (lVar3,pvVar8);
                              if (plVar7 != (long *)0x0) {
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_03218f18;
                                if (*(uint *)(plVar7 + 3) < 0xe) goto LAB_03218f00;
                                plVar7[0x11] = lVar3;
                                thunk_FUN_02bb0e9c(plVar7 + 0x11,lVar3);
                                uVar5 = FUN_0524b830(lVar6,0);
                                *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
                                *(undefined8 *)(unaff_x29 + -0x70) = 0;
                                *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
                                *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x58;
                                lVar3 = *(long *)(*(long *)(unaff_x29 + -0x1a0) + 0x18);
                                if (lVar3 == 0) {
                                  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) ==
                                      *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02b3cac4();
                                  }
                                  goto LAB_03218fbc;
                                }
                                FUN_0524c15c(lVar3,lVar6,0);
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


