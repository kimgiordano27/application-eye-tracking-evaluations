/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 01d83444
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  long *unaff_x24;
  
  lVar1 = FUN_01d6df4c();
  if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
    uVar4 = 0;
    uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01d834d0 to 01e834d3 has its CatchHandler @ 01d836f0 */
        FUN_00fdc53c();
      }
                    /* try { // try from 01d83470 to 01e834b3 has its CatchHandler @ 01d8370c */
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar2 = FUN_01d7aaec();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01d6a894(lVar1,uVar2,uVar4 & 0xffffffff,0);
      uVar3 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  return lVar1;
}


