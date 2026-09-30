/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_removed_t$$Dispose
ENTRY_POINT: 084d7e60
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_vx_evt_session_removed_t__Dispose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack000000000000000c;
  
  uVar2 = FUN_06fd2488();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x24);
                    /* catch() { ... } // from try @ 084d7df4 with catch @ 084d7e7c */
                    /* catch() { ... } // from try @ 084d7df0 with catch @ 084d7e80 */
                    /* catch() { ... } // from try @ 084d7dc0 with catch @ 084d7e84 */
  uVar3 = FUN_07175a38(&stack0x0000000c,0);
                    /* catch() { ... } // from try @ 084d7db8 with catch @ 084d7e88 */
                    /* catch() { ... } // from try @ 084d7d98 with catch @ 084d7e8c
                       catch() { ... } // from try @ 084d7dd4 with catch @ 084d7e8c */
                    /* try { // try from 084d7e94 to 085d7e97 has its CatchHandler @ 084d7f50 */
                    /* try { // try from 084d7e98 to 085d7eb7 has its CatchHandler @ 084d7988 */
                    /* catch() { ... } // from try @ 084d7a50 with catch @ 084d7e9c */
  uVar2 = FUN_06fd2488(uVar2,*unaff_x22,uVar3,*unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 084d7eb8 to 085d7ecf has its CatchHandler @ 084d7f40 */
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3b0,*(long *)(unaff_x19 + 0x28),
                         *unaff_x21,0);
  }
                    /* try { // try from 084d7ed0 to 085d7f2f has its CatchHandler @ 084d7988 */
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3a0,*(long *)(unaff_x19 + 0x30),
                         *unaff_x21,0);
  }
  puVar1 = PTR_DAT_0927c3c8;
  plVar4 = *(long **)(unaff_x19 + 0x38);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = FUN_06fd2168(uVar2,*(undefined8 *)puVar1,uVar3,0);
  }
                    /* try { // try from 084d7f30 to 085d7f3f has its CatchHandler @ 084d7f40 */
  return uVar2;
}


