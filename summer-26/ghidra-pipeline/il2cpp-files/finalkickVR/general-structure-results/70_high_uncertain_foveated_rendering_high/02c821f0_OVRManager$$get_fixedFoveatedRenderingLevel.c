/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 02c821f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  ulong *in_x10;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 in_w11;
  long unaff_x29;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *in_stack_00000028;
  MethodInfo *in_stack_00000030;
  ulong *in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000060;
  ulong *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000080;
  float fStack0000000000000124;
  float fStack000000000000012c;
  float fStack0000000000000134;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000154;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000164;
  undefined4 uStack0000000000000194;
  undefined4 uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001ec;
  undefined4 uStack00000000000001f0;
  undefined4 in_stack_00000388;
  undefined4 in_stack_0000041c;
  undefined4 in_stack_0000053c;
  undefined4 in_stack_000005c8;
  
  *(undefined4 *)(unaff_x29 + -200) = in_w11;
  uVar3 = *in_x10;
  uVar9 = *(undefined4 *)(unaff_x29 + -4);
  uVar4 = *(ulong *)(unaff_x29 + -0x80);
  uVar11 = *(undefined4 *)(unaff_x29 + -0x78);
  uVar5 = *(ulong *)(unaff_x29 + -0x70);
  uVar10 = *(undefined4 *)(unaff_x29 + -0x68);
  uVar1 = *(undefined8 *)(in_x9 + 0x180);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(in_x9 + 0x188);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar5 & 0xffffffff,(int)(uVar5 >> 0x20),uVar10,in_stack_000005c8);
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
            (uVar4 & 0xffffffff,(int)(uVar4 >> 0x20),uVar11,
             (int)*(undefined8 *)((long)in_stack_00000060 + 0x74),
             (int)((ulong)*(undefined8 *)((long)in_stack_00000060 + 0x74) >> 0x20),uVar10,
             in_stack_00000030);
  uVar4 = *(ulong *)((long)in_stack_00000060 + 0x4c);
  uVar5 = *(ulong *)(unaff_x29 + -0xa0);
  uVar10 = *(undefined4 *)(unaff_x29 + -0x98);
  uVar6 = *(ulong *)(unaff_x29 + -0x70);
  uVar12 = *(undefined4 *)(unaff_x29 + -0x68);
  uVar1 = *(undefined8 *)(in_stack_00000040 + 0x180);
  in_stack_00000060[1] = *(undefined8 *)(in_stack_00000040 + 0x188);
  *in_stack_00000060 = uVar1;
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar12,in_stack_0000053c,in_stack_00000030);
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
            (uVar5 & 0xffffffff,(int)(uVar5 >> 0x20),uVar10,(int)in_stack_00000068[0x29],
             (int)(in_stack_00000068[0x29] >> 0x20),uVar12,in_stack_00000030);
  ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F
            (uVar4 & 0xffffffff,(int)(uVar4 >> 0x20),uVar11,(int)in_stack_00000068[0x24],
             (int)(in_stack_00000068[0x24] >> 0x20),uVar10,&stack0x000004b8,*in_stack_00000080);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)((long)in_stack_00000068 + 0x8c) = 0;
  *(undefined8 *)((long)in_stack_00000068 + 0x84) = 0;
  BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E
            (uVar3 & 0xffffffff,uVar1,&stack0x00000450,in_stack_00000030);
  *(ulong *)(unaff_x29 + -0xe0) = in_stack_00000068[0x16];
  *(undefined4 *)(unaff_x29 + -0xd8) = uVar9;
  uVar3 = *in_stack_00000038;
  uVar9 = *(undefined4 *)(unaff_x29 + -4);
  uVar4 = *(ulong *)(unaff_x29 + -0x90);
  uVar11 = *(undefined4 *)(unaff_x29 + -0x88);
  uVar5 = *(ulong *)(unaff_x29 + -0x70);
  uVar10 = *(undefined4 *)(unaff_x29 + -0x68);
  uVar1 = *(undefined8 *)(in_stack_00000040 + 0x180);
  *(undefined8 *)((long)in_stack_00000068 + 0x4c) = *(undefined8 *)(in_stack_00000040 + 0x188);
  *(undefined8 *)((long)in_stack_00000068 + 0x44) = uVar1;
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar5 & 0xffffffff,(int)(uVar5 >> 0x20),uVar10,in_stack_0000041c,in_stack_00000030);
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (uVar4 & 0xffffffff,(int)(uVar4 >> 0x20),uVar11,(int)in_stack_00000068[5],
             (int)(in_stack_00000068[5] >> 0x20),uVar10,in_stack_00000030);
  uVar4 = *in_stack_00000068;
  uVar5 = *(ulong *)(unaff_x29 + -0xb0);
  uVar10 = *(undefined4 *)(unaff_x29 + -0xa8);
  uVar6 = *(ulong *)(unaff_x29 + -0x70);
  uVar12 = *(undefined4 *)(unaff_x29 + -0x68);
  uVar1 = *(undefined8 *)(in_stack_00000040 + 0x180);
  in_stack_00000070[0x1d] = *(undefined8 *)(in_stack_00000040 + 0x188);
  in_stack_00000070[0x1c] = uVar1;
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar12,in_stack_00000388,in_stack_00000030);
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (uVar5 & 0xffffffff,(int)(uVar5 >> 0x20),uVar10,
             (int)*(undefined8 *)((long)in_stack_00000070 + 0xc4),
             (int)((ulong)*(undefined8 *)((long)in_stack_00000070 + 0xc4) >> 0x20),uVar12,
             in_stack_00000030);
  ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F
            (uVar4 & 0xffffffff,(int)(uVar4 >> 0x20),uVar11,
             (int)*(undefined8 *)((long)in_stack_00000070 + 0x9c),
             (int)((ulong)*(undefined8 *)((long)in_stack_00000070 + 0x9c) >> 0x20),uVar10,
             &stack0x00000308,*in_stack_00000080);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
  in_stack_00000070[1] = 0;
  *in_stack_00000070 = 0;
  BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E
            (uVar3 & 0xffffffff,uVar1,&stack0x000002a0,in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)((long)in_stack_00000070 + 0x2c);
  *(undefined4 *)(unaff_x29 + -0xe8) = uVar9;
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
            (*(ulong *)(unaff_x29 + -0xc0) & 0xffffffff,(int)(*(ulong *)(unaff_x29 + -0xc0) >> 0x20)
             ,*(undefined4 *)(unaff_x29 + -0xb8),(int)*in_stack_00000038,
             (int)(*in_stack_00000038 >> 0x20),*(undefined4 *)(unaff_x29 + -4),in_stack_00000030);
  fVar7 = (float)Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                           (in_stack_00000028,in_stack_00000030);
  uStack00000000000001f0 = (undefined4)*in_stack_00000038;
  Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
            (*(ulong *)(unaff_x29 + -0xd0) & 0xffffffff,(int)(*(ulong *)(unaff_x29 + -0xd0) >> 0x20)
             ,*(undefined4 *)(unaff_x29 + -200),uStack00000000000001f0,
             (int)(*in_stack_00000038 >> 0x20),*(undefined4 *)(unaff_x29 + -4),in_stack_00000030);
  uStack00000000000001ec =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                 (in_stack_00000028,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0xf4) = uStack00000000000001ec;
  uVar9 = *(undefined4 *)(unaff_x29 + -0xd8);
  uStack00000000000001ac = (undefined4)(*(ulong *)(unaff_x29 + -0xe0) >> 0x20);
  uStack0000000000000198 = (undefined4)*in_stack_00000038;
  uStack000000000000019c = (undefined4)(*in_stack_00000038 >> 0x20);
  uStack00000000000001b4 =
       Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                 (*(ulong *)(unaff_x29 + -0xe0) & 0xffffffff,uStack00000000000001ac,uVar9,
                  uStack0000000000000198,uStack000000000000019c,*(undefined4 *)(unaff_x29 + -4),
                  in_stack_00000030);
  uStack00000000000001bc = uVar9;
  uStack0000000000000194 =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                 (in_stack_00000028,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0xf8) = uStack0000000000000194;
  uVar9 = *(undefined4 *)(unaff_x29 + -0xe8);
  uStack0000000000000154 = (undefined4)(*(ulong *)(unaff_x29 + -0xf0) >> 0x20);
  uStack0000000000000140 = (undefined4)*in_stack_00000038;
  uStack0000000000000144 = (undefined4)(*in_stack_00000038 >> 0x20);
  uStack000000000000015c =
       Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                 (*(ulong *)(unaff_x29 + -0xf0) & 0xffffffff,uStack0000000000000154,uVar9,
                  uStack0000000000000140,uStack0000000000000144,*(undefined4 *)(unaff_x29 + -4),
                  in_stack_00000030);
  uStack0000000000000164 = uVar9;
  uStack000000000000013c =
       Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline
                 (in_stack_00000028,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0xfc) = uStack000000000000013c;
  fStack0000000000000134 = *(float *)(unaff_x29 + -0xf4);
  fStack000000000000012c = *(float *)(unaff_x29 + -0xfc);
  fVar8 = (float)Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                           (*(float *)(unaff_x29 + -0xf8),fStack000000000000012c,in_stack_00000030);
  fStack0000000000000124 =
       (float)Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                        (fStack0000000000000134,fVar8,in_stack_00000030);
  uVar9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline
                    (fVar7,fStack0000000000000124,in_stack_00000030);
  *(undefined4 *)(unaff_x29 + -0x100) = uVar9;
  if (fVar7 == *(float *)(unaff_x29 + -0x100)) {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar9 = *(undefined4 *)(unaff_x29 + -0xb8);
    *puVar2 = *(undefined8 *)(unaff_x29 + -0xc0);
    *(undefined4 *)(puVar2 + 1) = uVar9;
    **(undefined4 **)(unaff_x29 + -0x28) = 0;
  }
  else if (*(float *)(unaff_x29 + -0xf4) == *(float *)(unaff_x29 + -0x100)) {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar9 = *(undefined4 *)(unaff_x29 + -200);
    *puVar2 = *(undefined8 *)(unaff_x29 + -0xd0);
    *(undefined4 *)(puVar2 + 1) = uVar9;
    **(undefined4 **)(unaff_x29 + -0x28) = 0x43340000;
  }
  else if (*(float *)(unaff_x29 + -0xf8) == *(float *)(unaff_x29 + -0x100)) {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar9 = *(undefined4 *)(unaff_x29 + -0xd8);
    *puVar2 = *(undefined8 *)(unaff_x29 + -0xe0);
    *(undefined4 *)(puVar2 + 1) = uVar9;
    **(undefined4 **)(unaff_x29 + -0x28) = 0x42b40000;
  }
  else {
    puVar2 = *(undefined8 **)(unaff_x29 + -0x20);
    uVar9 = *(undefined4 *)(unaff_x29 + -0xe8);
    *puVar2 = *(undefined8 *)(unaff_x29 + -0xf0);
    *(undefined4 *)(puVar2 + 1) = uVar9;
    **(undefined4 **)(unaff_x29 + -0x28) = 0xc2b40000;
  }
  return;
}


