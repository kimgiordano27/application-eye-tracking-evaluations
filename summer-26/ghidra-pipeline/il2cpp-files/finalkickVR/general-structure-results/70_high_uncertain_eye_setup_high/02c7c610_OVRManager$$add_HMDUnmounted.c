/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 02c7c610
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


undefined4 OVRManager__add_HMDUnmounted(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 in_w8;
  long unaff_x29;
  float fVar7;
  float fVar8;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  float fStack000000000000007c;
  float fStack0000000000000084;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  
  uStack00000000000000c0 = *(undefined8 *)(unaff_x29 + -0x78);
  uStack0000000000000008 = *(undefined4 *)(unaff_x29 + -0x70);
  _uStack00000000000000b0 = in_stack_00000130;
  uVar5 = _uStack00000000000000b0;
  uStack00000000000000b8 = in_stack_00000138;
  _uStack00000000000000a0 = in_stack_000000d0;
  uVar2 = _uStack00000000000000a0;
  uStack00000000000000b0 = (undefined4)in_stack_00000130;
  uVar4 = uStack00000000000000b0;
  uStack00000000000000b4 = (undefined4)((ulong)in_stack_00000130 >> 0x20);
  uVar6 = uStack00000000000000b4;
  uStack00000000000000a0 = (undefined4)in_stack_000000d0;
  uVar1 = uStack00000000000000a0;
  uStack00000000000000a4 = (undefined4)((ulong)in_stack_000000d0 >> 0x20);
  uVar3 = uStack00000000000000a4;
  uStack0000000000000090 = (undefined4)uStack00000000000000c0;
  uStack0000000000000094 = (undefined4)((ulong)uStack00000000000000c0 >> 0x20);
  uStack0000000000000000 = uStack0000000000000090;
  uStack0000000000000004 = uStack0000000000000094;
  _uStack0000000000000090 = uStack00000000000000c0;
  uStack0000000000000098 = uStack0000000000000008;
  _uStack00000000000000a0 = uVar2;
  _uStack00000000000000b0 = uVar5;
  uStack00000000000000c8 = uStack0000000000000008;
  uStack00000000000000bc =
       Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                 (uVar4,uVar6,in_stack_00000138,uVar1,uVar3,in_w8);
  *(undefined4 *)(unaff_x29 + -0x80) = uStack00000000000000bc;
  fStack000000000000008c = *(float *)(unaff_x29 + -0x7c);
  if ((0.0 <= fStack000000000000008c) || (0.0 <= *(float *)(unaff_x29 + -0x80))) {
    fStack0000000000000084 = *(float *)(unaff_x29 + -0x7c);
    if ((fStack0000000000000084 <= 0.0) || (*(float *)(unaff_x29 + -0x80) <= 0.0)) {
      fStack000000000000007c = *(float *)(unaff_x29 + -0x7c);
      fVar7 = ABS(fStack000000000000007c);
      uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
      uStack0000000000000038 = (undefined4)*(undefined8 *)(unaff_x29 + -0x68);
      uStack000000000000003c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
      fVar8 = (float)Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline
                               (uStack0000000000000048,uStack000000000000004c,
                                *(undefined4 *)(unaff_x29 + -0x50),uStack0000000000000038,
                                uStack000000000000003c,*(undefined4 *)(unaff_x29 + -0x60),0);
      *(float *)(unaff_x29 + -4) = fVar7 / fVar8;
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


