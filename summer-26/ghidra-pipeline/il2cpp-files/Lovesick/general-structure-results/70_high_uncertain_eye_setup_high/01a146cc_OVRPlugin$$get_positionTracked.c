/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 01a146cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionTracked(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s13;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float in_stack_00000060;
  undefined8 in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000128;
  float in_stack_000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  float in_stack_000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  float in_stack_00000208;
  float in_stack_0000020c;
  
  uStack0000000000000108 = *(undefined8 *)(param_1 + 0x107);
  uStack0000000000000100 = *(undefined8 *)(param_1 + 0xff);
  uStack0000000000000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar7 = in_stack_00000090;
  fVar2 = (float)FUN_01a13dbc(in_stack_00000070,param_2,&stack0x00000100);
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack00000000000001b4 = unaff_s13 - in_stack_00000060 * fStack000000000000002c;
  in_stack_000001b0 = fStack0000000000000000 - in_stack_00000060 * in_stack_00000030;
  in_stack_000001b8 = unaff_s8 - in_stack_00000060 * fStack0000000000000028;
  in_stack_000000e8 = 0;
  in_stack_000000b8 =
       CONCAT44(in_stack_00000018._4_4_ - in_stack_00000050 * fStack000000000000002c,
                fStack0000000000000024 - in_stack_00000050 * in_stack_00000030);
  in_stack_000000c0 =
       CONCAT44(in_stack_000000c0._4_4_,
                fStack0000000000000020 - in_stack_00000050 * fStack0000000000000028);
  uVar1 = FUN_011e70d8(&stack0x000000e8,&stack0x000000b8,&stack0x000001b0,*unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar6 = in_stack_00000080;
  fVar8 = in_stack_00000090;
  fVar3 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000001b0 = in_stack_00000060 * in_stack_00000030 + fStack0000000000000040;
  fStack00000000000001b4 = in_stack_00000060 * fStack000000000000002c + fStack0000000000000044;
  in_stack_000001b8 = in_stack_00000060 * fStack0000000000000028 + fStack0000000000000048;
  in_stack_000001a0 = in_stack_00000050 * in_stack_00000030 + fStack0000000000000004;
  fStack00000000000001a4 = in_stack_00000050 * fStack000000000000002c + fStack0000000000000008;
  in_stack_000001a8 = in_stack_00000050 * fStack0000000000000028 + fStack000000000000000c;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b8 = 0;
  uVar1 = FUN_011e70d8(&stack0x000000b8,&stack0x000001b0,&stack0x000001a0,*unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar14 = in_stack_00000080;
  fVar15 = in_stack_00000090;
  fVar4 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar12 = (float)in_stack_00000070;
  fVar13 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (in_stack_0000020c - fVar12) * (in_stack_0000020c - fVar12) +
           (in_stack_00000208 - in_stack_00000080) * (in_stack_00000208 - in_stack_00000080);
  fVar11 = (fVar7 - in_stack_00000090) * (fVar7 - in_stack_00000090) +
           (fVar2 - fVar12) * (fVar2 - fVar12) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar9 = (fVar8 - in_stack_00000090) * (fVar8 - in_stack_00000090) +
          (fVar3 - fVar12) * (fVar3 - fVar12) +
          (fVar6 - in_stack_00000080) * (fVar6 - in_stack_00000080);
  fVar10 = (fVar15 - in_stack_00000090) * (fVar15 - in_stack_00000090) +
           (fVar4 - fVar12) * (fVar4 - fVar12) +
           (fVar14 - in_stack_00000080) * (fVar14 - in_stack_00000080);
  fVar12 = fVar9;
  if (fVar10 <= fVar9) {
    fVar12 = fVar10;
  }
  fVar10 = fVar11;
  if (fVar12 <= fVar11) {
    fVar10 = fVar12;
  }
  fVar12 = fVar13;
  if (fVar10 <= fVar13) {
    fVar12 = fVar10;
  }
  if (fVar13 == fVar12) {
    *unaff_x20 = in_stack_0000020c;
    uVar5 = 0;
    fVar14 = in_stack_00000208;
    fVar15 = fStack000000000000004c;
  }
  else if (fVar11 == fVar12) {
    *unaff_x20 = fVar2;
    uVar5 = 0x43340000;
    fVar14 = fStack0000000000000014;
    fVar15 = fVar7;
  }
  else if (fVar9 == fVar12) {
    *unaff_x20 = fVar3;
    uVar5 = 0x42b40000;
    fVar14 = fVar6;
    fVar15 = fVar8;
  }
  else {
    *unaff_x20 = fVar4;
    uVar5 = 0xc2b40000;
  }
  unaff_x20[1] = fVar14;
  unaff_x20[2] = fVar15;
  *unaff_x19 = uVar5;
  return;
}


