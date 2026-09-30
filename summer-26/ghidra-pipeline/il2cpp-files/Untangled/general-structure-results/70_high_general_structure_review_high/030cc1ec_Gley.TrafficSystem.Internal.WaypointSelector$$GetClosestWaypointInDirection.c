/*
FUNCTION_NAME: Gley.TrafficSystem.Internal.WaypointSelector$$GetClosestWaypointInDirection
ENTRY_POINT: 030cc1ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030cc3d0) */
/* WARNING: Removing unreachable block (ram,0x030cc4bc) */

bool Gley_TrafficSystem_Internal_WaypointSelector__GetClosestWaypointInDirection(void)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float in_s5;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float unaff_s12;
  float fVar12;
  float unaff_s13;
  float fVar13;
  
  fVar8 = 0.0;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar5 = SQRT((unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + 0.0) *
               (unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 + in_s5 * in_s5));
  if (DAT_013f6a8c <= fVar5) {
    fVar5 = (unaff_s8 * unaff_s12 + unaff_s10 * unaff_s13 + in_s5 * 0.0) / fVar5;
    fVar8 = fVar5;
    if (1.0 < fVar5) {
      fVar8 = 1.0;
    }
    if (fVar5 < -1.0) {
      fVar8 = -1.0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    dVar7 = acos((double)fVar8);
    fVar8 = (float)dVar7 * DAT_013f6f10;
  }
  if (*(float *)(unaff_x19 + 0x2c) + *(float *)(unaff_x19 + 0x34) < fVar8) {
    bVar3 = false;
  }
  else if (180.0 <= *(float *)(unaff_x19 + 0x30)) {
    bVar3 = true;
  }
  else {
    if (DAT_071bab7b == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071bab7b = '\x01';
    }
    fVar8 = *(float *)(unaff_x19 + 0x20);
    fVar5 = *(float *)(unaff_x19 + 0x24);
    lVar4 = *(long *)(*unaff_x20 + 0xb8);
    fVar11 = *(float *)(unaff_x19 + 0x28);
    fVar13 = *(float *)(lVar4 + 0x18);
    fVar12 = *(float *)(lVar4 + 0x1c);
    fVar10 = *(float *)(lVar4 + 0x20);
    if (DAT_071babf7 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03010);
      DAT_071babf7 = '\x01';
    }
    puVar2 = PTR_DAT_06d03010;
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    fVar1 = DAT_013f6a8c;
    fVar6 = SQRT((fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12) *
                 (fVar11 * fVar11 + fVar8 * fVar8 + fVar5 * fVar5));
                    /* try { // try from 030cc394 to 031cc3db has its CatchHandler @ 030cc394
                       catch() { ... } // from try @ 030cc394 with catch @ 030cc394
                       catch() { ... } // from try @ 030cc3e8 with catch @ 030cc394
                       catch() { ... } // from try @ 030cc4e4 with catch @ 030cc394 */
    fVar9 = 0.0;
    if (DAT_013f6a8c <= fVar6) {
      fVar6 = (fVar10 * fVar11 + fVar13 * fVar8 + fVar12 * fVar5) / fVar6;
      if (fVar6 < -1.0) {
        fVar6 = -1.0;
      }
                    /* try { // try from 030cc3dc to 031cc3e7 has its CatchHandler @ 030cc460 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
                    /* try { // try from 030cc3e8 to 031cc477 has its CatchHandler @ 030cc394 */
      dVar7 = acos((double)fVar6);
      fVar9 = (float)dVar7 * DAT_013f6f10;
    }
    if (DAT_071bab7b == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071bab7b = '\x01';
    }
    lVar4 = *(long *)(*unaff_x20 + 0xb8);
    fVar10 = *(float *)(lVar4 + 0x18);
    fVar5 = *(float *)(lVar4 + 0x1c);
    fVar8 = *(float *)(lVar4 + 0x20);
    if (DAT_071babf7 == '\0') {
      FUN_02f07e70(PTR_DAT_06d03010);
      DAT_071babf7 = '\x01';
    }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 030cc3dc with catch @ 030cc460
                        */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 030cc478 to 031cc47b has its CatchHandler @ 030cc488 */
      thunk_FUN_02f12b58();
    }
    fVar11 = SQRT((unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9) *
                  (fVar8 * fVar8 + fVar10 * fVar10 + fVar5 * fVar5));
                    /* catch() { ... } // from try @ 030cc478 with catch @ 030cc488 */
    fVar12 = 0.0;
    if (fVar1 <= fVar11) {
      fVar11 = (unaff_s8 * fVar8 + unaff_s10 * fVar10 + unaff_s9 * fVar5) / fVar11;
                    /* try { // try from 030cc4bc to 031cc4e3 has its CatchHandler @ 030cc4f8 */
      if (fVar11 < -1.0) {
        fVar11 = -1.0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      dVar7 = acos((double)fVar11);
      fVar12 = (float)dVar7 * DAT_013f6f10;
    }
                    /* try { // try from 030cc4e4 to 031cc4ef has its CatchHandler @ 030cc394 */
                    /* try { // try from 030cc4f0 to 031cc4f7 has its CatchHandler @ 030cc4f8 */
    bVar3 = ABS(fVar12 - fVar9) < *(float *)(unaff_x19 + 0x30) + *(float *)(unaff_x19 + 0x34);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030cc4bc with catch @ 030cc4f8
                       catch(type#2 @ 00000000) { ... } // from try @ 030cc4f0 with catch @ 030cc4f8
                        */
                    /* try { // try from 030cc4fc to 031cc5ef has its CatchHandler @ 030cc4fc
                       catch() { ... } // from try @ 030cc4fc with catch @ 030cc4fc
                       catch() { ... } // from try @ 030cc6e8 with catch @ 030cc4fc
                       catch() { ... } // from try @ 030cc78c with catch @ 030cc4fc
                       catch() { ... } // from try @ 030cc794 with catch @ 030cc4fc
                       catch() { ... } // from try @ 030cc84c with catch @ 030cc4fc */
  }
  return bVar3;
}


