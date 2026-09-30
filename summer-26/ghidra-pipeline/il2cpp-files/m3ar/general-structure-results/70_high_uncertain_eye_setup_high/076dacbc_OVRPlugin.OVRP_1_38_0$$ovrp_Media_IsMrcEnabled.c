/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 076dacbc
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
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
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s10;
  float unaff_s11;
  float fVar13;
  float unaff_s14;
  float fVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000030;
  
  fVar6 = atan2f(param_1,param_2);
  fVar7 = fmodf(fVar6 * DAT_01a2eb64,360.0);
  fVar6 = fmodf(in_stack_00000030,360.0);
  if (fVar7 <= fVar6 + 180.0) {
    if (fVar6 + -180.0 <= fVar7) goto LAB_076dadf0;
    fVar10 = 360.0;
  }
  else {
    fVar10 = -360.0;
  }
  fVar7 = fVar7 + fVar10;
LAB_076dadf0:
  fVar10 = unaff_s10 * 0.5 + fVar6;
  fVar6 = fVar6 - unaff_s10 * 0.5;
  if (fVar7 <= fVar10) {
    fVar10 = fVar7;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar10;
  }
  fVar6 = fVar6 * DAT_01a2ef6c;
  fVar7 = sinf(fVar6);
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar10 = *(float *)(lVar4 + 0x20);
    fVar7 = fVar7 * fVar10;
    fVar6 = cosf(fVar6);
    fVar6 = fVar6 * fVar10;
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
      fVar10 = *(float *)(lVar4 + 0x20);
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      fVar12 = unaff_s14 - unaff_s14;
      fVar11 = 0.0 - fVar7;
      fVar13 = 0.0 - fVar6;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar2 = DAT_01a2ef28;
      fVar8 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
      if (fVar8 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar11 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar13 = pfVar5[2];
      }
      else {
        fVar11 = fVar11 / fVar8;
        fVar12 = fVar12 / fVar8;
        fVar13 = fVar13 / fVar8;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if ((iVar1 != 1) &&
           ((iVar1 == 2 ||
            (fVar10 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                           in_stack_00000010 * in_stack_00000010 +
                           (unaff_s11 - unaff_s14) * (unaff_s11 - unaff_s14)))))) {
          fVar11 = -fVar11;
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
          fVar7 = (float)FUN_08596980(fVar7,lVar4,0);
          *unaff_x19 = fVar7;
          unaff_x19[1] = unaff_s14;
          unaff_x19[2] = fVar6;
          fVar10 = *unaff_x21;
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
          unaff_x19[6] = SQRT((fVar8 - fVar6) * (fVar8 - fVar6) +
                              (fVar10 - fVar7) * (fVar10 - fVar7) +
                              (fVar14 - unaff_s14) * (fVar14 - unaff_s14));
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (lVar4 = FUN_085849e0(lVar4,0), lVar4 != 0)) {
            fVar6 = (float)FUN_08599d5c(fVar11,lVar4,0);
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


