/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03470520
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Qpl_Annotation>(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  size_t unaff_x20;
  void *pvVar5;
  void *unaff_x21;
  void *unaff_x22;
  void *pvVar6;
  long *plVar7;
  void *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  long *plVar8;
  long unaff_x29;
  
  *(long *)(in_x9 + -0x100) = param_1;
  *(long *)(unaff_x29 + -0x130) = in_x12;
  param_1 = param_1 - (in_x12 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = param_1;
  *(long *)(unaff_x29 + -0x140) = in_x11;
  param_1 = param_1 - (in_x11 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = param_1;
  *(long *)(unaff_x29 + -0x158) = in_x10;
  *(ulong *)(unaff_x29 + -0x160) = param_1 - (in_x10 + 0xfU & 0x1fffffff0);
  lVar1 = FUN_05344f28(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar1 != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x38);
    plVar7 = *(long **)(lVar1 + 0x38);
    pvVar5 = *(void **)(unaff_x29 + -0x58);
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x25,pvVar5,unaff_x27);
    lVar2 = thunk_FUN_02d9d164(*plVar8);
    if (plVar7 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
LAB_03470c84:
        uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar4,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar2;
        thunk_FUN_02dd37b4(plVar7 + 4,lVar2);
        lVar2 = *(long *)(unaff_x19 + 0x38);
        plVar7 = *(long **)(lVar1 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x21,pvVar5,unaff_x20);
        lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 8));
        if (plVar7 == (long *)0x0) goto LAB_03470c7c;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
        goto LAB_03470c84;
        if (1 < *(uint *)(plVar7 + 3)) {
          plVar7[5] = lVar2;
          thunk_FUN_02dd37b4(plVar7 + 5,lVar2);
          lVar2 = *(long *)(unaff_x19 + 0x38);
          plVar7 = *(long **)(lVar1 + 0x38);
          pvVar5 = *(void **)(unaff_x29 + -0x68);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x22,pvVar5,*(size_t *)(unaff_x29 + -0x70));
          lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x10));
          if (plVar7 == (long *)0x0) goto LAB_03470c7c;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
          goto LAB_03470c84;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = lVar2;
            thunk_FUN_02dd37b4(plVar7 + 6,lVar2);
            lVar2 = *(long *)(unaff_x19 + 0x38);
            plVar7 = *(long **)(lVar1 + 0x38);
            pvVar5 = *(void **)(unaff_x29 + -0x78);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(unaff_x26,pvVar5,*(size_t *)(unaff_x29 + -0x80));
            lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x18));
            if (plVar7 == (long *)0x0) goto LAB_03470c7c;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
            goto LAB_03470c84;
            if (3 < *(uint *)(plVar7 + 3)) {
              plVar7[7] = lVar2;
              thunk_FUN_02dd37b4(plVar7 + 7,lVar2);
              lVar2 = *(long *)(unaff_x19 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0x98);
              plVar7 = *(long **)(lVar1 + 0x38);
              pvVar5 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x90));
              lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x20),pvVar6);
              if (plVar7 == (long *)0x0) goto LAB_03470c7c;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
              goto LAB_03470c84;
              if (4 < *(uint *)(plVar7 + 3)) {
                plVar7[8] = lVar2;
                thunk_FUN_02dd37b4(plVar7 + 8,lVar2);
                lVar2 = *(long *)(unaff_x19 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -0xb0);
                plVar7 = *(long **)(lVar1 + 0x38);
                pvVar5 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x28) + 0x28)) {
                  pvVar5 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xa8));
                lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x28),pvVar6);
                if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
                goto LAB_03470c84;
                if (5 < *(uint *)(plVar7 + 3)) {
                  plVar7[9] = lVar2;
                  thunk_FUN_02dd37b4(plVar7 + 9,lVar2);
                  lVar2 = *(long *)(unaff_x19 + 0x38);
                  pvVar6 = *(void **)(unaff_x29 + -200);
                  plVar7 = *(long **)(lVar1 + 0x38);
                  pvVar5 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
                    pvVar5 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xc0));
                  lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x30),pvVar6);
                  if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)
                     ) goto LAB_03470c84;
                  if (6 < *(uint *)(plVar7 + 3)) {
                    plVar7[10] = lVar2;
                    thunk_FUN_02dd37b4(plVar7 + 10,lVar2);
                    lVar2 = *(long *)(unaff_x19 + 0x38);
                    pvVar6 = *(void **)(unaff_x29 + -0xe0);
                    plVar7 = *(long **)(lVar1 + 0x38);
                    pvVar5 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
                      pvVar5 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xd8));
                    lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x38),pvVar6);
                    if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar3 == 0)) goto LAB_03470c84;
                    if (7 < *(uint *)(plVar7 + 3)) {
                      plVar7[0xb] = lVar2;
                      thunk_FUN_02dd37b4(plVar7 + 0xb,lVar2);
                      lVar2 = *(long *)(unaff_x19 + 0x38);
                      pvVar6 = *(void **)(unaff_x29 + -0xf8);
                      plVar7 = *(long **)(lVar1 + 0x38);
                      pvVar5 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
                        pvVar5 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xf0));
                      lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x40),pvVar6);
                      if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar3 == 0)) goto LAB_03470c84;
                      if (8 < *(uint *)(plVar7 + 3)) {
                        plVar7[0xc] = lVar2;
                        thunk_FUN_02dd37b4(plVar7 + 0xc,lVar2);
                        lVar2 = *(long *)(unaff_x19 + 0x38);
                        plVar7 = *(long **)(lVar1 + 0x38);
                        pvVar5 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
                          pvVar5 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar6 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x108));
                        lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x48),pvVar6);
                        if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar3 == 0)) goto LAB_03470c84;
                        if (9 < *(uint *)(plVar7 + 3)) {
                          plVar7[0xd] = lVar2;
                          thunk_FUN_02dd37b4(plVar7 + 0xd,lVar2);
                          lVar2 = *(long *)(unaff_x19 + 0x38);
                          plVar7 = *(long **)(lVar1 + 0x38);
                          pvVar5 = *(void **)(unaff_x29 + -0x118);
                          if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
                            pvVar5 = (void *)(unaff_x29 + 0x78);
                          }
                          pvVar6 = *(void **)(unaff_x29 + -0x128);
                          memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x120));
                          lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x50),pvVar6);
                          if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                          if ((lVar2 != 0) &&
                             (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar3 == 0)) goto LAB_03470c84;
                          if (10 < *(uint *)(plVar7 + 3)) {
                            plVar7[0xe] = lVar2;
                            thunk_FUN_02dd37b4(plVar7 + 0xe,lVar2);
                            lVar2 = *(long *)(unaff_x19 + 0x38);
                            plVar7 = *(long **)(lVar1 + 0x38);
                            pvVar5 = *(void **)(unaff_x29 + 0x80);
                            if (-1 < *(int *)(*(long *)(lVar2 + 0x58) + 0x28)) {
                              pvVar5 = (void *)(unaff_x29 + 0x80);
                            }
                            pvVar6 = *(void **)(unaff_x29 + -0x138);
                            memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x130));
                            lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x58),pvVar6);
                            if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                            if ((lVar2 != 0) &&
                               (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar3 == 0)) goto LAB_03470c84;
                            if (0xb < *(uint *)(plVar7 + 3)) {
                              plVar7[0xf] = lVar2;
                              thunk_FUN_02dd37b4(plVar7 + 0xf,lVar2);
                              lVar2 = *(long *)(unaff_x19 + 0x38);
                              plVar7 = *(long **)(lVar1 + 0x38);
                              pvVar5 = *(void **)(unaff_x29 + 0x88);
                              if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
                                pvVar5 = (void *)(unaff_x29 + 0x88);
                              }
                              pvVar6 = *(void **)(unaff_x29 + -0x148);
                              memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x140));
                              lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(lVar2 + 0x60),pvVar6);
                              if (plVar7 == (long *)0x0) goto LAB_03470c7c;
                              if ((lVar2 != 0) &&
                                 (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar3 == 0)) goto LAB_03470c84;
                              if (0xc < *(uint *)(plVar7 + 3)) {
                                plVar7[0x10] = lVar2;
                                thunk_FUN_02dd37b4(plVar7 + 0x10,lVar2);
                                uVar4 = FUN_05332e6c(lVar1,0);
                                lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                                if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d60ae8();
                                }
                                FUN_05333790(lVar2,lVar1,0);
                                FUN_05332ee8(lVar1,uVar4,0);
                                pvVar5 = *(void **)(unaff_x29 + 0x90);
                                uVar4 = FUN_053285f8(lVar1,0);
                                lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x68);
                                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                                  lVar1 = FUN_02d9a2e0(lVar1);
                                }
                                pvVar6 = (void *)FUN_02d609d8(uVar4,lVar1,
                                                              *(undefined8 *)(unaff_x29 + -0x160));
                                memcpy(pvVar5,pvVar6,*(size_t *)(unaff_x29 + -0x158));
                                if (*(long *)(*(long *)(unaff_x29 + -0x150) + 0x28) ==
                                    *(long *)(unaff_x29 + -0x10)) {
                                  return;
                                }
                    /* WARNING: Subroutine does not return */
                                __stack_chk_fail();
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
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
LAB_03470c7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


