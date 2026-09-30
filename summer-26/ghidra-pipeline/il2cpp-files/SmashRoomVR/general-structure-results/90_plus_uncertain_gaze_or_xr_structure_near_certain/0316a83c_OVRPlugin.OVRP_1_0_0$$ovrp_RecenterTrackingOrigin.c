/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 0316a83c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x22;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float fVar16;
  float unaff_s12;
  float fVar17;
  float unaff_s13;
  float fVar18;
  float unaff_s14;
  float fVar19;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  *(undefined1 *)(unaff_x20 + 0x25b) = in_w8;
  puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  fVar19 = fStack00000000000000dc + unaff_s14;
  lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar15 = fStack00000000000000d8 + unaff_s10;
  fVar14 = *(float *)(lVar3 + 0x18);
  fVar16 = *(float *)(lVar3 + 0x1c);
  fVar13 = *(float *)(lVar3 + 0x20);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_s15;
  if (DAT_03fed45d == '\0') {
    fStack00000000000000d8 = unaff_s12;
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
    unaff_s12 = fStack00000000000000d8;
  }
  fVar8 = fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar17 = fVar19 - unaff_s12;
  fVar18 = fVar15 - unaff_s13;
  param_3 = in_stack_00000008._4_4_ - param_3;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar8) {
    fVar10 = param_3 * fVar13 + fVar17 * fVar14 + fVar18 * fVar16;
    fVar17 = fVar17 - (fVar14 * fVar10) / fVar8;
    fVar18 = fVar18 - (fVar16 * fVar10) / fVar8;
    param_3 = param_3 - (fVar13 * fVar10) / fVar8;
  }
  fStack00000000000000dc = in_stack_00000008._4_4_;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar13 = SQRT(param_3 * param_3 + fVar17 * fVar17 + fVar18 * fVar18);
  if (fVar13 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar17 = *pfVar4;
    fVar18 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    fVar17 = fVar17 / fVar13;
    fVar18 = fVar18 / fVar13;
    param_3 = param_3 / fVar13;
  }
  uVar11 = (ulong)(uint)param_3;
  uVar5 = (ulong)(uint)fVar18;
  if (*(char *)(unaff_x20 + 0x25b) == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    *(undefined1 *)(unaff_x20 + 0x25b) = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar9 = FUN_03914800(fVar17,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar7 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  FUN_03927140(fVar19,fVar15,fStack00000000000000dc,uVar9,uVar5,uVar11,uVar12,&stack0x00000050,0);
  uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000080 = in_stack_00000060;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13568) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0316aab8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13568,2);
LAB_0316aab8:
  (*(code *)*puVar2)(&stack0x00000010,plVar7,&stack0x00000070,puVar2[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return;
}


