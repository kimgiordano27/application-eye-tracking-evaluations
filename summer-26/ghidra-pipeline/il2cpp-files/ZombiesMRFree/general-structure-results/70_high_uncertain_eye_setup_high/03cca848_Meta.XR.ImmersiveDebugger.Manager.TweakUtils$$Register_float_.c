/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Register<float>
ENTRY_POINT: 03cca848
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Register<float>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  size_t unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  long *plVar5;
  void *pvVar6;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    unaff_x22 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(param_1,unaff_x22,param_3);
  lVar2 = thunk_FUN_0301043c(*unaff_x24);
  if (unaff_x27 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*unaff_x27 + 0x40)), lVar3 == 0)) {
LAB_03ccadb4:
      uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar4,0);
    }
    if ((int)unaff_x27[3] != 0) {
      unaff_x27[4] = lVar2;
      thunk_FUN_03048534(unaff_x27 + 4,lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x38);
      plVar5 = *(long **)(unaff_x21 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x58);
      if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x25,pvVar1,unaff_x19);
      lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 8));
      if (plVar5 == (long *)0x0) goto LAB_03ccadac;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
      goto LAB_03ccadb4;
      if (1 < *(uint *)(plVar5 + 3)) {
        plVar5[5] = lVar2;
        thunk_FUN_03048534(plVar5 + 5,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar5 = *(long **)(unaff_x21 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x60);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x28,pvVar1,*(size_t *)(unaff_x29 + -0x68));
        lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x10));
        if (plVar5 == (long *)0x0) goto LAB_03ccadac;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_03ccadb4;
        if (2 < *(uint *)(plVar5 + 3)) {
          plVar5[6] = lVar2;
          thunk_FUN_03048534(plVar5 + 6,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0x80);
          plVar5 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x70);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x30);
          }
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x78));
          lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x18),pvVar6);
          if (plVar5 == (long *)0x0) goto LAB_03ccadac;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_03ccadb4;
          if (3 < *(uint *)(plVar5 + 3)) {
            plVar5[7] = lVar2;
            thunk_FUN_03048534(plVar5 + 7,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -0x98);
            plVar5 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x88);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x38);
            }
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x90));
            lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x20),pvVar6);
            if (plVar5 == (long *)0x0) goto LAB_03ccadac;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_03ccadb4;
            if (4 < *(uint *)(plVar5 + 3)) {
              plVar5[8] = lVar2;
              thunk_FUN_03048534(plVar5 + 8,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -0xb0);
              plVar5 = *(long **)(unaff_x21 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0xa0);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x28) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x40);
              }
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
              lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x28),pvVar6);
              if (plVar5 == (long *)0x0) goto LAB_03ccadac;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
              goto LAB_03ccadb4;
              if (5 < *(uint *)(plVar5 + 3)) {
                plVar5[9] = lVar2;
                thunk_FUN_03048534(plVar5 + 9,lVar2);
                lVar2 = *(long *)(unaff_x20 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -200);
                plVar5 = *(long **)(unaff_x21 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xb8);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x48);
                }
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x30),pvVar6);
                if (plVar5 == (long *)0x0) goto LAB_03ccadac;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_03ccadb4;
                if (6 < *(uint *)(plVar5 + 3)) {
                  plVar5[10] = lVar2;
                  thunk_FUN_03048534(plVar5 + 10,lVar2);
                  lVar2 = *(long *)(unaff_x20 + 0x38);
                  pvVar6 = *(void **)(unaff_x29 + -0xe0);
                  plVar5 = *(long **)(unaff_x21 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xd0);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x60);
                  }
                  memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                  lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x38),pvVar6);
                  if (plVar5 == (long *)0x0) goto LAB_03ccadac;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
                     ) goto LAB_03ccadb4;
                  if (7 < *(uint *)(plVar5 + 3)) {
                    plVar5[0xb] = lVar2;
                    thunk_FUN_03048534(plVar5 + 0xb,lVar2);
                    lVar2 = *(long *)(unaff_x20 + 0x38);
                    pvVar6 = *(void **)(unaff_x29 + -0xf8);
                    plVar5 = *(long **)(unaff_x21 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xe8);
                    if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x68);
                    }
                    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                    lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x40),pvVar6);
                    if (plVar5 == (long *)0x0) goto LAB_03ccadac;
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar3 == 0)) goto LAB_03ccadb4;
                    if (8 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xc] = lVar2;
                      thunk_FUN_03048534(plVar5 + 0xc,lVar2);
                      lVar2 = *(long *)(unaff_x20 + 0x38);
                      plVar5 = *(long **)(unaff_x21 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0x100);
                      if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x70);
                      }
                      pvVar6 = *(void **)(unaff_x29 + -0x110);
                      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                      lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x48),pvVar6);
                      if (plVar5 == (long *)0x0) goto LAB_03ccadac;
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar3 == 0)) goto LAB_03ccadb4;
                      if (9 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xd] = lVar2;
                        thunk_FUN_03048534(plVar5 + 0xd,lVar2);
                        lVar2 = *(long *)(unaff_x20 + 0x38);
                        plVar5 = *(long **)(unaff_x21 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x118);
                        if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x78);
                        }
                        pvVar6 = *(void **)(unaff_x29 + -0x128);
                        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
                        lVar2 = thunk_FUN_0301043c(*(undefined8 *)(lVar2 + 0x50),pvVar6);
                        if (plVar5 == (long *)0x0) goto LAB_03ccadac;
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar3 == 0)) goto LAB_03ccadb4;
                        if (10 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xe] = lVar2;
                          thunk_FUN_03048534(plVar5 + 0xe,lVar2);
                          FUN_05fbd0e8();
                          lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02fe94e8();
                          }
                          FUN_05fbda38(lVar2);
                          FUN_05fbd164();
                          if (*(long *)(*(long *)(unaff_x29 + -0x130) + 0x28) ==
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
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_03ccadac:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


