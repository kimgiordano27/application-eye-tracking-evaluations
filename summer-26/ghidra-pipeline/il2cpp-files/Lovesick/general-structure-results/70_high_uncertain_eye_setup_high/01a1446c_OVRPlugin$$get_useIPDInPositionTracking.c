/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 01a1446c
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


void OVRPlugin__get_useIPDInPositionTracking
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  float *unaff_x20;
  long unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000044;
  float fStack000000000000004c;
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
  
  thunk_FUN_00d48444(Method_System_String_Create<__Il2CppFullySharedGenericType>__);
  *(undefined1 *)(unaff_x23 + 0x98b) = 1;
  in_stack_00000198 = 0.0;
  _fStack0000000000000190 = 0;
  in_stack_00000188 = 0.0;
  _fStack0000000000000180 = 0;
  in_stack_00000178 = 0.0;
  _fStack0000000000000170 = 0;
  in_stack_00000168 = 0.0;
  _fStack0000000000000160 = 0;
  uVar13 = FUN_01a1347c();
  uVar3 = param_2;
  uVar16 = param_3;
  uVar19 = param_4;
  fVar5 = (float)FUN_01a13320();
  fVar17 = (float)uVar16;
  fVar20 = (float)uVar19;
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar1 = Method_System_String_Create<__Il2CppFullySharedGenericType>__;
  lVar4 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  uVar16 = param_2;
  uVar19 = param_3;
  fVar6 = (float)FUN_02699088(uVar13,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x3c),
                              *(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar7 = (float)FUN_02699088(uVar13,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  fStack000000000000002c = (float)param_2;
  FUN_01a13bac();
  fVar23 = in_stack_00000198;
  fVar22 = in_stack_00000188;
  fVar21 = fStack0000000000000180;
  fVar9 = (float)uVar3;
  fVar26 = fVar9 * (float)uVar16;
  fVar24 = fVar9 * (float)uVar19;
  fVar27 = fVar5 * (float)uVar16;
  fVar25 = fVar5 * (float)uVar19;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = fStack0000000000000194;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000148 = 0;
  in_stack_00000120 = CONCAT44(in_stack_00000120._4_4_,fVar24 + in_stack_00000198);
  in_stack_00000118 =
       CONCAT44(fVar26 + fStack0000000000000194,fVar9 * fVar6 + fStack0000000000000190);
  in_stack_000000e8 =
       CONCAT44(fVar27 + fStack0000000000000184,fVar5 * fVar6 + fStack0000000000000180);
  fStack00000000000000f0 = fVar25 + in_stack_00000188;
  uVar3 = FUN_011e70d8(&stack0x00000148,&stack0x00000118,&stack0x000000e8,*(undefined8 *)puVar1);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar14 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fVar8 = (float)FUN_01a13dbc(in_stack_00000070,uVar3,&stack0x00000130);
  fVar10 = in_stack_00000178;
  fVar15 = fStack0000000000000170;
  fVar18 = fStack0000000000000174;
  fVar11 = fStack0000000000000164;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = in_stack_00000168;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000118 = 0;
  in_stack_000000e8 =
       CONCAT44(fStack0000000000000174 - fVar27,fStack0000000000000170 - fVar5 * fVar6);
  _fStack00000000000000f0 = CONCAT44(uStack00000000000000f4,in_stack_00000178 - fVar25);
  in_stack_000000b8 =
       CONCAT44(fStack0000000000000164 - fVar26,fStack0000000000000160 - fVar9 * fVar6);
  fStack00000000000000c0 = in_stack_00000168 - fVar24;
  uVar3 = FUN_011e70d8(&stack0x00000118,&stack0x000000e8,&stack0x000000b8,*(undefined8 *)puVar1);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar6 = in_stack_00000090;
  fVar9 = (float)FUN_01a13dbc(in_stack_00000070,uVar3,&stack0x00000100);
  fVar5 = fVar17 * fStack000000000000002c;
  fVar24 = fVar17 * (float)param_3;
  _fStack00000000000000f0 = 0;
  in_stack_000000f8 = 0;
  fVar26 = fVar20 * fStack000000000000002c;
  fVar25 = fVar20 * (float)param_3;
  fStack00000000000001b4 = fVar18 - fVar26;
  in_stack_000001b0 = fVar15 - fVar20 * fVar7;
  in_stack_000001b8 = fVar10 - fVar25;
  in_stack_000000e8 = 0;
  in_stack_000000b8 =
       CONCAT44(fStack000000000000001c - fVar5,fStack0000000000000024 - fVar17 * fVar7);
  _fStack00000000000000c0 = CONCAT44(uStack00000000000000c4,fVar23 - fVar24);
  uVar3 = FUN_011e70d8(&stack0x000000e8,&stack0x000000b8,&stack0x000001b0,*(undefined8 *)puVar1);
  in_stack_000000d8 = _fStack00000000000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar15 = in_stack_00000080;
  fVar18 = in_stack_00000090;
  fVar10 = (float)FUN_01a13dbc(in_stack_00000070,uVar3,&stack0x000000d0);
  in_stack_000001b0 = fVar20 * fVar7 + fVar21;
  fStack00000000000001b4 = fVar26 + fStack0000000000000044;
  in_stack_000001b8 = fVar25 + fVar22;
  in_stack_000001a0 = fVar17 * fVar7 + fStack0000000000000004;
  fStack00000000000001a4 = fVar5 + fVar11;
  in_stack_000001a8 = fVar24 + fStack000000000000000c;
  _fStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b8 = 0;
  uVar3 = FUN_011e70d8(&stack0x000000b8,&stack0x000001b0,&stack0x000001a0,*(undefined8 *)puVar1);
  in_stack_000000a8 = _fStack00000000000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar17 = in_stack_00000080;
  fVar20 = in_stack_00000090;
  fVar11 = (float)FUN_01a13dbc(in_stack_00000070,uVar3,&stack0x000000a0);
  fVar5 = (float)in_stack_00000070;
  fVar7 = (fStack000000000000004c - in_stack_00000090) *
          (fStack000000000000004c - in_stack_00000090) +
          (fVar8 - fVar5) * (fVar8 - fVar5) +
          (fVar14 - in_stack_00000080) * (fVar14 - in_stack_00000080);
  fVar23 = (fVar6 - in_stack_00000090) * (fVar6 - in_stack_00000090) +
           (fVar9 - fVar5) * (fVar9 - fVar5) +
           (fStack0000000000000014 - in_stack_00000080) *
           (fStack0000000000000014 - in_stack_00000080);
  fVar21 = (fVar18 - in_stack_00000090) * (fVar18 - in_stack_00000090) +
           (fVar10 - fVar5) * (fVar10 - fVar5) +
           (fVar15 - in_stack_00000080) * (fVar15 - in_stack_00000080);
  fVar22 = (fVar20 - in_stack_00000090) * (fVar20 - in_stack_00000090) +
           (fVar11 - fVar5) * (fVar11 - fVar5) +
           (fVar17 - in_stack_00000080) * (fVar17 - in_stack_00000080);
  fVar5 = fVar21;
  if (fVar22 <= fVar21) {
    fVar5 = fVar22;
  }
  fVar22 = fVar23;
  if (fVar5 <= fVar23) {
    fVar22 = fVar5;
  }
  fVar5 = fVar7;
  if (fVar22 <= fVar7) {
    fVar5 = fVar22;
  }
  if (fVar7 == fVar5) {
    *unaff_x20 = fVar8;
    uVar12 = 0;
    fVar17 = fVar14;
    fVar20 = fStack000000000000004c;
  }
  else if (fVar23 == fVar5) {
    *unaff_x20 = fVar9;
    uVar12 = 0x43340000;
    fVar17 = fStack0000000000000014;
    fVar20 = fVar6;
  }
  else if (fVar21 == fVar5) {
    *unaff_x20 = fVar10;
    uVar12 = 0x42b40000;
    fVar17 = fVar15;
    fVar20 = fVar18;
  }
  else {
    *unaff_x20 = fVar11;
    uVar12 = 0xc2b40000;
  }
  unaff_x20[1] = fVar17;
  unaff_x20[2] = fVar20;
  *unaff_x19 = uVar12;
  return;
}


