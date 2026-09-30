/*
FUNCTION_NAME: VisualElement_UpdateWorldClip_m1236762CF35A54B491F9EBAEE5931264DD022102
ENTRY_POINT: 046402cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void VisualElement_UpdateWorldClip_m1236762CF35A54B491F9EBAEE5931264DD022102
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar2;
  byte bVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_90;
  undefined8 uStack_88;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 local_41;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_6;
  local_28 = param_5;
  if ((VisualElement_UpdateWorldClip_m1236762CF35A54B491F9EBAEE5931264DD022102::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    VisualElement_UpdateWorldClip_m1236762CF35A54B491F9EBAEE5931264DD022102::
    s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  local_40 = 0;
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (local_28,(MethodInfo *)0x0);
  lVar4 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
  local_31 = lVar4 != 0;
  if ((bool)local_31) {
    local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (local_28,(MethodInfo *)0x0);
    pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
    NullCheck(pvVar6);
    uVar9 = VisualElement_get_worldClip_m61B2DBE3962B9D3E328933EE88CC7B70DE7B711A(pvVar6,0);
    *(ulong *)(local_28 + 0x288) = CONCAT44(param_4,param_3);
    *(ulong *)(local_28 + 0x280) = CONCAT44(param_2,uVar9);
    local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (local_28,(MethodInfo *)0x0);
    pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
    NullCheck(pvVar6);
    bVar3 = VisualElement_get_worldClipIsInfinite_mE53187EBF053769ACC6ED51E614E9DFE4096C17C
                      (pvVar6,0);
    local_41 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)(bVar3 & 1);
    local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (local_28,(MethodInfo *)0x0);
    lVar4 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
    if (lVar4 == *(long *)(local_28 + 0x98)) {
      local_41 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x1;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(local_28 + 0x298) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(local_28 + 0x290) = uVar10;
    }
    else {
      local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (local_28,(MethodInfo *)0x0);
      pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_40,0);
      NullCheck(pvVar6);
      uVar9 = VisualElement_get_worldClipMinusGroup_m94BD6FB2B44142367C06FF15187F7BEE67B3177D
                        (pvVar6,0);
      *(ulong *)(local_28 + 0x298) = CONCAT44(param_4,param_3);
      *(ulong *)(local_28 + 0x290) = CONCAT44(param_2,uVar9);
    }
    bVar3 = VisualElement_ShouldClip_m12585878F77BB029474BA67935AB704D81CE7FE0(local_28,0);
    if ((bVar3 & 1) == 0) {
      local_28[0x2a0] = local_41;
    }
    else {
      uVar9 = VisualElement_get_worldBound_m2E4AF689F0B4AB06E1316348A1E10D4DB2412AC3(local_28);
      uVar7 = VisualElement_SubstractBorderPadding_m06E4F9F9586D157BC1308DA8E9FFA4FB5D6811DE
                        (uVar9,local_28,0);
      uStack_88 = CONCAT44(param_4,param_3);
      local_90 = CONCAT44(param_2,uVar7);
      uVar9 = param_2;
      uVar11 = param_3;
      uVar12 = param_4;
      uVar8 = VisualElement_CombineClipRects_m85CA75AEFC620F840ADBAB1DAEB7D3A0A6532C48
                        (uVar7,local_28,0);
      pVVar2 = local_28;
      *(ulong *)(local_28 + 0x288) = CONCAT44(uVar12,uVar11);
      *(ulong *)(local_28 + 0x280) = CONCAT44(uVar9,uVar8);
      if (local_41 == (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0) {
        uVar9 = VisualElement_CombineClipRects_m85CA75AEFC620F840ADBAB1DAEB7D3A0A6532C48
                          (uVar7,local_28,0);
        uStack_88 = CONCAT44(param_4,param_3);
        local_90 = CONCAT44(param_2,uVar9);
      }
      NullCheck(pVVar2);
      *(undefined8 *)(pVVar2 + 0x298) = uStack_88;
      *(undefined8 *)(pVVar2 + 0x290) = local_90;
      local_28[0x2a0] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x0;
    }
  }
  else {
    lVar4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_28,0);
    pVVar2 = local_28;
    if (lVar4 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      uStack_c8 = *(undefined8 *)(lVar4 + 0x28);
      local_d0 = *(undefined8 *)(lVar4 + 0x20);
    }
    else {
      pIVar5 = (Il2CppObject *)
               VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_28);
      NullCheck(pIVar5);
      pvVar6 = (void *)InterfaceFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                       ::Invoke(0,*(Il2CppClass **)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__
                                ,pIVar5);
      NullCheck(pvVar6);
      uVar9 = VisualElement_get_rect_m07659FED0F69F3DDE74DBC5A2F694FA22139E087(pvVar6,0);
      uStack_c8 = CONCAT44(param_4,param_3);
      local_d0 = CONCAT44(param_2,uVar9);
    }
    NullCheck(pVVar2);
    *(undefined8 *)(pVVar2 + 0x288) = uStack_c8;
    *(undefined8 *)(pVVar2 + 0x280) = local_d0;
    NullCheck(pVVar2);
    *(undefined8 *)(pVVar2 + 0x298) = uStack_c8;
    *(undefined8 *)(pVVar2 + 0x290) = local_d0;
    local_28[0x2a0] = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115)0x1;
  }
  return;
}


