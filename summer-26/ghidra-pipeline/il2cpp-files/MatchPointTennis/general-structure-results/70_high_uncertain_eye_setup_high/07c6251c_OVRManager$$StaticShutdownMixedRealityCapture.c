/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 07c6251c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__StaticShutdownMixedRealityCapture(void)

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
  float unaff_s11;
  
  uVar1 = FUN_095b59bc();
                    /* try { // try from 07c6252c to 07d6252f has its CatchHandler @ 07c62668 */
  fVar8 = 0.0;
  if (0 < (int)uVar1) {
                    /* try { // try from 07c62534 to 07d6253f has its CatchHandler @ 07c6265c */
    uVar2 = FUN_078b4450(*(undefined8 *)(unaff_x20 + 0x48),0);
                    /* try { // try from 07c62544 to 07d6254f has its CatchHandler @ 07c62658 */
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_07c62624:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* try { // try from 07c62554 to 07d6255f has its CatchHandler @ 07c6248c */
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_07c62628:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar6 = lVar6 + 0x20;
LAB_07c625e0:
      fVar8 = (float)FUN_095bb278(lVar6,0);
      fVar8 = unaff_s11 - fVar8;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      uVar5 = 1;
      goto LAB_07c625f8;
    }
                    /* try { // try from 07c62560 to 07d625a3 has its CatchHandler @ 07c622f0 */
    uVar2 = 0;
    lVar7 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_07c62624;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07c62628;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_095bb19c(lVar6 + lVar7,0);
      if (lVar6 == 0) goto LAB_07c62624;
      uVar3 = FUN_09525f74(lVar6,0);
                    /* try { // try from 07c625a4 to 07d625ab has its CatchHandler @ 07c62654 */
      uVar4 = FUN_078b33f8(uVar5,uVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_07c62624;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar2) goto LAB_07c62628;
        lVar6 = lVar6 + lVar7;
        goto LAB_07c625e0;
      }
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x2c;
    } while (uVar1 != uVar2);
  }
                    /* try { // try from 07c625c0 to 07d625df has its CatchHandler @ 07c62664 */
  uVar5 = 0;
LAB_07c625f8:
                    /* try { // try from 07c625f8 to 07d625ff has its CatchHandler @ 07c6264c */
  *unaff_x19 = fVar8;
                    /* try { // try from 07c62614 to 07d62633 has its CatchHandler @ 07c62650 */
  return uVar5;
}


