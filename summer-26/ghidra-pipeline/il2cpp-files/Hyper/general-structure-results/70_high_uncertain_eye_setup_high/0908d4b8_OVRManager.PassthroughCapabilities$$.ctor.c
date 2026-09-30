/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 0908d4b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_PassthroughCapabilities___ctor(void)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float fVar10;
  undefined4 uStack0000000000000004;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
                    /* try { // try from 0908d4c0 to 0918d4cb has its CatchHandler @ 0908d5c4 */
  FUN_04947ee4(PTR_DAT_0ac401c0);
  *(undefined1 *)(unaff_x21 + 0x197) = 1;
  plVar6 = *(long **)(unaff_x20 + 0xd0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 0908d4e0 to 0918d4e3 has its CatchHandler @ 0908d720 */
                    /* try { // try from 0908d4e4 to 0918d4e7 has its CatchHandler @ 0908d718 */
    lVar3 = *plVar6;
                    /* try { // try from 0908d4e8 to 0918d4eb has its CatchHandler @ 0908c598 */
                    /* try { // try from 0908d4ec to 0918d4ef has its CatchHandler @ 0908d67c */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0908d4f0 to 0918d4f3 has its CatchHandler @ 0908d678 */
                    /* try { // try from 0908d4f4 to 0918d4f7 has its CatchHandler @ 0908d674 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac788e0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0908d534;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac788e0,0);
LAB_0908d534:
    (*(code *)*puVar2)(&stack0x00000018,plVar6,puVar2[1]);
    fVar1 = fStack0000000000000020;
    fVar8 = in_stack_00000018;
    fVar9 = unaff_x19[1];
    fVar10 = fStack0000000000000024 * fStack0000000000000024 +
             in_stack_00000028._4_4_ * in_stack_00000028._4_4_;
    fVar7 = (fVar9 - fVar9) * (fVar9 - fVar9) +
            (in_stack_00000018 - *unaff_x19) * (in_stack_00000018 - *unaff_x19) +
            (fStack0000000000000020 - unaff_x19[2]) * (fStack0000000000000020 - unaff_x19[2]);
    if (fVar10 < fVar7) {
      if ((fVar10 + unaff_s8 < fVar7) &&
         (fVar7 = (fVar7 - fVar10) - unaff_s8, fVar10 * 4.0 * unaff_s8 < fVar7 * fVar7)) {
        return false;
      }
      in_stack_00000030 = *(undefined8 *)unaff_x19;
      in_stack_00000038 = (undefined4)*(undefined8 *)(unaff_x19 + 2);
      uStack0000000000000044 = (undefined4)*(undefined8 *)(unaff_x19 + 5);
      in_stack_00000048 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 5) >> 0x20);
      uStack000000000000003c = (undefined4)*(undefined8 *)(unaff_x19 + 3);
      in_stack_00000040 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 3) >> 0x20);
      if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188538(&stack0x00000030,0);
      uStack0000000000000004 = 0;
      fVar8 = (float)FUN_0908d6a0(fVar8,fVar9,fVar1,*unaff_x19,unaff_x19[1],unaff_x19[2]);
      return fVar8 <= fVar10;
    }
  }
  return true;
}


