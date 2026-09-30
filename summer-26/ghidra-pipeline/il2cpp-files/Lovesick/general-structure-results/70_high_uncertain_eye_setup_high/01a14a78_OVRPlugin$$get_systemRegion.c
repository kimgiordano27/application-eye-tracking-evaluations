/*
FUNCTION_NAME: OVRPlugin$$get_systemRegion
ENTRY_POINT: 01a14a78
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


void OVRPlugin__get_systemRegion(undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  float in_stack_000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  float fStack00000000000001bc;
  float in_stack_000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001cc;
  float in_stack_000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  float fStack00000000000001dc;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  uStack00000000000000a4 = param_2;
  if (in_w8 == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x23 + 0xc4) = 1;
  }
  fVar3 = (float)FUN_02699088(0);
  fVar5 = unaff_s10;
  fVar6 = fVar3;
  fVar7 = unaff_s9;
  fVar4 = (float)FUN_02698d50(0x43340000,0);
  in_stack_000001d0 =
       (unaff_s13 * fVar6 + unaff_s11 * fVar5 + unaff_s14 * fVar4) - unaff_s12 * fVar7;
  fStack0000000000000044 =
       (unaff_s11 * fVar7 + unaff_s12 * fVar5 + unaff_s14 * fVar6) - unaff_s13 * fVar4;
  in_stack_000001d8 =
       (unaff_s12 * fVar4 + unaff_s13 * fVar5 + unaff_s14 * fVar7) - unaff_s11 * fVar6;
  fStack000000000000004c =
       ((unaff_s14 * fVar5 - unaff_s11 * fVar4) - unaff_s12 * fVar6) - unaff_s13 * fVar7;
  fStack00000000000001d4 = fStack0000000000000044;
  fStack00000000000001dc = fStack000000000000004c;
  fVar5 = unaff_s10;
  fVar6 = fVar3;
  fVar7 = unaff_s9;
  fVar4 = (float)FUN_02698d50(0x42b40000,0);
  in_stack_000001c0 =
       (unaff_s13 * fVar6 + unaff_s11 * fVar5 + unaff_s14 * fVar4) - unaff_s12 * fVar7;
  fStack0000000000000014 =
       (unaff_s11 * fVar7 + unaff_s12 * fVar5 + unaff_s14 * fVar6) - unaff_s13 * fVar4;
  in_stack_000001c8 =
       (unaff_s12 * fVar4 + unaff_s13 * fVar5 + unaff_s14 * fVar7) - unaff_s11 * fVar6;
  fStack000000000000001c =
       ((unaff_s14 * fVar5 - unaff_s11 * fVar4) - unaff_s12 * fVar6) - unaff_s13 * fVar7;
  fStack00000000000001c4 = fStack0000000000000014;
  fStack00000000000001cc = fStack000000000000001c;
  fVar5 = (float)FUN_02698d50(0xc2b40000,0);
  in_stack_000001b0 =
       (unaff_s13 * fVar3 + unaff_s11 * unaff_s10 + unaff_s14 * fVar5) - unaff_s12 * unaff_s9;
  fStack0000000000000004 =
       (unaff_s11 * unaff_s9 + unaff_s12 * unaff_s10 + unaff_s14 * fVar3) - unaff_s13 * fVar5;
  in_stack_000001b8 =
       (unaff_s12 * fVar5 + unaff_s13 * unaff_s10 + unaff_s14 * unaff_s9) - unaff_s11 * fVar3;
  fStack000000000000000c =
       ((unaff_s14 * unaff_s10 - unaff_s11 * fVar5) - unaff_s12 * fVar3) - unaff_s13 * unaff_s9;
  fStack00000000000001b4 = fStack0000000000000004;
  fStack00000000000001bc = fStack000000000000000c;
  fVar5 = (float)FUN_01a150c8(&stack0x000001e0,&stack0x000001f0);
  fVar6 = (float)FUN_01a150c8(&stack0x000001d0,&stack0x000001f0);
  fVar7 = (float)FUN_01a150c8(&stack0x000001c0,&stack0x000001f0);
  fVar3 = (float)FUN_01a150c8(&stack0x000001b0,&stack0x000001f0);
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  FUN_02699088(unaff_s8,0);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  puVar1 = Method_System_String_Create<__Il2CppFullySharedGenericType>__;
  FUN_02699088(unaff_s8,0);
  FUN_01a13bac();
  fVar4 = fVar7;
  if (fVar7 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = fVar6;
  if (fVar6 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = fVar5;
  if (fVar5 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar5 == fVar4) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000138 = in_stack_00000158;
    in_stack_00000130 = in_stack_00000150;
    in_stack_00000140 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,uStack00000000000000a4,uVar2,
                 &stack0x00000130);
  }
  else if (fVar6 == fVar4) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000118 = in_stack_00000158;
    in_stack_00000110 = in_stack_00000150;
    in_stack_00000120 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,uStack00000000000000a4,uVar2,
                 &stack0x00000110);
  }
  else if (fVar7 == fVar4) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_000000f8 = in_stack_00000158;
    in_stack_000000f0 = in_stack_00000150;
    in_stack_00000100 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,uStack00000000000000a4,uVar2,
                 &stack0x000000f0);
  }
  else {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_00000158;
    in_stack_000000d0 = in_stack_00000150;
    in_stack_000000e0 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,uStack00000000000000a4,uVar2,
                 &stack0x000000d0);
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_02666aac();
  return;
}


