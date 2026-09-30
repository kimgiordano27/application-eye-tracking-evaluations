/*
FUNCTION_NAME: OVRDisplay_ConfigureEyeDesc_mF7E1485877F8A30F23C46141A2AC98AC6C60BC71
ENTRY_POINT: 02d435a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRDisplay_ConfigureEyeDesc_mF7E1485877F8A30F23C46141A2AC98AC6C60BC71
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *pEVar7;
  undefined4 uVar8;
  float fVar9;
  float fStack_1ec;
  float local_1a0;
  float fStack_144;
  float fStack_f8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *local_98;
  int local_8c;
  EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F *local_88;
  int local_7c;
  int local_78;
  byte local_71;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  long local_28;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_38 = param_7;
  local_2c = param_6;
  local_28 = param_5;
  if ((OVRDisplay_ConfigureEyeDesc_mF7E1485877F8A30F23C46141A2AC98AC6C60BC71::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRDisplay_ConfigureEyeDesc_mF7E1485877F8A30F23C46141A2AC98AC6C60BC71::s_Il2CppMethodInitialized
         = 1;
  }
  local_3c = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_5c = 0.0;
  local_60 = 0.0;
  local_70 = 0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  local_71 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  local_71 = local_71 & 1;
  if (local_71 != 0) {
    local_78 = XRSettings_get_eyeTextureWidth_m3B18AF3F3382398E2A818B2B01AA1FE90FEB3AAF();
    local_3c = local_78;
    local_7c = XRSettings_get_eyeTextureHeight_mCF4B2EC6851A8B8A8C4E6FC085A621B3166DB67A(0);
    local_88 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    local_8c = local_2c;
    local_40 = local_7c;
    NullCheck(local_88);
    pvVar4 = (void *)EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                               (local_88,(long)local_8c);
    il2cpp_codegen_initobj(pvVar4,0x20);
    local_98 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    local_9c = local_2c;
    NullCheck(local_98);
    local_a0 = local_3c;
    local_a4 = local_40;
    local_b0 = 0;
    fVar9 = (float)local_40;
    Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
              ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&local_b0,(float)local_3c,fVar9,
               (MethodInfo *)0x0);
    puVar5 = (undefined8 *)
             EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                       (local_98,(long)local_9c);
    iVar2 = local_2c;
    *puVar5 = local_b0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar3 = OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D(iVar2,&local_58,0);
    iVar2 = local_2c;
    if ((bVar3 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar8 = OVRPlugin_GetEyeFrustum_m12BCC5C8828CF638B1BC1CF2A08102D27F81D702(iVar2,0);
      iVar2 = local_2c;
      local_70 = CONCAT44(fVar9,uVar8);
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      fStack_68 = param_3;
      fStack_64 = param_4;
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fVar9 = (float)il2cpp_codegen_multiply<float,float>(57.29578,fStack_68);
      uVar8 = il2cpp_codegen_multiply<float,float>(fVar9,0.5);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x18) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fVar9 = (float)il2cpp_codegen_multiply<float,float>(57.29578,fStack_68);
      uVar8 = il2cpp_codegen_multiply<float,float>(fVar9,0.5);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x1c) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fVar9 = (float)il2cpp_codegen_multiply<float,float>(57.29578,fStack_64);
      uVar8 = il2cpp_codegen_multiply<float,float>(fVar9,0.5);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x10) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fVar9 = (float)il2cpp_codegen_multiply<float,float>(57.29578,fStack_64);
      uVar8 = il2cpp_codegen_multiply<float,float>(fVar9,0.5);
      *(undefined4 *)(lVar6 + 0x14) = uVar8;
    }
    else {
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fStack_f8 = (float)local_48;
      fVar9 = atanf(fStack_f8);
      uVar8 = il2cpp_codegen_multiply<float,float>(57.29578,fVar9);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x18) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fStack_144 = (float)((ulong)local_48 >> 0x20);
      fVar9 = atanf(fStack_144);
      uVar8 = il2cpp_codegen_multiply<float,float>(57.29578,fVar9);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x1c) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      local_1a0 = (float)uStack_50;
      fVar9 = atanf(local_1a0);
      uVar8 = il2cpp_codegen_multiply<float,float>(57.29578,fVar9);
      iVar2 = local_2c;
      *(undefined4 *)(lVar6 + 0x10) = uVar8;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      fStack_1ec = (float)((ulong)uStack_50 >> 0x20);
      fVar9 = atanf(fStack_1ec);
      uVar8 = il2cpp_codegen_multiply<float,float>(57.29578,fVar9);
      *(undefined4 *)(lVar6 + 0x14) = uVar8;
    }
    iVar2 = local_2c;
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    iVar2 = local_2c;
    fVar9 = *(float *)(lVar6 + 0x18);
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    local_5c = (float)Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                                (fVar9,*(float *)(lVar6 + 0x1c),(MethodInfo *)0x0);
    iVar2 = local_2c;
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    iVar2 = local_2c;
    fVar9 = *(float *)(lVar6 + 0x10);
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    local_60 = (float)Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                                (fVar9,*(float *)(lVar6 + 0x14),(MethodInfo *)0x0);
    iVar2 = local_2c;
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    uVar8 = il2cpp_codegen_multiply<float,float>(local_5c,2.0);
    iVar2 = local_2c;
    *(undefined4 *)(lVar6 + 8) = uVar8;
    pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
    NullCheck(pEVar7);
    lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                      (pEVar7,(long)iVar2);
    uVar8 = il2cpp_codegen_multiply<float,float>(local_60,2.0);
    *(undefined4 *)(lVar6 + 0xc) = uVar8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar3 = OVRPlugin_get_AsymmetricFovEnabled_mB5652400E43010E2F075F27AF21835154F9916BB(0);
    iVar2 = local_2c;
    if ((bVar3 & 1) == 0) {
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      iVar2 = local_2c;
      *(float *)(lVar6 + 0x18) = local_5c;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      iVar2 = local_2c;
      *(float *)(lVar6 + 0x1c) = local_5c;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      iVar2 = local_2c;
      *(float *)(lVar6 + 0x10) = local_60;
      pEVar7 = *(EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F **)(local_28 + 0x18);
      NullCheck(pEVar7);
      lVar6 = EyeRenderDescU5BU5D_tB048865C1A81E8F904CC0EE2F949AC71D6CF728F::GetAddressAt
                        (pEVar7,(long)iVar2);
      *(float *)(lVar6 + 0x14) = local_60;
    }
  }
  return;
}


