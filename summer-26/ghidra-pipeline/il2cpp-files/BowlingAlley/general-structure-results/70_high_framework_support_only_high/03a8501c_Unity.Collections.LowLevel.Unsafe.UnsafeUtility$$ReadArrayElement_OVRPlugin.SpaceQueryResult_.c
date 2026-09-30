/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a8501c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  void *pvVar5;
  void *unaff_x21;
  long unaff_x22;
  void *pvVar6;
  long unaff_x23;
  void *unaff_x28;
  long unaff_x29;
  
  plVar4 = *(long **)(unaff_x23 + 0x38);
  pvVar5 = *(void **)(unaff_x29 + -0x68);
  if (-1 < *(int *)(*(long *)(unaff_x22 + 0x10) + 0x28)) {
    pvVar5 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x21,pvVar5,*(size_t *)(unaff_x29 + -0x70));
  lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(unaff_x22 + 0x10));
  if (plVar4 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_03a85690:
      uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
    if (2 < *(uint *)(plVar4 + 3)) {
      plVar4[6] = lVar1;
      thunk_FUN_0333a630(plVar4 + 6,lVar1);
      lVar1 = *(long *)(unaff_x19 + 0x38);
      plVar4 = *(long **)(unaff_x23 + 0x38);
      pvVar5 = *(void **)(unaff_x29 + -0x78);
      if (-1 < *(int *)(*(long *)(lVar1 + 0x18) + 0x28)) {
        pvVar5 = (void *)(unaff_x29 + -0x30);
      }
      memcpy(unaff_x28,pvVar5,*(size_t *)(unaff_x29 + -0x80));
      lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x18));
      if (plVar4 == (long *)0x0) goto LAB_03a85688;
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_03a85690;
      if (3 < *(uint *)(plVar4 + 3)) {
        plVar4[7] = lVar1;
        thunk_FUN_0333a630(plVar4 + 7,lVar1);
        lVar1 = *(long *)(unaff_x19 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        plVar4 = *(long **)(unaff_x23 + 0x38);
        pvVar5 = *(void **)(unaff_x29 + -0x88);
        if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x38);
        }
        memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x90));
        lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x20),pvVar6);
        if (plVar4 == (long *)0x0) goto LAB_03a85688;
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_03a85690;
        if (4 < *(uint *)(plVar4 + 3)) {
          plVar4[8] = lVar1;
          thunk_FUN_0333a630(plVar4 + 8,lVar1);
          lVar1 = *(long *)(unaff_x19 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0xb0);
          plVar4 = *(long **)(unaff_x23 + 0x38);
          pvVar5 = *(void **)(unaff_x29 + -0xa0);
          if (-1 < *(int *)(*(long *)(lVar1 + 0x28) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x40);
          }
          memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xa8));
          lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x28),pvVar6);
          if (plVar4 == (long *)0x0) goto LAB_03a85688;
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
          goto LAB_03a85690;
          if (5 < *(uint *)(plVar4 + 3)) {
            plVar4[9] = lVar1;
            thunk_FUN_0333a630(plVar4 + 9,lVar1);
            lVar1 = *(long *)(unaff_x19 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -200);
            plVar4 = *(long **)(unaff_x23 + 0x38);
            pvVar5 = *(void **)(unaff_x29 + -0xb8);
            if (-1 < *(int *)(*(long *)(lVar1 + 0x30) + 0x28)) {
              pvVar5 = (void *)(unaff_x29 + -0x48);
            }
            memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xc0));
            lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x30),pvVar6);
            if (plVar4 == (long *)0x0) goto LAB_03a85688;
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_03a85690;
            if (6 < *(uint *)(plVar4 + 3)) {
              plVar4[10] = lVar1;
              thunk_FUN_0333a630(plVar4 + 10,lVar1);
              lVar1 = *(long *)(unaff_x19 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xe0);
              plVar4 = *(long **)(unaff_x23 + 0x38);
              pvVar5 = *(void **)(unaff_x29 + -0xd0);
              if (-1 < *(int *)(*(long *)(lVar1 + 0x38) + 0x28)) {
                pvVar5 = (void *)(unaff_x29 + 0x60);
              }
              memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xd8));
              lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x38),pvVar6);
              if (plVar4 == (long *)0x0) goto LAB_03a85688;
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
              goto LAB_03a85690;
              if (7 < *(uint *)(plVar4 + 3)) {
                plVar4[0xb] = lVar1;
                thunk_FUN_0333a630(plVar4 + 0xb,lVar1);
                lVar1 = *(long *)(unaff_x19 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -0xf8);
                plVar4 = *(long **)(unaff_x23 + 0x38);
                pvVar5 = *(void **)(unaff_x29 + -0xe8);
                if (-1 < *(int *)(*(long *)(lVar1 + 0x40) + 0x28)) {
                  pvVar5 = (void *)(unaff_x29 + 0x68);
                }
                memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0xf0));
                lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x40),pvVar6);
                if (plVar4 == (long *)0x0) goto LAB_03a85688;
                if ((lVar1 != 0) &&
                   (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
                goto LAB_03a85690;
                if (8 < *(uint *)(plVar4 + 3)) {
                  plVar4[0xc] = lVar1;
                  thunk_FUN_0333a630(plVar4 + 0xc,lVar1);
                  lVar1 = *(long *)(unaff_x19 + 0x38);
                  plVar4 = *(long **)(unaff_x23 + 0x38);
                  pvVar5 = *(void **)(unaff_x29 + -0x100);
                  if (-1 < *(int *)(*(long *)(lVar1 + 0x48) + 0x28)) {
                    pvVar5 = (void *)(unaff_x29 + 0x70);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x110);
                  memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x108));
                  lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x48),pvVar6);
                  if (plVar4 == (long *)0x0) goto LAB_03a85688;
                  if ((lVar1 != 0) &&
                     (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)
                     ) goto LAB_03a85690;
                  if (9 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xd] = lVar1;
                    thunk_FUN_0333a630(plVar4 + 0xd,lVar1);
                    lVar1 = *(long *)(unaff_x19 + 0x38);
                    plVar4 = *(long **)(unaff_x23 + 0x38);
                    pvVar5 = *(void **)(unaff_x29 + -0x118);
                    if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
                      pvVar5 = (void *)(unaff_x29 + 0x78);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x128);
                    memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x120));
                    lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x50),pvVar6);
                    if (plVar4 == (long *)0x0) goto LAB_03a85688;
                    if ((lVar1 != 0) &&
                       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar2 == 0)) goto LAB_03a85690;
                    if (10 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xe] = lVar1;
                      thunk_FUN_0333a630(plVar4 + 0xe,lVar1);
                      lVar1 = *(long *)(unaff_x19 + 0x38);
                      plVar4 = *(long **)(unaff_x23 + 0x38);
                      pvVar5 = *(void **)(unaff_x29 + 0x80);
                      if (-1 < *(int *)(*(long *)(lVar1 + 0x58) + 0x28)) {
                        pvVar5 = (void *)(unaff_x29 + 0x80);
                      }
                      pvVar6 = *(void **)(unaff_x29 + -0x138);
                      memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x130));
                      lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x58),pvVar6);
                      if (plVar4 == (long *)0x0) goto LAB_03a85688;
                      if ((lVar1 != 0) &&
                         (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar2 == 0)) goto LAB_03a85690;
                      if (0xb < *(uint *)(plVar4 + 3)) {
                        plVar4[0xf] = lVar1;
                        thunk_FUN_0333a630(plVar4 + 0xf,lVar1);
                        lVar1 = *(long *)(unaff_x19 + 0x38);
                        plVar4 = *(long **)(unaff_x23 + 0x38);
                        pvVar5 = *(void **)(unaff_x29 + 0x88);
                        if (-1 < *(int *)(*(long *)(lVar1 + 0x60) + 0x28)) {
                          pvVar5 = (void *)(unaff_x29 + 0x88);
                        }
                        pvVar6 = *(void **)(unaff_x29 + -0x148);
                        memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x140));
                        lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x60),pvVar6);
                        if (plVar4 == (long *)0x0) goto LAB_03a85688;
                        if ((lVar1 != 0) &&
                           (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar2 == 0)) goto LAB_03a85690;
                        if (0xc < *(uint *)(plVar4 + 3)) {
                          plVar4[0x10] = lVar1;
                          thunk_FUN_0333a630(plVar4 + 0x10,lVar1);
                          lVar1 = *(long *)(unaff_x19 + 0x38);
                          plVar4 = *(long **)(unaff_x23 + 0x38);
                          pvVar5 = *(void **)(unaff_x29 + 0x90);
                          if (-1 < *(int *)(*(long *)(lVar1 + 0x68) + 0x28)) {
                            pvVar5 = (void *)(unaff_x29 + 0x90);
                          }
                          pvVar6 = *(void **)(unaff_x29 + -0x158);
                          memcpy(pvVar6,pvVar5,*(size_t *)(unaff_x29 + -0x150));
                          lVar1 = thunk_FUN_032a52d0(*(undefined8 *)(lVar1 + 0x68),pvVar6);
                          if (plVar4 == (long *)0x0) goto LAB_03a85688;
                          if ((lVar1 != 0) &&
                             (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar2 == 0)) goto LAB_03a85690;
                          if (0xd < *(uint *)(plVar4 + 3)) {
                            plVar4[0x11] = lVar1;
                            thunk_FUN_0333a630(plVar4 + 0x11,lVar1);
                            FUN_05fb2df0();
                            lVar1 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            FUN_05fb3740(lVar1);
                            FUN_05fb2e6c();
                            pvVar5 = *(void **)(unaff_x29 + 0x98);
                            uVar3 = FUN_05fa802c();
                            lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x70);
                            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                              lVar1 = FUN_032934b8(lVar1);
                            }
                            pvVar6 = (void *)FUN_032d5de0(uVar3,lVar1,
                                                          *(undefined8 *)(unaff_x29 + -0x170));
                            memcpy(pvVar5,pvVar6,*(size_t *)(unaff_x29 + -0x168));
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
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_03a85688:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


