/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 07a09d10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel
               (long param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x24;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 unaff_s8;
  float unaff_s9;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
                    /* try { // try from 07a09d14 to 07b09d1f has its CatchHandler @ 07a09e44 */
  *(float *)(unaff_x19 + 0x18) = SQRT(param_4 * param_4 + param_3 + param_2 * param_2);
                    /* try { // try from 07a09d30 to 07b09d33 has its CatchHandler @ 07a09e38 */
  if (((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) &&
     (lVar2 = FUN_089c7534(*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
    fVar3 = (float)FUN_089dcd84(unaff_s8,lVar2,0);
    if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
                    /* try { // try from 07a09d64 to 07b09d67 has its CatchHandler @ 07a09e2c */
                    /* try { // try from 07a09d68 to 07b09d6b has its CatchHandler @ 07a09e44 */
                    /* try { // try from 07a09d6c to 07b09d6f has its CatchHandler @ 07a09e1c */
                    /* try { // try from 07a09d70 to 07b09d73 has its CatchHandler @ 07a09e14 */
      FUN_04077588(PTR_DAT_09285ae0);
                    /* catch() { ... } // from try @ 07a09c14 with catch @ 07a09d74
                       try { // try from 07a09d74 to 07b09e5f has its CatchHandler @ 07a09038 */
                    /* catch() { ... } // from try @ 07a09384 with catch @ 07a09d78 */
                    /* catch() { ... } // from try @ 07a0940c with catch @ 07a09d7c */
      *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
    }
                    /* catch() { ... } // from try @ 07a09494 with catch @ 07a09d80 */
                    /* catch() { ... } // from try @ 07a0952c with catch @ 07a09d84 */
                    /* catch() { ... } // from try @ 07a095d0 with catch @ 07a09d88 */
                    /* catch() { ... } // from try @ 07a0966c with catch @ 07a09d8c */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07a09718 with catch @ 07a09d90 */
                    /* catch() { ... } // from try @ 07a097b4 with catch @ 07a09d94 */
      thunk_FUN_040d65a8();
                    /* catch() { ... } // from try @ 07a09844 with catch @ 07a09d98 */
    }
                    /* catch() { ... } // from try @ 07a098d4 with catch @ 07a09d9c */
                    /* catch() { ... } // from try @ 07a09b54 with catch @ 07a09da0 */
                    /* catch() { ... } // from try @ 07a09be4 with catch @ 07a09da4 */
                    /* catch() { ... } // from try @ 07a092fc with catch @ 07a09da8 */
                    /* catch() { ... } // from try @ 07a093b8 with catch @ 07a09dac */
                    /* catch() { ... } // from try @ 07a09440 with catch @ 07a09db0 */
    fVar5 = SQRT(in_stack_00000010 * in_stack_00000010 + fVar3 * fVar3 + unaff_s9 * unaff_s9);
    if (fVar5 <= fStack0000000000000008) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      uVar4 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      in_stack_00000010 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
    }
    else {
      in_stack_00000010 = in_stack_00000010 / fVar5;
      uVar4 = CONCAT44(unaff_s9 / fVar5,fVar3 / fVar5);
    }
    *(undefined8 *)(unaff_x19 + 0xc) = uVar4;
    *(float *)(unaff_x19 + 0x14) = in_stack_00000010;
    if (fStack000000000000000c <= 0.0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(float *)(unaff_x19 + 0x18) <= fStack000000000000000c;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


