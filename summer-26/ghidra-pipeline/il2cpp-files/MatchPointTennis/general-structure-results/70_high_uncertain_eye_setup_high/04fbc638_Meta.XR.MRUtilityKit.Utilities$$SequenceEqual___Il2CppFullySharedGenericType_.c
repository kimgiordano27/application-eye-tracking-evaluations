/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$SequenceEqual<__Il2CppFullySharedGenericType>
ENTRY_POINT: 04fbc638
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__SequenceEqual<__Il2CppFullySharedGenericType>(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  size_t unaff_x22;
  void *unaff_x23;
  int unaff_w24;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  do {
                    /* try { // try from 04fbc63c to 050bc673 has its CatchHandler @ 04fbc0c4 */
    if ((bool)in_ZR) {
      lVar5 = *(long *)PTR_DAT_09f277a0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *(long *)PTR_DAT_09f277a0;
      }
      uVar7 = 1;
LAB_04fbc68c:
      lVar8 = *(long *)(unaff_x29 + -0xb0);
      *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x10) = uVar7;
                    /* try { // try from 04fbc69c to 050bc6ab has its CatchHandler @ 04fbc6c8 */
      if (*(long *)(lVar8 + 0x28) != *(long *)(unaff_x29 + -0x50)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* try { // try from 04fbc6ac to 050bc6bf has its CatchHandler @ 04fbc0c4 */
                    /* try { // try from 04fbc6c0 to 050bc6c3 has its CatchHandler @ 04fbc710 */
                    /* try { // try from 04fbc6c4 to 050bc6c7 has its CatchHandler @ 04fbc6c8 */
                    /* catch() { ... } // from try @ 04fbc5f8 with catch @ 04fbc6c8
                       catch() { ... } // from try @ 04fbc69c with catch @ 04fbc6c8
                       catch() { ... } // from try @ 04fbc6c4 with catch @ 04fbc6c8
                       try { // try from 04fbc6c8 to 050bc6df has its CatchHandler @ 04fbc0c4 */
      return;
    }
    puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
    uVar4 = *puVar6;
    *(int *)(unaff_x29 + -0x54) = unaff_w21 + 1;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
    *(void **)(unaff_x29 + -0x60) = unaff_x26;
    (*(code *)puVar6[2])(uVar4,puVar6,unaff_x29 + -0x78,unaff_x29 + -0x68);
    memcpy(unaff_x23,unaff_x26,unaff_x22);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar8 + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
      lVar8 = *(long *)(unaff_x19 + 0x38);
    }
    iVar1 = 0;
    if (unaff_w24 != 0) {
      iVar1 = (unaff_w21 + 2) / unaff_w24;
    }
    iVar1 = (unaff_w21 + 2) - iVar1 * unaff_w24;
    FUN_0444872c(lVar5,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(unaff_x29 + -0x90));
    fVar12 = *(float *)(unaff_x29 + -0x68);
    fVar11 = *(float *)(unaff_x29 + -100);
    fVar10 = *(float *)(unaff_x29 + -0x60);
    puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
    uVar4 = *puVar6;
    *(int *)(unaff_x29 + -0x54) = iVar1;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
    *(void **)(unaff_x29 + -0x60) = unaff_x27;
    (*(code *)puVar6[2])(uVar4,puVar6,unaff_x29 + -0x78,unaff_x29 + -0x68);
    memcpy(unaff_x23,unaff_x27,unaff_x22);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar8 + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
      lVar8 = *(long *)(unaff_x19 + 0x38);
    }
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    if (unaff_w24 != 0) {
      iVar2 = iVar1 / unaff_w24;
    }
    FUN_0444872c(lVar5,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(unaff_x29 + -0x98));
    fVar15 = *(float *)(unaff_x29 + -0x68);
    fVar14 = *(float *)(unaff_x29 + -100);
    fVar13 = *(float *)(unaff_x29 + -0x60);
    puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8);
    uVar4 = *puVar6;
    *(int *)(unaff_x29 + -0x54) = iVar1 - iVar2 * unaff_w24;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
    *(void **)(unaff_x29 + -0x60) = unaff_x28;
    (*(code *)puVar6[2])(uVar4,puVar6,unaff_x29 + -0x78,unaff_x29 + -0x68);
    memcpy(unaff_x23,unaff_x28,unaff_x22);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar8 + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
      lVar8 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar5,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(unaff_x29 + -0xa0));
    fVar9 = *(float *)(unaff_x29 + -0x68);
    fVar11 = fVar14 - fVar11;
    fVar10 = fVar13 - fVar10;
    fVar14 = *(float *)(unaff_x29 + -100) - fVar14;
    fVar13 = *(float *)(unaff_x29 + -0x60) - fVar13;
    fVar12 = (float)FUN_08b2f430(fVar15 - fVar12,0);
    fVar15 = (float)FUN_08b2f430(fVar9 - fVar15,0);
    if (DAT_0a51c8f5 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c8f5 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar9 = fVar11 * fVar13 - fVar10 * fVar14;
    fVar13 = fVar10 * fVar15 - fVar12 * fVar13;
    fVar12 = fVar12 * fVar14 - fVar11 * fVar15;
    fVar14 = fVar12 * fVar12 + fVar9 * fVar9 + fVar13 * fVar13;
    fVar15 = 1.0 / SQRT(fVar14);
    fVar10 = fVar9 * fVar15;
    fVar11 = fVar13 * fVar15;
    if (fVar14 <= 1.1754944e-38) {
      fVar10 = unaff_s9;
      fVar11 = unaff_s9;
    }
    fVar12 = fVar12 * fVar15;
    if (fVar14 <= 1.1754944e-38) {
      fVar12 = unaff_s9;
    }
    fVar11 = *(float *)(unaff_x29 + -0x80) * fVar12 +
             unaff_s10 * fVar10 + *(float *)(unaff_x29 + -0x84) * fVar11;
    if (0.0 <= fVar11) {
      if (0.0 < fVar11) {
        *(undefined4 *)(unaff_x29 + -0x7c) = 1;
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0xa4) = 1;
    }
    puVar3 = PTR_DAT_09f277a0;
    if (((*(uint *)(unaff_x29 + -0x7c) & 1) != 0) && ((*(uint *)(unaff_x29 + -0xa4) & 1) != 0)) {
      lVar5 = *(long *)PTR_DAT_09f277a0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *(long *)puVar3;
      }
      uVar7 = 0;
      goto LAB_04fbc68c;
    }
    unaff_w20 = unaff_w20 + -1;
    in_ZR = unaff_w20 == 0;
    unaff_w21 = unaff_w21 + 1;
  } while( true );
}


