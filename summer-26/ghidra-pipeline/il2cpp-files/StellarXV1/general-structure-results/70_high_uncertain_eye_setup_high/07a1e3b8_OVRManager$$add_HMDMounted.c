/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 07a1e3b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_HMDMounted(undefined4 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float *unaff_x19;
  long unaff_x20;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s11;
  undefined4 uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
  uVar1 = FUN_08a4dc10();
  fVar9 = 0.0;
                    /* try { // try from 07a1e3d4 to 07b1e407 has its CatchHandler @ 07a1e508 */
  if (0 < (int)uVar1) {
    uVar2 = FUN_074e5d94(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_07a1e4d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_07a1e4d4:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = lVar6 + 0x20;
LAB_07a1e488:
      fVar8 = (float)FUN_08a53440(lVar6,0);
                    /* try { // try from 07a1e490 to 07b1e497 has its CatchHandler @ 07a1e504 */
      uVar5 = 1;
      fVar9 = 0.0;
      if (0.0 <= unaff_s11 - fVar8) {
        fVar9 = unaff_s11 - fVar8;
      }
      goto LAB_07a1e4a4;
    }
    uVar2 = 0;
    lVar7 = 0x20;
    do {
                    /* try { // try from 07a1e414 to 07b1e41f has its CatchHandler @ 07a1e4ec */
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_07a1e4d0;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07a1e4d4;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_08a53350(lVar6 + lVar7,0);
      if (lVar6 == 0) goto LAB_07a1e4d0;
      uVar3 = FUN_089c7bf8(lVar6,0);
                    /* try { // try from 07a1e448 to 07b1e44f has its CatchHandler @ 07a1e4fc */
      uVar4 = FUN_074e4b3c(uVar5,uVar3,0);
                    /* try { // try from 07a1e454 to 07b1e45f has its CatchHandler @ 07a1e4f0 */
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_07a1e4d0;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar2) goto LAB_07a1e4d4;
        lVar6 = lVar6 + lVar7;
        goto LAB_07a1e488;
      }
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x2c;
    } while (uVar1 != uVar2);
  }
  uVar5 = 0;
LAB_07a1e4a4:
  *unaff_x19 = fVar9;
  return uVar5;
}


