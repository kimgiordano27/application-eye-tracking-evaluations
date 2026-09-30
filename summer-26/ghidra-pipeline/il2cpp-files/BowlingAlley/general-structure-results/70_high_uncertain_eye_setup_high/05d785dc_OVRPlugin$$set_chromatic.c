/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 05d785dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d78650) */

void OVRPlugin__set_chromatic(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 in_stack_00000000;
  
  do {
    if ((bool)in_ZR) {
                    /* try { // try from 05d78604 to 05e78623 has its CatchHandler @ 05d78818 */
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
LAB_05d7860c:
      (*(code *)*puVar1)();
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 != 0) {
        fVar4 = *(float *)(unaff_x19 + 0x80);
        fVar5 = *(float *)(unaff_x19 + 0x40);
        fVar3 = (float)(**(code **)(lVar2 + 0x18))
                                 (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        fVar5 = fVar5 * fVar3;
                    /* try { // try from 05d78648 to 05e7864f has its CatchHandler @ 05d78850 */
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        *(float *)(unaff_x19 + 0x80) = fVar4 + (in_stack_00000000._4_4_ - fVar4) * fVar5;
                    /* try { // try from 05d7866c to 05e7866f has its CatchHandler @ 05d78844 */
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06b9e180(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 05d78688 to 05e78697 has its CatchHandler @ 05d78838 */
            FUN_06b9f0b4(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                         *(undefined4 *)(unaff_x19 + 0x54),0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 05d786a4 to 05e786ab has its CatchHandler @ 05d78834 */
              FUN_06b9e180(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                           *(undefined4 *)(unaff_x19 + 0x60),0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                FUN_06b9f0b4(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                             *(undefined4 *)(unaff_x19 + 0x50),0);
                    /* try { // try from 05d786c4 to 05e786e3 has its CatchHandler @ 05d78840 */
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* try { // try from 05d785f0 to 05e785f7 has its CatchHandler @ 05d78814 */
      puVar1 = (undefined8 *)FUN_032937ac();
      goto LAB_05d7860c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


