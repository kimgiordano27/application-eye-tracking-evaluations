/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 0316bdc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  uint *puVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  
  plVar5 = *(long **)(unaff_x21 + 0x2c0);
  plVar3 = *(long **)(unaff_x20 + 0xcf8);
  FUN_03169a58(&stack0x00000010,param_4,0);
  uVar13 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  in_stack_00000038 = fStack0000000000000018;
  _fStack0000000000000030 = in_stack_00000010;
  uStack0000000000000044 = uStack0000000000000024;
  in_stack_00000040 = uStack0000000000000020;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_039274f8(&stack0x00000030,0);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = uVar13;
  uVar17 = param_3;
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar12 = (float)uVar1;
  uVar1 = FUN_0391f968(uVar4,0,0);
  fVar22 = in_stack_00000038;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0316c0c8;
    fVar21 = fStack0000000000000034;
    fVar20 = fStack0000000000000030;
    fVar6 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x30),0);
    fVar16 = (float)uVar17;
    fVar9 = fVar12;
    fVar23 = fVar16;
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar7 = (float)FUN_039275d8(&stack0x00000030,0);
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    fVar8 = fVar23 * fVar23 + fVar7 * fVar7 + fVar9 * fVar9;
    fVar20 = fVar20 - fVar6;
    fVar21 = fVar21 - fVar12;
    fVar22 = fVar22 - fVar16;
    if (**(float **)
          (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
        fVar8) {
      fVar12 = fVar22 * fVar23 + fVar20 * fVar7 + fVar21 * fVar9;
      fVar20 = fVar20 - (fVar7 * fVar12) / fVar8;
      fVar21 = fVar21 - (fVar9 * fVar12) / fVar8;
      fVar22 = fVar22 - (fVar23 * fVar12) / fVar8;
    }
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar17 = (ulong)(uint)(fVar22 * fVar22);
    fVar12 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21);
    if (fVar12 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar2 = *(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      uVar10 = (ulong)*puVar2;
      uVar13 = (ulong)puVar2[1];
      param_3 = (ulong)puVar2[2];
    }
    else {
      uVar10 = (ulong)(uint)(fVar20 / fVar12);
      uVar13 = (ulong)(uint)(fVar21 / fVar12);
      param_3 = (ulong)(uint)(fVar22 / fVar12);
    }
  }
  fVar20 = in_stack_00000038;
  fVar22 = fStack0000000000000030;
  uVar1 = _fStack0000000000000030 & 0xffffffff;
  fVar12 = fStack0000000000000034;
  fVar21 = *(float *)(unaff_x19 + 0x94);
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar9 = (float)FUN_039275d8(&stack0x00000030,0);
  fVar23 = *(float *)(unaff_x19 + 0x90);
  uVar14 = uVar1;
  uVar18 = uVar17;
  uVar4 = FUN_039275d8(&stack0x00000030,0);
  uVar15 = uVar13;
  uVar19 = param_3;
  uVar11 = FUN_03914800(uVar10,uVar13,param_3,uVar4,uVar14,uVar18,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_039297a8((fVar22 - (float)uVar10 * fVar21) + fVar9 * fVar23,
                 (fVar12 - (float)uVar13 * fVar21) + (float)uVar1 * fVar23,
                 (fVar20 - (float)param_3 * fVar21) + (float)uVar17 * fVar23,uVar11,uVar15,uVar19,
                 uVar4,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
LAB_0316c0c8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


