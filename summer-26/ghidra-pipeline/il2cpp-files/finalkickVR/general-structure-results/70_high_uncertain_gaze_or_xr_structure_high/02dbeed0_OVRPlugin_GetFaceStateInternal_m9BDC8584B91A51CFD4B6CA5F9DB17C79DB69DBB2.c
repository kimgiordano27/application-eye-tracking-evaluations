/*
FUNCTION_NAME: OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2
ENTRY_POINT: 02dbeed0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;validity_or_gating_hits_1;functionality_possible_biometrics_hits_2
*/


undefined1
OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2
          (undefined4 param_1,undefined4 param_2,void **param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar8;
  undefined1 local_21;
  
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__;
  if ((OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__)
  ;
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  iVar5 = OVRP_1_78_0_ovrp_GetFaceState_m8F3D2C6BBA461A0A116FFDC6DAC5D0FF0FCFD24E
                    (param_1,param_2,lVar6 + 0xef0,0);
  if (iVar5 == 0) {
    if ((*param_3 == (void *)0x0) ||
       (pvVar7 = *param_3, NullCheck(pvVar7), (int)*(undefined8 *)((long)pvVar7 + 0x18) != 0x3f)) {
      pvVar7 = (void *)SZArrayNew(*(Il2CppClass **)puVar2,0x3f);
      *param_3 = pvVar7;
      Il2CppCodeGenWriteBarrier(param_3,pvVar7);
    }
    if ((param_3[1] == (void *)0x0) ||
       (pvVar7 = param_3[1], NullCheck(pvVar7), (int)*(undefined8 *)((long)pvVar7 + 0x18) != 2)) {
      pvVar7 = (void *)SZArrayNew(*(Il2CppClass **)puVar2,2);
      param_3[1] = pvVar7;
      Il2CppCodeGenWriteBarrier(param_3 + 1,pvVar7);
    }
    pSVar8 = *param_3;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xef0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xef4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,1,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xef8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,2,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xefc);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,3,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf00);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,4,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf04);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,5,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf08);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,6,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf0c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,7,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf10);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,8,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf14);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,9,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf18);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,10,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf1c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0xb,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf20);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0xc,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf24);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0xd,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf28);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0xe,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf2c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0xf,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf30);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x10,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf34);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x11,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf38);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x12,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf3c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x13,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf40);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x14,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf44);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x15,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf48);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x16,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf4c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x17,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf50);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x18,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf54);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x19,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf58);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1a,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf5c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1b,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf60);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1c,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf64);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1d,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf68);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1e,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf6c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x1f,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf70);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x20,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf74);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x21,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf78);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x22,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf7c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x23,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf80);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x24,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf84);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x25,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf88);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x26,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf8c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x27,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf90);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x28,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf94);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x29,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf98);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2a,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xf9c);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2b,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 4000);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2c,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfa4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2d,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfa8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2e,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfac);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x2f,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfb0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x30,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfb4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x31,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfb8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x32,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfbc);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x33,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfc0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x34,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfc4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x35,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfc8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x36,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfcc);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x37,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfd0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x38,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfd4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x39,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfd8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x3a,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfdc);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x3b,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfe0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x3c,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfe4);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x3d,fVar1);
    pSVar8 = *param_3;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfe8);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0x3e,fVar1);
    pSVar8 = param_3[1];
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xfec);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0,fVar1);
    pSVar8 = param_3[1];
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    fVar1 = *(float *)(lVar6 + 0xff0);
    NullCheck(pSVar8);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,1,fVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar4 = FaceExpressionStatusInternal_ToFaceExpressionStatus_m32438C26844E8CD7DE9E9878A845D500753E78C0
                      (lVar6 + 0xff4,0);
    *(undefined2 *)(param_3 + 2) = uVar4;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    param_3[3] = *(void **)(lVar6 + 0x1000);
    local_21 = 1;
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


