/*
FUNCTION_NAME: OVRManager$$SetCurrentXRDevice
ENTRY_POINT: 02c86fc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__SetCurrentXRDevice(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uStack0000000000000004;
  undefined8 *in_stack_00000028;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *in_stack_00000030;
  MethodInfo *in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined4 uStack000000000000007c;
  undefined4 uStack000000000000008c;
  float fStack00000000000000fc;
  undefined4 uStack0000000000000104;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  float fStack0000000000000134;
  undefined4 uStack0000000000000164;
  undefined4 uStack000000000000016c;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000194;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001c4;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001f0;
  undefined4 in_stack_000003b0;
  
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline();
  Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline
            ((int)in_stack_00000028[0x4a],(int)((ulong)in_stack_00000028[0x4a] >> 0x20),
             in_stack_000003b0,(int)*(undefined8 *)(unaff_x29 + -0x58),
             (int)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20),
             *(undefined4 *)(unaff_x29 + -0x50),in_stack_00000038);
  *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000028[0x41];
  *(undefined4 *)(unaff_x29 + -0x60) = in_stack_000003b0;
  uVar3 = CylinderGrabSurface_GetHeight_mCAF195A8E0C70BDB40F4964B2D5372853500187D
                    (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),
                     in_stack_00000038);
  *(undefined4 *)(unaff_x29 + -0x6c) = uVar3;
  fVar4 = (float)Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline
                           (in_stack_00000030,in_stack_00000038);
  if (*(float *)(unaff_x29 + -0x6c) < fVar4) {
    Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline
              ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0x68),
               (MethodInfo *)0x0);
    Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
              ((int)in_stack_00000028[0x38],(int)((ulong)in_stack_00000028[0x38] >> 0x20),
               in_stack_000003b0,*(undefined4 *)(unaff_x29 + -0x6c),0);
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000028[0x34];
    *(undefined4 *)(unaff_x29 + -0x60) = in_stack_000003b0;
  }
  uVar3 = *(undefined4 *)(unaff_x29 + -0x60);
  fVar4 = (float)Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline
                           ((int)*(undefined8 *)(unaff_x29 + -0x68),
                            (int)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20),uVar3,
                            (int)*(undefined8 *)(unaff_x29 + -0x58),
                            (int)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20),
                            *(undefined4 *)(unaff_x29 + -0x50),0);
  if (fVar4 < 0.0) {
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000028[0x27];
    *(undefined4 *)(unaff_x29 + -0x60) = uVar3;
  }
  uVar3 = *(undefined4 *)(unaff_x29 + -0x40);
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            ((int)*(undefined8 *)(unaff_x29 + -0x48),
             (int)((ulong)*(undefined8 *)(unaff_x29 + -0x48) >> 0x20),uVar3,
             (int)*(undefined8 *)(unaff_x29 + -0x68),
             (int)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20),
             *(undefined4 *)(unaff_x29 + -0x60));
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000028[0x20];
  *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
  uVar3 = *(undefined4 *)(unaff_x29 + -0x14);
  uStack00000000000001f0 = (undefined4)*(undefined8 *)(unaff_x29 + -0x78);
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
            ((int)in_stack_00000028[0x6c],(int)((ulong)in_stack_00000028[0x6c] >> 0x20),uVar3,
             uStack00000000000001f0,(int)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20),
             *(undefined4 *)(unaff_x29 + -0x70),0);
  uStack00000000000001b8 = (undefined4)in_stack_00000028[0x15];
  uStack00000000000001bc = (undefined4)((ulong)in_stack_00000028[0x15] >> 0x20);
  uStack00000000000001a8 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
  uStack00000000000001ac = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack00000000000001c4 =
       Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline
                 (uStack00000000000001b8,uStack00000000000001bc,uVar3,uStack00000000000001a8,
                  uStack00000000000001ac,*(undefined4 *)(unaff_x29 + -0x50),0);
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000028[0xc];
  *(undefined4 *)(unaff_x29 + -0xa0) = uVar3;
  uStack00000000000001cc = uVar3;
  uStack000000000000018c =
       Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline
                 ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)(unaff_x29 + -0xa8),
                  (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000028[5];
  *(undefined4 *)(unaff_x29 + -0x80) = uVar3;
  uStack0000000000000194 = uVar3;
  uStack0000000000000164 =
       CylinderGrabSurface_GetStartArcDir_mAFE6D7A01D6FE54ED192BBA1BD1AA588EB35DB08
                 (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
  *(undefined8 *)(unaff_x29 + -0x98) = *in_stack_00000028;
  *(undefined4 *)(unaff_x29 + -0x90) = uVar3;
  uVar6 = *(undefined4 *)(unaff_x29 + -0x90);
  uStack0000000000000128 = (undefined4)*(undefined8 *)(unaff_x29 + -0x98);
  uStack000000000000012c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x98) >> 0x20);
  uStack0000000000000118 = (undefined4)*(undefined8 *)(unaff_x29 + -0x88);
  uStack000000000000011c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x88) >> 0x20);
  uStack000000000000010c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack0000000000000004 = uStack000000000000010c;
  uStack000000000000016c = uVar3;
  fStack0000000000000134 =
       (float)Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                        (uStack0000000000000128,uStack000000000000012c,uVar6,uStack0000000000000118,
                         uStack000000000000011c,*(undefined4 *)(unaff_x29 + -0x80),0);
  uStack0000000000000104 =
       Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline
                 (fStack0000000000000134,360.0,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x9c) = uStack0000000000000104;
  fVar4 = *(float *)(unaff_x29 + -0x9c);
  fStack00000000000000fc =
       (float)CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2
                        (*(undefined8 *)(unaff_x29 + -0x28),0);
  if (fStack00000000000000fc < fVar4) {
    fVar4 = *(float *)(unaff_x29 + -0x9c);
    fVar5 = (float)CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2
                             (*(undefined8 *)(unaff_x29 + -0x28),0);
    fVar4 = (float)il2cpp_codegen_subtract<float,float>(fVar4,fVar5);
    fVar5 = (float)il2cpp_codegen_subtract<float,float>(360.0,*(float *)(unaff_x29 + -0x9c));
    fVar5 = ABS(fVar5);
    if (fVar5 <= ABS(fVar4)) {
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x90);
    }
    else {
      uVar3 = CylinderGrabSurface_GetEndArcDir_mEA069A838B7F121C310BF18CFEE80E1EB4EFEE6D
                        (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
      *(ulong *)(unaff_x29 + -0x88) = CONCAT44(fVar5,uVar3);
      *(undefined4 *)(unaff_x29 + -0x80) = uVar6;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar3 = *(undefined4 *)(unaff_x29 + -0x70);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar6 = *(undefined4 *)(unaff_x29 + -0x80);
  uStack000000000000008c =
       CylinderGrabSurface_GetRadius_m523316470E324730B6FC6C0C200D1E7A41A5DECE
                 (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30));
  uStack0000000000000068 = (undefined4)uVar2;
  uStack000000000000006c = (undefined4)((ulong)uVar2 >> 0x20);
  uStack0000000000000074 =
       Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                 (uStack0000000000000068,uStack000000000000006c,uVar6,uStack000000000000008c,0);
  uStack0000000000000050 = (undefined4)uVar1;
  uStack0000000000000054 = (undefined4)((ulong)uVar1 >> 0x20);
  uStack000000000000007c = uVar6;
  uVar6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                    (uStack0000000000000050,uStack0000000000000054,uVar3,uStack0000000000000074,
                     uStack000000000000006c,uVar6,0);
  *(ulong *)(unaff_x29 + -0x10) = CONCAT44(uStack0000000000000054,uVar6);
  *(undefined4 *)(unaff_x29 + -8) = uVar3;
  return *(undefined4 *)(unaff_x29 + -0x10);
}


