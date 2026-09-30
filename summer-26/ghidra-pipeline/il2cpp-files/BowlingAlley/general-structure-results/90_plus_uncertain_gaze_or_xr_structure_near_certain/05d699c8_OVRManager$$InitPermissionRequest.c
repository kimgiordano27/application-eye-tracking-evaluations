/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05d699c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  iVar2 = (*param_1)();
  lVar4 = *unaff_x21;
                    /* try { // try from 05d699d4 to 05e699eb has its CatchHandler @ 05d69ad4 */
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar4);
    lVar4 = *unaff_x21;
  }
  puVar1 = PTR_DAT_072af0b0;
  lVar4 = *(long *)(lVar4 + 0xb8);
  if (iVar2 == 0) {
                    /* try { // try from 05d69a44 to 05e69a4b has its CatchHandler @ 05d69acc */
    lVar3 = *(long *)PTR_DAT_072af0b0;
    uVar13 = *(undefined8 *)(lVar4 + 0x54);
    fVar14 = *(float *)(lVar4 + 0x5c);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
                    /* try { // try from 05d69a5c to 05e69a9b has its CatchHandler @ 05d69ae4 */
      lVar3 = *(long *)puVar1;
      lVar4 = *(long *)(*unaff_x21 + 0xb8);
    }
    pfVar5 = *(float **)(lVar3 + 0xb8);
    uVar9 = *(undefined8 *)(lVar4 + 0x6c);
    fVar8 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar6 = (float)*(undefined8 *)(lVar4 + 0x84) * fVar10;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0x84) >> 0x20) * fVar10;
    fVar10 = *(float *)(lVar4 + 0x8c) * fVar10;
    fVar11 = *(float *)(lVar4 + 0x74);
  }
  else {
    lVar3 = *(long *)PTR_DAT_072af0b0;
    uVar13 = *(undefined8 *)(lVar4 + 0xc);
    fVar14 = *(float *)(lVar4 + 0x14);
    if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 05d69a0c to 05e69a13 has its CatchHandler @ 05d69ac4 */
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
      lVar4 = *(long *)(*unaff_x21 + 0xb8);
    }
    pfVar5 = *(float **)(lVar3 + 0xb8);
                    /* try { // try from 05d69a28 to 05e69a2f has its CatchHandler @ 05d69ad0 */
    uVar9 = *(undefined8 *)(lVar4 + 0x24);
    fVar8 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar6 = (float)*(undefined8 *)(lVar4 + 0x3c) * fVar10;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0x3c) >> 0x20) * fVar10;
    fVar10 = *(float *)(lVar4 + 0x44) * fVar10;
    fVar11 = *(float *)(lVar4 + 0x2c);
  }
  if (unaff_x19 != 0) {
                    /* try { // try from 05d69ab0 to 05e69ab3 has its CatchHandler @ 05d69ae8 */
    *(ulong *)(unaff_x19 + 0x10) =
         CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar8 + fVar7 +
                  (float)((ulong)uVar9 >> 0x20) * fVar12,
                  (float)uVar13 * fVar8 + fVar6 + (float)uVar9 * fVar12);
                    /* try { // try from 05d69ab4 to 05e69ab7 has its CatchHandler @ 05d69ae0 */
    *(float *)(unaff_x19 + 0x18) = fVar14 * fVar8 + fVar10 + fVar11 * fVar12;
                    /* try { // try from 05d69ab8 to 05e69abb has its CatchHandler @ 05d69ad8 */
                    /* try { // try from 05d69abc to 05e69abf has its CatchHandler @ 05d69ad4 */
                    /* try { // try from 05d69ac0 to 05e69ac3 has its CatchHandler @ 05d69ac8 */
                    /* catch() { ... } // from try @ 05d69a0c with catch @ 05d69ac4
                       try { // try from 05d69ac4 to 05e69b0f has its CatchHandler @ 05d69890 */
                    /* catch() { ... } // from try @ 05d69ac0 with catch @ 05d69ac8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05d69a44 with catch @ 05d69acc */
  FUN_032d5ee8();
}


