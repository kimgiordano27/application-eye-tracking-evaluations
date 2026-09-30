/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 05330dec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__RequestBoundaryVisibility(void)

{
  int in_w8;
  long unaff_x19;
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float unaff_s12;
  float unaff_s13;
  float fVar4;
  undefined8 unaff_d14;
  float fVar5;
  float in_stack_00000000;
  float in_stack_00000010;
  
  if (in_w8 == 0) {
                    /* try { // try from 05330df4 to 05430e17 has its CatchHandler @ 05330e44 */
    FUN_02f08768(PTR_DAT_067c8fa8);
    *(undefined1 *)(unaff_x19 + 0xa49) = 1;
  }
  fVar4 = (float)unaff_d14;
  fVar5 = (float)((ulong)unaff_d14 >> 0x20);
                    /* try { // try from 05330e18 to 05430e3f has its CatchHandler @ 05330e40 */
  fVar1 = unaff_s13 * unaff_s13 + fVar4 * fVar4 + fVar5 * fVar5;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar1) {
                    /* try { // try from 05330e74 to 05430e8b has its CatchHandler @ 05330ee8 */
    fVar3 = (unaff_s8 - unaff_s12) * unaff_s13 +
            (in_stack_00000010 - (float)unaff_d11) * fVar4 +
            (in_stack_00000000 - (float)((ulong)unaff_d11 >> 0x20)) * fVar5;
                    /* try { // try from 05330e8c to 05430ed7 has its CatchHandler @ 05330d34 */
    uVar2 = CONCAT44((fVar5 * fVar3) / fVar1,(fVar4 * fVar3) / fVar1);
    fVar1 = (unaff_s13 * fVar3) / fVar1;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330e18 with catch @ 05330e40
                       try { // try from 05330e40 to 05430e73 has its CatchHandler @ 05330d34 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330df4 with catch @ 05330e44
                        */
      FUN_02f08768(PTR_DAT_067c8f78);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330de0 with catch @ 05330e48
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330dcc with catch @ 05330e4c
                        */
      DAT_06bb42c1 = '\x01';
    }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330da8 with catch @ 05330e50
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330d88 with catch @ 05330e54
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330d64 with catch @ 05330e58
                       catch(type#1 @ 06402238) { ... } // from try @ 05330db4 with catch @ 05330e58
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05330d58 with catch @ 05330e5c
                        */
    uVar2 = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar1 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  }
  return 0.0 < unaff_s9 * fVar1 +
               (float)unaff_d10 * (float)uVar2 +
               (float)((ulong)unaff_d10 >> 0x20) * (float)((ulong)uVar2 >> 0x20);
}


