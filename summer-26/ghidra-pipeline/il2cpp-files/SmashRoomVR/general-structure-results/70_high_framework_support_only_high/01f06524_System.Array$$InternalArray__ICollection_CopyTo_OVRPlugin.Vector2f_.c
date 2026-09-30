/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector2f>
ENTRY_POINT: 01f06524
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector2f>(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long *plVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  void *unaff_x23;
  void *pvVar6;
  long unaff_x24;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if (*(int *)(unaff_x24 + 0x18) != 0) {
    *(undefined8 *)(unaff_x24 + 0x20) = unaff_x19;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x24 + 0x20));
    lVar5 = *(long *)(unaff_x20 + 0x38);
    plVar4 = *(long **)(unaff_x21 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x58);
    if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x28,pvVar1,unaff_x27);
    lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 8));
    if (plVar4 == (long *)0x0) {
LAB_01f069cc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_01f069d4:
      uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar3,0);
    }
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      thunk_FUN_01b4f09c(plVar4 + 5,lVar5);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      plVar4 = *(long **)(unaff_x21 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x60);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x23,pvVar1,*(size_t *)(unaff_x29 + -0x68));
      lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x10));
      if (plVar4 == (long *)0x0) goto LAB_01f069cc;
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_01f069d4;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        thunk_FUN_01b4f09c(plVar4 + 6,lVar5);
        lVar5 = *(long *)(unaff_x20 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0x80);
        plVar4 = *(long **)(unaff_x21 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x70);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x30);
        }
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x78));
        lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x18),pvVar6);
        if (plVar4 == (long *)0x0) goto LAB_01f069cc;
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_01f069d4;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          thunk_FUN_01b4f09c(plVar4 + 7,lVar5);
          lVar5 = *(long *)(unaff_x20 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0x98);
          plVar4 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x88);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + -0x38);
          }
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x90));
          lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x20),pvVar6);
          if (plVar4 == (long *)0x0) goto LAB_01f069cc;
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
          goto LAB_01f069d4;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar5;
            thunk_FUN_01b4f09c(plVar4 + 8,lVar5);
            lVar5 = *(long *)(unaff_x20 + 0x38);
            pvVar6 = *(void **)(unaff_x29 + -0xb0);
            plVar4 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0xa0);
            if (-1 < *(int *)(*(long *)(lVar5 + 0x28) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x40);
            }
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xa8));
            lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x28),pvVar6);
            if (plVar4 == (long *)0x0) goto LAB_01f069cc;
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_01f069d4;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar5;
              thunk_FUN_01b4f09c(plVar4 + 9,lVar5);
              lVar5 = *(long *)(unaff_x20 + 0x38);
              pvVar6 = *(void **)(unaff_x29 + -200);
              plVar4 = *(long **)(unaff_x21 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0xb8);
              if (-1 < *(int *)(*(long *)(lVar5 + 0x30) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x48);
              }
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
              lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x30),pvVar6);
              if (plVar4 == (long *)0x0) goto LAB_01f069cc;
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
              goto LAB_01f069d4;
              if (6 < *(uint *)(plVar4 + 3)) {
                plVar4[10] = lVar5;
                thunk_FUN_01b4f09c(plVar4 + 10,lVar5);
                lVar5 = *(long *)(unaff_x20 + 0x38);
                pvVar6 = *(void **)(unaff_x29 + -0xe0);
                plVar4 = *(long **)(unaff_x21 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0xd0);
                if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + 0x60);
                }
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x38),pvVar6);
                if (plVar4 == (long *)0x0) goto LAB_01f069cc;
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
                goto LAB_01f069d4;
                if (7 < *(uint *)(plVar4 + 3)) {
                  plVar4[0xb] = lVar5;
                  thunk_FUN_01b4f09c(plVar4 + 0xb,lVar5);
                  lVar5 = *(long *)(unaff_x20 + 0x38);
                  pvVar6 = *(void **)(unaff_x29 + -0xf8);
                  plVar4 = *(long **)(unaff_x21 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0xe8);
                  if (-1 < *(int *)(*(long *)(lVar5 + 0x40) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x68);
                  }
                  memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
                  lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x40),pvVar6);
                  if (plVar4 == (long *)0x0) goto LAB_01f069cc;
                  if ((lVar5 != 0) &&
                     (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)
                     ) goto LAB_01f069d4;
                  if (8 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xc] = lVar5;
                    thunk_FUN_01b4f09c(plVar4 + 0xc,lVar5);
                    lVar5 = *(long *)(unaff_x20 + 0x38);
                    plVar4 = *(long **)(unaff_x21 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0x100);
                    if (-1 < *(int *)(*(long *)(lVar5 + 0x48) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x70);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x110);
                    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                    lVar5 = thunk_FUN_01afa70c(*(undefined8 *)(lVar5 + 0x48),pvVar6);
                    if (plVar4 == (long *)0x0) goto LAB_01f069cc;
                    if ((lVar5 != 0) &&
                       (lVar2 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar2 == 0)) goto LAB_01f069d4;
                    if (9 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xd] = lVar5;
                      thunk_FUN_01b4f09c(plVar4 + 0xd,lVar5);
                      FUN_03337144();
                      lVar5 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      FUN_03337a94(lVar5);
                      FUN_033371c0();
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


