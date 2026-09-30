/*
FUNCTION_NAME: VisualElement_UpdateWorldTransform_m240C22A60413B62C7A793A963AD6C2B36275D5F3
ENTRY_POINT: 0463ede0
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


void VisualElement_UpdateWorldTransform_m240C22A60413B62C7A793A963AD6C2B36275D5F3
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_4,undefined8 param_5)

{
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303 *pBVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_84 [67];
  byte local_41;
  undefined8 local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_5;
  local_28 = param_4;
  if ((VisualElement_UpdateWorldTransform_m240C22A60413B62C7A793A963AD6C2B36275D5F3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_UpdateWorldTransform_m240C22A60413B62C7A793A963AD6C2B36275D5F3::
    s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  local_32 = 0;
  local_40 = 0;
  local_41 = 0;
  memset(auStack_84,0,0x40);
  lVar4 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                    (local_28,(MethodInfo *)0x0);
  if (lVar4 == 0) {
    local_31 = false;
  }
  else {
    pBVar5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303 *)
             VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                       (local_28,(MethodInfo *)0x0);
    NullCheck(pBVar5);
    bVar3 = BaseVisualElementPanel_get_duringLayoutPhase_m2EEED4B0599F0FD8A4B61DDF5328ACCE8425A652_inline
                      (pBVar5,(MethodInfo *)0x0);
    local_31 = (bVar3 & 1) == 0;
  }
  if ((bool)local_31) {
    VisualElement_set_isWorldTransformDirty_mD630B71BE850602125A7541502714425A559FD1E(local_28,0,0);
  }
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (local_28,(MethodInfo *)0x0);
  lVar4 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
  local_32 = lVar4 != 0;
  if ((bool)local_32) {
    local_41 = VisualElement_get_hasDefaultRotationAndScale_mBB97B0CFEA46CEB03B2A97E762F2426908E13BE8_inline
                         (local_28,(MethodInfo *)0x0);
    local_41 = local_41 & 1;
    if (local_41 == 0) {
      VisualElement_GetPivotedMatrixWithLayout_m288B1E90A04B1C6A0E79F9358DDC96B919ECCD76(local_28);
      local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (local_28,(MethodInfo *)0x0);
      pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
      NullCheck(pvVar6);
      uVar7 = VisualElement_get_worldTransformRef_m25AB63C70B9C7965FEC38C1711316A47608D5276
                        (pvVar6,0);
      pVVar1 = local_28 + 0x200;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      VisualElement_MultiplyMatrix34_mBDEE644E6CEF9A47F7901CFE215B2682FCCAFDC9
                (uVar7,auStack_84,pVVar1,0);
    }
    else {
      local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (local_28,(MethodInfo *)0x0);
      pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
      NullCheck(pvVar6);
      uVar7 = VisualElement_get_worldTransformRef_m25AB63C70B9C7965FEC38C1711316A47608D5276
                        (pvVar6,0);
      uVar8 = VisualElement_get_positionWithLayout_mD3FD4E9F9B887C894EB987751F7FB2E7599BF18A
                        (local_28,0);
      pVVar1 = local_28 + 0x200;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      VisualElement_TranslateMatrix34_m9232C879D8C5145C6338C20C145EC80D240BF8E5_inline
                (uVar8,param_2,param_3,uVar7,pVVar1,0);
    }
  }
  else {
    VisualElement_GetPivotedMatrixWithLayout_m288B1E90A04B1C6A0E79F9358DDC96B919ECCD76
              (local_28,local_28 + 0x200,0);
  }
  VisualElement_set_isWorldTransformInverseDirty_m55511AA0B7807243A80E0899830A29915AF1B495
            (local_28,1);
  VisualElement_set_isWorldBoundingBoxDirty_mAC1B824EA25CEF9E3AFE7AA5C831CF69F797B89C(local_28,1,0);
  return;
}


