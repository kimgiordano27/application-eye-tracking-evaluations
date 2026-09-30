/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 03169f78
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


void OVRPlugin_Qpl__DestroyMarkerHandle
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
               float *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long unaff_x21;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13568);
    *(undefined1 *)(unaff_x21 + 0xa4) = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  if (*(long *)(param_5 + 0x128) != 0) {
    fVar13 = param_6[1];
    in_stack_000000c8._4_4_ = param_6[2];
    fVar15 = *param_6;
    fVar8 = (float)FUN_03928d34(*(long *)(param_5 + 0x128),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar17 = *(float *)(lVar3 + 0x1c);
    fVar16 = *(float *)(lVar3 + 0x20);
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    fVar9 = fVar16 * fVar16 + fVar14 * fVar14 + fVar17 * fVar17;
    fVar15 = fVar15 - fVar8;
    fVar13 = fVar13 - param_3;
    param_4 = in_stack_000000c8._4_4_ - param_4;
    if (**(float **)
          (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
        fVar9) {
      fVar8 = param_4 * fVar16 + fVar15 * fVar14 + fVar13 * fVar17;
      fVar15 = fVar15 - (fVar14 * fVar8) / fVar9;
      fVar13 = fVar13 - (fVar17 * fVar8) / fVar9;
      param_4 = param_4 - (fVar16 * fVar8) / fVar9;
    }
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar8 = SQRT(param_4 * param_4 + fVar15 * fVar15 + fVar13 * fVar13);
    if (fVar8 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar15 = *pfVar4;
      fVar13 = pfVar4[1];
      param_4 = pfVar4[2];
    }
    else {
      fVar15 = fVar15 / fVar8;
      fVar13 = fVar13 / fVar8;
      param_4 = param_4 / fVar8;
    }
    uVar11 = (ulong)(uint)param_4;
    uVar5 = (ulong)(uint)fVar13;
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar10 = FUN_03914800(fVar15,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                          *(undefined4 *)(lVar3 + 0x20),0);
    plVar7 = *(long **)(param_5 + 0x138);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_03927140(*param_6,param_6[1],param_6[2],uVar10,uVar5,uVar11,uVar12,&stack0x00000040,0);
    in_stack_00000068 = uStack0000000000000048;
    in_stack_00000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    in_stack_00000078 = in_stack_00000058;
    uStack000000000000006c = uStack000000000000004c;
    in_stack_00000070 = uStack0000000000000050;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13568) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0316a22c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13568,2);
LAB_0316a22c:
      (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(param_5 + 0x14c) = in_stack_00000008;
      *(undefined8 *)(param_5 + 0x144) = in_stack_00000000;
      *(undefined8 *)(param_5 + 0x158) = uStack0000000000000014;
      *(ulong *)(param_5 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


