/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcActivated
ENTRY_POINT: 076dae08
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcActivated
               (long param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  int iVar1;
  float fVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float unaff_s14;
  float fVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  
  if (in_ZR || in_NG != in_OV) {
    param_4 = unaff_s8;
  }
  if (param_2 <= unaff_s8) {
    param_2 = param_4;
  }
  param_2 = param_2 * *(float *)(param_1 + 0xf6c);
  fVar6 = sinf(param_2);
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar11 = *(float *)(lVar4 + 0x20);
    fVar6 = fVar6 * fVar11;
    fVar7 = cosf(param_2);
    fVar7 = fVar7 * fVar11;
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
      fVar11 = *(float *)(lVar4 + 0x20);
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fVar12 = unaff_s14 - unaff_s14;
      fVar10 = 0.0 - fVar6;
      fVar13 = 0.0 - fVar7;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar2 = DAT_01a2ef28;
      fVar8 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10);
      if (fVar8 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar10 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar13 = pfVar5[2];
      }
      else {
        fVar10 = fVar10 / fVar8;
        fVar12 = fVar12 / fVar8;
        fVar13 = fVar13 / fVar8;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if ((iVar1 != 1) &&
           ((iVar1 == 2 ||
            (fVar11 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                           in_stack_00000010 * in_stack_00000010 +
                           (unaff_s11 - unaff_s14) * (unaff_s11 - unaff_s14)))))) {
          fVar10 = -fVar10;
          fVar12 = -fVar12;
          fVar13 = -fVar13;
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
          fVar6 = (float)FUN_08596980(fVar6,lVar4,0);
          *unaff_x19 = fVar6;
          unaff_x19[1] = unaff_s14;
          unaff_x19[2] = fVar7;
          fVar11 = *unaff_x21;
          fVar14 = unaff_x21[1];
          fVar8 = unaff_x21[2];
          if (*(char *)(unaff_x23 + 0xe19) == '\0') {
            FUN_0403162c(PTR_DAT_08f65580);
            *(undefined1 *)(unaff_x23 + 0xe19) = 1;
          }
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          lVar4 = *(long *)(unaff_x20 + 0x20);
          unaff_x19[6] = SQRT((fVar8 - fVar7) * (fVar8 - fVar7) +
                              (fVar11 - fVar6) * (fVar11 - fVar6) +
                              (fVar14 - unaff_s14) * (fVar14 - unaff_s14));
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (lVar4 = FUN_085849e0(lVar4,0), lVar4 != 0)) {
            fVar6 = (float)FUN_08599d5c(fVar10,lVar4,0);
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(PTR_DAT_08f65580);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar7 = SQRT(fVar13 * fVar13 + fVar6 * fVar6 + fVar12 * fVar12);
            if (fVar7 <= fVar2) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              uVar9 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
            }
            else {
              fVar13 = fVar13 / fVar7;
              uVar9 = CONCAT44(fVar12 / fVar7,fVar6 / fVar7);
            }
            *(undefined8 *)(unaff_x19 + 3) = uVar9;
            unaff_x19[5] = fVar13;
            if (in_stack_00000008._4_4_ <= 0.0) {
              bVar3 = true;
            }
            else {
              bVar3 = unaff_x19[6] <= in_stack_00000008._4_4_;
            }
            return bVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


