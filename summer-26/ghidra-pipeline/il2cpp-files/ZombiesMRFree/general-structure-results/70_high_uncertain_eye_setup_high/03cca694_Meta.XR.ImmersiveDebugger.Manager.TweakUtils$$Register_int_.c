/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Register<int>
ENTRY_POINT: 03cca694
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


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Register<int>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long unaff_x20;
  void *unaff_x22;
  undefined1 *__dest;
  void *pvVar17;
  undefined1 *__dest_00;
  long *plVar18;
  undefined1 *__dest_01;
  long unaff_x29;
  
  plVar15 = *(long **)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x60) = param_4;
  *(undefined8 *)(unaff_x29 + -0x58) = param_3;
  *(undefined8 *)(unaff_x29 + -0x70) = param_5;
  *(undefined8 *)(unaff_x29 + -0x88) = param_6;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_7;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_8;
  if (plVar15 == (long *)0x0) {
    FUN_02feb320();
    plVar15 = *(long **)(unaff_x20 + 0x38);
  }
  uVar2 = *(uint *)(*plVar15 + 0xfc);
  uVar3 = *(uint *)(plVar15[1] + 0xfc);
  uVar4 = *(uint *)(plVar15[3] + 0xfc);
  uVar5 = *(uint *)(plVar15[4] + 0xfc);
  uVar6 = *(uint *)(plVar15[5] + 0xfc);
  uVar7 = *(uint *)(plVar15[6] + 0xfc);
  uVar8 = *(uint *)(plVar15[7] + 0xfc);
  uVar9 = *(uint *)(plVar15[8] + 0xfc);
  uVar10 = *(uint *)(plVar15[9] + 0xfc);
  uVar11 = *(uint *)(plVar15[10] + 0xfc);
  __dest = &stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  __dest_00 = __dest + -((ulong)uVar3 + 0xf & 0x1fffffff0);
  __dest_01 = __dest_00 + -((ulong)*(uint *)(plVar15[2] + 0xfc) + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x68) = (ulong)*(uint *)(plVar15[2] + 0xfc);
  lVar16 = (long)__dest_01 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar16;
  *(ulong *)(unaff_x29 + -0x78) = (ulong)uVar4;
  lVar16 = lVar16 - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar16;
  *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar5;
  lVar16 = lVar16 - ((ulong)uVar6 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar16;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar6;
  lVar16 = lVar16 - ((ulong)uVar7 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar16;
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar7;
  lVar16 = lVar16 - ((ulong)uVar8 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar16;
  *(ulong *)(unaff_x29 + -0xd8) = (ulong)uVar8;
  lVar16 = lVar16 - ((ulong)uVar9 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar16;
  *(ulong *)(unaff_x29 + -0xf0) = (ulong)uVar9;
  *(ulong *)(unaff_x29 + -0x108) = (ulong)uVar10;
  lVar16 = lVar16 - ((ulong)uVar10 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x110) = lVar16;
  *(ulong *)(unaff_x29 + -0x120) = (ulong)uVar11;
  *(ulong *)(unaff_x29 + -0x128) = lVar16 - ((ulong)uVar11 + 0xf & 0x1fffffff0);
  lVar16 = FUN_05fcfa24(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar16 != 0) {
    plVar15 = *(long **)(unaff_x20 + 0x38);
    plVar18 = *(long **)(lVar16 + 0x38);
    if (-1 < *(int *)(*plVar15 + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest,unaff_x22,(ulong)uVar2);
    lVar12 = thunk_FUN_0301043c(*plVar15,__dest);
    if (plVar18 != (long *)0x0) {
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar13 == 0)) {
LAB_03ccadb4:
        uVar14 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                           ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar14,0);
      }
      if ((int)plVar18[3] != 0) {
        plVar18[4] = lVar12;
        thunk_FUN_03048534(plVar18 + 4,lVar12);
        lVar12 = *(long *)(unaff_x20 + 0x38);
        plVar15 = *(long **)(lVar16 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar12 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest_00,pvVar1,(ulong)uVar3);
        lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 8),__dest_00);
        if (plVar15 == (long *)0x0) goto LAB_03ccadac;
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
        goto LAB_03ccadb4;
        if (1 < *(uint *)(plVar15 + 3)) {
          plVar15[5] = lVar12;
          thunk_FUN_03048534(plVar15 + 5,lVar12);
          lVar12 = *(long *)(unaff_x20 + 0x38);
          plVar15 = *(long **)(lVar16 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar12 + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest_01,pvVar1,*(size_t *)(unaff_x29 + -0x68));
          lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x10),__dest_01);
          if (plVar15 == (long *)0x0) goto LAB_03ccadac;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
          goto LAB_03ccadb4;
          if (2 < *(uint *)(plVar15 + 3)) {
            plVar15[6] = lVar12;
            thunk_FUN_03048534(plVar15 + 6,lVar12);
            lVar12 = *(long *)(unaff_x20 + 0x38);
            pvVar17 = *(void **)(unaff_x29 + -0x80);
            plVar15 = *(long **)(lVar16 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar12 + 0x18) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0x78));
            lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x18),pvVar17);
            if (plVar15 == (long *)0x0) goto LAB_03ccadac;
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
            goto LAB_03ccadb4;
            if (3 < *(uint *)(plVar15 + 3)) {
              plVar15[7] = lVar12;
              thunk_FUN_03048534(plVar15 + 7,lVar12);
              lVar12 = *(long *)(unaff_x20 + 0x38);
              pvVar17 = *(void **)(unaff_x29 + -0x98);
              plVar15 = *(long **)(lVar16 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar12 + 0x20) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0x90));
              lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x20),pvVar17);
              if (plVar15 == (long *)0x0) goto LAB_03ccadac;
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0)
                 ) goto LAB_03ccadb4;
              if (4 < *(uint *)(plVar15 + 3)) {
                plVar15[8] = lVar12;
                thunk_FUN_03048534(plVar15 + 8,lVar12);
                lVar12 = *(long *)(unaff_x20 + 0x38);
                pvVar17 = *(void **)(unaff_x29 + -0xb0);
                plVar15 = *(long **)(lVar16 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar12 + 0x28) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
                lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x28),pvVar17);
                if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar13 == 0)) goto LAB_03ccadb4;
                if (5 < *(uint *)(plVar15 + 3)) {
                  plVar15[9] = lVar12;
                  thunk_FUN_03048534(plVar15 + 9,lVar12);
                  lVar12 = *(long *)(unaff_x20 + 0x38);
                  pvVar17 = *(void **)(unaff_x29 + -200);
                  plVar15 = *(long **)(lVar16 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar12 + 0x30) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                  lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x30),pvVar17);
                  if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar13 == 0)) goto LAB_03ccadb4;
                  if (6 < *(uint *)(plVar15 + 3)) {
                    plVar15[10] = lVar12;
                    thunk_FUN_03048534(plVar15 + 10,lVar12);
                    lVar12 = *(long *)(unaff_x20 + 0x38);
                    pvVar17 = *(void **)(unaff_x29 + -0xe0);
                    plVar15 = *(long **)(lVar16 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar12 + 0x38) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x38),pvVar17);
                    if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar13 == 0)) goto LAB_03ccadb4;
                    if (7 < *(uint *)(plVar15 + 3)) {
                      plVar15[0xb] = lVar12;
                      thunk_FUN_03048534(plVar15 + 0xb,lVar12);
                      lVar12 = *(long *)(unaff_x20 + 0x38);
                      pvVar17 = *(void **)(unaff_x29 + -0xf8);
                      plVar15 = *(long **)(lVar16 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar12 + 0x40) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                      lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x40),pvVar17);
                      if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                      if ((lVar12 != 0) &&
                         (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar13 == 0)) goto LAB_03ccadb4;
                      if (8 < *(uint *)(plVar15 + 3)) {
                        plVar15[0xc] = lVar12;
                        thunk_FUN_03048534(plVar15 + 0xc,lVar12);
                        lVar12 = *(long *)(unaff_x20 + 0x38);
                        plVar15 = *(long **)(lVar16 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar17 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                        lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x48),pvVar17);
                        if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                        if ((lVar12 != 0) &&
                           (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar13 == 0)) goto LAB_03ccadb4;
                        if (9 < *(uint *)(plVar15 + 3)) {
                          plVar15[0xd] = lVar12;
                          thunk_FUN_03048534(plVar15 + 0xd,lVar12);
                          lVar12 = *(long *)(unaff_x20 + 0x38);
                          plVar15 = *(long **)(lVar16 + 0x38);
                          pvVar1 = *(void **)(unaff_x29 + -0x118);
                          if (-1 < *(int *)(*(long *)(lVar12 + 0x50) + 0x28)) {
                            pvVar1 = (void *)(unaff_x29 + 0x78);
                          }
                          pvVar17 = *(void **)(unaff_x29 + -0x128);
                          memcpy(pvVar17,pvVar1,*(size_t *)(unaff_x29 + -0x120));
                          lVar12 = thunk_FUN_0301043c(*(undefined8 *)(lVar12 + 0x50),pvVar17);
                          if (plVar15 == (long *)0x0) goto LAB_03ccadac;
                          if ((lVar12 != 0) &&
                             (lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar13 == 0)) goto LAB_03ccadb4;
                          if (10 < *(uint *)(plVar15 + 3)) {
                            plVar15[0xe] = lVar12;
                            thunk_FUN_03048534(plVar15 + 0xe,lVar12);
                            uVar14 = FUN_05fbd0e8(lVar16,0);
                            lVar12 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02fe94e8();
                            }
                            FUN_05fbda38(lVar12,lVar16,0);
                            FUN_05fbd164(lVar16,uVar14,0);
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
  }
LAB_03ccadac:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


