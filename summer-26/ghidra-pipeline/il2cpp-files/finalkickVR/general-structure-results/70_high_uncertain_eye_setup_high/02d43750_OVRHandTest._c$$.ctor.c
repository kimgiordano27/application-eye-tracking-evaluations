/*
FUNCTION_NAME: OVRHandTest.<>c$$.ctor
ENTRY_POINT: 02d43750
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRHandTest_<>c___ctor(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *pEVar4;
  long unaff_x29;
  float fVar5;
  undefined4 uVar6;
  float fStack000000000000000c;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  int iStack000000000000005c;
  undefined4 uStack000000000000006c;
  int iStack000000000000007c;
  undefined4 uStack000000000000008c;
  int iStack000000000000009c;
  undefined4 uStack00000000000000ac;
  int iStack00000000000000bc;
  byte bStack00000000000000cb;
  float fStack00000000000000cc;
  int iStack00000000000000dc;
  float fStack00000000000000ec;
  int iStack00000000000000fc;
  float fStack000000000000010c;
  int iStack000000000000011c;
  float fStack000000000000012c;
  int iStack000000000000013c;
  float fStack000000000000014c;
  int iStack000000000000015c;
  float fStack000000000000016c;
  int iStack000000000000017c;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001c8;
  float in_stack_000001f8;
  float in_stack_00000228;
  float in_stack_00000284;
  long in_stack_00000298;
  long in_stack_000002a0;
  float in_stack_000002d0;
  long in_stack_000002e8;
  long in_stack_000002f0;
  float in_stack_0000032c;
  long in_stack_00000338;
  long in_stack_00000340;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  bVar2 = OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D
                    (*(undefined4 *)(unaff_x29 + -0x94),unaff_x29 + -0x38,in_stack_00000028);
  *(byte *)(unaff_x29 + -0x95) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x95) & 1) == 0) {
    uVar6 = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    OVRPlugin_GetEyeFrustum_m12BCC5C8828CF638B1BC1CF2A08102D27F81D702(uVar6,0);
    in_stack_00000038[0x33] = in_stack_00000038[0x31];
    in_stack_00000038[0x32] = in_stack_00000038[0x30];
    in_stack_00000038[0x67] = in_stack_00000038[0x33];
    in_stack_00000038[0x66] = in_stack_00000038[0x32];
    in_stack_00000038[0x2f] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x2f]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x2f],(long)iVar1);
    in_stack_00000038[0x2d] = lVar3 + 0x10;
    in_stack_00000038[0x2b] = in_stack_00000038[0x67];
    in_stack_00000038[0x2a] = in_stack_00000038[0x66];
    fVar5 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_00000228);
    uVar6 = il2cpp_codegen_multiply<float,float>(fVar5,0.5);
    *(undefined4 *)(in_stack_00000038[0x2d] + 8) = uVar6;
    in_stack_00000038[0x28] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x28]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x28],(long)iVar1);
    in_stack_00000038[0x26] = lVar3 + 0x10;
    in_stack_00000038[0x25] = in_stack_00000038[0x67];
    in_stack_00000038[0x24] = in_stack_00000038[0x66];
    fVar5 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_000001f8);
    uVar6 = il2cpp_codegen_multiply<float,float>(fVar5,0.5);
    *(undefined4 *)(in_stack_00000038[0x26] + 0xc) = uVar6;
    in_stack_00000038[0x22] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x22]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x22],(long)iVar1);
    in_stack_00000038[0x20] = lVar3 + 0x10;
    in_stack_00000038[0x1f] = in_stack_00000038[0x67];
    in_stack_00000038[0x1e] = in_stack_00000038[0x66];
    fVar5 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_000001c8._4_4_);
    uVar6 = il2cpp_codegen_multiply<float,float>(fVar5,0.5);
    *(undefined4 *)in_stack_00000038[0x20] = uVar6;
    in_stack_00000038[0x1c] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x1c]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x1c],(long)iVar1);
    in_stack_00000038[0x1a] = lVar3 + 0x10;
    in_stack_00000038[0x19] = in_stack_00000038[0x67];
    in_stack_00000038[0x18] = in_stack_00000038[0x66];
    fVar5 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_00000198._4_4_);
    uVar6 = il2cpp_codegen_multiply<float,float>(fVar5,0.5);
    *(undefined4 *)(in_stack_00000038[0x1a] + 4) = uVar6;
  }
  else {
    in_stack_00000038[0x5c] = *(long *)(in_stack_00000030[6] + 0x18);
    *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x5c]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x5c],(long)*(int *)(unaff_x29 + -0xa4));
    in_stack_00000038[0x5a] = lVar3 + 0x10;
    lVar3 = *in_stack_00000030;
    in_stack_00000038[0x57] = in_stack_00000030[1];
    in_stack_00000038[0x56] = lVar3;
    in_stack_00000038[0x58] = in_stack_00000030[2];
    lVar3 = *(long *)(unaff_x29 + -200);
    in_stack_00000038[0x55] = *(long *)(unaff_x29 + -0xc0);
    in_stack_00000038[0x54] = lVar3;
    *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0xd8);
    fVar5 = atanf(*(float *)(unaff_x29 + -0xe4));
    *(float *)(unaff_x29 + -0xe8) = fVar5;
    uVar6 = il2cpp_codegen_multiply<float,float>(57.29578,*(float *)(unaff_x29 + -0xe8));
    *(undefined4 *)(in_stack_00000038[0x5a] + 8) = uVar6;
    in_stack_00000038[0x52] = *(long *)(in_stack_00000030[6] + 0x18);
    *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x52]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x52],(long)*(int *)(unaff_x29 + -0xf4));
    in_stack_00000038[0x50] = lVar3 + 0x10;
    lVar3 = *in_stack_00000030;
    in_stack_00000038[0x4d] = in_stack_00000030[1];
    in_stack_00000038[0x4c] = lVar3;
    in_stack_00000038[0x4e] = in_stack_00000030[2];
    in_stack_00000038[0x4b] = in_stack_00000340;
    in_stack_00000038[0x4a] = in_stack_00000338;
    fVar5 = atanf(in_stack_0000032c);
    uVar6 = il2cpp_codegen_multiply<float,float>(57.29578,fVar5);
    *(undefined4 *)(in_stack_00000038[0x50] + 0xc) = uVar6;
    in_stack_00000038[0x48] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x48]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x48],(long)iVar1);
    in_stack_00000038[0x46] = lVar3 + 0x10;
    lVar3 = *in_stack_00000030;
    in_stack_00000038[0x43] = in_stack_00000030[1];
    in_stack_00000038[0x42] = lVar3;
    in_stack_00000038[0x44] = in_stack_00000030[2];
    in_stack_00000038[0x41] = in_stack_000002f0;
    in_stack_00000038[0x40] = in_stack_000002e8;
    fVar5 = atanf(in_stack_000002d0);
    uVar6 = il2cpp_codegen_multiply<float,float>(57.29578,fVar5);
    *(undefined4 *)in_stack_00000038[0x46] = uVar6;
    in_stack_00000038[0x3e] = *(long *)(in_stack_00000030[6] + 0x18);
    iVar1 = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x3e]);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x3e],(long)iVar1);
    in_stack_00000038[0x3c] = lVar3 + 0x10;
    lVar3 = *in_stack_00000030;
    in_stack_00000038[0x39] = in_stack_00000030[1];
    in_stack_00000038[0x38] = lVar3;
    in_stack_00000038[0x3a] = in_stack_00000030[2];
    in_stack_00000038[0x37] = in_stack_000002a0;
    in_stack_00000038[0x36] = in_stack_00000298;
    fVar5 = atanf(in_stack_00000284);
    uVar6 = il2cpp_codegen_multiply<float,float>(57.29578,fVar5);
    *(undefined4 *)(in_stack_00000038[0x3c] + 4) = uVar6;
  }
  in_stack_00000038[0x16] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack000000000000017c = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[0x16]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[0x16],(long)iStack000000000000017c);
  in_stack_00000038[0x14] = lVar3 + 0x10;
  fStack000000000000016c = *(float *)(in_stack_00000038[0x14] + 8);
  in_stack_00000038[0x12] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack000000000000015c = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[0x12]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[0x12],(long)iStack000000000000015c);
  in_stack_00000038[0x10] = lVar3 + 0x10;
  fStack000000000000014c = *(float *)(in_stack_00000038[0x10] + 0xc);
  uVar6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                    (fStack000000000000016c,fStack000000000000014c,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x3c) = uVar6;
  in_stack_00000038[0xe] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack000000000000013c = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[0xe]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[0xe],(long)iStack000000000000013c);
  in_stack_00000038[0xc] = lVar3 + 0x10;
  fStack000000000000012c = *(float *)in_stack_00000038[0xc];
  in_stack_00000038[10] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack000000000000011c = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[10]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[10],(long)iStack000000000000011c);
  in_stack_00000038[8] = lVar3 + 0x10;
  fStack000000000000010c = *(float *)(in_stack_00000038[8] + 4);
  uVar6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                    (fStack000000000000012c,fStack000000000000010c,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x40) = uVar6;
  in_stack_00000038[6] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack00000000000000fc = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[6]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[6],(long)iStack00000000000000fc);
  in_stack_00000038[4] = lVar3 + 8;
  fStack00000000000000ec = *(float *)(unaff_x29 + -0x3c);
  fStack000000000000000c = 2.0;
  uVar6 = il2cpp_codegen_multiply<float,float>(fStack00000000000000ec,2.0);
  *(undefined4 *)in_stack_00000038[4] = uVar6;
  in_stack_00000038[2] = *(long *)(in_stack_00000030[6] + 0x18);
  iStack00000000000000dc = *(int *)(unaff_x29 + -0xc);
  NullCheck((void *)in_stack_00000038[2]);
  lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                    ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                     in_stack_00000038[2],(long)iStack00000000000000dc);
  *in_stack_00000038 = lVar3 + 8;
  fStack00000000000000cc = *(float *)(unaff_x29 + -0x40);
  uVar6 = il2cpp_codegen_multiply<float,float>(fStack00000000000000cc,fStack000000000000000c);
  *(undefined4 *)(*in_stack_00000038 + 4) = uVar6;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
  bStack00000000000000cb =
       OVRPlugin_get_AsymmetricFovEnabled_mB5652400E43010E2F075F27AF21835154F9916BB(0);
  bStack00000000000000cb = bStack00000000000000cb & 1;
  if (bStack00000000000000cb == 0) {
    pEVar4 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
              (in_stack_00000030[6] + 0x18);
    iStack00000000000000bc = *(int *)(unaff_x29 + -0xc);
    NullCheck(pEVar4);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar4,(long)iStack00000000000000bc);
    uStack00000000000000ac = *(undefined4 *)(unaff_x29 + -0x3c);
    *(undefined4 *)(lVar3 + 0x18) = uStack00000000000000ac;
    pEVar4 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
              (in_stack_00000030[6] + 0x18);
    iStack000000000000009c = *(int *)(unaff_x29 + -0xc);
    NullCheck(pEVar4);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar4,(long)iStack000000000000009c);
    uStack000000000000008c = *(undefined4 *)(unaff_x29 + -0x3c);
    *(undefined4 *)(lVar3 + 0x1c) = uStack000000000000008c;
    pEVar4 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
              (in_stack_00000030[6] + 0x18);
    iStack000000000000007c = *(int *)(unaff_x29 + -0xc);
    NullCheck(pEVar4);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar4,(long)iStack000000000000007c);
    uStack000000000000006c = *(undefined4 *)(unaff_x29 + -0x40);
    *(undefined4 *)(lVar3 + 0x10) = uStack000000000000006c;
    pEVar4 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
              (in_stack_00000030[6] + 0x18);
    iStack000000000000005c = *(int *)(unaff_x29 + -0xc);
    NullCheck(pEVar4);
    lVar3 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar4,(long)iStack000000000000005c);
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(unaff_x29 + -0x40);
  }
  return;
}


