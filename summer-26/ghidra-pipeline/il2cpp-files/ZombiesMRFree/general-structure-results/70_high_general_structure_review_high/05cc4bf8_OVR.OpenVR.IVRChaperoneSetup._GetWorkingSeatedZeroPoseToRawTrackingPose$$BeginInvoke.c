/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 05cc4bf8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fVar5;
  float fVar6;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000020;
  
  FUN_02fe925c();
                    /* try { // try from 05cc4bfc to 05dc4c07 has its CatchHandler @ 05cc4d60 */
  *(undefined1 *)(unaff_x20 + 0x59a) = 1;
  fStack0000000000000004 = 0.0;
  uStack000000000000000c = 0;
                    /* try { // try from 05cc4c08 to 05dc4c27 has its CatchHandler @ 05cc4d64 */
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 05cc4c28 to 05dc4d0f has its CatchHandler @ 05cc46e4 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb59f8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_05cc4c6c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05cc4c6c:
  (*(code *)*puVar1)(0);
  fVar5 = fStack0000000000000004;
  if (DAT_0738e6c8 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e6c8 = '\x01';
  }
  fVar5 = uStack0000000000000020._4_4_ - fVar5;
  fVar6 = uStack0000000000000020._8_4_ - 0.0;
  if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  return SQRT(((float)uStack0000000000000020 - 0.0) * ((float)uStack0000000000000020 - 0.0) +
              fVar5 * fVar5 + fVar6 * fVar6) - unaff_s8;
}


