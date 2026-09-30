/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 05d78504
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d78588) */
/* WARNING: Removing unreachable block (ram,0x05d78650) */

void OVRPlugin__get_chromatic(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  
  piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
      goto LAB_05d78544;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d78544:
  (*(code *)*puVar1)();
  lVar2 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != 0) {
                    /* try { // try from 05d78560 to 05e78563 has its CatchHandler @ 05d7881c */
                    /* try { // try from 05d78564 to 05e78577 has its CatchHandler @ 05d78858 */
    fVar7 = *(float *)(unaff_x19 + 0x7c);
    fVar8 = *(float *)(unaff_x19 + 0x3c);
    fVar6 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar8 = fVar8 * fVar6;
                    /* try { // try from 05d78584 to 05e785a3 has its CatchHandler @ 05d78854 */
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar7 + (in_stack_00000008 - fVar7) * fVar8;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_06b9e180(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x58),0);
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
                    /* try { // try from 05d785c0 to 05e785c3 has its CatchHandler @ 05d78824 */
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
                    /* try { // try from 05d785d4 to 05e785db has its CatchHandler @ 05d78820 */
            if (*(long *)(piVar4 + -2) == *unaff_x21) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
              goto LAB_05d7860c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_032937ac(plVar5,*unaff_x21,6);
LAB_05d7860c:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        lVar2 = *(long *)(unaff_x19 + 0x48);
        if (lVar2 != 0) {
          fVar7 = *(float *)(unaff_x19 + 0x80);
          fVar8 = *(float *)(unaff_x19 + 0x40);
          fVar6 = (float)(**(code **)(lVar2 + 0x18))
                                   (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          fVar8 = fVar8 * fVar6;
          if (fVar8 < 0.0) {
            fVar8 = 0.0;
          }
          *(float *)(unaff_x19 + 0x80) = fVar7 + (in_stack_00000000._4_4_ - fVar7) * fVar8;
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_06b9e180(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              FUN_06b9f0b4(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                           *(undefined4 *)(unaff_x19 + 0x54),0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                FUN_06b9e180(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                             *(undefined4 *)(unaff_x19 + 0x60),0);
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  FUN_06b9f0b4(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                               *(undefined4 *)(unaff_x19 + 0x50),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


