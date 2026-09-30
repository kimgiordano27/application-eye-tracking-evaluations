/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$Path<object>
ENTRY_POINT: 046f0ae0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style__Path<object>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long unaff_x19;
  void *pvVar16;
  undefined1 *__dest;
  undefined1 *__dest_00;
  void *pvVar17;
  long *plVar18;
  undefined1 *__dest_01;
  void *unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x30) = param_5;
  *(undefined8 *)(unaff_x29 + -0x28) = param_4;
  *(undefined8 *)(unaff_x29 + -0x40) = param_7;
  *(undefined8 *)(unaff_x29 + -0x38) = param_6;
  *(undefined8 *)(unaff_x29 + -0x50) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = param_8;
  plVar14 = *(long **)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x60) = param_4;
  *(undefined8 *)(unaff_x29 + -0x58) = param_3;
  *(undefined8 *)(unaff_x29 + -0x70) = param_5;
  *(undefined8 *)(unaff_x29 + -0x88) = param_6;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_7;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_8;
  if (plVar14 == (long *)0x0) {
    FUN_03cf12a0();
    plVar14 = *(long **)(unaff_x19 + 0x38);
  }
  uVar1 = *(uint *)(*plVar14 + 0xfc);
  uVar2 = *(uint *)(plVar14[1] + 0xfc);
  uVar3 = *(uint *)(plVar14[3] + 0xfc);
  uVar4 = *(uint *)(plVar14[4] + 0xfc);
  uVar5 = *(uint *)(plVar14[5] + 0xfc);
  uVar6 = *(uint *)(plVar14[6] + 0xfc);
  uVar7 = *(uint *)(plVar14[7] + 0xfc);
  uVar8 = *(uint *)(plVar14[8] + 0xfc);
  uVar9 = *(uint *)(plVar14[9] + 0xfc);
  uVar10 = *(uint *)(plVar14[10] + 0xfc);
  __dest_00 = &stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  __dest = __dest_00 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  __dest_01 = __dest + -((ulong)*(uint *)(plVar14[2] + 0xfc) + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x68) = (ulong)*(uint *)(plVar14[2] + 0xfc);
  lVar15 = (long)__dest_01 - ((ulong)uVar3 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar15;
  *(ulong *)(unaff_x29 + -0x78) = (ulong)uVar3;
  lVar15 = lVar15 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar15;
  *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar4;
  lVar15 = lVar15 - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar15;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar5;
  lVar15 = lVar15 - ((ulong)uVar6 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar15;
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar6;
  lVar15 = lVar15 - ((ulong)uVar7 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar15;
  *(ulong *)(unaff_x29 + -0xd8) = (ulong)uVar7;
  lVar15 = lVar15 - ((ulong)uVar8 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar15;
  *(ulong *)(unaff_x29 + -0xf0) = (ulong)uVar8;
  *(ulong *)(unaff_x29 + -0x108) = (ulong)uVar9;
  lVar15 = lVar15 - ((ulong)uVar9 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x110) = lVar15;
  *(ulong *)(unaff_x29 + -0x120) = (ulong)uVar10;
  *(ulong *)(unaff_x29 + -0x128) = lVar15 - ((ulong)uVar10 + 0xf & 0x1fffffff0);
  lVar15 = FUN_077c7f60(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar15 != 0) {
    plVar14 = *(long **)(unaff_x19 + 0x38);
    plVar18 = *(long **)(lVar15 + 0x38);
    if (-1 < *(int *)(*plVar14 + 0x28)) {
      unaff_x28 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest_00,unaff_x28,(ulong)uVar1);
    lVar11 = thunk_FUN_03cf4e64(*plVar14,__dest_00);
    if (plVar18 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar12 == 0)) {
LAB_046f11dc:
        uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar13,0);
      }
      if ((int)plVar18[3] != 0) {
        plVar18[4] = lVar11;
        thunk_FUN_03d233cc(plVar18 + 4,lVar11);
        lVar11 = *(long *)(unaff_x19 + 0x38);
        plVar14 = *(long **)(lVar15 + 0x38);
        pvVar16 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
          pvVar16 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest,pvVar16,(ulong)uVar2);
        lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 8),__dest);
        if (plVar14 == (long *)0x0) goto LAB_046f11d4;
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
        goto LAB_046f11dc;
        if (1 < *(uint *)(plVar14 + 3)) {
          plVar14[5] = lVar11;
          thunk_FUN_03d233cc(plVar14 + 5,lVar11);
          lVar11 = *(long *)(unaff_x19 + 0x38);
          plVar14 = *(long **)(lVar15 + 0x38);
          pvVar16 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            pvVar16 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest_01,pvVar16,*(size_t *)(unaff_x29 + -0x68));
          lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x10),__dest_01);
          if (plVar14 == (long *)0x0) goto LAB_046f11d4;
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_046f11dc;
          if (2 < *(uint *)(plVar14 + 3)) {
            plVar14[6] = lVar11;
            thunk_FUN_03d233cc(plVar14 + 6,lVar11);
            lVar11 = *(long *)(unaff_x19 + 0x38);
            pvVar17 = *(void **)(unaff_x29 + -0x80);
            plVar14 = *(long **)(lVar15 + 0x38);
            pvVar16 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar11 + 0x18) + 0x28)) {
              pvVar16 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0x78));
            lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x18),pvVar17);
            if (plVar14 == (long *)0x0) goto LAB_046f11d4;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
            goto LAB_046f11dc;
            if (3 < *(uint *)(plVar14 + 3)) {
              plVar14[7] = lVar11;
              thunk_FUN_03d233cc(plVar14 + 7,lVar11);
              lVar11 = *(long *)(unaff_x19 + 0x38);
              pvVar17 = *(void **)(unaff_x29 + -0x98);
              plVar14 = *(long **)(lVar15 + 0x38);
              pvVar16 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar11 + 0x20) + 0x28)) {
                pvVar16 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0x90));
              lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x20),pvVar17);
              if (plVar14 == (long *)0x0) goto LAB_046f11d4;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)
                 ) goto LAB_046f11dc;
              if (4 < *(uint *)(plVar14 + 3)) {
                plVar14[8] = lVar11;
                thunk_FUN_03d233cc(plVar14 + 8,lVar11);
                lVar11 = *(long *)(unaff_x19 + 0x38);
                pvVar17 = *(void **)(unaff_x29 + -0xb0);
                plVar14 = *(long **)(lVar15 + 0x38);
                pvVar16 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar11 + 0x28) + 0x28)) {
                  pvVar16 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0xa8));
                lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x28),pvVar17);
                if (plVar14 == (long *)0x0) goto LAB_046f11d4;
                if ((lVar11 != 0) &&
                   (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar12 == 0)) goto LAB_046f11dc;
                if (5 < *(uint *)(plVar14 + 3)) {
                  plVar14[9] = lVar11;
                  thunk_FUN_03d233cc(plVar14 + 9,lVar11);
                  lVar11 = *(long *)(unaff_x19 + 0x38);
                  pvVar17 = *(void **)(unaff_x29 + -200);
                  plVar14 = *(long **)(lVar15 + 0x38);
                  pvVar16 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar11 + 0x30) + 0x28)) {
                    pvVar16 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0xc0));
                  lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x30),pvVar17);
                  if (plVar14 == (long *)0x0) goto LAB_046f11d4;
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar12 == 0)) goto LAB_046f11dc;
                  if (6 < *(uint *)(plVar14 + 3)) {
                    plVar14[10] = lVar11;
                    thunk_FUN_03d233cc(plVar14 + 10,lVar11);
                    lVar11 = *(long *)(unaff_x19 + 0x38);
                    pvVar17 = *(void **)(unaff_x29 + -0xe0);
                    plVar14 = *(long **)(lVar15 + 0x38);
                    pvVar16 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar11 + 0x38) + 0x28)) {
                      pvVar16 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0xd8));
                    lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x38),pvVar17);
                    if (plVar14 == (long *)0x0) goto LAB_046f11d4;
                    if ((lVar11 != 0) &&
                       (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar12 == 0)) goto LAB_046f11dc;
                    if (7 < *(uint *)(plVar14 + 3)) {
                      plVar14[0xb] = lVar11;
                      thunk_FUN_03d233cc(plVar14 + 0xb,lVar11);
                      lVar11 = *(long *)(unaff_x19 + 0x38);
                      pvVar17 = *(void **)(unaff_x29 + -0xf8);
                      plVar14 = *(long **)(lVar15 + 0x38);
                      pvVar16 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar11 + 0x40) + 0x28)) {
                        pvVar16 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0xf0));
                      lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x40),pvVar17);
                      if (plVar14 == (long *)0x0) goto LAB_046f11d4;
                      if ((lVar11 != 0) &&
                         (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar12 == 0)) goto LAB_046f11dc;
                      if (8 < *(uint *)(plVar14 + 3)) {
                        plVar14[0xc] = lVar11;
                        thunk_FUN_03d233cc(plVar14 + 0xc,lVar11);
                        lVar11 = *(long *)(unaff_x19 + 0x38);
                        plVar14 = *(long **)(lVar15 + 0x38);
                        pvVar16 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar11 + 0x48) + 0x28)) {
                          pvVar16 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar17 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0x108));
                        lVar11 = thunk_FUN_03cf4e64(*(undefined8 *)(lVar11 + 0x48),pvVar17);
                        if (plVar14 == (long *)0x0) goto LAB_046f11d4;
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar12 == 0)) goto LAB_046f11dc;
                        if (9 < *(uint *)(plVar14 + 3)) {
                          plVar14[0xd] = lVar11;
                          thunk_FUN_03d233cc(plVar14 + 0xd,lVar11);
                          uVar13 = FUN_077b5624(lVar15,0);
                          lVar11 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fb30();
                          }
                          FUN_077b5f74(lVar11,lVar15,0);
                          FUN_077b56a0(lVar15,uVar13,0);
                          pvVar16 = *(void **)(unaff_x29 + 0x78);
                          uVar13 = FUN_077aa860(lVar15,0);
                          lVar15 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x50);
                          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                            lVar15 = FUN_03cf1244(lVar15);
                          }
                          pvVar17 = (void *)FUN_03c8fa20(uVar13,lVar15,
                                                         *(undefined8 *)(unaff_x29 + -0x128));
                          memcpy(pvVar16,pvVar17,*(size_t *)(unaff_x29 + -0x120));
                          if (*(long *)(*(long *)(unaff_x29 + -0x118) + 0x28) ==
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
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_046f11d4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


