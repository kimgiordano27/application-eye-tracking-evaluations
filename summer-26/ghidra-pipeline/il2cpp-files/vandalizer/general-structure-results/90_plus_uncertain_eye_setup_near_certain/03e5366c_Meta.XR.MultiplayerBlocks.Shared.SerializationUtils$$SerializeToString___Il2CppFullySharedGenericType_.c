/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03e5366c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *in_x9;
  size_t unaff_x19;
  long *plVar5;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *pvVar6;
  void *unaff_x24;
  long *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if (-1 < *(int *)(*unaff_x28 + 0x28)) {
    in_x9 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(unaff_x27,in_x9,unaff_x19);
  lVar2 = thunk_FUN_0322ed78(*unaff_x28);
  if (unaff_x25 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*unaff_x25 + 0x40)), lVar3 == 0)) {
LAB_03e53d68:
      uVar4 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar4,0);
    }
    if ((int)unaff_x25[3] != 0) {
      unaff_x25[4] = lVar2;
      thunk_FUN_0329bf60(unaff_x25 + 4,lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x38);
      plVar5 = *(long **)(unaff_x21 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x22,pvVar1,unaff_x23);
      lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 8));
      if (plVar5 == (long *)0x0) goto LAB_03e53d60;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
      goto LAB_03e53d68;
      if (1 < *(uint *)(plVar5 + 3)) {
        plVar5[5] = lVar2;
        thunk_FUN_0329bf60(plVar5 + 5,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar5 = *(long **)(unaff_x21 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x68);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,pvVar1,*(size_t *)(unaff_x29 + -0x70));
        lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x10));
        if (plVar5 == (long *)0x0) goto LAB_03e53d60;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_03e53d68;
        if (2 < *(uint *)(plVar5 + 3)) {
          plVar5[6] = lVar2;
          thunk_FUN_0329bf60(plVar5 + 6,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          plVar5 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x78);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x30);
          }
          memcpy(unaff_x26,pvVar1,*(size_t *)(unaff_x29 + -0x80));
          lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x18));
          if (plVar5 == (long *)0x0) goto LAB_03e53d60;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_03e53d68;
          if (3 < *(uint *)(plVar5 + 3)) {
            plVar5[7] = lVar2;
            thunk_FUN_0329bf60(plVar5 + 7,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -0x98);
            plVar5 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x88);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x38);
            }
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x90));
            lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x20),pvVar6);
            if (plVar5 == (long *)0x0) goto LAB_03e53d60;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_03e53d68;
            if (4 < *(uint *)(plVar5 + 3)) {
              plVar5[8] = lVar2;
              thunk_FUN_0329bf60(plVar5 + 8,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xb0);
              plVar5 = *(long **)(unaff_x21 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0xa0);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x28) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x40);
              }
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
              lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x28),pvVar6);
              if (plVar5 == (long *)0x0) goto LAB_03e53d60;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
              goto LAB_03e53d68;
              if (5 < *(uint *)(plVar5 + 3)) {
                plVar5[9] = lVar2;
                thunk_FUN_0329bf60(plVar5 + 9,lVar2);
                lVar2 = *(long *)(unaff_x20 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -200);
                plVar5 = *(long **)(unaff_x21 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xb8);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x48);
                }
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x30),pvVar6);
                if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_03e53d68;
                if (6 < *(uint *)(plVar5 + 3)) {
                  plVar5[10] = lVar2;
                  thunk_FUN_0329bf60(plVar5 + 10,lVar2);
                  lVar2 = *(long *)(unaff_x20 + 0x38);
                  pvVar6 = *(void **)(unaff_x29 + -0xe0);
                  plVar5 = *(long **)(unaff_x21 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xd0);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x60);
                  }
                  memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                  lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x38),pvVar6);
                  if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
                     ) goto LAB_03e53d68;
                  if (7 < *(uint *)(plVar5 + 3)) {
                    plVar5[0xb] = lVar2;
                    thunk_FUN_0329bf60(plVar5 + 0xb,lVar2);
                    lVar2 = *(long *)(unaff_x20 + 0x38);
                    pvVar6 = *(void **)(unaff_x29 + -0xf8);
                    plVar5 = *(long **)(unaff_x21 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xe8);
                    if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x68);
                    }
                    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                    lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x40),pvVar6);
                    if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar3 == 0)) goto LAB_03e53d68;
                    if (8 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xc] = lVar2;
                      thunk_FUN_0329bf60(plVar5 + 0xc,lVar2);
                      lVar2 = *(long *)(unaff_x20 + 0x38);
                      plVar5 = *(long **)(unaff_x21 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0x100);
                      if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x70);
                      }
                      pvVar6 = *(void **)(unaff_x29 + -0x110);
                      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                      lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x48),pvVar6);
                      if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar3 == 0)) goto LAB_03e53d68;
                      if (9 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xd] = lVar2;
                        thunk_FUN_0329bf60(plVar5 + 0xd,lVar2);
                        lVar2 = *(long *)(unaff_x20 + 0x38);
                        plVar5 = *(long **)(unaff_x21 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x118);
                        if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x78);
                        }
                        pvVar6 = *(void **)(unaff_x29 + -0x128);
                        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
                        lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x50),pvVar6);
                        if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar3 == 0)) goto LAB_03e53d68;
                        if (10 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xe] = lVar2;
                          thunk_FUN_0329bf60(plVar5 + 0xe,lVar2);
                          lVar2 = *(long *)(unaff_x20 + 0x38);
                          plVar5 = *(long **)(unaff_x21 + 0x38);
                          pvVar1 = *(void **)(unaff_x29 + 0x80);
                          if (-1 < *(int *)(*(long *)(lVar2 + 0x58) + 0x28)) {
                            pvVar1 = (void *)(unaff_x29 + 0x80);
                          }
                          pvVar6 = *(void **)(unaff_x29 + -0x138);
                          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x130));
                          lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x58),pvVar6);
                          if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                          if ((lVar2 != 0) &&
                             (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar3 == 0)) goto LAB_03e53d68;
                          if (0xb < *(uint *)(plVar5 + 3)) {
                            plVar5[0xf] = lVar2;
                            thunk_FUN_0329bf60(plVar5 + 0xf,lVar2);
                            lVar2 = *(long *)(unaff_x20 + 0x38);
                            plVar5 = *(long **)(unaff_x21 + 0x38);
                            pvVar1 = *(void **)(unaff_x29 + 0x88);
                            if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
                              pvVar1 = (void *)(unaff_x29 + 0x88);
                            }
                            pvVar6 = *(void **)(unaff_x29 + -0x148);
                            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x140));
                            lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x60),pvVar6);
                            if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                            if ((lVar2 != 0) &&
                               (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar3 == 0)) goto LAB_03e53d68;
                            if (0xc < *(uint *)(plVar5 + 3)) {
                              plVar5[0x10] = lVar2;
                              thunk_FUN_0329bf60(plVar5 + 0x10,lVar2);
                              lVar2 = *(long *)(unaff_x20 + 0x38);
                              plVar5 = *(long **)(unaff_x21 + 0x38);
                              pvVar1 = *(void **)(unaff_x29 + 0x90);
                              if (-1 < *(int *)(*(long *)(lVar2 + 0x68) + 0x28)) {
                                pvVar1 = (void *)(unaff_x29 + 0x90);
                              }
                              pvVar6 = *(void **)(unaff_x29 + -0x158);
                              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x150));
                              lVar2 = thunk_FUN_0322ed78(*(undefined8 *)(lVar2 + 0x68),pvVar6);
                              if (plVar5 == (long *)0x0) goto LAB_03e53d60;
                              if ((lVar2 != 0) &&
                                 (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                                 lVar3 == 0)) goto LAB_03e53d68;
                              if (0xd < *(uint *)(plVar5 + 3)) {
                                plVar5[0x11] = lVar2;
                                thunk_FUN_0329bf60(plVar5 + 0x11,lVar2);
                                FUN_062db728();
                                lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                                if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_031f2390();
                                }
                                FUN_062dc04c(lVar2);
                                FUN_062db7a4();
                                if (*(long *)(*(long *)(unaff_x29 + -0x160) + 0x28) ==
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
LAB_03e53d60:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


