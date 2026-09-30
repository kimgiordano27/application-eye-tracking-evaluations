/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 090acc50
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__StartBodyTracking2
          (ulong param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  ulong uVar8;
  
  param_5 = param_5 + param_3 + param_4;
  fVar6 = ((in_s16 + param_8) * param_2 - param_5) * (param_7 / param_6);
  fVar4 = ((in_s16 + param_8) - param_2 * param_5) * (param_7 / param_6);
  in_stack_00000028 = in_stack_00000028 + in_stack_00000018._4_4_ * fVar6;
  fVar7 = (float)in_stack_00000020 + (float)in_stack_00000010 * fVar6;
  fVar6 = (float)((ulong)in_stack_00000020 >> 0x20) +
          (float)((ulong)in_stack_00000010 >> 0x20) * fVar6;
  uVar8 = CONCAT44(fVar6,fVar7);
  fVar9 = (in_s17 + unaff_s8 * fVar4) - in_stack_00000028;
  fVar11 = (in_s18 + unaff_s9 * fVar4) - fVar7;
  fVar4 = (in_s19 + unaff_s10 * fVar4) - fVar6;
  fVar4 = SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar11 * fVar11) - fStack0000000000000038;
  *(float *)(unaff_x23 + 0x20) = fVar4;
  puVar1 = PTR_DAT_0ac401c0;
  if (in_NG == in_OV) {
    lVar2 = (param_1 & 0xffffffff) - 1;
    pfVar3 = (float *)(unaff_x23 + 0x24);
    do {
      fVar9 = *pfVar3;
      if (*pfVar3 <= fVar4) {
        fVar9 = fVar4;
      }
      fVar4 = fVar9;
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 1;
    } while (lVar2 != 0);
  }
  if (fVar4 < fStack0000000000000038) {
    fVar4 = SQRT(fStack0000000000000038 * fStack0000000000000038 - fVar4 * fVar4);
    in_stack_00000028 = in_stack_00000028 - fVar4 * *(float *)(unaff_x22 + 0xc);
    uVar8 = CONCAT44(fVar6 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar4,
                     fVar7 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar4);
  }
  uVar10 = (undefined4)(uVar8 >> 0x20);
  uVar5 = FUN_090ac5d8(in_stack_00000028,uVar8,uVar8 >> 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_0a188128(uVar5,uVar8 & 0xffffffff,uVar10,uStack00000000000000cc,uStack00000000000000c8,
               uStack0000000000000040,uStack000000000000003c,&stack0x00000060,0);
  FUN_090acde8((undefined1 *)((long)&stack0x00000040 + 4));
  unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  *unaff_x19 = uStack0000000000000044;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
  return 1;
}


