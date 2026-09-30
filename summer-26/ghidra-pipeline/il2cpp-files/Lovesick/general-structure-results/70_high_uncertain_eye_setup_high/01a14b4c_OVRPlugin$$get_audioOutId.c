/*
FUNCTION_NAME: OVRPlugin$$get_audioOutId
ENTRY_POINT: 01a14b4c
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


void OVRPlugin__get_audioOutId
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
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
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000c0;
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
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float fStack00000000000001d8;
  float fStack00000000000001dc;
  
  fStack0000000000000040 = param_5 - unaff_s12 * param_3;
  fStack0000000000000044 = (param_8 + param_7) - unaff_s13 * param_1;
  fStack0000000000000048 = (unaff_s12 * param_1 + param_6) - unaff_s11 * param_2;
  fStack000000000000004c = (param_4 - unaff_s12 * param_2) - unaff_s13 * param_3;
  fVar4 = unaff_s10;
  fVar5 = unaff_s8;
  fVar6 = unaff_s9;
  fStack00000000000001d0 = fStack0000000000000040;
  fStack00000000000001d4 = fStack0000000000000044;
  fStack00000000000001d8 = fStack0000000000000048;
  fStack00000000000001dc = fStack000000000000004c;
  fVar3 = (float)FUN_02698d50(0x42b40000,0);
  in_stack_000001c0 =
       (unaff_s13 * fVar5 + unaff_s11 * fVar4 + unaff_s14 * fVar3) - unaff_s12 * fVar6;
  fStack0000000000000014 =
       (unaff_s11 * fVar6 + unaff_s12 * fVar4 + unaff_s14 * fVar5) - unaff_s13 * fVar3;
  in_stack_000001c8 =
       (unaff_s12 * fVar3 + unaff_s13 * fVar4 + unaff_s14 * fVar6) - unaff_s11 * fVar5;
  fStack000000000000001c =
       ((unaff_s14 * fVar4 - unaff_s11 * fVar3) - unaff_s12 * fVar5) - unaff_s13 * fVar6;
  fStack00000000000001c4 = fStack0000000000000014;
  fStack00000000000001cc = fStack000000000000001c;
  fVar4 = (float)FUN_02698d50(0xc2b40000,0);
  in_stack_000001b0 =
       (unaff_s13 * unaff_s8 + unaff_s11 * unaff_s10 + unaff_s14 * fVar4) - unaff_s12 * unaff_s9;
  fStack0000000000000004 =
       (unaff_s11 * unaff_s9 + unaff_s12 * unaff_s10 + unaff_s14 * unaff_s8) - unaff_s13 * fVar4;
  in_stack_000001b8 =
       (unaff_s12 * fVar4 + unaff_s13 * unaff_s10 + unaff_s14 * unaff_s9) - unaff_s11 * unaff_s8;
  fStack000000000000000c =
       ((unaff_s14 * unaff_s10 - unaff_s11 * fVar4) - unaff_s12 * unaff_s8) - unaff_s13 * unaff_s9;
  fStack00000000000001b4 = fStack0000000000000004;
  fStack00000000000001bc = fStack000000000000000c;
  fVar4 = (float)FUN_01a150c8(&stack0x000001e0,&stack0x000001f0);
  fVar5 = (float)FUN_01a150c8(&stack0x000001d0,&stack0x000001f0);
  fVar6 = (float)FUN_01a150c8(&stack0x000001c0,&stack0x000001f0);
  fVar3 = (float)FUN_01a150c8(&stack0x000001b0,&stack0x000001f0);
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  FUN_02699088(in_stack_000000c0,0);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  puVar1 = Method_System_String_Create<__Il2CppFullySharedGenericType>__;
  FUN_02699088(in_stack_000000c0,0);
  FUN_01a13bac();
  fVar7 = fVar6;
  if (fVar6 <= fVar3) {
    fVar7 = fVar3;
  }
  fVar3 = fVar5;
  if (fVar5 <= fVar7) {
    fVar3 = fVar7;
  }
  fVar7 = fVar4;
  if (fVar4 <= fVar3) {
    fVar7 = fVar3;
  }
  if (fVar4 == fVar7) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000138 = in_stack_00000158;
    in_stack_00000130 = in_stack_00000150;
    in_stack_00000140 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,in_stack_000000a0._4_4_,uVar2,
                 &stack0x00000130);
  }
  else if (fVar5 == fVar7) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000118 = in_stack_00000158;
    in_stack_00000110 = in_stack_00000150;
    in_stack_00000120 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,in_stack_000000a0._4_4_,uVar2,
                 &stack0x00000110);
  }
  else if (fVar6 == fVar7) {
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000150 = 0;
    uVar2 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_000000f8 = in_stack_00000158;
    in_stack_000000f0 = in_stack_00000150;
    in_stack_00000100 = in_stack_00000160;
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,in_stack_000000a0._4_4_,uVar2,
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
    FUN_01a13dbc(uStack00000000000000a8,uStack00000000000000ac,in_stack_000000a0._4_4_,uVar2,
                 &stack0x000000d0);
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_02666aac();
  return;
}


