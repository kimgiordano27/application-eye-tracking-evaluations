/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 01a14544
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_useIPDInPositionTracking(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  long unaff_x25;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float fVar16;
  float fVar17;
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
  float fStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  undefined4 uStack00000000000000f4;
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
  float in_stack_000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  float in_stack_000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  float in_stack_0000020c;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x25 + 0x377) = 1;
  }
  fVar2 = (float)FUN_02699088(0);
  fStack000000000000002c = unaff_s11;
  FUN_01a13bac();
  fVar9 = in_stack_00000198;
  fVar6 = in_stack_00000188;
  fVar17 = fStack0000000000000180;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = fStack0000000000000194;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000148 = 0;
  in_stack_00000120 = CONCAT44(in_stack_00000120._4_4_,unaff_s9 * unaff_s13 + in_stack_00000198);
  in_stack_00000118 =
       CONCAT44(unaff_s9 * unaff_s8 + fStack0000000000000194,
                unaff_s9 * unaff_s15 + fStack0000000000000190);
  in_stack_000000e8 =
       CONCAT44(in_stack_0000020c * unaff_s8 + fStack0000000000000184,
                in_stack_0000020c * unaff_s15 + fStack0000000000000180);
  fStack00000000000000f0 = in_stack_0000020c * unaff_s13 + in_stack_00000188;
  uVar1 = FUN_011e70d8(&stack0x00000148,&stack0x00000118,&stack0x000000e8,*unaff_x23);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar8 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fVar3 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x00000130);
  fVar16 = in_stack_00000178;
  fVar14 = fStack0000000000000170;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000118 = 0;
  in_stack_000000e8 =
       CONCAT44(fStack0000000000000174 - in_stack_0000020c * unaff_s8,
                fStack0000000000000170 - in_stack_0000020c * unaff_s15);
  _fStack00000000000000f0 =
       CONCAT44(uStack00000000000000f4,in_stack_00000178 - in_stack_0000020c * unaff_s13);
  in_stack_000000b8 =
       CONCAT44(fStack0000000000000164 - unaff_s9 * unaff_s8,
                fStack0000000000000160 - unaff_s9 * unaff_s15);
  fStack00000000000000c0 = in_stack_00000168 - unaff_s9 * unaff_s13;
  uVar1 = FUN_011e70d8(&stack0x00000118,&stack0x000000e8,&stack0x000000b8,*unaff_x23);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar10 = in_stack_00000090;
  fVar4 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x00000100);
  _fStack00000000000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack00000000000001b4 = fStack0000000000000174 - in_stack_00000060 * fStack000000000000002c;
  in_stack_000001b0 = fVar14 - in_stack_00000060 * fVar2;
  in_stack_000001b8 = fVar16 - in_stack_00000060 * unaff_s14;
  in_stack_000000e8 = 0;
  in_stack_000000b8 =
       CONCAT44(fStack000000000000001c - in_stack_00000050 * fStack000000000000002c,
                fStack0000000000000024 - in_stack_00000050 * fVar2);
  _fStack00000000000000c0 = CONCAT44(uStack00000000000000c4,fVar9 - in_stack_00000050 * unaff_s14);
  uVar1 = FUN_011e70d8(&stack0x000000e8,&stack0x000000b8,&stack0x000001b0,*unaff_x23);
  in_stack_000000d8 = _fStack00000000000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar9 = in_stack_00000080;
  fVar11 = in_stack_00000090;
  fVar5 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000d0);
  in_stack_000001b0 = in_stack_00000060 * fVar2 + fVar17;
  fStack00000000000001b4 = in_stack_00000060 * fStack000000000000002c + fStack0000000000000044;
  in_stack_000001b8 = in_stack_00000060 * unaff_s14 + fVar6;
  in_stack_000001a0 = in_stack_00000050 * fVar2 + fStack0000000000000004;
  fStack00000000000001a4 = in_stack_00000050 * fStack000000000000002c + fStack0000000000000164;
  in_stack_000001a8 = in_stack_00000050 * unaff_s14 + fStack000000000000000c;
  _fStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b8 = 0;
  uVar1 = FUN_011e70d8(&stack0x000000b8,&stack0x000001b0,&stack0x000001a0,*unaff_x23);
  in_stack_000000a8 = _fStack00000000000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar16 = in_stack_00000080;
  fVar17 = in_stack_00000090;
  fVar6 = (float)FUN_01a13dbc(in_stack_00000070,uVar1,&stack0x000000a0);
  fVar14 = (float)in_stack_00000070;
  fVar15 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fVar3 - fVar14) * (fVar3 - fVar14) +
           (fVar8 - in_stack_00000080) * (fVar8 - in_stack_00000080);
  fVar13 = (fVar10 - in_stack_00000090) * (fVar10 - in_stack_00000090) +
           (fVar4 - fVar14) * (fVar4 - fVar14) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar2 = (fVar11 - in_stack_00000090) * (fVar11 - in_stack_00000090) +
          (fVar5 - fVar14) * (fVar5 - fVar14) +
          (fVar9 - in_stack_00000080) * (fVar9 - in_stack_00000080);
  fVar12 = (fVar17 - in_stack_00000090) * (fVar17 - in_stack_00000090) +
           (fVar6 - fVar14) * (fVar6 - fVar14) +
           (fVar16 - in_stack_00000080) * (fVar16 - in_stack_00000080);
  fVar14 = fVar2;
  if (fVar12 <= fVar2) {
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
    *unaff_x20 = fVar3;
    uVar7 = 0;
    fVar16 = fVar8;
    fVar17 = fStack000000000000004c;
  }
  else if (fVar13 == fVar14) {
    *unaff_x20 = fVar4;
    uVar7 = 0x43340000;
    fVar16 = fStack0000000000000014;
    fVar17 = fVar10;
  }
  else if (fVar2 == fVar14) {
    *unaff_x20 = fVar5;
    uVar7 = 0x42b40000;
    fVar16 = fVar9;
    fVar17 = fVar11;
  }
  else {
    *unaff_x20 = fVar6;
    uVar7 = 0xc2b40000;
  }
  unaff_x20[1] = fVar16;
  unaff_x20[2] = fVar17;
  *unaff_x19 = uVar7;
  return;
}


