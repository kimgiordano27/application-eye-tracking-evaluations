/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Rectf>
ENTRY_POINT: 01f06410
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Rectf>
               (long param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  long in_x14;
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
  
  param_1 = param_1 - (in_x9 & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = param_1;
  *(undefined8 *)(unaff_x29 + -0x78) = param_3;
  param_1 = param_1 - (param_2 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = param_1;
  *(long *)(unaff_x29 + -0x90) = param_2;
  param_1 = param_1 - (in_x14 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = param_1;
  *(long *)(unaff_x29 + -0xa8) = in_x14;
  param_1 = param_1 - (in_x13 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = param_1;
  *(long *)(unaff_x29 + -0xc0) = in_x13;
  param_1 = param_1 - (in_x12 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = param_1;
  *(long *)(unaff_x29 + -0xd8) = in_x12;
  param_1 = param_1 - (in_x11 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = param_1;
  *(long *)(unaff_x29 + -0xf0) = in_x11;
  *(long *)(unaff_x29 + -0x108) = in_x10;
  *(ulong *)(unaff_x29 + -0x110) = param_1 - (in_x10 + 0xfU & 0x1fffffff0);
  lVar2 = FUN_03349ae8(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar2 != 0) {
    plVar6 = *(long **)(unaff_x20 + 0x38);
    plVar8 = *(long **)(lVar2 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      unaff_x26 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x25,unaff_x26,unaff_x19);
    lVar3 = thunk_FUN_01afa70c(*plVar6);
    if (plVar8 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
LAB_01f069d4:
        uVar5 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar5,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar3;
        thunk_FUN_01b4f09c(plVar8 + 4,lVar3);
        lVar3 = *(long *)(unaff_x20 + 0x38);
        plVar6 = *(long **)(lVar2 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(unaff_x28,pvVar1,unaff_x27);
        lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 8));
        if (plVar6 == (long *)0x0) goto LAB_01f069cc;
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
        goto LAB_01f069d4;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar3;
          thunk_FUN_01b4f09c(plVar6 + 5,lVar3);
          lVar3 = *(long *)(unaff_x20 + 0x38);
          plVar6 = *(long **)(lVar2 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar3 + 0x10) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x23,pvVar1,*(size_t *)(unaff_x29 + -0x68));
          lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x10));
          if (plVar6 == (long *)0x0) goto LAB_01f069cc;
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
          goto LAB_01f069d4;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar3;
            thunk_FUN_01b4f09c(plVar6 + 6,lVar3);
            lVar3 = *(long *)(unaff_x20 + 0x38);
            pvVar7 = *(void **)(unaff_x29 + -0x80);
            plVar6 = *(long **)(lVar2 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar3 + 0x18) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x78));
            lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x18),pvVar7);
            if (plVar6 == (long *)0x0) goto LAB_01f069cc;
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
            goto LAB_01f069d4;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar3;
              thunk_FUN_01b4f09c(plVar6 + 7,lVar3);
              lVar3 = *(long *)(unaff_x20 + 0x38);
              pvVar7 = *(void **)(unaff_x29 + -0x98);
              plVar6 = *(long **)(lVar2 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x90));
              lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x20),pvVar7);
              if (plVar6 == (long *)0x0) goto LAB_01f069cc;
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
              goto LAB_01f069d4;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar3;
                thunk_FUN_01b4f09c(plVar6 + 8,lVar3);
                lVar3 = *(long *)(unaff_x20 + 0x38);
                pvVar7 = *(void **)(unaff_x29 + -0xb0);
                plVar6 = *(long **)(lVar2 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar3 + 0x28) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
                lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x28),pvVar7);
                if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                goto LAB_01f069d4;
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = lVar3;
                  thunk_FUN_01b4f09c(plVar6 + 9,lVar3);
                  lVar3 = *(long *)(unaff_x20 + 0x38);
                  pvVar7 = *(void **)(unaff_x29 + -200);
                  plVar6 = *(long **)(lVar2 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar3 + 0x30) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                  lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x30),pvVar7);
                  if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
                     ) goto LAB_01f069d4;
                  if (6 < *(uint *)(plVar6 + 3)) {
                    plVar6[10] = lVar3;
                    thunk_FUN_01b4f09c(plVar6 + 10,lVar3);
                    lVar3 = *(long *)(unaff_x20 + 0x38);
                    pvVar7 = *(void **)(unaff_x29 + -0xe0);
                    plVar6 = *(long **)(lVar2 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar3 + 0x38) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x38),pvVar7);
                    if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar4 == 0)) goto LAB_01f069d4;
                    if (7 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xb] = lVar3;
                      thunk_FUN_01b4f09c(plVar6 + 0xb,lVar3);
                      lVar3 = *(long *)(unaff_x20 + 0x38);
                      pvVar7 = *(void **)(unaff_x29 + -0xf8);
                      plVar6 = *(long **)(lVar2 + 0x38);
                      pvVar1 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar3 + 0x40) + 0x28)) {
                        pvVar1 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                      lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x40),pvVar7);
                      if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar4 == 0)) goto LAB_01f069d4;
                      if (8 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xc] = lVar3;
                        thunk_FUN_01b4f09c(plVar6 + 0xc,lVar3);
                        lVar3 = *(long *)(unaff_x20 + 0x38);
                        plVar6 = *(long **)(lVar2 + 0x38);
                        pvVar1 = *(void **)(unaff_x29 + -0x100);
                        if (-1 < *(int *)(*(long *)(lVar3 + 0x48) + 0x28)) {
                          pvVar1 = (void *)(unaff_x29 + 0x70);
                        }
                        pvVar7 = *(void **)(unaff_x29 + -0x110);
                        memcpy(pvVar7,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                        lVar3 = thunk_FUN_01afa70c(*(undefined8 *)(lVar3 + 0x48),pvVar7);
                        if (plVar6 == (long *)0x0) goto LAB_01f069cc;
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar4 == 0)) goto LAB_01f069d4;
                        if (9 < *(uint *)(plVar6 + 3)) {
                          plVar6[0xd] = lVar3;
                          thunk_FUN_01b4f09c(plVar6 + 0xd,lVar3);
                          uVar5 = FUN_03337144(lVar2,0);
                          lVar3 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          FUN_03337a94(lVar3,lVar2,0);
                          FUN_033371c0(lVar2,uVar5,0);
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


