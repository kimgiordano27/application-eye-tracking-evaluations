/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 0313f2c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__IsMultimodalHandsControllersSupported
               (float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  if ((DAT_03ff1f1a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7fa08);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03ff1f1a = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0xf8);
  *param_3 = uVar2;
  uVar4 = *(undefined4 *)(param_2 + 0x104);
  *param_4 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined4 *)(param_4 + 1) = uVar4;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= *(float *)(param_2 + 0x58)) {
    param_1 = param_1 - *(float *)(param_2 + 0x58);
    uVar2 = FUN_0313f4b0(param_1,param_2);
    puVar1 = PTR_DAT_03d7fa08;
    uVar3 = (uint)((ulong)uVar2 >> 0x20);
    if (-1 < (int)((uint)uVar2 | uVar3)) {
      if (*(long *)(param_2 + 0x130) != 0) {
        FUN_02c43204(&stack0x00000018,*(long *)(param_2 + 0x130),uVar2,
                     *(undefined8 *)PTR_DAT_03d7fa08);
        fVar9 = fStack000000000000004c;
        uVar6 = uStack0000000000000040;
        uVar4 = in_stack_00000030._12_4_;
        uVar2 = in_stack_00000030._4_8_;
        if (*(long *)(param_2 + 0x130) != 0) {
          uVar11 = (ulong)uStack0000000000000048;
          uStack000000000000000c = uStack0000000000000044;
          FUN_02c43204(&stack0x00000018,*(long *)(param_2 + 0x130),uVar3,*(undefined8 *)puVar1);
          uVar10 = uStack0000000000000040;
          uVar12 = (ulong)uStack0000000000000048;
          fVar16 = (float)uVar2;
          fVar17 = SUB84(uVar2,4);
          uVar8 = (ulong)uStack0000000000000044;
          fVar15 = (param_1 - fVar9) / (fStack000000000000004c - fVar9);
          fVar9 = fVar15;
          if (1.0 < fVar15) {
            fVar9 = 1.0;
          }
          uVar13 = (ulong)(uint)fVar9;
          if (fVar15 < 0.0) {
            fVar9 = 0.0;
          }
          fStack0000000000000014 =
               (float)uVar4 + ((float)in_stack_00000030._12_4_ - (float)uVar4) * fVar9;
          uVar7 = (ulong)uStack000000000000000c;
          uVar2 = OVRManager__IsPassthroughRecommended(uVar6);
          uVar14 = uVar13;
          uVar5 = OVRManager__IsPassthroughRecommended(uVar10,uVar8,uVar12);
          FUN_039142e8(uVar2,uVar7,uVar11,uVar13,uVar5,uVar8,uVar12,uVar14,0);
          uVar10 = (undefined4)uVar11;
          uVar6 = (undefined4)uVar7;
          uVar4 = FUN_0313f738();
          *param_3 = CONCAT44(fVar17 + (SUB84(in_stack_00000030._4_8_,4) - fVar17) * fVar9,
                              fVar16 + ((float)in_stack_00000030._4_8_ - fVar16) * fVar9);
          *(float *)(param_3 + 1) = fStack0000000000000014;
          *(undefined4 *)param_4 = uVar4;
          *(undefined4 *)((long)param_4 + 4) = uVar6;
          *(undefined4 *)(param_4 + 1) = uVar10;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


