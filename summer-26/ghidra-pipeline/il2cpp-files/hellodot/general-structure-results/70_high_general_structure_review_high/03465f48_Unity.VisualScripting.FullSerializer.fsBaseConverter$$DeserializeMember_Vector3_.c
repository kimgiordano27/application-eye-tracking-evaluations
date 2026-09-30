/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 03465f48
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar5;
  void *pvVar6;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 03465f24 with catch @ 03465f48 */
  if (param_1 != 0) {
                    /* try { // try from 03465f4c to 03565f57 has its CatchHandler @ 03465f6c */
    if (9 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 03465f58 to 03565f63 has its CatchHandler @ 03465e70 */
      *(undefined8 *)(unaff_x22 + 0x68) = unaff_x19;
      lVar4 = *(long *)(unaff_x20 + 0x38);
                    /* try { // try from 03465f64 to 03565f6b has its CatchHandler @ 03465f6c */
      plVar5 = *(long **)(unaff_x21 + 0x38);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03465f4c with catch @ 03465f6c
                       catch(type#2 @ 00000000) { ... } // from try @ 03465f64 with catch @ 03465f6c
                        */
                    /* try { // try from 03465f70 to 03565fcb has its CatchHandler @ 03465f70
                       catch() { ... } // from try @ 03465f70 with catch @ 03465f70
                       catch() { ... } // from try @ 03465fec with catch @ 03465f70
                       catch() { ... } // from try @ 03466028 with catch @ 03465f70
                       catch() { ... } // from try @ 03466058 with catch @ 03465f70 */
      pvVar1 = *(void **)(unaff_x29 + -0x118);
      if (-1 < *(int *)(*(long *)(lVar4 + 0x50) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + 0x78);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x128);
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
      lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar4 + 0x50),pvVar6);
      if (plVar5 == (long *)0x0) {
LAB_034661b0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
      goto LAB_034661b8;
                    /* try { // try from 03465fcc to 03565fdb has its CatchHandler @ 0346600c */
      if (10 < *(uint *)(plVar5 + 3)) {
        plVar5[0xe] = lVar4;
        lVar4 = *(long *)(unaff_x20 + 0x38);
        plVar5 = *(long **)(unaff_x21 + 0x38);
                    /* try { // try from 03465fe4 to 03565feb has its CatchHandler @ 03466008 */
                    /* try { // try from 03465fec to 03566023 has its CatchHandler @ 03465f70 */
        pvVar1 = *(void **)(unaff_x29 + -0x130);
        if (-1 < *(int *)(*(long *)(lVar4 + 0x58) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x80);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x140);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465fe4 with catch @ 03466008
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03465fcc with catch @ 0346600c
                        */
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x138));
        lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar4 + 0x58),pvVar6);
        if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    /* try { // try from 03466024 to 03566027 has its CatchHandler @ 03466048 */
                    /* try { // try from 03466028 to 0356604b has its CatchHandler @ 03465f70 */
        if ((lVar4 != 0) &&
           (lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
        goto LAB_034661b8;
        if (0xb < *(uint *)(plVar5 + 3)) {
                    /* catch() { ... } // from try @ 03466024 with catch @ 03466048 */
          plVar5[0xf] = lVar4;
                    /* try { // try from 0346604c to 03566057 has its CatchHandler @ 0346606c */
          lVar4 = *(long *)(unaff_x20 + 0x38);
                    /* try { // try from 03466058 to 03566063 has its CatchHandler @ 03465f70 */
          plVar5 = *(long **)(unaff_x21 + 0x38);
                    /* try { // try from 03466064 to 0356606b has its CatchHandler @ 0346606c */
          pvVar1 = *(void **)(unaff_x29 + -0x148);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0346604c with catch @ 0346606c
                       catch(type#2 @ 00000000) { ... } // from try @ 03466064 with catch @ 0346606c
                        */
          if (-1 < *(int *)(*(long *)(lVar4 + 0x60) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x88);
          }
                    /* try { // try from 03466070 to 035660cb has its CatchHandler @ 03466070
                       catch() { ... } // from try @ 03466070 with catch @ 03466070
                       catch() { ... } // from try @ 034660ec with catch @ 03466070
                       catch() { ... } // from try @ 03466128 with catch @ 03466070
                       catch() { ... } // from try @ 03466158 with catch @ 03466070 */
          pvVar6 = *(void **)(unaff_x29 + -0x158);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x150));
          lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar4 + 0x60),pvVar6);
          if (plVar5 == (long *)0x0) goto LAB_034661b0;
          if ((lVar4 != 0) &&
             (lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
          goto LAB_034661b8;
          if (0xc < *(uint *)(plVar5 + 3)) {
            plVar5[0x10] = lVar4;
            lVar4 = *(long *)(unaff_x20 + 0x38);
                    /* try { // try from 034660cc to 035660db has its CatchHandler @ 0346610c */
            plVar5 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x160);
                    /* try { // try from 034660e4 to 035660eb has its CatchHandler @ 03466108 */
            if (-1 < *(int *)(*(long *)(lVar4 + 0x68) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x90);
            }
                    /* try { // try from 034660ec to 03566123 has its CatchHandler @ 03466070 */
            pvVar6 = *(void **)(unaff_x29 + -0x170);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x168));
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 034660e4 with catch @ 03466108
                        */
            lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)(lVar4 + 0x68),pvVar6);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 034660cc with catch @ 0346610c
                        */
            if (plVar5 == (long *)0x0) goto LAB_034661b0;
                    /* try { // try from 03466124 to 03566127 has its CatchHandler @ 03466148 */
                    /* try { // try from 03466128 to 0356614b has its CatchHandler @ 03466070 */
            if ((lVar4 != 0) &&
               (lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
            goto LAB_034661b8;
            if (0xd < *(uint *)(plVar5 + 3)) {
              plVar5[0x11] = lVar4;
              FUN_05396aec();
                    /* catch() { ... } // from try @ 03466124 with catch @ 03466148 */
                    /* try { // try from 0346614c to 03566157 has its CatchHandler @ 0346616c */
              lVar4 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
                    /* try { // try from 03466158 to 03566163 has its CatchHandler @ 03466070 */
                    /* try { // try from 03466164 to 0356616b has its CatchHandler @ 0346616c */
              FUN_0539730c(lVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0346614c with catch @ 0346616c
                       catch(type#2 @ 00000000) { ... } // from try @ 03466164 with catch @ 0346616c
                        */
                    /* try { // try from 03466170 to 035661cb has its CatchHandler @ 03466170
                       catch() { ... } // from try @ 03466170 with catch @ 03466170
                       catch() { ... } // from try @ 034661ec with catch @ 03466170
                       catch() { ... } // from try @ 03466228 with catch @ 03466170
                       catch() { ... } // from try @ 03466258 with catch @ 03466170 */
              FUN_05396b54();
              if (*(long *)(*(long *)(unaff_x29 + -0x178) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_034661b8:
  uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,0);
}


