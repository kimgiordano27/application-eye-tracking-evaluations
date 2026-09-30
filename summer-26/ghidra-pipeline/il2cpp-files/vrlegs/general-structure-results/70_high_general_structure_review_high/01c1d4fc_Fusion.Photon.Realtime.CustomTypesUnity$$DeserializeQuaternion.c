/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 01c1d4fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__DeserializeQuaternion(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000048;
  
  lVar1 = FUN_037b4844();
  if (lVar1 != 0) {
                    /* try { // try from 01c1d518 to 01d1d537 has its CatchHandler @ 01c1d518
                       catch() { ... } // from try @ 01c1d518 with catch @ 01c1d518
                       catch() { ... } // from try @ 01c1d540 with catch @ 01c1d518 */
    FUN_036dbc2c(unaff_s13 + unaff_s8 * unaff_s10,unaff_s9 * unaff_s11,0,lVar1,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 01c1d538 to 01d1d53f has its CatchHandler @ 01c1d558 */
                    /* try { // try from 01c1d540 to 01d1d56b has its CatchHandler @ 01c1d518 */
      FUN_036c0af4(*(float *)(unaff_x20 + 0x50) * DAT_00d38a10,
                   *(float *)(unaff_x20 + 0x54) * DAT_00d38a10,
                   *(float *)(unaff_x20 + 0x58) * DAT_00d38a10,0);
      if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 01c1d538 with catch @ 01c1d558 */
        FUN_036dcf10(lVar1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar1 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
          FUN_036dd4ac(unaff_s12 * unaff_s14,in_stack_00000048._4_4_ * unaff_s15,0,lVar1,0);
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar1 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
            FUN_036dc064(lVar1,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar1 = FUN_037b4844(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
              FUN_036db9c4(lVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


