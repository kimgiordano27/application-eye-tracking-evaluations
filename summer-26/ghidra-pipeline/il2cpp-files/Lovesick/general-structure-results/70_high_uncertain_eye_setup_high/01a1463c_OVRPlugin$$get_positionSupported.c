/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 01a1463c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000004;
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
  float in_stack_00000048;
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
  float fStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000140;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float in_stack_000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  float in_stack_000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  
  uStack0000000000000140 = in_stack_00000158;
  uStack0000000000000130 = param_1;
  fVar7 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fVar2 = (float)FUN_01a13dbc(in_stack_00000070,param_2,&stack0x00000130);
  fVar16 = in_stack_00000178;
  fVar14 = fStack0000000000000170;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000118 = 0;
  in_stack_000000e8 =
       CONCAT44(fStack0000000000000174 - unaff_s15,fStack0000000000000170 - unaff_s11);
  in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,in_stack_00000178 - unaff_s10);
  in_stack_000000b8 =
       CONCAT44(fStack0000000000000164 - unaff_s14,fStack0000000000000160 - unaff_s12);
  fStack00000000000000c0 = in_stack_00000168 - unaff_s9;
  uVar1 = FUN_011e70d8(&stack0x00000118,&stack0x000000e8,&stack0x000000b8,*unaff_x23);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar9 = in_stack_00000090;
  fVar3 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x00000100);
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack00000000000001b4 = fStack0000000000000174 - in_stack_00000060 * fStack000000000000002c;
  in_stack_000001b0 = fVar14 - in_stack_00000060 * in_stack_00000030;
  in_stack_000001b8 = fVar16 - in_stack_00000060 * fStack0000000000000028;
  in_stack_000000e8 = 0;
  in_stack_000000b8 =
       CONCAT44(in_stack_00000018._4_4_ - in_stack_00000050 * fStack000000000000002c,
                fStack0000000000000024 - in_stack_00000050 * in_stack_00000030);
  _fStack00000000000000c0 =
       CONCAT44(uStack00000000000000c4,
                fStack0000000000000020 - in_stack_00000050 * fStack0000000000000028);
  uVar1 = FUN_011e70d8(&stack0x000000e8,&stack0x000000b8,&stack0x000001b0,*unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar8 = in_stack_00000080;
  fVar10 = in_stack_00000090;
  fVar4 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000001b0 = in_stack_00000060 * in_stack_00000030 + fStack0000000000000040;
  fStack00000000000001b4 = in_stack_00000060 * fStack000000000000002c + fStack0000000000000044;
  in_stack_000001b8 = in_stack_00000060 * fStack0000000000000028 + in_stack_00000048;
  in_stack_000001a0 = in_stack_00000050 * in_stack_00000030 + fStack0000000000000004;
  fStack00000000000001a4 = in_stack_00000050 * fStack000000000000002c + fStack0000000000000164;
  in_stack_000001a8 = in_stack_00000050 * fStack0000000000000028 + fStack000000000000000c;
  _fStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b8 = 0;
  uVar1 = FUN_011e70d8(&stack0x000000b8,&stack0x000001b0,&stack0x000001a0,*unaff_x23);
  in_stack_000000a8 = _fStack00000000000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar16 = in_stack_00000080;
  fVar17 = in_stack_00000090;
  fVar5 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar14 = (float)in_stack_00000070;
  fVar15 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fVar2 - fVar14) * (fVar2 - fVar14) +
           (fVar7 - in_stack_00000080) * (fVar7 - in_stack_00000080);
  fVar13 = (fVar9 - in_stack_00000090) * (fVar9 - in_stack_00000090) +
           (fVar3 - fVar14) * (fVar3 - fVar14) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar11 = (fVar10 - in_stack_00000090) * (fVar10 - in_stack_00000090) +
           (fVar4 - fVar14) * (fVar4 - fVar14) +
           (fVar8 - in_stack_00000080) * (fVar8 - in_stack_00000080);
  fVar12 = (fVar17 - in_stack_00000090) * (fVar17 - in_stack_00000090) +
           (fVar5 - fVar14) * (fVar5 - fVar14) +
           (fVar16 - in_stack_00000080) * (fVar16 - in_stack_00000080);
  fVar14 = fVar11;
  if (fVar12 <= fVar11) {
    fVar14 = fVar12;
  }
  fVar12 = fVar13;
  if (fVar14 <= fVar13) {
    fVar12 = fVar14;
  }
  fVar14 = fVar15;
  if (fVar12 <= fVar15) {
    fVar14 = fVar12;
  }
  if (fVar15 == fVar14) {
    *unaff_x20 = fVar2;
    uVar6 = 0;
    fVar16 = fVar7;
    fVar17 = fStack000000000000004c;
  }
  else if (fVar13 == fVar14) {
    *unaff_x20 = fVar3;
    uVar6 = 0x43340000;
    fVar16 = fStack0000000000000014;
    fVar17 = fVar9;
  }
  else if (fVar11 == fVar14) {
    *unaff_x20 = fVar4;
    uVar6 = 0x42b40000;
    fVar16 = fVar8;
    fVar17 = fVar10;
  }
  else {
    *unaff_x20 = fVar5;
    uVar6 = 0xc2b40000;
  }
  unaff_x20[1] = fVar16;
  unaff_x20[2] = fVar17;
  *unaff_x19 = uVar6;
  return;
}


