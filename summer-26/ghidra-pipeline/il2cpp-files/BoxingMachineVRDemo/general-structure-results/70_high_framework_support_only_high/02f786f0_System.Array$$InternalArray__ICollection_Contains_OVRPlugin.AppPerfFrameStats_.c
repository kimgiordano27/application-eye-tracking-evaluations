/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 02f786f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_AppPerfFrameStats>
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8,ulong param_9,ulong param_10)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  fStack0000000000000068 = fStack0000000000000094;
  fStack000000000000001c = fStack0000000000000090;
  if ((param_9 & 1) == 0) {
    fStack0000000000000068 = 1.0;
    fStack000000000000001c = 1.0;
  }
  fStack000000000000000c = param_3;
  fStack0000000000000010 = param_4;
  fStack0000000000000018 = param_2;
  fStack000000000000006c = param_6;
  if (param_8 != 0) {
    fVar6 = fStack000000000000001c;
    FUN_0601c738(param_8,param_1 < 0.0,0);
    lVar2 = FUN_06066c74(param_8,0);
    if (lVar2 != 0) {
      fVar5 = param_1;
      if (param_1 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar3 = -fVar5;
      FUN_0607832c(param_5 * fVar3,fStack000000000000006c * fVar3,param_7 * fVar3,lVar2,0);
      fVar3 = 1.0;
      if (in_stack_00000098 < 0.0) {
        fVar3 = -1.0;
      }
      if (fVar3 < 0.0) {
        fVar9 = 0.0;
        fVar3 = DAT_01208264;
        fVar4 = (float)FUN_06058974(0,DAT_01208264,0,0);
        fVar13 = fStack00000000000000a0 * fVar4;
        fVar10 = fStack00000000000000a8 * fVar3;
        fVar11 = fStack00000000000000a8 * fVar4;
        fVar7 = fStack00000000000000a4 * fVar3;
        fVar12 = fStack00000000000000a0 * fVar9;
        fVar8 = fStack00000000000000a8 * fVar9;
        fStack00000000000000a8 =
             (fStack00000000000000a0 * fVar3 +
             fStack00000000000000ac * fVar9 + fStack00000000000000a8 * fVar6) -
             fStack00000000000000a4 * fVar4;
        fStack00000000000000a0 =
             (fStack00000000000000a4 * fVar9 +
             fStack00000000000000ac * fVar4 + fStack00000000000000a0 * fVar6) - fVar10;
        fStack00000000000000a4 =
             (fVar11 + fStack00000000000000ac * fVar3 + fStack00000000000000a4 * fVar6) - fVar12;
        fStack00000000000000ac = ((fStack00000000000000ac * fVar6 - fVar13) - fVar7) - fVar8;
      }
      lVar2 = FUN_06066c74(param_8,0);
      if (lVar2 != 0) {
        FUN_06079060(fStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                     fStack00000000000000ac,lVar2,0);
        fVar6 = fStack0000000000000068;
        fVar3 = in_stack_00000098 * fStack0000000000000068;
        if (DAT_06b72814 == '\0') {
          FUN_02d6084c(PTR_DAT_0675ebd8);
          DAT_06b72814 = '\x01';
        }
        fVar4 = ABS(fVar3);
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar9 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
        fVar7 = fVar4 * DAT_012084b4;
        if (fVar4 * DAT_012084b4 <= fVar9) {
          fVar7 = fVar9;
        }
        if (ABS(0.0 - fVar3) < fVar7) {
          return;
        }
        in_stack_00000098 = ABS(in_stack_00000098);
        fVar3 = DAT_01208378;
        if (param_1 < 0.0) {
          fVar3 = 0.0;
        }
        fVar4 = in_stack_00000098;
        if ((param_10 & 1) == 0) {
          fVar4 = 1.0;
        }
        fVar7 = fVar5 * in_stack_00000098;
        if (fVar5 * in_stack_00000098 <= fVar3 * fVar4) {
          fVar7 = fVar3 * fVar4;
        }
        FUN_0601bd84(fVar7,param_8,0);
        bVar1 = (param_9 & 1) == 0;
        fVar3 = 1.0;
        if (bVar1) {
          fVar3 = in_stack_00000098;
        }
        if (bVar1) {
          in_stack_00000098 = 1.0;
        }
        FUN_0601bf0c(in_stack_00000098 * (fVar5 * fVar3 + fStack0000000000000018),param_8,0);
        FUN_0601caec(ABS(fStack000000000000001c / fVar6),param_8,0);
        if (param_1 < 0.0) {
          FUN_0601c5b0(fVar6 * fStack000000000000000c,param_8,0);
          return;
        }
        fVar5 = (float)FUN_0601be58(param_8,0);
        fVar6 = atan2f(ABS(fVar6) * fStack0000000000000010,fVar5);
        FUN_0601c094(fVar6 * DAT_0120865c + fVar6 * DAT_0120865c,param_8,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


