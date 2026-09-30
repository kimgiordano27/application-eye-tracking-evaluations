/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 01a1de20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


ulong OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar8;
  long unaff_x22;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s3;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 01a1de20 to 01b1de23 has its CatchHandler @ 01a1df64 */
                    /* try { // try from 01a1de24 to 01b1de27 has its CatchHandler @ 01a1df60 */
  *(undefined1 *)(unaff_x21 + 0x9e7) = 1;
                    /* try { // try from 01a1de28 to 01b1de2b has its CatchHandler @ 01a1df5c */
  plVar8 = *(long **)(unaff_x22 + 0x48);
                    /* try { // try from 01a1de2c to 01b1de2f has its CatchHandler @ 01a1df58 */
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 01a1de30 to 01b1de33 has its CatchHandler @ 01a1df54 */
                    /* try { // try from 01a1de34 to 01b1de37 has its CatchHandler @ 01a1df50 */
    lVar5 = *plVar8;
                    /* try { // try from 01a1de38 to 01b1de3b has its CatchHandler @ 01a1df4c */
                    /* try { // try from 01a1de3c to 01b1de3f has its CatchHandler @ 01a1df48 */
                    /* try { // try from 01a1de40 to 01b1de43 has its CatchHandler @ 01a1df44 */
    lVar4 = *(long *)StringLiteral_2598;
                    /* try { // try from 01a1de44 to 01b1de47 has its CatchHandler @ 01a1df40 */
    uVar1 = *(ushort *)(lVar5 + 0x12a);
    uVar6 = (ulong)uVar1;
                    /* try { // try from 01a1de48 to 01b1de4b has its CatchHandler @ 01a1df3c */
                    /* try { // try from 01a1de4c to 01b1de4f has its CatchHandler @ 01a1df38 */
    if (*(int *)(unaff_x22 + 0x50) != 1) {
                    /* try { // try from 01a1de84 to 01b1de87 has its CatchHandler @ 01a1df00 */
      if (uVar1 != 0) {
                    /* try { // try from 01a1de88 to 01b1de8b has its CatchHandler @ 01a1defc */
                    /* try { // try from 01a1de8c to 01b1de8f has its CatchHandler @ 01a1def8 */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 01a1de90 to 01b1de93 has its CatchHandler @ 01a1def4 */
                    /* try { // try from 01a1de94 to 01b1de97 has its CatchHandler @ 01a1def0 */
                    /* try { // try from 01a1de98 to 01b1de9b has its CatchHandler @ 01a1deec */
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_01a1dfc4;
          }
                    /* try { // try from 01a1de9c to 01b1de9f has its CatchHandler @ 01a1dee8 */
          uVar6 = uVar6 - 1;
                    /* try { // try from 01a1dea0 to 01b1dea3 has its CatchHandler @ 01a1dee4 */
          piVar7 = piVar7 + 4;
                    /* try { // try from 01a1dea4 to 01b1dea7 has its CatchHandler @ 01a1dee0 */
        } while (uVar6 != 0);
      }
                    /* try { // try from 01a1dea8 to 01b1deab has its CatchHandler @ 01a1dedc */
                    /* try { // try from 01a1deac to 01b1deaf has its CatchHandler @ 01a1ded8 */
                    /* try { // try from 01a1deb0 to 01b1deb3 has its CatchHandler @ 01a1ded4 */
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,6);
                    /* try { // try from 01a1deb4 to 01b1deb7 has its CatchHandler @ 01a1ded0 */
