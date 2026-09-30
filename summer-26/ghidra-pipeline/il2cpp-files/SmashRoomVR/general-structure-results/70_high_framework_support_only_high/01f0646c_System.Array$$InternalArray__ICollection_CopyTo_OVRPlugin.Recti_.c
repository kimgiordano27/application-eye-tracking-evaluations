/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Recti>
ENTRY_POINT: 01f0646c
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Recti>(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  long in_x10;
  long in_x11;
  undefined8 in_x12;
  size_t unaff_x19;
  long unaff_x20;
  long *plVar6;
  void *unaff_x23;
  void *pvVar7;
  long *plVar8;
  void *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar5 = (long)&stack0x00000000 - (in_x9 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar5;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_x12;
  lVar5 = lVar5 - (in_x11 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar5;
  *(long *)(unaff_x29 + -0xf0) = in_x11;
  *(long *)(unaff_x29 + -0x108) = in_x10;
  *(ulong *)(unaff_x29 + -0x110) = lVar5 - (in_x10 + 0xfU & 0x1fffffff0);
  lVar5 = FUN_03349ae8(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar5 != 0) {
    plVar6 = *(long **)(unaff_x20 + 0x38);
    plVar8 = *(long **)(lVar5 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      unaff_x26 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x25,unaff_x26,unaff_x19);
    lVar2 = thunk_FUN_01afa70c(*plVar6);
    if (plVar8 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
LAB_01f069d4:
        uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar4,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar2;
        thunk_FUN_01b4f09c(plVar8 + 4,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        plVar6 = *(long **)(lVar5 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar2 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x28,pvVar1,unaff_x27);
        lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 8));
        if (plVar6 == (long *)0x0) goto LAB_01f069cc;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
        goto LAB_01f069d4;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar2;
          thunk_FUN_01b4f09c(plVar6 + 5,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          plVar6 = *(long **)(lVar5 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x23,pvVar1,*(size_t *)(unaff_x29 + -0x68));
          lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x10));
          if (plVar6 == (long *)0x0) goto LAB_01f069cc;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
          goto LAB_01f069d4;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar2;
            thunk_FUN_01b4f09c(plVar6 + 6,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            pvVar7 = *(void **)(unaff_x29 + -0x80);
            plVar6 = *(long **)(lVar5 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x78));
            lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x18),pvVar7);
            if (plVar6 == (long *)0x0) goto LAB_01f069cc;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
            goto LAB_01f069d4;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar2;
              thunk_FUN_01b4f09c(plVar6 + 7,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              pvVar7 = *(void **)(unaff_x29 + -0x98);
              plVar6 = *(long **)(lVar5 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x90));
              lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x20),pvVar7);
              if (plVar6 == (long *)0x0) goto LAB_01f069cc;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
              goto LAB_01f069d4;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar2;
                thunk_FUN_01b4f09c(plVar6 + 8,lVar2);
                lVar2 = *(long *)(unaff_x20 + 0x38);
                pvVar7 = *(void **)(unaff_x29 + -0xb0);
                plVar6 = *(long **)(lVar5 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x28) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
                lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x28),pvVar7);
                if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
                goto LAB_01f069d4;
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = lVar2;
                  thunk_FUN_01b4f09c(plVar6 + 9,lVar2);
                  lVar2 = *(long *)(unaff_x20 + 0x38);
                  pvVar7 = *(void **)(unaff_x29 + -200);
                  plVar6 = *(long **)(lVar5 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                  lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x30),pvVar7);
                  if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)
                     ) goto LAB_01f069d4;
                  if (6 < *(uint *)(plVar6 + 3)) {
                    plVar6[10] = lVar2;
                    thunk_FUN_01b4f09c(plVar6 + 10,lVar2);
                    lVar2 = *(long *)(unaff_x20 + 0x38);
                    pvVar7 = *(void **)(unaff_x29 + -0xe0);
                    plVar6 = *(long **)(lVar5 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x38),pvVar7);
                    if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar3 == 0)) goto LAB_01f069d4;
                    if (7 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xb] = lVar2;
                      thunk_FUN_01b4f09c(plVar6 + 0xb,lVar2);
                      lVar2 = *(long *)(unaff_x20 + 0x38);
                      pvVar7 = *(void **)(unaff_x29 + -0xf8);
                      plVar6 = *(long **)(lVar5 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                      lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x40),pvVar7);
                      if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                      if ((lVar2 != 0) &&
                         (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar3 == 0)) goto LAB_01f069d4;
                      if (8 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xc] = lVar2;
                        thunk_FUN_01b4f09c(plVar6 + 0xc,lVar2);
                        lVar2 = *(long *)(unaff_x20 + 0x38);
                        plVar6 = *(long **)(lVar5 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar7 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                        lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(lVar2 + 0x48),pvVar7);
                        if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                        if ((lVar2 != 0) &&
                           (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar3 == 0)) goto LAB_01f069d4;
                        if (9 < *(uint *)(plVar6 + 3)) {
                          plVar6[0xd] = lVar2;
                          thunk_FUN_01b4f09c(plVar6 + 0xd,lVar2);
                          uVar4 = FUN_03337144(lVar5,0);
                          lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          FUN_03337a94(lVar2,lVar5,0);
                          FUN_033371c0(lVar5,uVar4,0);
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


