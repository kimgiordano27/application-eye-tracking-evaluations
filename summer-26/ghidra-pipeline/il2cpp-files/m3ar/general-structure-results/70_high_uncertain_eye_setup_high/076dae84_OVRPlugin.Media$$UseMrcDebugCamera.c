/*
FUNCTION_NAME: OVRPlugin.Media$$UseMrcDebugCamera
ENTRY_POINT: 076dae84
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__UseMrcDebugCamera(long param_1)

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
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float fVar11;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  float fVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000020;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    fVar10 = *(float *)(*(long *)(param_1 + 0x20) + 0x20);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    fVar9 = unaff_s15 - unaff_s14;
    fVar8 = 0.0 - in_stack_00000020;
    fVar11 = 0.0 - unaff_s12;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar2 = DAT_01a2ef28;
    fVar6 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
    if (fVar6 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar8 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar11 = pfVar5[2];
    }
    else {
      fVar8 = fVar8 / fVar6;
      fVar9 = fVar9 / fVar6;
      fVar11 = fVar11 / fVar6;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if ((iVar1 != 1) &&
         ((iVar1 == 2 ||
          (fVar10 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                         in_stack_00000010 * in_stack_00000010 +
                         (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
        fVar8 = -fVar8;
        fVar9 = -fVar9;
        fVar11 = -fVar11;
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
        fVar10 = (float)FUN_08596980(in_stack_00000020,lVar4,0);
        *unaff_x19 = fVar10;
        unaff_x19[1] = unaff_s14;
        unaff_x19[2] = unaff_s12;
        fVar6 = *unaff_x21;
        fVar13 = unaff_x21[1];
        fVar12 = unaff_x21[2];
        if (*(char *)(unaff_x23 + 0xe19) == '\0') {
          FUN_0403162c(PTR_DAT_08f65580);
          *(undefined1 *)(unaff_x23 + 0xe19) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar4 = *(long *)(unaff_x20 + 0x20);
        unaff_x19[6] = SQRT((fVar12 - unaff_s12) * (fVar12 - unaff_s12) +
                            (fVar6 - fVar10) * (fVar6 - fVar10) +
                            (fVar13 - unaff_s14) * (fVar13 - unaff_s14));
        if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
           (lVar4 = FUN_085849e0(lVar4,0), lVar4 != 0)) {
          fVar10 = (float)FUN_08599d5c(fVar8,lVar4,0);
          if (DAT_09539e18 == '\0') {
            FUN_0403162c(PTR_DAT_08f65580);
            DAT_09539e18 = '\x01';
          }
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          fVar8 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
          if (fVar8 <= fVar2) {
            if (DAT_09539c10 == '\0') {
              FUN_0403162c(PTR_DAT_08f65568);
              DAT_09539c10 = '\x01';
            }
            uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
            fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
          }
          else {
            fVar11 = fVar11 / fVar8;
            uVar7 = CONCAT44(fVar9 / fVar8,fVar10 / fVar8);
          }
          *(undefined8 *)(unaff_x19 + 3) = uVar7;
          unaff_x19[5] = fVar11;
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
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