LAB_01a1dfc4:
                    /* WARNING: Could not recover jumptable at 0x01a1dfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar8,unaff_w20);
      return uVar6;
    }
                    /* try { // try from 01a1de50 to 01b1de53 has its CatchHandler @ 01a1df34 */
    if (uVar1 != 0) {
                    /* try { // try from 01a1de54 to 01b1de57 has its CatchHandler @ 01a1df30 */
                    /* try { // try from 01a1de58 to 01b1de5b has its CatchHandler @ 01a1df2c */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 01a1de5c to 01b1de5f has its CatchHandler @ 01a1df28 */
                    /* try { // try from 01a1de60 to 01b1de63 has its CatchHandler @ 01a1df24 */
                    /* try { // try from 01a1de64 to 01b1de67 has its CatchHandler @ 01a1df20 */
        if (*(long *)(piVar7 + -2) == lVar4) {
                    /* try { // try from 01a1deb8 to 01b1debb has its CatchHandler @ 01a1decc */
                    /* try { // try from 01a1debc to 01b1debf has its CatchHandler @ 01a1dec8 */
                    /* try { // try from 01a1dec0 to 01b1e05b has its CatchHandler @ 01a1d188 */
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_01a1dec8;
        }
                    /* try { // try from 01a1de68 to 01b1de6b has its CatchHandler @ 01a1df1c */
        uVar6 = uVar6 - 1;
                    /* try { // try from 01a1de6c to 01b1de6f has its CatchHandler @ 01a1df18 */
        piVar7 = piVar7 + 4;
                    /* try { // try from 01a1de70 to 01b1de73 has its CatchHandler @ 01a1df14 */
      } while (uVar6 != 0);
    }
                    /* try { // try from 01a1de74 to 01b1de77 has its CatchHandler @ 01a1df10 */
                    /* try { // try from 01a1de78 to 01b1de7b has its CatchHandler @ 01a1df0c */
                    /* try { // try from 01a1de7c to 01b1de7f has its CatchHandler @ 01a1df08 */
    puVar3 = (undefined8 *)FUN_00d59724(plVar8,lVar4,8);
                    /* try { // try from 01a1de80 to 01b1de83 has its CatchHandler @ 01a1df04 */
LAB_01a1dec8:
                    /* catch() { ... } // from try @ 01a1debc with catch @ 01a1dec8 */
                    /* catch() { ... } // from try @ 01a1deb8 with catch @ 01a1decc */
                    /* catch() { ... } // from try @ 01a1deb4 with catch @ 01a1ded0 */
                    /* catch() { ... } // from try @ 01a1deb0 with catch @ 01a1ded4 */
                    /* catch() { ... } // from try @ 01a1deac with catch @ 01a1ded8 */
    uVar2 = (*(code *)*puVar3)(plVar8,unaff_w20);
                    /* catch() { ... } // from try @ 01a1dea8 with catch @ 01a1dedc */
                    /* catch() { ... } // from try @ 01a1dea4 with catch @ 01a1dee0 */
                    /* catch() { ... } // from try @ 01a1dea0 with catch @ 01a1dee4 */
                    /* catch() { ... } // from try @ 01a1de9c with catch @ 01a1dee8 */
    lVar4 = FUN_0268fd10();
                    /* catch() { ... } // from try @ 01a1de98 with catch @ 01a1deec */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 01a1de94 with catch @ 01a1def0 */
      fVar11 = (float)unaff_x19[1];
      fVar12 = (float)unaff_x19[2];
                    /* catch() { ... } // from try @ 01a1de90 with catch @ 01a1def4 */
                    /* catch() { ... } // from try @ 01a1de8c with catch @ 01a1def8 */
                    /* catch() { ... } // from try @ 01a1de88 with catch @ 01a1defc */
      uVar9 = FUN_026a0e4c(*unaff_x19,lVar4,0);
                    /* catch() { ... } // from try @ 01a1de84 with catch @ 01a1df00 */
                    /* catch() { ... } // from try @ 01a1de80 with catch @ 01a1df04 */
      *unaff_x19 = uVar9;
      unaff_x19[1] = fVar11;
      unaff_x19[2] = fVar12;
      lVar4 = FUN_0268fd10();
      if (lVar4 != 0) {
        fVar10 = (float)FUN_0269f810(lVar4,0);
        fVar13 = (float)unaff_x19[3];
        fVar16 = (float)unaff_x19[4];
        fVar15 = (float)unaff_x19[5];
        fVar14 = (float)unaff_x19[6];
        unaff_x19[3] = (fVar11 * fVar15 + in_s3 * fVar13 + fVar10 * fVar14) - fVar12 * fVar16;
        unaff_x19[4] = (fVar12 * fVar13 + in_s3 * fVar16 + fVar11 * fVar14) - fVar10 * fVar15;
        unaff_x19[5] = (fVar10 * fVar16 + in_s3 * fVar15 + fVar12 * fVar14) - fVar11 * fVar13;
        unaff_x19[6] = ((in_s3 * fVar14 - fVar10 * fVar13) - fVar11 * fVar16) - fVar12 * fVar15;
        return (ulong)(uVar2 & 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


