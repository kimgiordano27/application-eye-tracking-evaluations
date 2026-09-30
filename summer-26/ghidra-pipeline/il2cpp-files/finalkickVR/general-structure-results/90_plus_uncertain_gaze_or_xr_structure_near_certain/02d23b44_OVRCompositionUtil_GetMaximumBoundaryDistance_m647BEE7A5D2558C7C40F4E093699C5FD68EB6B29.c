/*
FUNCTION_NAME: OVRCompositionUtil_GetMaximumBoundaryDistance_m647BEE7A5D2558C7C40F4E093699C5FD68EB6B29
ENTRY_POINT: 02d23b44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

float OVRCompositionUtil_GetMaximumBoundaryDistance_m647BEE7A5D2558C7C40F4E093699C5FD68EB6B29
                (undefined1 param_1 [16],float param_2,undefined4 param_3,void *param_4,
                undefined4 param_5)

{
  undefined *puVar1;
  byte bVar2;
  void *pvVar3;
  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int local_5c;
  float local_4c;
  float local_24;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRCompositionUtil_GetMaximumBoundaryDistance_m647BEE7A5D2558C7C40F4E093699C5FD68EB6B29::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRCompositionUtil_GetMaximumBoundaryDistance_m647BEE7A5D2558C7C40F4E093699C5FD68EB6B29::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pvVar3 = (void *)OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar3);
  bVar2 = OVRBoundary_GetConfigured_mE96370A2BF117D897B0893A9A3BF5BE3F2CA4D86(pvVar3,0);
  if ((bVar2 & 1) == 0) {
    local_24 = (float)std::__ndk1::numeric_limits<float>::max();
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar3 = (void *)OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar3);
    this = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C *)
           OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A(pvVar3,param_5,0);
    NullCheck(this);
    if (*(long *)(this + 0x18) == 0) {
      local_24 = (float)std::__ndk1::numeric_limits<float>::max();
    }
    else {
      local_4c = (float)std::__ndk1::numeric_limits<float>::max();
      local_4c = -local_4c;
      local_5c = 0;
      while (NullCheck(this), local_5c < (int)*(undefined8 *)(this + 0x18)) {
        NullCheck(this);
        uVar4 = Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::GetAt(this,(long)local_5c);
        uVar5 = OVRCompositionUtil_GetWorldPosition_mBD639A182646B171CE40EBB5996A5F016D2F4DCE
                          (uVar4,param_4);
        fVar7 = param_2;
        uVar4 = param_3;
        NullCheck(param_4);
        pvVar3 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (param_4,0);
        NullCheck(pvVar3);
        uVar6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(pvVar3,0);
        param_2 = (float)Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline
                                   (uVar6,fVar7,uVar4,uVar5,param_2,param_3,0);
        fVar7 = param_2;
        if (param_2 <= local_4c) {
          fVar7 = local_4c;
        }
        local_4c = fVar7;
        local_5c = il2cpp_codegen_add<int,int>(local_5c,1);
        param_3 = uVar4;
      }
      local_24 = local_4c;
    }
  }
  return local_24;
}


