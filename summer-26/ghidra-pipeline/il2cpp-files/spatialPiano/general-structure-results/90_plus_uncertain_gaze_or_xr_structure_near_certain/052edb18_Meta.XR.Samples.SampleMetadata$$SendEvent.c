/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 052edb18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent
               (float param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined8 uVar4;
  float unaff_s8;
  float unaff_s9;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  
  param_2 = param_4 * param_2;
  uVar1 = FUN_052ef908(param_4 * param_1);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 052edb34 to 053edb3f has its CatchHandler @ 052edbf8 */
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ - *(float *)(unaff_x19 + 0x28);
    param_2 = 0.0;
    in_stack_00000020 = 0.0;
    if (0.0 <= in_stack_00000030._4_4_) {
      in_stack_00000020 = in_stack_00000030._4_4_;
    }
  }
  if (unaff_s9 < ABS(in_stack_00000020)) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 052edb58 to 053edb5b has its CatchHandler @ 052edbfc */
                    /* try { // try from 052edb5c to 053edbeb has its CatchHandler @ 052eda94 */
      FUN_061649d8(unaff_s8 + in_stack_00000020,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_060ed7ac(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar3 = (float)FUN_060ffbe4(lVar2,0);
        if (DAT_06bb42c4 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c4 = '\x01';
        }
                    /* try { // try from 052edbec to 053edbef has its CatchHandler @ 052edc00 */
        uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x18);
                    /* try { // try from 052edbf0 to 053edc1b has its CatchHandler @ 052eda94 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052edb34 with catch @ 052edbf8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052edb58 with catch @ 052edbfc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052edbec with catch @ 052edc00
                        */
        param_2 = param_2 + (float)((ulong)uVar4 >> 0x20) * in_stack_00000020 * 0.5;
        FUN_060ffcc0(CONCAT44(param_2,fVar3 + (float)uVar4 * in_stack_00000020 * 0.5),param_2,
                     param_3 + in_stack_00000020 *
                               *(float *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x20) * 0.5,
                     lVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 052edc38 to 053edc43 has its CatchHandler @ 052eda94 */
    FUN_02f089c8();
  }
                    /* try { // try from 052edc1c to 053edc1f has its CatchHandler @ 052edc2c */
                    /* catch() { ... } // from try @ 052edc1c with catch @ 052edc2c */
                    /* try { // try from 052edc30 to 053edc37 has its CatchHandler @ 052edc40 */
  return;
}


