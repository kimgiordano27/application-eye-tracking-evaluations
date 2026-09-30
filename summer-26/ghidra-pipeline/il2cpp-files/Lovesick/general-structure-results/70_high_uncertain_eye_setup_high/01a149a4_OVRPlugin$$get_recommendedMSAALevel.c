/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 01a149a4
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


void OVRPlugin__get_recommendedMSAALevel
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,
               undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  undefined4 uStack000000000000006c;
  undefined4 uStack00000000000000a4;
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
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  ulong uVar16;
  ulong uVar19;
  
  if ((DAT_0377a98c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_String_Create<__Il2CppFullySharedGenericType>__);
    DAT_0377a98c = 1;
  }
  in_stack_000001e0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  uVar13 = FUN_01a1347c(param_6,param_8);
  FUN_01a13234(&stack0x00000150,param_6,param_8);
  fVar12 = in_stack_00000168;
  fVar10 = fStack0000000000000160;
  fVar9 = in_stack_00000158._4_4_;
  fVar11 = fStack0000000000000164;
  FUN_01a13320(param_6,param_8);
  uVar5 = *param_7;
  uStack00000000000000ac = param_7[1];
  uStack00000000000000a4 = param_7[2];
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar4 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  uVar16 = param_3;
  uVar19 = param_4;
  fVar6 = (float)FUN_02699088(uVar13,param_3,param_4,param_5,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  fVar14 = (float)uVar16;
  fVar17 = (float)uVar19;
  in_stack_000001e0 = CONCAT44(fVar10,fVar9);
  in_stack_000001e8 = CONCAT44(fVar12,fVar11);
  fVar8 = fVar17;
  fVar15 = fVar6;
  fVar18 = fVar14;
  fVar7 = (float)FUN_02698d50(0x43340000,0);
  fStack0000000000000044 = (fVar9 * fVar18 + fVar10 * fVar8 + fVar12 * fVar15) - fVar11 * fVar7;
  fStack000000000000004c = ((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar15) - fVar11 * fVar18;
  in_stack_000001d8 =
       CONCAT44(fStack000000000000004c,
                (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar18) - fVar9 * fVar15);
  in_stack_000001d0 =
       CONCAT44(fStack0000000000000044,
                (fVar11 * fVar15 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar18);
  fVar8 = fVar17;
  fVar15 = fVar6;
  fVar18 = fVar14;
  fVar7 = (float)FUN_02698d50(0x42b40000,0);
  fStack0000000000000014 = (fVar9 * fVar18 + fVar10 * fVar8 + fVar12 * fVar15) - fVar11 * fVar7;
  fStack000000000000001c = ((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar15) - fVar11 * fVar18;
  in_stack_000001c8 =
       CONCAT44(fStack000000000000001c,
                (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar18) - fVar9 * fVar15);
  in_stack_000001c0 =
       CONCAT44(fStack0000000000000014,
                (fVar11 * fVar15 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar18);
  fVar8 = (float)FUN_02698d50(0xc2b40000,0);
  fStack0000000000000004 = (fVar9 * fVar14 + fVar10 * fVar17 + fVar12 * fVar6) - fVar11 * fVar8;
  fStack000000000000000c = ((fVar12 * fVar17 - fVar9 * fVar8) - fVar10 * fVar6) - fVar11 * fVar14;
  in_stack_000001b0 =
       CONCAT44(fStack0000000000000004,
                (fVar11 * fVar6 + fVar9 * fVar17 + fVar12 * fVar8) - fVar10 * fVar14);
  in_stack_000001b8 =
       CONCAT44(fStack000000000000000c,
                (fVar10 * fVar8 + fVar11 * fVar17 + fVar12 * fVar14) - fVar9 * fVar6);
  fVar9 = (float)FUN_01a150c8(&stack0x000001e0,&stack0x000001f0);
  fVar10 = (float)FUN_01a150c8(&stack0x000001d0,&stack0x000001f0);
  fVar11 = (float)FUN_01a150c8(&stack0x000001c0,&stack0x000001f0);
  fVar12 = (float)FUN_01a150c8(&stack0x000001b0,&stack0x000001f0);
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  uStack000000000000006c = (undefined4)param_4;
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  FUN_02699088(uVar13 & 0xffffffff,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5,
               *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
               *(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  puVar1 = Method_System_String_Create<__Il2CppFullySharedGenericType>__;
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  FUN_02699088(uVar13 & 0xffffffff,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5,
               *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
               *(undefined4 *)(lVar4 + 0x50),0);
  FUN_01a13bac(param_6,&stack0x000001a0,&stack0x00000190,&stack0x00000180,&stack0x00000170,param_8);
  fVar8 = fVar11;
  if (fVar11 <= fVar12) {
    fVar8 = fVar12;
  }
  fVar12 = fVar10;
  if (fVar10 <= fVar8) {
    fVar12 = fVar8;
  }
  fVar8 = fVar9;
  if (fVar9 <= fVar12) {
    fVar8 = fVar12;
  }
  if (fVar9 == fVar8) {
    in_stack_00000158 = 0;
    _fStack0000000000000160 = 0;
    in_stack_00000150 = 0;
    uVar3 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000138 = in_stack_00000158;
    in_stack_00000130 = in_stack_00000150;
    in_stack_00000140 = _fStack0000000000000160;
    FUN_01a13dbc(uVar5,uStack00000000000000ac,uStack00000000000000a4,uVar3,&stack0x00000130);
  }
  else if (fVar10 == fVar8) {
    in_stack_00000158 = 0;
    _fStack0000000000000160 = 0;
    in_stack_00000150 = 0;
    uVar3 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_00000118 = in_stack_00000158;
    in_stack_00000110 = in_stack_00000150;
    in_stack_00000120 = _fStack0000000000000160;
    FUN_01a13dbc(uVar5,uStack00000000000000ac,uStack00000000000000a4,uVar3,&stack0x00000110);
  }
  else if (fVar11 == fVar8) {
    in_stack_00000158 = 0;
    _fStack0000000000000160 = 0;
    in_stack_00000150 = 0;
    uVar3 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_000000f8 = in_stack_00000158;
    in_stack_000000f0 = in_stack_00000150;
    in_stack_00000100 = _fStack0000000000000160;
    FUN_01a13dbc(uVar5,uStack00000000000000ac,uStack00000000000000a4,uVar3,&stack0x000000f0);
  }
  else {
    in_stack_00000158 = 0;
    _fStack0000000000000160 = 0;
    in_stack_00000150 = 0;
    uVar3 = FUN_011e70d8(&stack0x00000150,&stack0x00000210,&stack0x00000200,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_00000158;
    in_stack_000000d0 = in_stack_00000150;
    in_stack_000000e0 = _fStack0000000000000160;
    FUN_01a13dbc(uVar5,uStack00000000000000ac,uStack00000000000000a4,uVar3,&stack0x000000d0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_02666aac(param_1,0);
  return;
}


