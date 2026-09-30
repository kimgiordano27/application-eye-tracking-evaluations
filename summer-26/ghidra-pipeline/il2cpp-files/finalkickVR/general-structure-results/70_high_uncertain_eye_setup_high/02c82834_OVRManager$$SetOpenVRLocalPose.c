/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 02c82834
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose
               (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *param_1,MethodInfo *param_2)

{
  undefined8 *puVar1;
  long unaff_x29;
  float fVar2;
  undefined4 uVar3;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *in_stack_00000028;
  MethodInfo *in_stack_00000030;
  undefined8 *in_stack_00000038;
  float fStack0000000000000124;
  float fStack000000000000012c;
  float fStack0000000000000134;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000164;
  undefined4 uStack0000000000000194;
  undefined4 uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001ec;
  float in_stack_00000244;
  
  uStack00000000000001ec =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(param_1,param_2);
  *(undefined4 *)(unaff_x29 + -0xf4) = uStack00000000000001ec;
  uVar3 = *(undefined4 *)(unaff_x29 + -0xd8);
  uStack00000000000001a8 = (undefined4)*(undefined8 *)(unaff_x29 + -0xe0);
  uStack00000000000001ac = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0xe0) >> 0x20);
  uStack0000000000000198 = (undefined4)*in_stack_00000038;
  uStack000000000000019c = (undefined4)((ulong)*in_stack_00000038 >> 0x20);
  uStack00000000000001b4 =
       Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                 (uStack00000000000001a8,uStack00000000000001ac,uVar3,uStack0000000000000198,
                  uStack000000000000019c,*(undefined4 *)(unaff_x29 + -4),in_stack_00000030);
  uStack00000000000001bc = uVar3;
  uStack0000000000000194 =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                 (in_stack_00000028,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0xf8) = uStack0000000000000194;
  uVar3 = *(undefined4 *)(unaff_x29 + -0xe8);
  uStack0000000000000150 = (undefined4)*(undefined8 *)(unaff_x29 + -0xf0);
  uStack0000000000000154 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0xf0) >> 0x20);
  uStack0000000000000140 = (undefined4)*in_stack_00000038;
  uStack0000000000000144 = (undefined4)((ulong)*in_stack_00000038 >> 0x20);
  uStack000000000000015c =
       Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                 (uStack0000000000000150,uStack0000000000000154,uVar3,uStack0000000000000140,
                  uStack0000000000000144,*(undefined4 *)(unaff_x29 + -4),in_stack_00000030);
  uStack0000000000000164 = uVar3;
  uStack000000000000013c =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                 (in_stack_00000028,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0xfc) = uStack000000000000013c;
  fStack0000000000000134 = *(float *)(unaff_x29 + -0xf4);
  fStack000000000000012c = *(float *)(unaff_x29 + -0xfc);
  fVar2 = (float)Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                           (*(float *)(unaff_x29 + -0xf8),fStack000000000000012c,in_stack_00000030);
  fStack0000000000000124 =
       (float)Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                        (fStack0000000000000134,fVar2,in_stack_00000030);
  uVar3 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                    (in_stack_00000244,fStack0000000000000124,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x100) = uVar3;
  if (in_stack_00000244 == *(float *)(unaff_x29 + -0x100)) {
    puVar1 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar3 = *(undefined4 *)(unaff_x29 + -0xb8);
    *puVar1 = *(undefined8 *)(unaff_x29 + -0xc0);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    **(undefined4 **)(unaff_x29 + -0x28) = 0;
  }
  else if (*(float *)(unaff_x29 + -0xf4) == *(float *)(unaff_x29 + -0x100)) {
    puVar1 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar3 = *(undefined4 *)(unaff_x29 + -200);
    *puVar1 = *(undefined8 *)(unaff_x29 + -0xd0);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    **(undefined4 **)(unaff_x29 + -0x28) = 0x43340000;
  }
  else if (*(float *)(unaff_x29 + -0xf8) == *(float *)(unaff_x29 + -0x100)) {
    puVar1 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar3 = *(undefined4 *)(unaff_x29 + -0xd8);
    *puVar1 = *(undefined8 *)(unaff_x29 + -0xe0);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    **(undefined4 **)(unaff_x29 + -0x28) = 0x42b40000;
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar3 = *(undefined4 *)(unaff_x29 + -0xe8);
    *puVar1 = *(undefined8 *)(unaff_x29 + -0xf0);
    *(undefined4 *)(puVar1 + 1) = uVar3;
    **(undefined4 **)(unaff_x29 + -0x28) = 0xc2b40000;
  }
  return;
}


