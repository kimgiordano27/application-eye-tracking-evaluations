/*
FUNCTION_NAME: FUN_0313f2c0
ENTRY_POINT: 0313f2c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0313f2c0(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a8 [36];
  float local_84;
  undefined4 uStack_80;
  uint local_7c;
  uint local_78;
  float local_74;
  
  puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  if ((DAT_03ff1f1a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7fa08);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03ff1f1a = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0xf8);
  *param_3 = uVar4;
  uVar6 = *(undefined4 *)(param_2 + 0x104);
  *param_4 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined4 *)(param_4 + 1) = uVar6;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= *(float *)(param_2 + 0x58)) {
    param_1 = param_1 - *(float *)(param_2 + 0x58);
    uVar4 = FUN_0313f4b0(param_1,param_2);
    puVar1 = PTR_DAT_03d7fa08;
    uVar5 = (uint)((ulong)uVar4 >> 0x20);
    if (-1 < (int)((uint)uVar4 | uVar5)) {
      if (*(long *)(param_2 + 0x130) != 0) {
        FUN_02c43204(auStack_a8,*(long *)(param_2 + 0x130),uVar4,*(undefined8 *)PTR_DAT_03d7fa08);
        fVar11 = local_74;
        uVar3 = local_7c;
        uVar6 = uStack_80;
        fVar2 = local_84;
        uVar4 = auStack_a8._28_8_;
        if (*(long *)(param_2 + 0x130) != 0) {
          uVar13 = (ulong)local_78;
          FUN_02c43204(auStack_a8,*(long *)(param_2 + 0x130),uVar5,*(undefined8 *)puVar1);
          uVar14 = (ulong)local_78;
          fVar18 = (float)uVar4;
          fVar19 = SUB84(uVar4,4);
          uVar10 = (ulong)local_7c;
          fVar17 = (param_1 - fVar11) / (local_74 - fVar11);
          fVar11 = fVar17;
          if (1.0 < fVar17) {
            fVar11 = 1.0;
          }
          uVar15 = (ulong)(uint)fVar11;
          if (fVar17 < 0.0) {
            fVar11 = 0.0;
          }
          uVar9 = (ulong)uVar3;
          uVar4 = OVRManager__IsPassthroughRecommended(uVar6);
          uVar16 = uVar15;
          uVar7 = OVRManager__IsPassthroughRecommended(uStack_80,uVar10,uVar14);
          FUN_039142e8(uVar4,uVar9,uVar13,uVar15,uVar7,uVar10,uVar14,uVar16,0);
          uVar12 = (undefined4)uVar13;
          uVar8 = (undefined4)uVar9;
          uVar6 = FUN_0313f738();
          *param_3 = CONCAT44(fVar19 + (SUB84(auStack_a8._28_8_,4) - fVar19) * fVar11,
                              fVar18 + ((float)auStack_a8._28_8_ - fVar18) * fVar11);
          *(float *)(param_3 + 1) = fVar2 + (local_84 - fVar2) * fVar11;
          *(undefined4 *)param_4 = uVar6;
          *(undefined4 *)((long)param_4 + 4) = uVar8;
          *(undefined4 *)(param_4 + 1) = uVar12;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


