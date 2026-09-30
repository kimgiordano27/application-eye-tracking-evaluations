/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoTelemetry$$NewEvent
ENTRY_POINT: 060a1910
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry__NewEvent
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar8 = *(float *)(param_5 + 0x14);
  uVar9 = 0;
  auVar23 = ZEXT416(*(uint *)(param_5 + 0x18));
  fVar3 = (float)FUN_071aee04();
  uVar2 = *(ulong *)(unaff_x20 + 0xc);
  fVar6 = (float)uVar2;
  fVar7 = (float)(uVar2 >> 0x20);
  fVar16 = *(float *)(unaff_x20 + 0x14);
  fVar19 = *(float *)(unaff_x20 + 0x18);
  auVar10._4_4_ = fVar3;
  auVar10._0_4_ = fVar8;
  auVar21 = NEON_ext(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),4,1);
  auVar10._8_4_ = param_2;
  auVar10._12_4_ = uVar9;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar2;
  auVar22 = NEON_ext(auVar21,auVar18,0xc,1);
  auVar21 = NEON_ext(auVar10,auVar10,0xc,1);
  auVar21 = NEON_ext(auVar21,auVar10,8,1);
  fVar5 = auVar23._0_4_;
  auVar23 = NEON_ext(auVar21,auVar21,0xc,1);
  auVar23 = NEON_ext(auVar23,auVar21,8,1);
  pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0xc);
  fVar14 = (float)*(undefined8 *)(unaff_x19 + 0x14);
  fVar15 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x14) >> 0x20);
  fVar12 = (float)*(undefined8 *)*pauVar1;
  fVar13 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar17._4_4_ = fVar15;
  auVar17._0_4_ = fVar15;
  auVar17._8_4_ = fVar15;
  auVar17._12_4_ = fVar15;
  auVar20._12_4_ = fVar15;
  auVar20._0_12_ = *pauVar1;
  auVar18 = NEON_ext(auVar17,auVar20,4,1);
  fVar4 = ((fVar5 * fVar19 - fVar3 * fVar6) - param_2 * fVar7) - fVar8 * fVar16;
  auVar11._0_4_ =
       (auVar21._0_4_ * fVar7 + auVar22._0_4_ * fVar5 + fVar8 * fVar19) - auVar23._0_4_ * fVar6;
  auVar11._4_4_ =
       (auVar21._4_4_ * fVar16 + auVar22._4_4_ * fVar5 + fVar3 * fVar19) - auVar23._4_4_ * fVar7;
  auVar11._8_4_ =
       (auVar21._8_4_ * fVar6 + auVar22._8_4_ * fVar5 + param_2 * fVar19) - auVar23._8_4_ * fVar16;
  auVar11._12_4_ =
       (auVar21._12_4_ * fVar7 + auVar22._0_4_ * fVar5 + fVar8 * fVar19) - auVar23._12_4_ * fVar6;
  auVar23 = NEON_ext(auVar11,auVar11,0xc,1);
  auVar20 = NEON_ext(auVar23,auVar11,8,1);
  fVar3 = auVar20._4_4_;
  fVar8 = fVar12 * auVar20._8_4_;
  fVar5 = fVar13 * auVar20._0_4_;
  fVar6 = fVar14 * fVar3;
  fVar7 = fVar13 * fVar3;
  auVar23._4_4_ = fVar5;
  auVar23._0_4_ = fVar8;
  auVar23._8_4_ = fVar6;
  auVar23._12_4_ = fVar7;
  auVar21._4_4_ = fVar5;
  auVar21._0_4_ = fVar8;
  auVar21._8_4_ = fVar6;
  auVar21._12_4_ = fVar7;
  auVar23 = NEON_ext(auVar23,auVar21,4,1);
  *(ulong *)(unaff_x19 + 0x14) =
       CONCAT44(((fVar15 * fVar4 - auVar18._12_4_ * auVar20._12_4_) - fVar7) -
                SUB124(*pauVar1,8) * auVar11._12_4_,
                (fVar14 * fVar4 + auVar18._8_4_ * auVar20._8_4_ + fVar5) -
                SUB124(*pauVar1,0) * auVar11._8_4_);
  *(ulong *)(unaff_x19 + 0xc) =
       CONCAT44((fVar13 * fVar4 + auVar18._4_4_ * fVar3 + auVar23._12_4_) -
                SUB124(*pauVar1,8) * auVar11._4_4_,
                (fVar12 * fVar4 + auVar18._0_4_ * auVar20._0_4_ + auVar23._4_4_) -
                fVar13 * auVar11._0_4_);
  return;
}


