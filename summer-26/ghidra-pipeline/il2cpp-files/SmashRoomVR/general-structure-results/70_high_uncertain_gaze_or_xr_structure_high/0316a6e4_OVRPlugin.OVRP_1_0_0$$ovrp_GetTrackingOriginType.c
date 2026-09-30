/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 0316a6e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  if ((DAT_03ff20a6 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13568);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    DAT_03ff20a6 = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  fVar17 = *param_5;
  fVar19 = param_5[1];
  fVar22 = param_5[2];
  fVar16 = *(float *)(param_4 + 0x160);
  fVar15 = *(float *)(param_4 + 0x140);
  lVar4 = FUN_0391c27c(param_4,0);
  if (lVar4 != 0) {
    fVar10 = (float)FUN_0392a7f0(lVar4,0);
    fVar15 = ABS(fVar16) - fVar15 * fVar10;
    if (fVar15 <= 0.0) {
      return;
    }
    if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ + 0xe0) ==
        0) {
      thunk_FUN_01ac7298();
    }
    fVar16 = (float)FUN_03927568(param_5,0);
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    uVar20 = *(undefined4 *)(param_4 + 0x160);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar3 = FUN_03041a2c(uVar20,0);
    if (*(long *)(param_4 + 0x128) != 0) {
      fVar10 = (float)iVar3;
      fVar16 = fVar16 * fVar10;
      param_2 = param_2 * fVar10;
      fVar23 = fVar15 * fVar16;
      fVar18 = fVar15 * param_2;
      fVar11 = (float)FUN_03928d34(*(long *)(param_4 + 0x128),0);
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed25b = '\x01';
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      fVar17 = fVar17 + fVar23;
      lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar19 = fVar19 + fVar18;
      fVar23 = *(float *)(lVar4 + 0x18);
      fVar21 = *(float *)(lVar4 + 0x1c);
      fVar18 = *(float *)(lVar4 + 0x20);
      fVar22 = fVar22 + fVar15 * param_3 * fVar10;
      if (DAT_03fed45d == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
        DAT_03fed45d = '\x01';
      }
      fVar15 = fVar18 * fVar18 + fVar23 * fVar23 + fVar21 * fVar21;
      fVar11 = fVar17 - fVar11;
      fVar16 = fVar19 - fVar16;
      param_2 = fVar22 - param_2;
      if (**(float **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
          fVar15) {
        fVar10 = param_2 * fVar18 + fVar11 * fVar23 + fVar16 * fVar21;
        fVar11 = fVar11 - (fVar23 * fVar10) / fVar15;
        fVar16 = fVar16 - (fVar21 * fVar10) / fVar15;
        param_2 = param_2 - (fVar18 * fVar10) / fVar15;
      }
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar15 = SQRT(param_2 * param_2 + fVar11 * fVar11 + fVar16 * fVar16);
      if (fVar15 <= DAT_00b55370) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar11 = *pfVar6;
        fVar16 = pfVar6[1];
        param_2 = pfVar6[2];
      }
      else {
        fVar11 = fVar11 / fVar15;
        fVar16 = fVar16 / fVar15;
        param_2 = param_2 / fVar15;
      }
      uVar13 = (ulong)(uint)param_2;
      uVar7 = (ulong)(uint)fVar16;
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed25b = '\x01';
      }
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar14 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar12 = FUN_03914800(fVar11,uVar7,uVar13,uVar14,*(undefined4 *)(lVar4 + 0x1c),
                            *(undefined4 *)(lVar4 + 0x20),0);
      plVar9 = *(long **)(param_4 + 0x138);
      in_stack_00000050 = 0;
      uStack0000000000000058 = 0;
      uStack000000000000005c = 0;
      in_stack_00000068 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000064 = 0;
      FUN_03927140(fVar17,fVar19,fVar22,uVar12,uVar7,uVar13,uVar14,&stack0x00000050,0);
      in_stack_00000078 = uStack0000000000000058;
      in_stack_00000070 = in_stack_00000050;
      uStack0000000000000084 = uStack0000000000000064;
      in_stack_00000088 = in_stack_00000068;
      uStack000000000000007c = uStack000000000000005c;
      in_stack_00000080 = uStack0000000000000060;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13568) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0316aab8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_13568,2);
LAB_0316aab8:
        (*(code *)*puVar5)(&stack0x00000010,plVar9,&stack0x00000070,puVar5[1]);
        *(ulong *)(param_4 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(undefined8 *)(param_4 + 0x144) = in_stack_00000010;
        *(undefined8 *)(param_4 + 0x158) = uStack0000000000000024;
        *(ulong *)(param_4 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


