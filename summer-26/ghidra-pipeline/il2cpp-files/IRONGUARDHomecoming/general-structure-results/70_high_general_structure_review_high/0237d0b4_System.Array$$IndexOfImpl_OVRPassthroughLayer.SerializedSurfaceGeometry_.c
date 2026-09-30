/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0237d0b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(long param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  void *pvVar6;
  long unaff_x29;
  
  if ((param_1 != 0) && (lVar2 = thunk_FUN_01f116d0(), lVar2 == 0)) {
LAB_0237d544:
    uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,0);
  }
  if (5 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x48) = unaff_x22;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x48));
    lVar2 = *(long *)(unaff_x20 + 0x38);
    pvVar6 = *(void **)(unaff_x29 + -200);
    plVar5 = *(long **)(unaff_x21 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0xb8);
    if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
    lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x30),pvVar6);
    if (plVar5 == (long *)0x0) {
LAB_0237d53c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
    goto LAB_0237d544;
    if (6 < *(uint *)(plVar5 + 3)) {
      plVar5[10] = lVar2;
      thunk_FUN_01f51358(plVar5 + 10,lVar2);
      lVar2 = *(long *)(unaff_x20 + 0x38);
      pvVar6 = *(void **)(unaff_x29 + -0xe0);
      plVar5 = *(long **)(unaff_x21 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0xd0);
      if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + 0x60);
      }
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
      lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x38),pvVar6);
      if (plVar5 == (long *)0x0) goto LAB_0237d53c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
      goto LAB_0237d544;
      if (7 < *(uint *)(plVar5 + 3)) {
        plVar5[0xb] = lVar2;
        thunk_FUN_01f51358(plVar5 + 0xb,lVar2);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0xf8);
        plVar5 = *(long **)(unaff_x21 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0xe8);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x68);
        }
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
        lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x40),pvVar6);
        if (plVar5 == (long *)0x0) goto LAB_0237d53c;
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_0237d544;
        if (8 < *(uint *)(plVar5 + 3)) {
          plVar5[0xc] = lVar2;
          thunk_FUN_01f51358(plVar5 + 0xc,lVar2);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          plVar5 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x100);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x70);
          }
          pvVar6 = *(void **)(unaff_x29 + -0x110);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
          lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x48),pvVar6);
          if (plVar5 == (long *)0x0) goto LAB_0237d53c;
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_0237d544;
          if (9 < *(uint *)(plVar5 + 3)) {
            plVar5[0xd] = lVar2;
            thunk_FUN_01f51358(plVar5 + 0xd,lVar2);
            lVar2 = *(long *)(unaff_x20 + 0x38);
            plVar5 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x118);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x78);
            }
            pvVar6 = *(void **)(unaff_x29 + -0x128);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
            lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x50),pvVar6);
            if (plVar5 == (long *)0x0) goto LAB_0237d53c;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_0237d544;
            if (10 < *(uint *)(plVar5 + 3)) {
              plVar5[0xe] = lVar2;
              thunk_FUN_01f51358(plVar5 + 0xe,lVar2);
              lVar2 = *(long *)(unaff_x20 + 0x38);
              plVar5 = *(long **)(unaff_x21 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + 0x80);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x58) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + 0x80);
              }
              pvVar6 = *(void **)(unaff_x29 + -0x138);
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x130));
              lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x58),pvVar6);
              if (plVar5 == (long *)0x0) goto LAB_0237d53c;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
              goto LAB_0237d544;
              if (0xb < *(uint *)(plVar5 + 3)) {
                plVar5[0xf] = lVar2;
                thunk_FUN_01f51358(plVar5 + 0xf,lVar2);
                lVar2 = *(long *)(unaff_x20 + 0x38);
                plVar5 = *(long **)(unaff_x21 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + 0x88);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + 0x88);
                }
                pvVar6 = *(void **)(unaff_x29 + -0x148);
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x140));
                lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x60),pvVar6);
                if (plVar5 == (long *)0x0) goto LAB_0237d53c;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_0237d544;
                if (0xc < *(uint *)(plVar5 + 3)) {
                  plVar5[0x10] = lVar2;
                  thunk_FUN_01f51358(plVar5 + 0x10,lVar2);
                  lVar2 = *(long *)(unaff_x20 + 0x38);
                  plVar5 = *(long **)(unaff_x21 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + 0x90);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x68) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x90);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x158);
                  memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x150));
                  lVar2 = thunk_FUN_01f113fc(*(undefined8 *)(lVar2 + 0x68),pvVar6);
                  if (plVar5 == (long *)0x0) goto LAB_0237d53c;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
                     ) goto LAB_0237d544;
                  if (0xd < *(uint *)(plVar5 + 3)) {
                    plVar5[0x11] = lVar2;
                    thunk_FUN_01f51358(plVar5 + 0x11,lVar2);
                    FUN_039b0e8c();
                    lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_039b17dc(lVar2);
                    FUN_039b0f08();
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


