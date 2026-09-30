/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 05d78810
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  
                    /* catch() { ... } // from try @ 05d7874c with catch @ 05d78810 */
                    /* catch() { ... } // from try @ 05d785f0 with catch @ 05d78814 */
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x1a8));
                    /* catch() { ... } // from try @ 05d78604 with catch @ 05d78818 */
                    /* catch() { ... } // from try @ 05d78560 with catch @ 05d7881c */
                    /* catch() { ... } // from try @ 05d785d4 with catch @ 05d78820 */
  thunk_FUN_032e1da0(PTR_DAT_072b1450);
                    /* catch() { ... } // from try @ 05d785c0 with catch @ 05d78824 */
                    /* catch() { ... } // from try @ 05d78808 with catch @ 05d78828 */
                    /* catch() { ... } // from try @ 05d78804 with catch @ 05d7882c */
  thunk_FUN_032e1da0(PTR_DAT_072b1458);
                    /* catch() { ... } // from try @ 05d78800 with catch @ 05d78830 */
                    /* catch() { ... } // from try @ 05d786a4 with catch @ 05d78834 */
                    /* catch() { ... } // from try @ 05d78688 with catch @ 05d78838 */
  thunk_FUN_032e1da0(PTR_DAT_072b1448);
                    /* catch() { ... } // from try @ 05d78700 with catch @ 05d7883c */
                    /* catch() { ... } // from try @ 05d786c4 with catch @ 05d78840 */
                    /* catch() { ... } // from try @ 05d7866c with catch @ 05d78844 */
  thunk_FUN_032e1da0(PTR_DAT_072ae1c0);
                    /* catch() { ... } // from try @ 05d787fc with catch @ 05d78848 */
                    /* catch() { ... } // from try @ 05d787f8 with catch @ 05d7884c */
                    /* catch() { ... } // from try @ 05d78648 with catch @ 05d78850 */
  thunk_FUN_032e1da0(PTR_DAT_0727c540);
                    /* catch() { ... } // from try @ 05d78584 with catch @ 05d78854 */
                    /* catch() { ... } // from try @ 05d78564 with catch @ 05d78858 */
  thunk_FUN_032e1da0(PTR_DAT_072ae1c8);
  *(undefined1 *)(unaff_x20 + 0x7a0) = 1;
                    /* try { // try from 05d78870 to 05e78887 has its CatchHandler @ 05d78904 */
  *(undefined4 *)(unaff_x19 + 0x38) = 2;
  *(undefined8 *)(unaff_x19 + 0x3c) = 0x420c0000420c0000;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x41a00000;
  lVar5 = *unaff_x22;
                    /* try { // try from 05d78888 to 05e788f3 has its CatchHandler @ 05d78438 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *unaff_x22;
  }
  puVar3 = PTR_DAT_072ae1c8;
  puVar2 = PTR_DAT_072ae1c0;
  puVar1 = PTR_DAT_0727c540;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar7,uVar8,*(undefined8 *)PTR_DAT_072b1450,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_0333a630(plVar6,lVar7);
  }
  *(long *)(unaff_x19 + 0x48) = lVar7;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x48),lVar7);
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar4 = FUN_06b9df48(*(undefined8 *)puVar1,0);
  *(undefined4 *)(unaff_x19 + 0x58) = uVar4;
  uVar4 = FUN_06b9df48(*(undefined8 *)puVar3,0);
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar4;
  uVar4 = FUN_06b9df48(*(undefined8 *)puVar2,0);
  *(undefined4 *)(unaff_x19 + 0x60) = uVar4;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *unaff_x22;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072ae1a8);
    FUN_055c676c(lVar7,uVar8,*(undefined8 *)PTR_DAT_072b1458,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_0333a630(plVar6,lVar7);
  }
  *(long *)(unaff_x19 + 0x88) = lVar7;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x88),lVar7);
  thunk_FUN_06be6094();
  return;
}


