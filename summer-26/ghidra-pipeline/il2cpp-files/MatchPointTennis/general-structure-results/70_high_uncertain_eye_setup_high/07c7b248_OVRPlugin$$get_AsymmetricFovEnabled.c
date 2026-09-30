/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 07c7b248
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_AsymmetricFovEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
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
  float unaff_s9;
  float unaff_s11;
  float fVar13;
  float unaff_s14;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000044;
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
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  puVar1 = PTR_DAT_09f370c8;
  fVar11 = unaff_s11;
  fVar16 = unaff_s14;
  fVar3 = (float)FUN_09516eb8(0);
  if (DAT_0a51bf41 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf41 = '\x01';
  }
  fVar4 = (float)FUN_09516eb8(0);
  fStack000000000000002c = unaff_s11;
  FUN_07c7a804();
  fVar9 = in_stack_00000188;
  fVar5 = fStack0000000000000180;
  fVar13 = fStack00000000000001ec * fVar3;
  fVar14 = fStack00000000000001ec * fVar11;
  fVar12 = fStack00000000000001ec * fVar16;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = in_stack_00000198;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  uVar2 = FUN_06c817f4(unaff_s9 * fVar3 + fStack0000000000000190,
                       unaff_s9 * fVar11 + fStack0000000000000194,
                       unaff_s9 * fVar16 + in_stack_00000198,fVar13 + fStack0000000000000180,
                       fVar14 + fStack0000000000000184,fVar12 + in_stack_00000188,&stack0x00000148,
                       *(undefined8 *)puVar1);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar7 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fStack00000000000001ec = (float)FUN_07c7aa14(in_stack_00000070,uVar2,&stack0x00000130);
  fStack00000000000001e8 = fVar7;
  fVar8 = in_stack_00000178;
  fVar7 = fStack0000000000000170;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar2 = FUN_06c817f4(fStack0000000000000170 - fVar13,fStack0000000000000174 - fVar14,
                       in_stack_00000178 - fVar12,fStack0000000000000160 - unaff_s9 * fVar3,
                       fStack0000000000000164 - unaff_s9 * fVar11,
                       in_stack_00000168 - unaff_s9 * fVar16,&stack0x00000118,*(undefined8 *)puVar1)
  ;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar12 = in_stack_00000090;
  fVar13 = (float)FUN_07c7aa14(in_stack_00000070,uVar2,&stack0x00000100);
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  uVar2 = FUN_06c817f4(fStack0000000000000024 - in_stack_00000050 * fVar4,
                       fStack0000000000000194 - in_stack_00000050 * fStack000000000000002c,
                       fStack000000000000001c - in_stack_00000050 * unaff_s14,
                       fVar7 - in_stack_00000060 * fVar4,
                       fStack0000000000000174 - in_stack_00000060 * fStack000000000000002c,
                       fVar8 - in_stack_00000060 * unaff_s14,&stack0x000000e8,*(undefined8 *)puVar1)
  ;
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar7 = in_stack_00000080;
  fVar8 = in_stack_00000090;
  fVar14 = (float)FUN_07c7aa14(in_stack_00000070,uVar2,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar2 = FUN_06c817f4(in_stack_00000060 * fVar4 + fVar5,
                       in_stack_00000060 * fStack000000000000002c + fStack0000000000000044,
                       in_stack_00000060 * unaff_s14 + fVar9,
                       in_stack_00000050 * fVar4 + fStack0000000000000004,
                       in_stack_00000050 * fStack000000000000002c + fStack0000000000000164,
                       in_stack_00000050 * unaff_s14 + fStack000000000000000c,&stack0x000000b8,
                       *(undefined8 *)puVar1);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar16 = in_stack_00000080;
  fVar3 = in_stack_00000090;
  fVar5 = (float)FUN_07c7aa14(in_stack_00000070,uVar2,&stack0x000000a0);
  fVar11 = (float)in_stack_00000070;
  fVar15 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar11) * (fStack00000000000001ec - fVar11) +
           (fStack00000000000001e8 - in_stack_00000080) *
           (fStack00000000000001e8 - in_stack_00000080);
  fVar10 = (fVar12 - in_stack_00000090) * (fVar12 - in_stack_00000090) +
           (fVar13 - fVar11) * (fVar13 - fVar11) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar9 = (fVar8 - in_stack_00000090) * (fVar8 - in_stack_00000090) +
          (fVar14 - fVar11) * (fVar14 - fVar11) +
          (fVar7 - in_stack_00000080) * (fVar7 - in_stack_00000080);
  fVar4 = (fVar3 - in_stack_00000090) * (fVar3 - in_stack_00000090) +
          (fVar5 - fVar11) * (fVar5 - fVar11) +
          (fVar16 - in_stack_00000080) * (fVar16 - in_stack_00000080);
  fVar11 = fVar9;
  if (fVar4 <= fVar9) {
    fVar11 = fVar4;
  }
  fVar4 = fVar10;
  if (fVar11 <= fVar10) {
    fVar4 = fVar11;
  }
  fVar11 = fVar15;
  if (fVar4 <= fVar15) {
    fVar11 = fVar4;
  }
  if (fVar15 == fVar11) {
    *unaff_x20 = fStack00000000000001ec;
    uVar6 = 0;
    fVar16 = fStack00000000000001e8;
    fVar3 = fStack000000000000004c;
  }
  else if (fVar10 == fVar11) {
    *unaff_x20 = fVar13;
    uVar6 = 0x43340000;
    fVar16 = fStack0000000000000014;
    fVar3 = fVar12;
  }
  else if (fVar9 == fVar11) {
    *unaff_x20 = fVar14;
    uVar6 = 0x42b40000;
    fVar16 = fVar7;
    fVar3 = fVar8;
  }
  else {
    *unaff_x20 = fVar5;
    uVar6 = 0xc2b40000;
  }
  unaff_x20[1] = fVar16;
  unaff_x20[2] = fVar3;
  *unaff_x19 = uVar6;
  return;
}


