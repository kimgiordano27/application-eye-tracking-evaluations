/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Fovf>
ENTRY_POINT: 01f06358
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Fovf>
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
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long unaff_x20;
  undefined1 *__dest;
  void *pvVar16;
  long *plVar17;
  undefined1 *__dest_00;
  void *unaff_x26;
  undefined1 *__dest_01;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x30) = param_5;
  *(undefined8 *)(unaff_x29 + -0x28) = param_4;
  *(undefined8 *)(unaff_x29 + -0x40) = param_7;
  *(undefined8 *)(unaff_x29 + -0x38) = param_6;
  *(undefined8 *)(unaff_x29 + -0x50) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = param_8;
  plVar14 = *(long **)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x60) = param_4;
  *(undefined8 *)(unaff_x29 + -0x58) = param_3;
  *(undefined8 *)(unaff_x29 + -0x70) = param_5;
  *(undefined8 *)(unaff_x29 + -0x88) = param_6;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_7;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_8;
  if (plVar14 == (long *)0x0) {
    FUN_01ae9ed0();
    plVar14 = *(long **)(unaff_x20 + 0x38);
  }
  uVar2 = *(uint *)(*plVar14 + 0xfc);
  uVar3 = *(uint *)(plVar14[1] + 0xfc);
  uVar4 = *(uint *)(plVar14[4] + 0xfc);
  uVar5 = *(uint *)(plVar14[3] + 0xfc);
  uVar6 = *(uint *)(plVar14[5] + 0xfc);
  uVar7 = *(uint *)(plVar14[6] + 0xfc);
  uVar8 = *(uint *)(plVar14[7] + 0xfc);
  uVar9 = *(uint *)(plVar14[8] + 0xfc);
  uVar10 = *(uint *)(plVar14[9] + 0xfc);
  __dest_00 = &stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  __dest_01 = __dest_00 + -((ulong)uVar3 + 0xf & 0x1fffffff0);
  __dest = __dest_01 + -((ulong)*(uint *)(plVar14[2] + 0xfc) + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x68) = (ulong)*(uint *)(plVar14[2] + 0xfc);
  lVar15 = (long)__dest - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar15;
  *(ulong *)(unaff_x29 + -0x78) = (ulong)uVar5;
  lVar15 = lVar15 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar15;
  *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar4;
  lVar15 = lVar15 - ((ulong)uVar6 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar15;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar6;
  lVar15 = lVar15 - ((ulong)uVar7 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar15;
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar7;
  lVar15 = lVar15 - ((ulong)uVar8 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar15;
  *(ulong *)(unaff_x29 + -0xd8) = (ulong)uVar8;
  lVar15 = lVar15 - ((ulong)uVar9 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar15;
  *(ulong *)(unaff_x29 + -0xf0) = (ulong)uVar9;
  *(ulong *)(unaff_x29 + -0x108) = (ulong)uVar10;
  *(ulong *)(unaff_x29 + -0x110) = lVar15 - ((ulong)uVar10 + 0xf & 0x1fffffff0);
  lVar15 = FUN_03349ae8(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar15 != 0) {
    plVar14 = *(long **)(unaff_x20 + 0x38);
    plVar17 = *(long **)(lVar15 + 0x38);
    if (-1 < *(int *)(*plVar14 + 0x28)) {
      unaff_x26 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest_00,unaff_x26,(ulong)uVar2);
    lVar11 = thunk_FUN_01afa70c(*plVar14,__dest_00);
    if (plVar17 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar17 + 0x40)), lVar12 == 0)) {
LAB_01f069d4:
        uVar13 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar13,0);
      }
      if ((int)plVar17[3] != 0) {
        plVar17[4] = lVar11;
        thunk_FUN_01b4f09c(plVar17 + 4,lVar11);
        lVar11 = *(long *)(unaff_x20 + 0x38);
        plVar14 = *(long **)(lVar15 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest_01,pvVar1,(ulong)uVar3);
        lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 8),__dest_01);
        if (plVar14 == (long *)0x0) goto LAB_01f069cc;
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
        goto LAB_01f069d4;
        if (1 < *(uint *)(plVar14 + 3)) {
          plVar14[5] = lVar11;
          thunk_FUN_01b4f09c(plVar14 + 5,lVar11);
          lVar11 = *(long *)(unaff_x20 + 0x38);
          plVar14 = *(long **)(lVar15 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar11 + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest,pvVar1,*(size_t *)(unaff_x29 + -0x68));
          lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x10),__dest);
          if (plVar14 == (long *)0x0) goto LAB_01f069cc;
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_01f069d4;
          if (2 < *(uint *)(plVar14 + 3)) {
            plVar14[6] = lVar11;
            thunk_FUN_01b4f09c(plVar14 + 6,lVar11);
            lVar11 = *(long *)(unaff_x20 + 0x38);
            pvVar16 = *(void **)(unaff_x29 + -0x80);
            plVar14 = *(long **)(lVar15 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar11 + 0x18) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0x78));
            lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x18),pvVar16);
            if (plVar14 == (long *)0x0) goto LAB_01f069cc;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
            goto LAB_01f069d4;
            if (3 < *(uint *)(plVar14 + 3)) {
              plVar14[7] = lVar11;
              thunk_FUN_01b4f09c(plVar14 + 7,lVar11);
              lVar11 = *(long *)(unaff_x20 + 0x38);
              pvVar16 = *(void **)(unaff_x29 + -0x98);
              plVar14 = *(long **)(lVar15 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar11 + 0x20) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0x90));
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x20),pvVar16);
              if (plVar14 == (long *)0x0) goto LAB_01f069cc;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)
                 ) goto LAB_01f069d4;
              if (4 < *(uint *)(plVar14 + 3)) {
                plVar14[8] = lVar11;
                thunk_FUN_01b4f09c(plVar14 + 8,lVar11);
                lVar11 = *(long *)(unaff_x20 + 0x38);
                pvVar16 = *(void **)(unaff_x29 + -0xb0);
                plVar14 = *(long **)(lVar15 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar11 + 0x28) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
                lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x28),pvVar16);
                if (plVar14 == (long *)0x0) goto LAB_01f069cc;
                if ((lVar11 != 0) &&
                   (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar12 == 0)) goto LAB_01f069d4;
                if (5 < *(uint *)(plVar14 + 3)) {
                  plVar14[9] = lVar11;
                  thunk_FUN_01b4f09c(plVar14 + 9,lVar11);
                  lVar11 = *(long *)(unaff_x20 + 0x38);
                  pvVar16 = *(void **)(unaff_x29 + -200);
                  plVar14 = *(long **)(lVar15 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar11 + 0x30) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                  lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x30),pvVar16);
                  if (plVar14 == (long *)0x0) goto LAB_01f069cc;
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar12 == 0)) goto LAB_01f069d4;
                  if (6 < *(uint *)(plVar14 + 3)) {
                    plVar14[10] = lVar11;
                    thunk_FUN_01b4f09c(plVar14 + 10,lVar11);
                    lVar11 = *(long *)(unaff_x20 + 0x38);
                    pvVar16 = *(void **)(unaff_x29 + -0xe0);
                    plVar14 = *(long **)(lVar15 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar11 + 0x38) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x38),pvVar16);
                    if (plVar14 == (long *)0x0) goto LAB_01f069cc;
                    if ((lVar11 != 0) &&
                       (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar12 == 0)) goto LAB_01f069d4;
                    if (7 < *(uint *)(plVar14 + 3)) {
                      plVar14[0xb] = lVar11;
                      thunk_FUN_01b4f09c(plVar14 + 0xb,lVar11);
                      lVar11 = *(long *)(unaff_x20 + 0x38);
                      pvVar16 = *(void **)(unaff_x29 + -0xf8);
                      plVar14 = *(long **)(lVar15 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar11 + 0x40) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                      lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x40),pvVar16);
                      if (plVar14 == (long *)0x0) goto LAB_01f069cc;
                      if ((lVar11 != 0) &&
                         (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar12 == 0)) goto LAB_01f069d4;
                      if (8 < *(uint *)(plVar14 + 3)) {
                        plVar14[0xc] = lVar11;
                        thunk_FUN_01b4f09c(plVar14 + 0xc,lVar11);
                        lVar11 = *(long *)(unaff_x20 + 0x38);
                        plVar14 = *(long **)(lVar15 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar11 + 0x48) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar16 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar16,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                        lVar11 = thunk_FUN_01afa70c(*(undefined8 *)(lVar11 + 0x48),pvVar16);
                        if (plVar14 == (long *)0x0) goto LAB_01f069cc;
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar12 == 0)) goto LAB_01f069d4;
                        if (9 < *(uint *)(plVar14 + 3)) {
                          plVar14[0xd] = lVar11;
                          thunk_FUN_01b4f09c(plVar14 + 0xd,lVar11);
                          uVar13 = FUN_03337144(lVar15,0);
                          lVar11 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          FUN_03337a94(lVar11,lVar15,0);
                          FUN_033371c0(lVar15,uVar13,0);
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
      FUN_01b48180();
    }
  }
LAB_01f069cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


