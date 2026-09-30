/*
FUNCTION_NAME: OVRHandTest.BoolMonitor.BoolGenerator$$Invoke
ENTRY_POINT: 02d435f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRHandTest_BoolMonitor_BoolGenerator__Invoke(ulong *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *pEVar7;
  long unaff_x29;
  float fVar8;
  float fStack000000000000000c;
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
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  OVRDisplay_ConfigureEyeDesc_mF7E1485877F8A30F23C46141A2AC98AC6C60BC71::s_Il2CppMethodInitialized =
       1;
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  in_stack_00000038[0x69] = 0;
  in_stack_00000038[0x6a] = 0;
  in_stack_00000038[0x6b] = 0;
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  *(undefined4 *)(unaff_x29 + -0x40) = 0;
  in_stack_00000038[0x66] = 0;
  in_stack_00000038[0x67] = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  *(byte *)(unaff_x29 + -0x51) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x51) & 1) != 0) {
    uVar3 = XRSettings_get_eyeTextureWidth_m3B18AF3F3382398E2A818B2B01AA1FE90FEB3AAF();
    *(undefined4 *)(unaff_x29 + -0x58) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0x58);
    uVar3 = XRSettings_get_eyeTextureHeight_mCF4B2EC6851A8B8A8C4E6FC085A621B3166DB67A(0);
    *(undefined4 *)(unaff_x29 + -0x5c) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x5c);
    in_stack_00000038[99] = *(long *)(in_stack_00000030[6] + 0x18);
    *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[99]);
    pvVar4 = (void *)EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                               ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                                in_stack_00000038[99],(long)*(int *)(unaff_x29 + -0x6c));
    il2cpp_codegen_initobj(pvVar4,0x20);
    in_stack_00000038[0x61] = *(long *)(in_stack_00000030[6] + 0x18);
    *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x61]);
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x1c);
    *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x20);
    in_stack_00000038[0x5e] = 0;
    Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
              ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)(unaff_x29 + -0x90),
               (float)*(int *)(unaff_x29 + -0x80),(float)*(int *)(unaff_x29 + -0x84),
               (MethodInfo *)0x0);
    plVar5 = (long *)EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                               ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                                in_stack_00000038[0x61],(long)*(int *)(unaff_x29 + -0x7c));
    *plVar5 = in_stack_00000038[0x5e];
    *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    bVar2 = OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D
                      (*(undefined4 *)(unaff_x29 + -0x94),unaff_x29 + -0x38,0);
    *(byte *)(unaff_x29 + -0x95) = bVar2 & 1;
    if ((*(byte *)(unaff_x29 + -0x95) & 1) == 0) {
      uVar3 = *(undefined4 *)(unaff_x29 + -0xc);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      OVRPlugin_GetEyeFrustum_m12BCC5C8828CF638B1BC1CF2A08102D27F81D702(uVar3,0);
      in_stack_00000038[0x33] = in_stack_00000038[0x31];
      in_stack_00000038[0x32] = in_stack_00000038[0x30];
      in_stack_00000038[0x67] = in_stack_00000038[0x33];
      in_stack_00000038[0x66] = in_stack_00000038[0x32];
      in_stack_00000038[0x2f] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x2f]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x2f],(long)iVar1);
      in_stack_00000038[0x2d] = lVar6 + 0x10;
      in_stack_00000038[0x2b] = in_stack_00000038[0x67];
      in_stack_00000038[0x2a] = in_stack_00000038[0x66];
      fVar8 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_00000228);
      uVar3 = il2cpp_codegen_multiply<float,float>(fVar8,0.5);
      *(undefined4 *)(in_stack_00000038[0x2d] + 8) = uVar3;
      in_stack_00000038[0x28] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x28]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x28],(long)iVar1);
      in_stack_00000038[0x26] = lVar6 + 0x10;
      in_stack_00000038[0x25] = in_stack_00000038[0x67];
      in_stack_00000038[0x24] = in_stack_00000038[0x66];
      fVar8 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_000001f8);
      uVar3 = il2cpp_codegen_multiply<float,float>(fVar8,0.5);
      *(undefined4 *)(in_stack_00000038[0x26] + 0xc) = uVar3;
      in_stack_00000038[0x22] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x22]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x22],(long)iVar1);
      in_stack_00000038[0x20] = lVar6 + 0x10;
      in_stack_00000038[0x1f] = in_stack_00000038[0x67];
      in_stack_00000038[0x1e] = in_stack_00000038[0x66];
      fVar8 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_000001c8._4_4_);
      uVar3 = il2cpp_codegen_multiply<float,float>(fVar8,0.5);
      *(undefined4 *)in_stack_00000038[0x20] = uVar3;
      in_stack_00000038[0x1c] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x1c]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x1c],(long)iVar1);
      in_stack_00000038[0x1a] = lVar6 + 0x10;
      in_stack_00000038[0x19] = in_stack_00000038[0x67];
      in_stack_00000038[0x18] = in_stack_00000038[0x66];
      fVar8 = (float)il2cpp_codegen_multiply<float,float>(57.29578,in_stack_00000198._4_4_);
      uVar3 = il2cpp_codegen_multiply<float,float>(fVar8,0.5);
      *(undefined4 *)(in_stack_00000038[0x1a] + 4) = uVar3;
    }
    else {
      in_stack_00000038[0x5c] = *(long *)(in_stack_00000030[6] + 0x18);
      *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x5c]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x5c],(long)*(int *)(unaff_x29 + -0xa4));
      in_stack_00000038[0x5a] = lVar6 + 0x10;
      lVar6 = *in_stack_00000030;
      in_stack_00000038[0x57] = in_stack_00000030[1];
      in_stack_00000038[0x56] = lVar6;
      in_stack_00000038[0x58] = in_stack_00000030[2];
      lVar6 = *(long *)(unaff_x29 + -200);
      in_stack_00000038[0x55] = *(long *)(unaff_x29 + -0xc0);
      in_stack_00000038[0x54] = lVar6;
      *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0xd8);
      fVar8 = atanf(*(float *)(unaff_x29 + -0xe4));
      *(float *)(unaff_x29 + -0xe8) = fVar8;
      uVar3 = il2cpp_codegen_multiply<float,float>(57.29578,*(float *)(unaff_x29 + -0xe8));
      *(undefined4 *)(in_stack_00000038[0x5a] + 8) = uVar3;
      in_stack_00000038[0x52] = *(long *)(in_stack_00000030[6] + 0x18);
      *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x52]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x52],(long)*(int *)(unaff_x29 + -0xf4));
      in_stack_00000038[0x50] = lVar6 + 0x10;
      lVar6 = *in_stack_00000030;
      in_stack_00000038[0x4d] = in_stack_00000030[1];
      in_stack_00000038[0x4c] = lVar6;
      in_stack_00000038[0x4e] = in_stack_00000030[2];
      in_stack_00000038[0x4b] = in_stack_00000340;
      in_stack_00000038[0x4a] = in_stack_00000338;
      fVar8 = atanf(in_stack_0000032c);
      uVar3 = il2cpp_codegen_multiply<float,float>(57.29578,fVar8);
      *(undefined4 *)(in_stack_00000038[0x50] + 0xc) = uVar3;
      in_stack_00000038[0x48] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x48]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x48],(long)iVar1);
      in_stack_00000038[0x46] = lVar6 + 0x10;
      lVar6 = *in_stack_00000030;
      in_stack_00000038[0x43] = in_stack_00000030[1];
      in_stack_00000038[0x42] = lVar6;
      in_stack_00000038[0x44] = in_stack_00000030[2];
      in_stack_00000038[0x41] = in_stack_000002f0;
      in_stack_00000038[0x40] = in_stack_000002e8;
      fVar8 = atanf(in_stack_000002d0);
      uVar3 = il2cpp_codegen_multiply<float,float>(57.29578,fVar8);
      *(undefined4 *)in_stack_00000038[0x46] = uVar3;
      in_stack_00000038[0x3e] = *(long *)(in_stack_00000030[6] + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0xc);
      NullCheck((void *)in_stack_00000038[0x3e]);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                         in_stack_00000038[0x3e],(long)iVar1);
      in_stack_00000038[0x3c] = lVar6 + 0x10;
      lVar6 = *in_stack_00000030;
      in_stack_00000038[0x39] = in_stack_00000030[1];
      in_stack_00000038[0x38] = lVar6;
      in_stack_00000038[0x3a] = in_stack_00000030[2];
      in_stack_00000038[0x37] = in_stack_000002a0;
      in_stack_00000038[0x36] = in_stack_00000298;
      fVar8 = atanf(in_stack_00000284);
      uVar3 = il2cpp_codegen_multiply<float,float>(57.29578,fVar8);
      *(undefined4 *)(in_stack_00000038[0x3c] + 4) = uVar3;
    }
    in_stack_00000038[0x16] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack000000000000017c = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x16]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x16],(long)iStack000000000000017c);
    in_stack_00000038[0x14] = lVar6 + 0x10;
    fStack000000000000016c = *(float *)(in_stack_00000038[0x14] + 8);
    in_stack_00000038[0x12] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack000000000000015c = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0x12]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0x12],(long)iStack000000000000015c);
    in_stack_00000038[0x10] = lVar6 + 0x10;
    fStack000000000000014c = *(float *)(in_stack_00000038[0x10] + 0xc);
    uVar3 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                      (fStack000000000000016c,fStack000000000000014c,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x3c) = uVar3;
    in_stack_00000038[0xe] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack000000000000013c = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[0xe]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[0xe],(long)iStack000000000000013c);
    in_stack_00000038[0xc] = lVar6 + 0x10;
    fStack000000000000012c = *(float *)in_stack_00000038[0xc];
    in_stack_00000038[10] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack000000000000011c = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[10]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[10],(long)iStack000000000000011c);
    in_stack_00000038[8] = lVar6 + 0x10;
    fStack000000000000010c = *(float *)(in_stack_00000038[8] + 4);
    uVar3 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                      (fStack000000000000012c,fStack000000000000010c,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x40) = uVar3;
    in_stack_00000038[6] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack00000000000000fc = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[6]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[6],(long)iStack00000000000000fc);
    in_stack_00000038[4] = lVar6 + 8;
    fStack00000000000000ec = *(float *)(unaff_x29 + -0x3c);
    fStack000000000000000c = 2.0;
    uVar3 = il2cpp_codegen_multiply<float,float>(fStack00000000000000ec,2.0);
    *(undefined4 *)in_stack_00000038[4] = uVar3;
    in_stack_00000038[2] = *(long *)(in_stack_00000030[6] + 0x18);
    iStack00000000000000dc = *(int *)(unaff_x29 + -0xc);
    NullCheck((void *)in_stack_00000038[2]);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      ((EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *)
                       in_stack_00000038[2],(long)iStack00000000000000dc);
    *in_stack_00000038 = lVar6 + 8;
    fStack00000000000000cc = *(float *)(unaff_x29 + -0x40);
    uVar3 = il2cpp_codegen_multiply<float,float>(fStack00000000000000cc,fStack000000000000000c);
    *(undefined4 *)(*in_stack_00000038 + 4) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    bStack00000000000000cb =
         OVRPlugin_get_AsymmetricFovEnabled_mB5652400E43010E2F075F27AF21835154F9916BB(0);
    bStack00000000000000cb = bStack00000000000000cb & 1;
    if (bStack00000000000000cb == 0) {
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
                (in_stack_00000030[6] + 0x18);
      iStack00000000000000bc = *(int *)(unaff_x29 + -0xc);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iStack00000000000000bc);
      uStack00000000000000ac = *(undefined4 *)(unaff_x29 + -0x3c);
      *(undefined4 *)(lVar6 + 0x18) = uStack00000000000000ac;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
                (in_stack_00000030[6] + 0x18);
      iStack000000000000009c = *(int *)(unaff_x29 + -0xc);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iStack000000000000009c);
      uStack000000000000008c = *(undefined4 *)(unaff_x29 + -0x3c);
      *(undefined4 *)(lVar6 + 0x1c) = uStack000000000000008c;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
                (in_stack_00000030[6] + 0x18);
      iStack000000000000007c = *(int *)(unaff_x29 + -0xc);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iStack000000000000007c);
      uStack000000000000006c = *(undefined4 *)(unaff_x29 + -0x40);
      *(undefined4 *)(lVar6 + 0x10) = uStack000000000000006c;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)
                (in_stack_00000030[6] + 0x18);
      iStack000000000000005c = *(int *)(unaff_x29 + -0xc);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iStack000000000000005c);
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(unaff_x29 + -0x40);
    }
  }
  return;
}


