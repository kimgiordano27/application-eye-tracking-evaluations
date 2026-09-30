/*
FUNCTION_NAME: Firebase.Firestore.Converters.ArrayConverter$$DeserializeArray
ENTRY_POINT: 02f04208
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Firebase_Firestore_Converters_ArrayConverter__DeserializeArray
               (float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = param_3;
  fVar13 = param_4;
  fVar7 = param_2;
                    /* try { // try from 02f0420c to 030042e3 has its CatchHandler @ 02f02fc4 */
                    /* catch() { ... } // from try @ 02f0408c with catch @ 02f04210 */
                    /* catch() { ... } // from try @ 02f03aa0 with catch @ 02f04214 */
                    /* catch() { ... } // from try @ 02f03038 with catch @ 02f04218 */
  lVar1 = FUN_02f047e4();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
                    /* catch() { ... } // from try @ 02f0362c with catch @ 02f04230 */
    fVar4 = (float)FUN_06076fa4(*(long *)(lVar1 + 0x10),0);
                    /* catch() { ... } // from try @ 02f04204 with catch @ 02f04234 */
                    /* catch() { ... } // from try @ 02f03a00 with catch @ 02f04238 */
                    /* catch() { ... } // from try @ 02f03594 with catch @ 02f0423c */
                    /* catch() { ... } // from try @ 02f03f28 with catch @ 02f04240 */
                    /* catch() { ... } // from try @ 02f0394c with catch @ 02f04244 */
                    /* catch() { ... } // from try @ 02f03124 with catch @ 02f04248
                       catch() { ... } // from try @ 02f035e4 with catch @ 02f04248
                       catch() { ... } // from try @ 02f037d4 with catch @ 02f04248
                       catch() { ... } // from try @ 02f03d54 with catch @ 02f04248 */
                    /* catch() { ... } // from try @ 02f041fc with catch @ 02f0424c */
                    /* catch() { ... } // from try @ 02f03ba8 with catch @ 02f04250 */
                    /* catch() { ... } // from try @ 02f031fc with catch @ 02f04254
                       catch() { ... } // from try @ 02f03408 with catch @ 02f04254 */
                    /* catch() { ... } // from try @ 02f03284 with catch @ 02f04258 */
                    /* catch() { ... } // from try @ 02f0364c with catch @ 02f0425c
                       catch() { ... } // from try @ 02f03738 with catch @ 02f0425c */
                    /* catch() { ... } // from try @ 02f03678 with catch @ 02f04260 */
    fVar11 = param_3 * fVar5;
    fVar9 = ((param_4 * fVar13 - param_1 * fVar4) - param_2 * fVar7) - fVar11;
    *(float *)(unaff_x19 + 0xb0) =
         (param_2 * fVar5 + param_4 * fVar4 + param_1 * fVar13) - param_3 * fVar7;
    *(float *)(unaff_x19 + 0xb4) =
         (param_3 * fVar4 + param_4 * fVar7 + param_2 * fVar13) - param_1 * fVar5;
    *(float *)(unaff_x19 + 0xb8) =
         (param_1 * fVar7 + param_4 * fVar5 + param_3 * fVar13) - param_2 * fVar4;
    *(float *)(unaff_x19 + 0xbc) = fVar9;
    lVar1 = FUN_02f047a8();
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      fVar5 = (float)FUN_06078c44(*(long *)(lVar1 + 0x10),0);
      lVar1 = FUN_02f047a8();
      if (lVar1 != 0) {
        fVar10 = *(float *)(unaff_x19 + 0xa4);
                    /* try { // try from 02f042e4 to 030042ef has its CatchHandler @ 02f042f8 */
        fVar12 = *(float *)(unaff_x19 + 0xa8);
        uVar15 = *(undefined8 *)(lVar1 + 0x44);
        fVar16 = *(float *)(lVar1 + 0x4c);
                    /* try { // try from 02f042f0 to 030042fb has its CatchHandler @ 02f02fc4 */
                    /* catch() { ... } // from try @ 02f042e4 with catch @ 02f042f8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02f04594 with catch @ 02f042fc
                       catch(type#1 @ 00000000) { ... } // from try @ 02f045d8 with catch @ 02f042fc
                        */
        fVar4 = (float)FUN_06058dfc(*(undefined4 *)(unaff_x19 + 0xa0),fVar10,fVar12,
                                    *(undefined4 *)(unaff_x19 + 0xac),0);
        fVar13 = fVar12;
        fVar7 = fVar10;
        lVar1 = FUN_02f047e4();
        if (lVar1 != 0) {
          uVar14 = *(undefined8 *)(lVar1 + 0x44);
          fVar17 = *(float *)(lVar1 + 0x4c);
          lVar2 = FUN_02f047e4();
          if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
            fVar6 = (float)FUN_06078c44(*(long *)(lVar2 + 0x10),0);
                    /* try { // try from 02f04354 to 0300435f has its CatchHandler @ 02f045a4 */
            lVar2 = FUN_02f047e4();
            if (lVar2 != 0) {
              fVar4 = fVar5 + (float)uVar15 + fVar4;
              fVar13 = fVar13 + *(float *)(lVar2 + 0x4c);
                    /* try { // try from 02f04394 to 030043ab has its CatchHandler @ 02f045b8 */
              uVar14 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                                ((fVar9 + (float)((ulong)uVar15 >> 0x20) + fVar10) -
                                (fVar7 + (float)((ulong)*(undefined8 *)(lVar2 + 0x44) >> 0x20))),
                                (float)uVar14 +
                                (fVar4 - (fVar6 + (float)*(undefined8 *)(lVar2 + 0x44))));
              *(undefined8 *)(lVar1 + 0x44) = uVar14;
              *(float *)(lVar1 + 0x4c) = fVar17 + ((fVar11 + fVar16 + fVar12) - fVar13);
              uVar15 = *(undefined8 *)(unaff_x19 + 0x38);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              fVar5 = (float)uVar14;
              uVar3 = FUN_0606a004(uVar15,0,0);
                    /* try { // try from 02f043d8 to 0300445b has its CatchHandler @ 02f045b4 */
              if (((uVar3 & 1) == 0) || (*(char *)(unaff_x19 + 0x48) == '\0')) {
                return;
              }
              if ((((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) &&
                  (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar1 != 0)) &&
                 (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0)) {
                lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40);
                FUN_06076fa4(lVar1,0);
                fVar7 = (float)FUN_06058660(0);
                fVar12 = *(float *)(unaff_x19 + 0x90);
                fVar17 = *(float *)(unaff_x19 + 0x94);
                fVar11 = *(float *)(unaff_x19 + 0x8c);
                fVar9 = (float)FUN_06058660(*(undefined4 *)(unaff_x19 + 0x88),0);
                    /* try { // try from 02f04464 to 0300446f has its CatchHandler @ 02f0459c */
                    /* try { // try from 02f04498 to 030044a3 has its CatchHandler @ 02f04598 */
                fVar10 = (fVar13 * fVar9 + fVar4 * fVar11 + fVar5 * fVar17) - fVar7 * fVar12;
                fVar16 = (fVar7 * fVar11 + fVar4 * fVar12 + fVar13 * fVar17) - fVar5 * fVar9;
                uVar8 = FUN_06058dfc((fVar5 * fVar12 + fVar4 * fVar9 + fVar7 * fVar17) -
                                     fVar13 * fVar11,fVar10,fVar16,
                                     ((fVar4 * fVar17 - fVar7 * fVar9) - fVar5 * fVar11) -
                                     fVar13 * fVar12,*(undefined4 *)(unaff_x19 + 0xf4),
                                     *(undefined4 *)(unaff_x19 + 0xf8),
                                     *(undefined4 *)(unaff_x19 + 0xfc),0);
                if (lVar2 != 0) {
                  *(undefined4 *)(lVar2 + 0x90) = uVar8;
                  *(float *)(lVar2 + 0x94) = fVar10;
                  *(float *)(lVar2 + 0x98) = fVar16;
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
  FUN_02d60ae8();
}


