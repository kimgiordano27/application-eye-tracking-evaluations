/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 0316a7c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x22;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float fVar21;
  float unaff_s12;
  float unaff_s13;
  float fVar22;
  float fStack000000000000000c;
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
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  if (in_w8 == 0) {
    thunk_FUN_01ac7298();
  }
  fStack000000000000000c = unaff_s13;
  iVar2 = FUN_03041a2c(0);
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar9 = (float)iVar2;
    fVar13 = unaff_s8 * fVar9;
    fVar15 = unaff_s9 * fVar9;
    fVar22 = unaff_s12 * fVar13;
    fVar20 = unaff_s12 * fVar15;
    fVar10 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    fVar22 = fStack00000000000000dc + fVar22;
    lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar20 = fStack00000000000000d8 + fVar20;
    fVar19 = *(float *)(lVar4 + 0x18);
    fVar21 = *(float *)(lVar4 + 0x1c);
    fVar18 = *(float *)(lVar4 + 0x20);
    fVar9 = fStack000000000000000c + unaff_s12 * unaff_s10 * fVar9;
    if (DAT_03fed45d == '\0') {
      fStack00000000000000d8 = fVar10;
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
      fVar10 = fStack00000000000000d8;
    }
    fVar11 = fVar18 * fVar18 + fVar19 * fVar19 + fVar21 * fVar21;
    fVar10 = fVar22 - fVar10;
    fVar13 = fVar20 - fVar13;
    fVar15 = fVar9 - fVar15;
    if (**(float **)
          (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
        fVar11) {
      fVar14 = fVar15 * fVar18 + fVar10 * fVar19 + fVar13 * fVar21;
      fVar10 = fVar10 - (fVar19 * fVar14) / fVar11;
      fVar13 = fVar13 - (fVar21 * fVar14) / fVar11;
      fVar15 = fVar15 - (fVar18 * fVar14) / fVar11;
    }
    fStack00000000000000dc = fVar9;
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar9 = SQRT(fVar15 * fVar15 + fVar10 * fVar10 + fVar13 * fVar13);
    if (fVar9 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar10 = *pfVar5;
      fVar13 = pfVar5[1];
      fVar15 = pfVar5[2];
    }
    else {
      fVar10 = fVar10 / fVar9;
      fVar13 = fVar13 / fVar9;
      fVar15 = fVar15 / fVar9;
    }
    uVar16 = (ulong)(uint)fVar15;
    uVar6 = (ulong)(uint)fVar13;
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar17 = (ulong)*(uint *)(lVar4 + 0x18);
    uVar12 = FUN_03914800(fVar10,uVar6,uVar16,uVar17,*(undefined4 *)(lVar4 + 0x1c),
                          *(undefined4 *)(lVar4 + 0x20),0);
    plVar8 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000050 = 0;
    uStack0000000000000058 = 0;
    uStack000000000000005c = 0;
    in_stack_00000068 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    FUN_03927140(fVar22,fVar20,fStack00000000000000dc,uVar12,uVar6,uVar16,uVar17,&stack0x00000050,0)
    ;
    uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
    uStack0000000000000078 = uStack0000000000000058;
    in_stack_00000070 = in_stack_00000050;
    uStack000000000000007c = uStack000000000000005c;
    uStack0000000000000080 = uStack0000000000000060;
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_13568) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0316aab8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)StringLiteral_13568,2);
LAB_0316aab8:
      (*(code *)*puVar3)(&stack0x00000010,plVar8,&stack0x00000070,puVar3[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


