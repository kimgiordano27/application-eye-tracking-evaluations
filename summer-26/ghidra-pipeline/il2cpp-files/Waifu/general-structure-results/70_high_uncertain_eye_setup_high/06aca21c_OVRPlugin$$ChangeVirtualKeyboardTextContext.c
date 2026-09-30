/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 06aca21c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ChangeVirtualKeyboardTextContext(ulong param_1,long *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  float in_stack_00000098;
  uint uStack000000000000009c;
  
  plVar1 = param_2;
  if ((param_1 & 1) == 0) {
    plVar1 = (long *)FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x25c) = 1;
  }
  uStack000000000000009c = 0;
  uVar2 = FUN_06aca6e8(plVar1,param_3,param_2[8]);
  if ((uVar2 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x178))
                      (param_2,param_3,&stack0x0000009c,*(undefined8 *)(*param_2 + 0x180));
    if ((uVar2 & 1) == 0) {
      lVar4 = param_2[5];
      if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar3 = FUN_07a1747c(&stack0x00000030,0);
      if (lVar4 == 0) goto LAB_06aca470;
      if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_06aca46c;
      lVar4 = lVar4 + (long)(int)param_3 * 0x1c;
      *(undefined8 *)(lVar4 + 0x34) = uStack0000000000000044;
      *(ulong *)(lVar4 + 0x2c) = CONCAT44(uStack0000000000000040,uStack000000000000003c);
      *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(undefined8 *)(lVar4 + 0x20) = in_stack_00000030;
    }
    else {
      lVar4 = param_2[3];
      if (lVar4 == 0) {
LAB_06aca470:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((*(uint *)(lVar4 + 0x18) <= param_3) ||
         (*(uint *)(lVar4 + 0x18) <= uStack000000000000009c)) {
LAB_06aca46c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar5 = lVar4 + (long)(int)param_3 * 0x1c;
      fVar9 = *(float *)(lVar5 + 0x2c);
      fVar6 = *(float *)(lVar5 + 0x30);
      lVar4 = lVar4 + 0x20 + (long)(int)uStack000000000000009c * 0x1c;
      in_stack_00000098 = *(float *)(lVar5 + 0x34);
      uVar12 = *(undefined4 *)(lVar4 + 0xc);
      fVar13 = *(float *)(lVar4 + 0x10);
      fVar14 = *(float *)(lVar4 + 0x14);
      fVar15 = *(float *)(lVar4 + 0x18);
      fVar7 = *(float *)(lVar5 + 0x38);
      fVar10 = fVar13;
      fVar11 = fVar14;
      FUN_07a00400(uVar12,fVar13,fVar14,fVar15,0);
      uVar8 = FUN_07a00c3c(0);
      uVar3 = FUN_07a00400(uVar12,0);
      lVar4 = param_2[5];
      if (lVar4 == 0) goto LAB_06aca470;
      if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_06aca46c;
      lVar4 = lVar4 + (long)(int)param_3 * 0x1c;
      *(undefined4 *)(lVar4 + 0x20) = uVar8;
      *(float *)(lVar4 + 0x24) = fVar10;
      *(float *)(lVar4 + 0x28) = fVar11;
      *(float *)(lVar4 + 0x2c) =
           (in_stack_00000098 * fVar13 + fVar9 * fVar15 + fVar7 * extraout_s0) - fVar6 * fVar14;
      *(float *)(lVar4 + 0x30) =
           (fVar9 * fVar14 + fVar6 * fVar15 + fVar7 * fVar13) - in_stack_00000098 * extraout_s0;
      *(float *)(lVar4 + 0x34) =
           (fVar6 * extraout_s0 + in_stack_00000098 * fVar15 + fVar7 * fVar14) - fVar9 * fVar13;
      *(float *)(lVar4 + 0x38) =
           ((fVar7 * fVar15 - fVar9 * extraout_s0) - fVar6 * fVar13) - in_stack_00000098 * fVar14;
    }
    FUN_06aca72c(uVar3,param_3,param_2[8]);
  }
  return;
}


