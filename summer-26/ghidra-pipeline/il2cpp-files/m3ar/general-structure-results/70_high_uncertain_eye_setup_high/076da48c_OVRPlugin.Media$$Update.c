/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 076da48c
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__Update(float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (param_1 <= param_4 * param_3) {
    param_1 = param_4 * param_3;
  }
  if (param_1 <= param_2) {
    fVar9 = unaff_s12 * unaff_s9 + unaff_s13 * unaff_s10;
    fVar7 = unaff_s14 * unaff_s8 + fVar9;
    fVar11 = ((fStack0000000000000078 * unaff_s14 +
              unaff_s11 * unaff_s12 + fStack000000000000007c * unaff_s13) - fVar7) / unaff_s15;
    if ((0.0 < fVar11) && ((in_stack_00000008._4_4_ <= 0.0 || (fVar11 <= in_stack_00000008._4_4_))))
    {
      uStack0000000000000018 = unaff_x21[1];
      uStack0000000000000010 = *unaff_x21;
      uStack0000000000000020 = unaff_x21[2];
      uVar5 = FUN_0853dbe0(fVar11,&stack0x00000010,0);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      fVar8 = fVar7;
      fVar6 = (float)FUN_0859a4b4(uVar5,fVar7,fVar9,lVar4,0);
      fVar10 = *(float *)(unaff_x20 + 0x28);
      fVar8 = ABS(fVar8);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (ABS(fVar6) <= fVar10) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar8) && !NAN(fVar10)) {
          bVar1 = fVar8 < fVar10;
          bVar2 = fVar8 == fVar10;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        *unaff_x19 = uVar5;
        unaff_x19[1] = fVar7;
        unaff_x19[2] = fVar9;
        unaff_x19[3] = unaff_s12;
        unaff_x19[4] = unaff_s13;
        unaff_x19[5] = unaff_s14;
        unaff_x19[6] = fVar11;
        return 1;
      }
    }
  }
  return 0;
}


