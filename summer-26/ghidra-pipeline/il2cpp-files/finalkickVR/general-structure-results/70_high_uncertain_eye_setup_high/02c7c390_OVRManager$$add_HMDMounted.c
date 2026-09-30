/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 02c7c390
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__add_HMDMounted(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x29;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uStack0000000000000004;
  long in_stack_00000018;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  MethodInfo *in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack000000000000004c;
  float fStack000000000000007c;
  float fStack0000000000000084;
  float fStack000000000000008c;
  undefined4 uStack0000000000000094;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack0000000000000104;
  undefined4 uStack000000000000010c;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000174;
  undefined4 uStack000000000000017c;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e4;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000278;
  
  Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C
            (in_stack_00000230,in_stack_00000234,in_stack_00000238,in_stack_0000023c,(int)param_1,
             (int)((ulong)param_1 >> 0x20),in_stack_00000278);
  *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000028[0x22];
  *(undefined4 *)(unaff_x29 + -0x50) = in_stack_00000238;
  uVar5 = *(undefined8 *)(in_stack_00000018 + 0xdc);
  *(undefined8 *)((long)in_stack_00000028 + 0xdc) = *(undefined8 *)(in_stack_00000018 + 0xe4);
  *(undefined8 *)((long)in_stack_00000028 + 0xd4) = uVar5;
  Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(in_stack_00000030);
  *(undefined8 *)((long)in_stack_00000028 + 0x8c) = *(undefined8 *)((long)in_stack_00000028 + 0xdc);
  *(undefined8 *)((long)in_stack_00000028 + 0x84) = *(undefined8 *)((long)in_stack_00000028 + 0xd4);
  uStack00000000000001b0 = (undefined4)in_stack_00000028[0x17];
  uStack00000000000001b4 = (undefined4)((ulong)in_stack_00000028[0x17] >> 0x20);
  uStack00000000000001dc =
       Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C
                 (uStack00000000000001c0,uStack00000000000001c4,uStack00000000000001c8,
                  uStack00000000000001cc,uStack00000000000001b0,uStack00000000000001b4,
                  in_stack_00000238,in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000028[0x14];
  *(undefined4 *)(unaff_x29 + -0x60) = uStack00000000000001c8;
  uVar6 = *(undefined4 *)(unaff_x29 + -0x50);
  uStack000000000000016c = (undefined4)(*(ulong *)(unaff_x29 + -0x58) >> 0x20);
  uStack0000000000000158 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
  uStack000000000000015c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
  uStack00000000000001e4 = uStack00000000000001c8;
  uStack0000000000000174 =
       Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline
                 (*(ulong *)(unaff_x29 + -0x58) & 0xffffffff,uStack000000000000016c,uVar6,
                  uStack0000000000000158,uStack000000000000015c,*(undefined4 *)(unaff_x29 + -0x60),
                  in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000028[7];
  *(undefined4 *)(unaff_x29 + -0x88) = uVar6;
  uStack000000000000017c = uVar6;
  uStack000000000000013c =
       Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline
                 (in_stack_00000020,in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x78) = *in_stack_00000028;
  *(undefined4 *)(unaff_x29 + -0x70) = uVar6;
  uVar2 = *(ulong *)(unaff_x29 + -200);
  uVar1 = *(undefined4 *)(unaff_x29 + -0xc0);
  uStack0000000000000104 = (undefined4)(uVar2 >> 0x20);
  uStack00000000000000f0 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
  uStack00000000000000f4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack00000000000000e4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20);
  uStack0000000000000004 = uStack00000000000000e4;
  uStack0000000000000144 = uVar6;
  uStack000000000000010c =
       Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                 (uVar2 & 0xffffffff,uStack0000000000000104,uVar1,uStack00000000000000f0,
                  uStack00000000000000f4,*(undefined4 *)(unaff_x29 + -0x50),in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x7c) = uStack000000000000010c;
  uStack00000000000000a0 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
  uStack00000000000000a4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
  uStack0000000000000094 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20);
  uStack0000000000000004 = uStack0000000000000094;
  uStack00000000000000bc =
       Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                 (uVar2 & 0xffffffff,uStack0000000000000104,uVar1,uStack00000000000000a0,
                  uStack00000000000000a4,*(undefined4 *)(unaff_x29 + -0x60),in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x80) = uStack00000000000000bc;
  fStack000000000000008c = *(float *)(unaff_x29 + -0x7c);
  if ((0.0 <= fStack000000000000008c) || (0.0 <= *(float *)(unaff_x29 + -0x80))) {
    fStack0000000000000084 = *(float *)(unaff_x29 + -0x7c);
    if ((fStack0000000000000084 <= 0.0) || (*(float *)(unaff_x29 + -0x80) <= 0.0)) {
      fStack000000000000007c = *(float *)(unaff_x29 + -0x7c);
      fVar3 = ABS(fStack000000000000007c);
      uStack000000000000004c = (undefined4)(*(ulong *)(unaff_x29 + -0x58) >> 0x20);
      uStack0000000000000038 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
      uStack000000000000003c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
      fVar4 = (float)Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline
                               (*(ulong *)(unaff_x29 + -0x58) & 0xffffffff,uStack000000000000004c,
                                *(undefined4 *)(unaff_x29 + -0x50),uStack0000000000000038,
                                uStack000000000000003c,*(undefined4 *)(unaff_x29 + -0x60),0);
      *(float *)(unaff_x29 + -4) = fVar3 / fVar4;
    }
    else {
      *(undefined4 *)(unaff_x29 + -4) = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -4) = 0x3f800000;
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


