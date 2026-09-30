/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 03465d68
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar5;
  void *pvVar6;
  long unaff_x29;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03465d4c with catch @ 03465d6c
                       catch(type#2 @ 00000000) { ... } // from try @ 03465d64 with catch @ 03465d6c
                        */
  if (in_NG == in_OV) {
    in_x9 = (void *)(unaff_x29 + -0x40);
  }
                    /* try { // try from 03465d70 to 03565dcb has its CatchHandler @ 03465d70
                       catch() { ... } // from try @ 03465d70 with catch @ 03465d70
                       catch() { ... } // from try @ 03465dec with catch @ 03465d70
                       catch() { ... } // from try @ 03465e28 with catch @ 03465d70
                       catch() { ... } // from try @ 03465e58 with catch @ 03465d70 */
  memcpy(param_1,in_x9,param_3);
  lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(unaff_x19 + 0x28));
  if (unaff_x22 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_034661b8:
      uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar4,0);
    }
    if (5 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[9] = lVar2;
      lVar2 = *(long *)(unaff_x20 + 0x38);
      pvVar6 = *(void **)(unaff_x29 + -200);
      plVar5 = *(long **)(unaff_x21 + 0x38);
                    /* try { // try from 03465dcc to 03565ddb has its CatchHandler @ 03465e0c */
      pvVar1 = *(void **)(unaff_x29 + -0xb8);
      if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x48);
      }
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xc0));
                    /* try { // try from 03465de4 to 03565deb has its CatchHandler @ 03465e08 */
      lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x30),pvVar6);
      if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    /* try { // try from 03465dec to 03565e23 has its CatchHandler @ 03465d70 */
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
      goto LAB_034661b8;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465de4 with catch @ 03465e08
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465dcc with catch @ 03465e0c
                        */
      if (6 < *(uint *)(plVar5 + 3)) {
        plVar5[10] = lVar2;
        lVar2 = *(long *)(unaff_x20 + 0x38);
        pvVar6 = *(void **)(unaff_x29 + -0xe0);
                    /* try { // try from 03465e24 to 03565e27 has its CatchHandler @ 03465e48 */
        plVar5 = *(long **)(unaff_x21 + 0x38);
                    /* try { // try from 03465e28 to 03565e4b has its CatchHandler @ 03465d70 */
        pvVar1 = *(void **)(unaff_x29 + -0xd0);
        if (-1 < *(int *)(*(long *)(lVar2 + 0x38) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x60);
        }
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xd8));
                    /* catch() { ... } // from try @ 03465e24 with catch @ 03465e48 */
                    /* try { // try from 03465e4c to 03565e57 has its CatchHandler @ 03465e6c */
        lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x38),pvVar6);
        if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    /* try { // try from 03465e58 to 03565e63 has its CatchHandler @ 03465d70 */
                    /* try { // try from 03465e64 to 03565e6b has its CatchHandler @ 03465e6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03465e4c with catch @ 03465e6c
                       catch(type#2 @ 00000000) { ... } // from try @ 03465e64 with catch @ 03465e6c
                        */
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_034661b8;
                    /* try { // try from 03465e70 to 03565ecb has its CatchHandler @ 03465e70
                       catch() { ... } // from try @ 03465e70 with catch @ 03465e70
                       catch() { ... } // from try @ 03465eec with catch @ 03465e70
                       catch() { ... } // from try @ 03465f28 with catch @ 03465e70
                       catch() { ... } // from try @ 03465f58 with catch @ 03465e70 */
        if (7 < *(uint *)(plVar5 + 3)) {
          plVar5[0xb] = lVar2;
          lVar2 = *(long *)(unaff_x20 + 0x38);
          pvVar6 = *(void **)(unaff_x29 + -0xf8);
          plVar5 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0xe8);
          if (-1 < *(int *)(*(long *)(lVar2 + 0x40) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x68);
          }
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
          lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x40),pvVar6);
          if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    /* try { // try from 03465ecc to 03565edb has its CatchHandler @ 03465f0c */
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_034661b8;
          if (8 < *(uint *)(plVar5 + 3)) {
                    /* try { // try from 03465ee4 to 03565eeb has its CatchHandler @ 03465f08 */
            plVar5[0xc] = lVar2;
            lVar2 = *(long *)(unaff_x20 + 0x38);
                    /* try { // try from 03465eec to 03565f23 has its CatchHandler @ 03465e70 */
            plVar5 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x100);
            if (-1 < *(int *)(*(long *)(lVar2 + 0x48) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x70);
            }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465ee4 with catch @ 03465f08
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465ecc with catch @ 03465f0c
                        */
            pvVar6 = *(void **)(unaff_x29 + -0x110);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
                    /* try { // try from 03465f24 to 03565f27 has its CatchHandler @ 03465f48 */
                    /* try { // try from 03465f28 to 03565f4b has its CatchHandler @ 03465e70 */
            lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x48),pvVar6);
            if (plVar5 == (long *)0x0) goto LAB_034661b0;
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_034661b8;
            if (9 < *(uint *)(plVar5 + 3)) {
              plVar5[0xd] = lVar2;
              lVar2 = *(long *)(unaff_x20 + 0x38);
              plVar5 = *(long **)(unaff_x21 + 0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x118);
              if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + 0x78);
              }
              pvVar6 = *(void **)(unaff_x29 + -0x128);
              memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
              lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x50),pvVar6);
              if (plVar5 == (long *)0x0) goto LAB_034661b0;
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
              goto LAB_034661b8;
              if (10 < *(uint *)(plVar5 + 3)) {
                plVar5[0xe] = lVar2;
                lVar2 = *(long *)(unaff_x20 + 0x38);
                plVar5 = *(long **)(unaff_x21 + 0x38);
                pvVar1 = *(void **)(unaff_x29 + -0x130);
                if (-1 < *(int *)(*(long *)(lVar2 + 0x58) + 0x28)) {
                  pvVar1 = (void *)(unaff_x29 + 0x80);
                }
                pvVar6 = *(void **)(unaff_x29 + -0x140);
                memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x138));
                lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x58),pvVar6);
                if (plVar5 == (long *)0x0) goto LAB_034661b0;
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_034661b8;
                if (0xb < *(uint *)(plVar5 + 3)) {
                  plVar5[0xf] = lVar2;
                  lVar2 = *(long *)(unaff_x20 + 0x38);
                  plVar5 = *(long **)(unaff_x21 + 0x38);
                  pvVar1 = *(void **)(unaff_x29 + -0x148);
                  if (-1 < *(int *)(*(long *)(lVar2 + 0x60) + 0x28)) {
                    pvVar1 = (void *)(unaff_x29 + 0x88);
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0x158);
                  memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x150));
                  lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x60),pvVar6);
                  if (plVar5 == (long *)0x0) goto LAB_034661b0;
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
                     ) goto LAB_034661b8;
                  if (0xc < *(uint *)(plVar5 + 3)) {
                    plVar5[0x10] = lVar2;
                    lVar2 = *(long *)(unaff_x20 + 0x38);
                    plVar5 = *(long **)(unaff_x21 + 0x38);
                    pvVar1 = *(void **)(unaff_x29 + -0x160);
                    if (-1 < *(int *)(*(long *)(lVar2 + 0x68) + 0x28)) {
                      pvVar1 = (void *)(unaff_x29 + 0x90);
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0x170);
                    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x168));
                    lVar2 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar2 + 0x68),pvVar6);
                    if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar3 == 0)) goto LAB_034661b8;
                    if (0xd < *(uint *)(plVar5 + 3)) {
                      plVar5[0x11] = lVar2;
                      FUN_05396aec();
                      lVar2 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02ce7c7c();
                      }
                      FUN_0539730c(lVar2);
                      FUN_05396b54();
                      if (*(long *)(*(long *)(unaff_x29 + -0x178) + 0x28) ==
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
    FUN_02ce7c84();
  }
LAB_034661b0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


