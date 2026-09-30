/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 076dad38
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__IsMrcActivated(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined1 in_w8;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float unaff_s13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float fVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  
  *(undefined1 *)(unaff_x23 + 0xe19) = in_w8;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* try { // try from 076dad48 to 077dad4f has its CatchHandler @ 076dadb0 */
    thunk_FUN_0408f364();
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar9 = unaff_s14 - unaff_s14;
                    /* try { // try from 076dad68 to 077dad7b has its CatchHandler @ 076dadac */
    fVar10 = *(float *)(lVar4 + 0x20);
    if (DAT_0953a2b0 == '\0') {
                    /* try { // try from 076dad7c to 077dada3 has its CatchHandler @ 076dac9c */
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_0953a2b0 = '\x01';
    }
    fVar13 = 0.0;
    fVar12 = 0.0 - unaff_s13;
                    /* try { // try from 076dada4 to 077dada7 has its CatchHandler @ 076dada8 */
    fVar11 = 0.0 - unaff_s9;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076dada4 with catch @ 076dada8
                       try { // try from 076dada8 to 077dadcb has its CatchHandler @ 076dac9c */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076dad68 with catch @ 076dadac
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076dad48 with catch @ 076dadb0
                        */
    fVar14 = fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9;
    fVar8 = unaff_s14;
    if (fVar14 == 0.0) {
      fVar15 = 0.0;
                    /* try { // try from 076dadcc to 077dadcf has its CatchHandler @ 076dade8 */
    }
    else {
      fVar10 = SQRT(unaff_s9 * unaff_s9 + unaff_s13 * unaff_s13 + fVar9 * fVar9) - fVar10;
      fVar15 = fVar10 * fVar10;
      bVar2 = false;
      bVar3 = true;
      if (0.0 <= fVar10) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar14) && !NAN(fVar15)) {
          bVar2 = fVar14 == fVar15;
          bVar3 = fVar15 <= fVar14;
        }
      }
      fVar15 = 0.0;
      if (bVar3 && !bVar2) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        fVar14 = SQRT(fVar14);
        fVar15 = in_stack_00000010 + (fVar12 / fVar14) * fVar10;
        fVar8 = unaff_s14 + (fVar9 / fVar14) * fVar10;
        fVar13 = in_stack_00000000._4_4_ + (fVar11 / fVar14) * fVar10;
      }
    }
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
      fVar9 = *(float *)(lVar4 + 0x20);
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fVar10 = unaff_s14 - fVar8;
      fVar11 = 0.0 - fVar15;
      fVar14 = 0.0 - fVar13;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar12 = DAT_01a2ef28;
      fVar6 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar11 * fVar11);
      if (fVar6 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar11 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar14 = pfVar5[2];
      }
      else {
        fVar11 = fVar11 / fVar6;
        fVar10 = fVar10 / fVar6;
        fVar14 = fVar14 / fVar6;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if ((iVar1 != 1) &&
           ((iVar1 == 2 ||
            (fVar9 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                          in_stack_00000010 * in_stack_00000010 +
                          (unaff_s11 - unaff_s14) * (unaff_s11 - unaff_s14)))))) {
          fVar11 = -fVar11;
          fVar10 = -fVar10;
          fVar14 = -fVar14;
        }
        unaff_x19[0] = 0.0;
        unaff_x19[1] = 0.0;
        unaff_x19[2] = 0.0;
        unaff_x19[3] = 0.0;
        unaff_x19[6] = 0.0;
        unaff_x19[4] = 0.0;
        unaff_x19[5] = 0.0;
        if (((*(long *)(unaff_x20 + 0x20) != 0) &&
            (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
           (lVar4 = FUN_085849e0(lVar4,0), lVar4 != 0)) {
          fVar9 = (float)FUN_08596980(fVar15,lVar4,0);
          *unaff_x19 = fVar9;
          unaff_x19[1] = fVar8;
          unaff_x19[2] = fVar13;
          fVar15 = *unaff_x21;
          fVar16 = unaff_x21[1];
          fVar6 = unaff_x21[2];
          if (*(char *)(unaff_x23 + 0xe19) == '\0') {
            FUN_0403162c(PTR_DAT_08f65580);
            *(undefined1 *)(unaff_x23 + 0xe19) = 1;
          }
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar4 = *(long *)(unaff_x20 + 0x20);
          unaff_x19[6] = SQRT((fVar6 - fVar13) * (fVar6 - fVar13) +
                              (fVar15 - fVar9) * (fVar15 - fVar9) +
                              (fVar16 - fVar8) * (fVar16 - fVar8));
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (lVar4 = FUN_085849e0(lVar4,0), lVar4 != 0)) {
            fVar9 = (float)FUN_08599d5c(fVar11,lVar4,0);
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(PTR_DAT_08f65580);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar8 = SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar10 * fVar10);
            if (fVar8 <= fVar12) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
            }
            else {
              fVar14 = fVar14 / fVar8;
              uVar7 = CONCAT44(fVar10 / fVar8,fVar9 / fVar8);
            }
            *(undefined8 *)(unaff_x19 + 3) = uVar7;
            unaff_x19[5] = fVar14;
            if (in_stack_00000008._4_4_ <= 0.0) {
              bVar2 = true;
            }
            else {
              bVar2 = unaff_x19[6] <= in_stack_00000008._4_4_;
            }
            return bVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


