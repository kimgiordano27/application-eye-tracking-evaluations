/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 0600bf40
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppPerfStats(undefined1 param_1 [16],float param_2,float param_3)

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
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float fVar10;
  float unaff_s13;
  float unaff_s15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  fStack000000000000002c = param_2;
  fVar2 = (float)FUN_06e464bc(0);
  FUN_0600b480();
  fVar5 = in_stack_00000188;
  fVar15 = fStack0000000000000180;
  fVar10 = fStack00000000000001ec * unaff_s15;
  fVar11 = fStack00000000000001ec * unaff_s8;
  fVar8 = fStack00000000000001ec * unaff_s13;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = in_stack_00000198;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  uVar1 = FUN_05302338(unaff_s9 * unaff_s15 + fStack0000000000000190,
                       unaff_s9 * unaff_s8 + fStack0000000000000194,
                       unaff_s9 * unaff_s13 + in_stack_00000198,fVar10 + fStack0000000000000180,
                       fVar11 + fStack0000000000000184,fVar8 + in_stack_00000188,&stack0x00000148,
                       *unaff_x23);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar7 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fStack00000000000001ec = (float)FUN_0600b690(in_stack_00000070,uVar1,&stack0x00000130);
  fStack00000000000001e8 = fVar7;
  fVar14 = in_stack_00000178;
  fVar7 = fStack0000000000000170;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar1 = FUN_05302338(fStack0000000000000170 - fVar10,fStack0000000000000174 - fVar11,
                       in_stack_00000178 - fVar8,fStack0000000000000160 - unaff_s9 * unaff_s15,
                       fStack0000000000000164 - unaff_s9 * unaff_s8,
                       in_stack_00000168 - unaff_s9 * unaff_s13,&stack0x00000118,*unaff_x23);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar8 = in_stack_00000090;
  fVar3 = (float)FUN_0600b690(in_stack_00000070,uVar1,&stack0x00000100);
  fVar9 = in_stack_00000050 * fStack000000000000002c;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fVar12 = in_stack_00000060 * fStack000000000000002c;
  uVar1 = FUN_05302338(fStack0000000000000024 - in_stack_00000050 * fVar2,
                       fStack0000000000000194 - fVar9,
                       fStack000000000000001c - in_stack_00000050 * param_3,
                       fVar7 - in_stack_00000060 * fVar2,fStack0000000000000174 - fVar12,
                       fVar14 - in_stack_00000060 * param_3,&stack0x000000e8,*unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar10 = in_stack_00000080;
  fVar11 = in_stack_00000090;
  fVar4 = (float)FUN_0600b690(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar1 = FUN_05302338(in_stack_00000060 * fVar2 + fVar15,fVar12 + fStack0000000000000044,
                       in_stack_00000060 * param_3 + fVar5,
                       in_stack_00000050 * fVar2 + fStack0000000000000004,
                       fVar9 + fStack0000000000000164,
                       in_stack_00000050 * param_3 + fStack000000000000000c,&stack0x000000b8,
                       *unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar14 = in_stack_00000080;
  fVar15 = in_stack_00000090;
  fVar5 = (float)FUN_0600b690(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar7 = (float)in_stack_00000070;
  fVar13 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar7) * (fStack00000000000001ec - fVar7) +
           (fStack00000000000001e8 - in_stack_00000080) *
           (fStack00000000000001e8 - in_stack_00000080);
  fVar12 = (fVar8 - in_stack_00000090) * (fVar8 - in_stack_00000090) +
           (fVar3 - fVar7) * (fVar3 - fVar7) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar2 = (fVar11 - in_stack_00000090) * (fVar11 - in_stack_00000090) +
          (fVar4 - fVar7) * (fVar4 - fVar7) +
          (fVar10 - in_stack_00000080) * (fVar10 - in_stack_00000080);
  fVar9 = (fVar15 - in_stack_00000090) * (fVar15 - in_stack_00000090) +
          (fVar5 - fVar7) * (fVar5 - fVar7) +
          (fVar14 - in_stack_00000080) * (fVar14 - in_stack_00000080);
  fVar7 = fVar2;
  if (fVar9 <= fVar2) {
    fVar7 = fVar9;
  }
  fVar9 = fVar12;
  if (fVar7 <= fVar12) {
    fVar9 = fVar7;
  }
  fVar7 = fVar13;
  if (fVar9 <= fVar13) {
    fVar7 = fVar9;
  }
  if (fVar13 == fVar7) {
    *unaff_x20 = fStack00000000000001ec;
    uVar6 = 0;
    fVar14 = fStack00000000000001e8;
    fVar15 = fStack000000000000004c;
  }
  else if (fVar12 == fVar7) {
    *unaff_x20 = fVar3;
    uVar6 = 0x43340000;
    fVar14 = fStack0000000000000014;
    fVar15 = fVar8;
  }
  else if (fVar2 == fVar7) {
    *unaff_x20 = fVar4;
    uVar6 = 0x42b40000;
    fVar14 = fVar10;
    fVar15 = fVar11;
  }
  else {
    *unaff_x20 = fVar5;
    uVar6 = 0xc2b40000;
  }
  unaff_x20[1] = fVar14;
  unaff_x20[2] = fVar15;
  *unaff_x19 = uVar6;
  return;
}


