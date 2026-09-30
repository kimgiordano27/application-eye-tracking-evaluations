/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 05bbf530
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRawPose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  lVar2 = FUN_031c09d4();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
                    /* try { // try from 05bbf564 to 05cbf567 has its CatchHandler @ 05bbf5e0 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 05bbf568 to 05cbf573 has its CatchHandler @ 05bbf5ec */
    lVar2 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
                    /* try { // try from 05bbf580 to 05cbf58b has its CatchHandler @ 05bbf5e8 */
    FUN_031c09d4();
  }
  puVar1 = PTR_DAT_070c1b68;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
                    /* try { // try from 05bbf58c to 05cbf5c3 has its CatchHandler @ 05bbf448 */
  uVar3 = (**(code **)(*unaff_x20 + 0x188))();
  lVar2 = *(long *)puVar1;
  *(undefined8 *)(unaff_x19 + 0x198) = in_stack_00000010;
                    /* try { // try from 05bbf5c4 to 05cbf5cb has its CatchHandler @ 05bbf5f0 */
  *(undefined4 *)(unaff_x19 + 0x1a0) = in_stack_00000018;
                    /* try { // try from 05bbf5cc to 05cbf5cf has its CatchHandler @ 05bbf5e4 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 05bbf5d0 to 05cbf5d3 has its CatchHandler @ 05bbf5d8 */
                    /* try { // try from 05bbf5d4 to 05cbf60b has its CatchHandler @ 05bbf448 */
    thunk_FUN_031e5338(lVar2);
  }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf5d0 with catch @ 05bbf5d8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf51c with catch @ 05bbf5dc
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf564 with catch @ 05bbf5e0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf5cc with catch @ 05bbf5e4
                        */
  uVar4 = FUN_069d8404(uVar3,0,0);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf580 with catch @ 05bbf5e8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf568 with catch @ 05bbf5ec
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbf5c4 with catch @ 05bbf5f0
                        */
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    FUN_05bbf660();
                    /* try { // try from 05bbf60c to 05cbf60f has its CatchHandler @ 05bbf628 */
                    /* try { // try from 05bbf610 to 05cbf62b has its CatchHandler @ 05bbf448 */
    FUN_05bc2568();
                    /* catch() { ... } // from try @ 05bbf60c with catch @ 05bbf628 */
                    /* try { // try from 05bbf62c to 05cbf633 has its CatchHandler @ 05bbf63c */
    uStack0000000000000004 = in_stack_00000018;
    if (*(int *)(*(long *)PTR_DAT_07113e80 + 0xe4) == 0) {
                    /* try { // try from 05bbf634 to 05cbf63f has its CatchHandler @ 05bbf448 */
      thunk_FUN_031e5338();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbf62c with catch @ 05bbf63c
                        */
                    /* try { // try from 05bbf640 to 05cbf717 has its CatchHandler @ 05bbf640
                       catch() { ... } // from try @ 05bbf640 with catch @ 05bbf640
                       catch() { ... } // from try @ 05bbf7a0 with catch @ 05bbf640
                       catch() { ... } // from try @ 05bbf7f0 with catch @ 05bbf640
                       catch() { ... } // from try @ 05bbf834 with catch @ 05bbf640
                       catch() { ... } // from try @ 05bbf858 with catch @ 05bbf640 */
    uVar4 = FUN_05bcb2d8();
    uVar5 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}


