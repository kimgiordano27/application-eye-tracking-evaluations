/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetInitialized
ENTRY_POINT: 076da410
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_GetInitialized(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar12 = *(float *)(param_1 + 8);
  fVar11 = unaff_x21[1];
  fVar9 = unaff_x21[2];
  fVar10 = *unaff_x21;
  fVar13 = fVar12 * unaff_x21[5] + unaff_s12 * unaff_x21[3] + unaff_s13 * unaff_x21[4];
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar5 = ABS(fVar13);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar7 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
  fVar8 = fVar5 * DAT_01a2ee44;
  if (fVar5 * DAT_01a2ee44 <= fVar7) {
    fVar8 = fVar7;
  }
  if (fVar8 <= ABS(0.0 - fVar13)) {
    fVar10 = unaff_s12 * fVar10 + unaff_s13 * fVar11;
    fVar9 = fVar12 * fVar9 + fVar10;
    fVar13 = ((fStack0000000000000078 * fVar12 +
              unaff_s11 * unaff_s12 + fStack000000000000007c * unaff_s13) - fVar9) / fVar13;
    if ((0.0 < fVar13) && ((in_stack_00000008._4_4_ <= 0.0 || (fVar13 <= in_stack_00000008._4_4_))))
    {
      in_stack_00000018 = *(undefined8 *)(unaff_x21 + 2);
      in_stack_00000010 = *(undefined8 *)unaff_x21;
      in_stack_00000020 = *(undefined8 *)(unaff_x21 + 4);
      uVar6 = FUN_0853dbe0(fVar13,&stack0x00000010,0);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      fVar11 = fVar9;
      fVar5 = (float)FUN_0859a4b4(uVar6,fVar9,fVar10,lVar4,0);
      fVar8 = *(float *)(unaff_x20 + 0x28);
      fVar11 = ABS(fVar11);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(fVar5) <= fVar8) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11) && !NAN(fVar8)) {
          bVar1 = fVar11 < fVar8;
          bVar2 = fVar11 == fVar8;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        *unaff_x19 = uVar6;
        unaff_x19[1] = fVar9;
        unaff_x19[2] = fVar10;
        unaff_x19[3] = unaff_s12;
        unaff_x19[4] = unaff_s13;
        unaff_x19[5] = fVar12;
        unaff_x19[6] = fVar13;
        return 1;
      }
    }
  }
  return 0;
}


