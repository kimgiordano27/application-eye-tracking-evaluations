/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 07465bcc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(undefined8 param_1,undefined1 param_2 [16])

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  
  puVar1 = PTR_DAT_092208d8;
  uStack0000000000000014 = param_2._8_8_;
  uStack000000000000000c = param_2._0_4_;
  uStack0000000000000010 = param_2._4_4_;
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 07465be4 to 07565bf3 has its CatchHandler @ 07465e2c */
  uStack0000000000000000 = param_1;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 07465bf8 to 07565c03 has its CatchHandler @ 07465e28 */
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092208d8) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_07465c2c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370();
                    /* try { // try from 07465c18 to 07565c1f has its CatchHandler @ 07465e20 */
LAB_07465c2c:
  uStack0000000000000074 = uStack0000000000000014;
  uStack000000000000006c = uStack000000000000000c;
  (*(code *)*puVar4)();
                    /* try { // try from 07465c50 to 07565c57 has its CatchHandler @ 07465e54 */
  plVar8 = *(long **)(unaff_x19 + 0x198);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 07465c70 to 07565c7b has its CatchHandler @ 07465c80 */
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* try { // try from 07465c9c to 07565caf has its CatchHandler @ 07465e00 */
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_07465ca8;
      }
                    /* try { // try from 07465c7c to 07565c9b has its CatchHandler @ 07465adc */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 07465c70 with catch @ 07465c80 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)puVar1,5);
LAB_07465ca8:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
                    /* try { // try from 07465cb4 to 07565cb7 has its CatchHandler @ 07465e04 */
  uVar2 = FUN_0745ffa0();
                    /* try { // try from 07465cc8 to 07565ccf has its CatchHandler @ 07465e30 */
  uVar3 = FUN_07460704();
  uVar2 = (*(uint *)(unaff_x19 + 400) | uVar2) & (uVar3 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 400) = uVar2;
  if ((uVar3 != 0) && (uVar2 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x179) = 1;
  }
  return;
}


