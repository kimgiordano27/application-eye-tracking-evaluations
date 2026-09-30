/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 07c877ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__GetNativeOpenXRSession(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *unaff_x19;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s3;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = (undefined8 *)FUN_044822ac();
  uVar1 = (*(code *)*puVar2)();
  if ((uVar1 & 1) == 0) {
LAB_07c878e4:
    return uVar1 & 1;
  }
  lVar3 = FUN_095258d0();
  if (lVar3 != 0) {
    fVar6 = (float)unaff_x19[1];
    fVar7 = (float)unaff_x19[2];
                    /* try { // try from 07c87838 to 07d8785f has its CatchHandler @ 07c879f8 */
    uVar4 = FUN_09537f40(*unaff_x19,lVar3,0);
    *unaff_x19 = uVar4;
    unaff_x19[1] = fVar6;
    unaff_x19[2] = fVar7;
    lVar3 = FUN_095258d0();
    if (lVar3 != 0) {
      fVar5 = (float)FUN_09537fe0(lVar3,0);
      fVar8 = (float)unaff_x19[3];
      fVar11 = (float)unaff_x19[4];
                    /* try { // try from 07c87868 to 07d8786b has its CatchHandler @ 07c879ec */
      fVar10 = (float)unaff_x19[5];
      fVar9 = (float)unaff_x19[6];
                    /* try { // try from 07c87880 to 07d87883 has its CatchHandler @ 07c87a2c */
                    /* try { // try from 07c87884 to 07d87887 has its CatchHandler @ 07c87a28 */
                    /* try { // try from 07c87888 to 07d8788b has its CatchHandler @ 07c87a24 */
                    /* try { // try from 07c8788c to 07d878a3 has its CatchHandler @ 07c87a30 */
                    /* try { // try from 07c878a4 to 07d878ab has its CatchHandler @ 07c87a1c */
                    /* try { // try from 07c878b4 to 07d878cf has its CatchHandler @ 07c87a14 */
      unaff_x19[3] = (fVar6 * fVar10 + in_s3 * fVar8 + fVar5 * fVar9) - fVar7 * fVar11;
      unaff_x19[4] = (fVar7 * fVar8 + in_s3 * fVar11 + fVar6 * fVar9) - fVar5 * fVar10;
      unaff_x19[5] = (fVar5 * fVar11 + in_s3 * fVar10 + fVar7 * fVar9) - fVar6 * fVar8;
      unaff_x19[6] = ((in_s3 * fVar9 - fVar5 * fVar8) - fVar6 * fVar11) - fVar7 * fVar10;
      goto LAB_07c878e4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


