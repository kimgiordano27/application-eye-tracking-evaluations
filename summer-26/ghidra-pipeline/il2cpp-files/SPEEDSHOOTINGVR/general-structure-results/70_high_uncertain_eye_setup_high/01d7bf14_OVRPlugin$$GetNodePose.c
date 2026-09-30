/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 01d7bf14
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x21 + 0x799) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar1 = FUN_01d603ec();
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01d7bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x228))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  thunk_FUN_010303a8(PTR_DAT_0234bbe8);
  uVar2 = thunk_FUN_010400dc();
                    /* try { // try from 01d7bf88 to 01e7c173 has its CatchHandler @ 01d7bf88
                       catch() { ... } // from try @ 01d7bf88 with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c298 with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c634 with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c7a4 with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c7c0 with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c7cc with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c8ac with catch @ 01d7bf88
                       catch() { ... } // from try @ 01d7c95c with catch @ 01d7bf88 */
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02358360);
  FUN_01c5e120(uVar2,uVar3,0);
  uVar3 = thunk_FUN_010303a8(PTR_DAT_02358f10);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2,uVar3);
}


