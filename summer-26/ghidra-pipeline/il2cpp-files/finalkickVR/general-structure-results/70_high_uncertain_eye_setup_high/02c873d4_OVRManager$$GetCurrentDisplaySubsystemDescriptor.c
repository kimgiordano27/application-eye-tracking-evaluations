/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 02c873d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__GetCurrentDisplaySubsystemDescriptor
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack0000000000000004;
  MethodInfo *in_stack_00000018;
  undefined8 *in_stack_00000028;
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
  undefined8 uStack0000000000000180;
  
  uStack0000000000000180 = *(undefined8 *)(unaff_x29 + -0x30);
  uStack0000000000000164 =
       CylinderGrabSurface_GetStartArcDir_mAFE6D7A01D6FE54ED192BBA1BD1AA588EB35DB08
                 (*(undefined8 *)(unaff_x29 + -0x28),uStack0000000000000180);
  *(undefined8 *)(unaff_x29 + -0x98) = *in_stack_00000028;
  *(undefined4 *)(unaff_x29 + -0x90) = param_3;
  uVar6 = *(undefined4 *)(unaff_x29 + -0x90);
  uStack0000000000000128 = (undefined4)*(undefined8 *)(unaff_x29 + -0x98);
  uStack000000000000012c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x98) >> 0x20);
  uStack0000000000000118 = (undefined4)*(undefined8 *)(unaff_x29 + -0x88);
  uStack000000000000011c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x88) >> 0x20);
  uStack000000000000010c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack0000000000000004 = uStack000000000000010c;
  uStack000000000000016c = param_3;
  fStack0000000000000134 =
       (float)Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline
                        (uStack0000000000000128,uStack000000000000012c,uVar6,uStack0000000000000118,
                         uStack000000000000011c,*(undefined4 *)(unaff_x29 + -0x80),in_stack_00000018
                        );
  uStack0000000000000104 =
       Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline
                 (fStack0000000000000134,360.0,in_stack_00000018);
  *(undefined4 *)(unaff_x29 + -0x9c) = uStack0000000000000104;
  fVar4 = *(float *)(unaff_x29 + -0x9c);
  fStack00000000000000fc =
       (float)CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2
                        (*(undefined8 *)(unaff_x29 + -0x28),in_stack_00000018);
  if (fStack00000000000000fc < fVar4) {
    fVar4 = *(float *)(unaff_x29 + -0x9c);
    fVar3 = (float)CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2
                             (*(undefined8 *)(unaff_x29 + -0x28),0);
    fVar4 = (float)il2cpp_codegen_subtract<float,float>(fVar4,fVar3);
    fVar3 = (float)il2cpp_codegen_subtract<float,float>(360.0,*(float *)(unaff_x29 + -0x9c));
    fVar3 = ABS(fVar3);
    if (fVar3 <= ABS(fVar4)) {
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x90);
    }
    else {
      uVar5 = CylinderGrabSurface_GetEndArcDir_mEA069A838B7F121C310BF18CFEE80E1EB4EFEE6D
                        (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
      *(ulong *)(unaff_x29 + -0x88) = CONCAT44(fVar3,uVar5);
      *(undefined4 *)(unaff_x29 + -0x80) = uVar6;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar6 = *(undefined4 *)(unaff_x29 + -0x70);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar5 = *(undefined4 *)(unaff_x29 + -0x80);
  uStack000000000000008c =
       CylinderGrabSurface_GetRadius_m523316470E324730B6FC6C0C200D1E7A41A5DECE
                 (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30));
  uStack0000000000000068 = (undefined4)uVar2;
  uStack000000000000006c = (undefined4)((ulong)uVar2 >> 0x20);
  uStack0000000000000074 =
       Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                 (uStack0000000000000068,uStack000000000000006c,uVar5,uStack000000000000008c,0);
  uStack0000000000000050 = (undefined4)uVar1;
  uStack0000000000000054 = (undefined4)((ulong)uVar1 >> 0x20);
  uStack000000000000007c = uVar5;
  uVar5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                    (uStack0000000000000050,uStack0000000000000054,uVar6,uStack0000000000000074,
                     uStack000000000000006c,uVar5,0);
  *(ulong *)(unaff_x29 + -0x10) = CONCAT44(uStack0000000000000054,uVar5);
  *(undefined4 *)(unaff_x29 + -8) = uVar6;
  return *(undefined4 *)(unaff_x29 + -0x10);
}


