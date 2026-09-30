/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 02c7c4d0
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


undefined4 OVRManager__remove_HMDMounted(void)

{
  undefined4 uVar1;
  long unaff_x29;
  float fVar2;
  float fVar3;
  undefined4 uStack0000000000000004;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  MethodInfo *in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000048;
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
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack000000000000010c;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 in_stack_00000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack000000000000017c;
  
  uStack0000000000000174 =
       Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline
                 (uStack0000000000000168,uStack000000000000016c,in_stack_00000170,
                  uStack0000000000000158,uStack000000000000015c,in_stack_00000160);
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000028[7];
  *(undefined4 *)(unaff_x29 + -0x88) = in_stack_00000170;
  uStack000000000000017c = in_stack_00000170;
  uStack000000000000013c =
       Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline
                 (in_stack_00000020,in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x78) = *in_stack_00000028;
  *(undefined4 *)(unaff_x29 + -0x70) = in_stack_00000170;
  uVar1 = *(undefined4 *)(unaff_x29 + -0xc0);
  uStack0000000000000100 = (undefined4)*(undefined8 *)(unaff_x29 + -200);
  uStack0000000000000104 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -200) >> 0x20);
  uStack00000000000000f0 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
  uStack00000000000000f4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack00000000000000e4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20);
  uStack0000000000000004 = uStack00000000000000e4;
  uStack0000000000000144 = in_stack_00000170;
  uStack000000000000010c =
       Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                 (uStack0000000000000100,uStack0000000000000104,uVar1,uStack00000000000000f0,
                  uStack00000000000000f4,*(undefined4 *)(unaff_x29 + -0x50),in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x7c) = uStack000000000000010c;
  uStack00000000000000a0 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
  uStack00000000000000a4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
  uStack0000000000000094 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20);
  uStack0000000000000004 = uStack0000000000000094;
  uStack00000000000000bc =
       Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                 (uStack0000000000000100,uStack0000000000000104,uVar1,uStack00000000000000a0,
                  uStack00000000000000a4,*(undefined4 *)(unaff_x29 + -0x60),in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x80) = uStack00000000000000bc;
  fStack000000000000008c = *(float *)(unaff_x29 + -0x7c);
  if ((0.0 <= fStack000000000000008c) || (0.0 <= *(float *)(unaff_x29 + -0x80))) {
    fStack0000000000000084 = *(float *)(unaff_x29 + -0x7c);
    if ((fStack0000000000000084 <= 0.0) || (*(float *)(unaff_x29 + -0x80) <= 0.0)) {
      fStack000000000000007c = *(float *)(unaff_x29 + -0x7c);
      fVar2 = ABS(fStack000000000000007c);
      uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
      uStack0000000000000038 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
      uStack000000000000003c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
      fVar3 = (float)Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline
                               (uStack0000000000000048,uStack000000000000004c,
                                *(undefined4 *)(unaff_x29 + -0x50),uStack0000000000000038,
                                uStack000000000000003c,*(undefined4 *)(unaff_x29 + -0x60),0);
      *(float *)(unaff_x29 + -4) = fVar2 / fVar3;
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


