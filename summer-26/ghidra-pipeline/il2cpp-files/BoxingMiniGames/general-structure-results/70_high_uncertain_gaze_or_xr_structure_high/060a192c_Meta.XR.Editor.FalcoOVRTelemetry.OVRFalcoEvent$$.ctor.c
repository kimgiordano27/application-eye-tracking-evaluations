/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$.ctor
ENTRY_POINT: 060a192c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent___ctor
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               undefined1 param_6 [16],undefined1 param_7 [16],float param_8)

{
  undefined1 (*pauVar1) [12];
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float in_register_00005224;
  undefined1 auVar18 [16];
  
  fVar4 = param_6._4_4_;
  fVar2 = param_6._0_4_;
  auVar16 = NEON_ext(param_7,param_7,4,1);
  auVar15._12_4_ = param_5._12_4_;
  auVar15._0_8_ = param_5._0_8_;
  auVar15._8_4_ = param_2;
  auVar17 = NEON_ext(auVar16,param_6,0xc,1);
  auVar16 = NEON_ext(auVar15,auVar15,0xc,1);
  fVar5 = param_7._0_4_;
  auVar16 = NEON_ext(auVar16,auVar15,8,1);
  auVar18 = NEON_ext(auVar16,auVar16,0xc,1);
  auVar18 = NEON_ext(auVar18,auVar16,8,1);
  pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0xc);
  fVar11 = (float)*(undefined8 *)(unaff_x19 + 0x14);
  fVar12 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x14) >> 0x20);
  fVar9 = (float)*(undefined8 *)*pauVar1;
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar13._4_4_ = fVar12;
  auVar13._0_4_ = fVar12;
  auVar13._8_4_ = fVar12;
  auVar13._12_4_ = fVar12;
  auVar14._12_4_ = fVar12;
  auVar14._0_12_ = *pauVar1;
  auVar14 = NEON_ext(auVar13,auVar14,4,1);
  fVar3 = ((param_4 * param_8 - param_1 * fVar2) - param_2 * fVar4) - param_3 * fVar5;
  auVar8._0_4_ = (auVar16._0_4_ * fVar4 + auVar17._0_4_ * param_4 + param_5._0_4_ * param_8) -
                 auVar18._0_4_ * fVar2;
  auVar8._4_4_ = (auVar16._4_4_ * fVar5 + auVar17._4_4_ * param_4 + param_5._4_4_ * param_8) -
                 auVar18._4_4_ * fVar4;
  auVar8._8_4_ = (auVar16._8_4_ * in_register_00005224 + auVar17._8_4_ * param_4 + param_2 * param_8
                 ) - auVar18._8_4_ * fVar5;
  auVar8._12_4_ =
       (auVar16._12_4_ * fVar4 + auVar17._0_4_ * param_4 + param_3 * param_8) -
       auVar18._12_4_ * fVar2;
  auVar16 = NEON_ext(auVar8,auVar8,0xc,1);
  auVar15 = NEON_ext(auVar16,auVar8,8,1);
  fVar2 = auVar15._4_4_;
  fVar4 = fVar9 * auVar15._8_4_;
  fVar5 = fVar10 * auVar15._0_4_;
  fVar6 = fVar11 * fVar2;
  fVar7 = fVar10 * fVar2;
  auVar16._4_4_ = fVar5;
  auVar16._0_4_ = fVar4;
  auVar16._8_4_ = fVar6;
  auVar16._12_4_ = fVar7;
  auVar18._4_4_ = fVar5;
  auVar18._0_4_ = fVar4;
  auVar18._8_4_ = fVar6;
  auVar18._12_4_ = fVar7;
  auVar16 = NEON_ext(auVar16,auVar18,4,1);
  *(ulong *)(unaff_x19 + 0x14) =
       CONCAT44(((fVar12 * fVar3 - auVar14._12_4_ * auVar15._12_4_) - fVar7) -
                SUB124(*pauVar1,8) * auVar8._12_4_,
                (fVar11 * fVar3 + auVar14._8_4_ * auVar15._8_4_ + fVar5) -
                SUB124(*pauVar1,0) * auVar8._8_4_);
  *(ulong *)(unaff_x19 + 0xc) =
       CONCAT44((fVar10 * fVar3 + auVar14._4_4_ * fVar2 + auVar16._12_4_) -
                SUB124(*pauVar1,8) * auVar8._4_4_,
                (fVar9 * fVar3 + auVar14._0_4_ * auVar15._0_4_ + auVar16._4_4_) -
                fVar10 * auVar8._0_4_);
  return;
}


