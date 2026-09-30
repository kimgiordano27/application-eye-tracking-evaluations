/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03a85000
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


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  long lVar1;
  undefined8 uVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  void *pvVar4;
  void *unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  void *pvVar6;
  long unaff_x23;
  void *unaff_x28;
  long unaff_x29;
  
  if (1 < in_w8) {
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x22;
    thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x28));
    lVar5 = *(long *)(unaff_x19 + 0x38);
    plVar3 = *(long **)(unaff_x23 + 0x38);
    pvVar4 = *(void **)(unaff_x29 + -0x68);
    if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
      pvVar4 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x21,pvVar4,*(size_t *)(unaff_x29 + -0x70));
    lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x10));
    if (plVar3 == (long *)0x0) {
LAB_03a85688:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((lVar5 != 0) &&
       (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0)) {
LAB_03a85690:
      uVar2 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar2,0);
    }
    if (2 < *(uint *)(plVar3 + 3)) {
      plVar3[6] = lVar5;
      thunk_FUN_0333a630(plVar3 + 6,lVar5);
      lVar5 = *(long *)(unaff_x19 + 0x38);
      plVar3 = *(long **)(unaff_x23 + 0x38);
      pvVar4 = *(void **)(unaff_x29 + -0x78);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
        pvVar4 = (void *)(unaff_x29 + -0x30);
      }
      memcpy(unaff_x28,pvVar4,*(size_t *)(unaff_x29 + -0x80));
      lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x18));
      if (plVar3 == (long *)0x0) goto LAB_03a85688;
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
      goto LAB_03a85690;
      if (3 < *(uint *)(plVar3 + 3)) {
        plVar3[7] = lVar5;
        thunk_FUN_0333a630(plVar3 + 7,lVar5);
        lVar5 = *(long *)(unaff_x19 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0x98);
        plVar3 = *(long **)(unaff_x23 + 0x38);
        pvVar4 = *(void **)(unaff_x29 + -0x88);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
          pvVar4 = (void *)(unaff_x29 + -0x38);
        }
        memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x90));
        lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x20),pvVar6);
        if (plVar3 == (long *)0x0) goto LAB_03a85688;
        if ((lVar5 != 0) &&
           (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
        goto LAB_03a85690;
        if (4 < *(uint *)(plVar3 + 3)) {
          plVar3[8] = lVar5;
          thunk_FUN_0333a630(plVar3 + 8,lVar5);
          lVar5 = *(long *)(unaff_x19 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0xb0);
          plVar3 = *(long **)(unaff_x23 + 0x38);
          pvVar4 = *(void **)(unaff_x29 + -0xa0);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x28) + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -0x40);
          }
          memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xa8));
          lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x28),pvVar6);
          if (plVar3 == (long *)0x0) goto LAB_03a85688;
          if ((lVar5 != 0) &&
             (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
          goto LAB_03a85690;
          if (5 < *(uint *)(plVar3 + 3)) {
            plVar3[9] = lVar5;
            thunk_FUN_0333a630(plVar3 + 9,lVar5);
            lVar5 = *(long *)(unaff_x19 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -200);
            plVar3 = *(long **)(unaff_x23 + 0x38);
            pvVar4 = *(void **)(unaff_x29 + -0xb8);
            if (-1 < *(int *)(*(long *)(lVar5 + 0x30) + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -0x48);
            }
            memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xc0));
            lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x30),pvVar6);
            if (plVar3 == (long *)0x0) goto LAB_03a85688;
            if ((lVar5 != 0) &&
               (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
            goto LAB_03a85690;
            if (6 < *(uint *)(plVar3 + 3)) {
              plVar3[10] = lVar5;
              thunk_FUN_0333a630(plVar3 + 10,lVar5);
              lVar5 = *(long *)(unaff_x19 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xe0);
              plVar3 = *(long **)(unaff_x23 + 0x38);
              pvVar4 = *(void **)(unaff_x29 + -0xd0);
              if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
                pvVar4 = (void *)(unaff_x29 + 0x60);
              }
              memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xd8));
              lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x38),pvVar6);
              if (plVar3 == (long *)0x0) goto LAB_03a85688;
              if ((lVar5 != 0) &&
                 (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
              goto LAB_03a85690;
              if (7 < *(uint *)(plVar3 + 3)) {
                plVar3[0xb] = lVar5;
                thunk_FUN_0333a630(plVar3 + 0xb,lVar5);
                lVar5 = *(long *)(unaff_x19 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -0xf8);
                plVar3 = *(long **)(unaff_x23 + 0x38);
                pvVar4 = *(void **)(unaff_x29 + -0xe8);
                if (-1 < *(int *)(*(long *)(lVar5 + 0x40) + 0x28)) {
                  pvVar4 = (void *)(unaff_x29 + 0x68);
                }
                memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0xf0));
                lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x40),pvVar6);
                if (plVar3 == (long *)0x0) goto LAB_03a85688;
                if ((lVar5 != 0) &&
                   (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
                goto LAB_03a85690;
                if (8 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xc] = lVar5;
                  thunk_FUN_0333a630(plVar3 + 0xc,lVar5);
                  lVar5 = *(long *)(unaff_x19 + 0x38);
                  plVar3 = *(long **)(unaff_x23 + 0x38);
                  pvVar4 = *(void **)(unaff_x29 + -0x100);
                  if (-1 < *(int *)(*(long *)(lVar5 + 0x48) + 0x28)) {
                    pvVar4 = (void *)(unaff_x29 + 0x70);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x110);
                  memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x108));
                  lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x48),pvVar6);
                  if (plVar3 == (long *)0x0) goto LAB_03a85688;
                  if ((lVar5 != 0) &&
                     (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0)
                     ) goto LAB_03a85690;
                  if (9 < *(uint *)(plVar3 + 3)) {
                    plVar3[0xd] = lVar5;
                    thunk_FUN_0333a630(plVar3 + 0xd,lVar5);
                    lVar5 = *(long *)(unaff_x19 + 0x38);
                    plVar3 = *(long **)(unaff_x23 + 0x38);
                    pvVar4 = *(void **)(unaff_x29 + -0x118);
                    if (-1 < *(int *)(*(long *)(lVar5 + 0x50) + 0x28)) {
                      pvVar4 = (void *)(unaff_x29 + 0x78);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x128);
                    memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x120));
                    lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x50),pvVar6);
                    if (plVar3 == (long *)0x0) goto LAB_03a85688;
                    if ((lVar5 != 0) &&
                       (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar1 == 0)) goto LAB_03a85690;
                    if (10 < *(uint *)(plVar3 + 3)) {
                      plVar3[0xe] = lVar5;
                      thunk_FUN_0333a630(plVar3 + 0xe,lVar5);
                      lVar5 = *(long *)(unaff_x19 + 0x38);
                      plVar3 = *(long **)(unaff_x23 + 0x38);
                      pvVar4 = *(void **)(unaff_x29 + 0x80);
                      if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
                        pvVar4 = (void *)(unaff_x29 + 0x80);
                      }
                      pvVar6 = *(void **)(unaff_x29 + -0x138);
                      memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x130));
                      lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x58),pvVar6);
                      if (plVar3 == (long *)0x0) goto LAB_03a85688;
                      if ((lVar5 != 0) &&
                         (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar1 == 0)) goto LAB_03a85690;
                      if (0xb < *(uint *)(plVar3 + 3)) {
                        plVar3[0xf] = lVar5;
                        thunk_FUN_0333a630(plVar3 + 0xf,lVar5);
                        lVar5 = *(long *)(unaff_x19 + 0x38);
                        plVar3 = *(long **)(unaff_x23 + 0x38);
                        pvVar4 = *(void **)(unaff_x29 + 0x88);
                        if (-1 < *(int *)(*(long *)(lVar5 + 0x60) + 0x28)) {
                          pvVar4 = (void *)(unaff_x29 + 0x88);
                        }
                        pvVar6 = *(void **)(unaff_x29 + -0x148);
                        memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x140));
                        lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x60),pvVar6);
                        if (plVar3 == (long *)0x0) goto LAB_03a85688;
                        if ((lVar5 != 0) &&
                           (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar1 == 0)) goto LAB_03a85690;
                        if (0xc < *(uint *)(plVar3 + 3)) {
                          plVar3[0x10] = lVar5;
                          thunk_FUN_0333a630(plVar3 + 0x10,lVar5);
                          lVar5 = *(long *)(unaff_x19 + 0x38);
                          plVar3 = *(long **)(unaff_x23 + 0x38);
                          pvVar4 = *(void **)(unaff_x29 + 0x90);
                          if (-1 < *(int *)(*(long *)(lVar5 + 0x68) + 0x28)) {
                            pvVar4 = (void *)(unaff_x29 + 0x90);
                          }
                          pvVar6 = *(void **)(unaff_x29 + -0x158);
                          memcpy(pvVar6,pvVar4,*(size_t *)(unaff_x29 + -0x150));
                          lVar5 = thunk_FUN_032a52d0(*(undefined8 *)(lVar5 + 0x68),pvVar6);
                          if (plVar3 == (long *)0x0) goto LAB_03a85688;
                          if ((lVar5 != 0) &&
                             (lVar1 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar1 == 0)) goto LAB_03a85690;
                          if (0xd < *(uint *)(plVar3 + 3)) {
                            plVar3[0x11] = lVar5;
                            thunk_FUN_0333a630(plVar3 + 0x11,lVar5);
                            FUN_05fb2df0();
                            lVar5 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_032d5ee8();
                            }
                            FUN_05fb3740(lVar5);
                            FUN_05fb2e6c();
                            pvVar4 = *(void **)(unaff_x29 + 0x98);
                            uVar2 = FUN_05fa802c();
                            lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x70);
                            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                              lVar5 = FUN_032934b8(lVar5);
                            }
                            pvVar6 = (void *)FUN_032d5de0(uVar2,lVar5,
                                                          *(undefined8 *)(unaff_x29 + -0x170));
                            memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x168));
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
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


