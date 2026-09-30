/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Quatf>
ENTRY_POINT: 01f063b4
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Quatf>
               (long param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x14;
  long in_x15;
  long in_x16;
  long in_x17;
  size_t unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined1 *__dest;
  void *pvVar12;
  long *plVar13;
  undefined1 *__dest_00;
  void *unaff_x26;
  size_t unaff_x27;
  undefined1 *__dest_01;
  long unaff_x29;
  
  uVar2 = *(uint *)(in_x14 + 0xfc);
  uVar3 = *(uint *)(in_x15 + 0xfc);
  uVar4 = *(uint *)(in_x16 + 0xfc);
  uVar5 = *(uint *)(in_x17 + 0xfc);
  uVar6 = *(uint *)(param_1 + 0xfc);
  __dest_00 = &stack0x00000000 + -(unaff_x19 + 0xf & 0x1fffffff0);
  __dest_01 = __dest_00 + -(unaff_x27 + 0xf & 0x1fffffff0);
  __dest = __dest_01 + -(param_4 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x68) = param_4;
  lVar10 = (long)__dest - (param_3 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar10;
  *(long *)(unaff_x29 + -0x78) = param_3;
  lVar10 = lVar10 - (param_2 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar10;
  *(long *)(unaff_x29 + -0x90) = param_2;
  lVar10 = lVar10 - ((ulong)uVar2 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar10;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar2;
  lVar10 = lVar10 - ((ulong)uVar3 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar10;
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar3;
  lVar10 = lVar10 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar10;
  *(ulong *)(unaff_x29 + -0xd8) = (ulong)uVar4;
  lVar10 = lVar10 - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar10;
  *(ulong *)(unaff_x29 + -0xf0) = (ulong)uVar5;
  *(ulong *)(unaff_x29 + -0x108) = (ulong)uVar6;
  *(ulong *)(unaff_x29 + -0x110) = lVar10 - ((ulong)uVar6 + 0xf & 0x1fffffff0);
  lVar10 = FUN_03349ae8(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar10 != 0) {
    plVar11 = *(long **)(unaff_x20 + 0x38);
    plVar13 = *(long **)(lVar10 + 0x38);
    if (-1 < *(int *)(*plVar11 + 0x28)) {
      unaff_x26 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest_00,unaff_x26,unaff_x19);
    lVar7 = thunk_FUN_01afa70c(*plVar11,__dest_00);
    if (plVar13 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
LAB_01f069d4:
        uVar9 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar9,0);
      }
      if ((int)plVar13[3] != 0) {
        plVar13[4] = lVar7;
        thunk_FUN_01b4f09c(plVar13 + 4,lVar7);
        lVar7 = *(long *)(unaff_x20 + 0x38);
        plVar11 = *(long **)(lVar10 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest_01,pvVar1,unaff_x27);
        lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 8),__dest_01);
        if (plVar11 == (long *)0x0) goto LAB_01f069cc;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
        goto LAB_01f069d4;
        if (1 < *(uint *)(plVar11 + 3)) {
          plVar11[5] = lVar7;
          thunk_FUN_01b4f09c(plVar11 + 5,lVar7);
          lVar7 = *(long *)(unaff_x20 + 0x38);
          plVar11 = *(long **)(lVar10 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest,pvVar1,*(size_t *)(unaff_x29 + -0x68));
          lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x10),__dest);
          if (plVar11 == (long *)0x0) goto LAB_01f069cc;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
          goto LAB_01f069d4;
          if (2 < *(uint *)(plVar11 + 3)) {
            plVar11[6] = lVar7;
            thunk_FUN_01b4f09c(plVar11 + 6,lVar7);
            lVar7 = *(long *)(unaff_x20 + 0x38);
            pvVar12 = *(void **)(unaff_x29 + -0x80);
            plVar11 = *(long **)(lVar10 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0x78));
            lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x18),pvVar12);
            if (plVar11 == (long *)0x0) goto LAB_01f069cc;
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto LAB_01f069d4;
            if (3 < *(uint *)(plVar11 + 3)) {
              plVar11[7] = lVar7;
              thunk_FUN_01b4f09c(plVar11 + 7,lVar7);
              lVar7 = *(long *)(unaff_x20 + 0x38);
              pvVar12 = *(void **)(unaff_x29 + -0x98);
              plVar11 = *(long **)(lVar10 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0x90));
              lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x20),pvVar12);
              if (plVar11 == (long *)0x0) goto LAB_01f069cc;
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
              goto LAB_01f069d4;
              if (4 < *(uint *)(plVar11 + 3)) {
                plVar11[8] = lVar7;
                thunk_FUN_01b4f09c(plVar11 + 8,lVar7);
                lVar7 = *(long *)(unaff_x20 + 0x38);
                pvVar12 = *(void **)(unaff_x29 + -0xb0);
                plVar11 = *(long **)(lVar10 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar7 + 0x28) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
                lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x28),pvVar12);
                if (plVar11 == (long *)0x0) goto LAB_01f069cc;
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
                goto LAB_01f069d4;
                if (5 < *(uint *)(plVar11 + 3)) {
                  plVar11[9] = lVar7;
                  thunk_FUN_01b4f09c(plVar11 + 9,lVar7);
                  lVar7 = *(long *)(unaff_x20 + 0x38);
                  pvVar12 = *(void **)(unaff_x29 + -200);
                  plVar11 = *(long **)(lVar10 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar7 + 0x30) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                  lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x30),pvVar12);
                  if (plVar11 == (long *)0x0) goto LAB_01f069cc;
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0
                     )) goto LAB_01f069d4;
                  if (6 < *(uint *)(plVar11 + 3)) {
                    plVar11[10] = lVar7;
                    thunk_FUN_01b4f09c(plVar11 + 10,lVar7);
                    lVar7 = *(long *)(unaff_x20 + 0x38);
                    pvVar12 = *(void **)(unaff_x29 + -0xe0);
                    plVar11 = *(long **)(lVar10 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar7 + 0x38) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x38),pvVar12);
                    if (plVar11 == (long *)0x0) goto LAB_01f069cc;
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar8 == 0)) goto LAB_01f069d4;
                    if (7 < *(uint *)(plVar11 + 3)) {
                      plVar11[0xb] = lVar7;
                      thunk_FUN_01b4f09c(plVar11 + 0xb,lVar7);
                      lVar7 = *(long *)(unaff_x20 + 0x38);
                      pvVar12 = *(void **)(unaff_x29 + -0xf8);
                      plVar11 = *(long **)(lVar10 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar7 + 0x40) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                      lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x40),pvVar12);
                      if (plVar11 == (long *)0x0) goto LAB_01f069cc;
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar8 == 0)) goto LAB_01f069d4;
                      if (8 < *(uint *)(plVar11 + 3)) {
                        plVar11[0xc] = lVar7;
                        thunk_FUN_01b4f09c(plVar11 + 0xc,lVar7);
                        lVar7 = *(long *)(unaff_x20 + 0x38);
                        plVar11 = *(long **)(lVar10 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar12 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar12,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                        lVar7 = thunk_FUN_01afa70c(*(undefined8 *)(lVar7 + 0x48),pvVar12);
                        if (plVar11 == (long *)0x0) goto LAB_01f069cc;
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar8 == 0)) goto LAB_01f069d4;
                        if (9 < *(uint *)(plVar11 + 3)) {
                          plVar11[0xd] = lVar7;
                          thunk_FUN_01b4f09c(plVar11 + 0xd,lVar7);
                          uVar9 = FUN_03337144(lVar10,0);
                          lVar7 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          FUN_03337a94(lVar7,lVar10,0);
                          FUN_033371c0(lVar10,uVar9,0);
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


