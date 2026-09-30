/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 033c1474
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetUseOverriddenExternalCameraStaticPose(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x21 + 0x99a) = 1;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c13e8 with catch @ 033c1484
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c1428 with catch @ 033c1488
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c13ec with catch @ 033c148c
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c13b8 with catch @ 033c1490
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c1408 with catch @ 033c1494
                        */
  if ((unaff_x20 == (long *)0x0) ||
     (uVar3 = (**(code **)(*unaff_x20 + 0x1a8))(), unaff_x19 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x1a8))();
                    /* try { // try from 033c14ac to 034c14af has its CatchHandler @ 033c14c0 */
  uVar5 = thunk_FUN_03278f50(uVar3,uVar4,0);
  if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 033c14ac with catch @ 033c14c0 */
                    /* try { // try from 033c14cc to 034c14d7 has its CatchHandler @ 033c14ec */
    uVar3 = (**(code **)(*unaff_x20 + 0x1b8))();
                    /* try { // try from 033c14d8 to 034c14e3 has its CatchHandler @ 033c1378 */
                    /* try { // try from 033c14e4 to 034c14eb has its CatchHandler @ 033c14ec */
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c14cc with catch @ 033c14ec
                       catch(type#2 @ 00000000) { ... } // from try @ 033c14e4 with catch @ 033c14ec
                        */
      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
    }
    iVar1 = FUN_033c3558(uVar3);
                    /* try { // try from 033c14fc to 034c1563 has its CatchHandler @ 033c14fc
                       catch() { ... } // from try @ 033c14fc with catch @ 033c14fc
                       catch() { ... } // from try @ 033c15c0 with catch @ 033c14fc
                       catch() { ... } // from try @ 033c160c with catch @ 033c14fc
                       catch() { ... } // from try @ 033c165c with catch @ 033c14fc */
    (**(code **)(*unaff_x19 + 0x1b8))();
    iVar2 = FUN_033c3558();
    if (iVar1 != iVar2) {
      if (iVar2 <= iVar1) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


