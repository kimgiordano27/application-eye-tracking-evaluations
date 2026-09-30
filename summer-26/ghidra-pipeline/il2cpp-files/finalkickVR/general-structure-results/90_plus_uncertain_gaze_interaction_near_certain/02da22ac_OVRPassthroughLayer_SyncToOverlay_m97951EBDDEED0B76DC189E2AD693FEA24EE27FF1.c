/*
FUNCTION_NAME: OVRPassthroughLayer_SyncToOverlay_m97951EBDDEED0B76DC189E2AD693FEA24EE27FF1
ENTRY_POINT: 02da22ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_10;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPassthroughLayer_SyncToOverlay_m97951EBDDEED0B76DC189E2AD693FEA24EE27FF1(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar10;
  void *pvVar11;
  undefined8 uVar12;
  
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRPassthroughLayer_SyncToOverlay_m97951EBDDEED0B76DC189E2AD693FEA24EE27FF1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_WithUsages__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_System_Collections_IEnumerator_Reset__
              );
    OVRPassthroughLayer_SyncToOverlay_m97951EBDDEED0B76DC189E2AD693FEA24EE27FF1::
    s_Il2CppMethodInitialized = 1;
  }
  pvVar11 = *(void **)(param_1 + 0xd0);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  NullCheck(pvVar11);
  *(undefined4 *)((long)pvVar11 + 0x20) = uVar7;
  pvVar11 = *(void **)(param_1 + 0xd0);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  NullCheck(pvVar11);
  *(undefined4 *)((long)pvVar11 + 0xdc) = uVar7;
  pvVar11 = *(void **)(param_1 + 0xd0);
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    bVar3 = OVRPassthroughLayer_IsUserDefinedAndDoesNotContainSurfaceGeometry_m72365E470BC70020B144CED6A1F58BE0D772E0CD
                      (param_1,0);
    bVar3 = bVar3 & 1;
  }
  else {
    bVar3 = 1;
  }
  NullCheck(pvVar11);
  *(bool *)((long)pvVar11 + 0xd2) = bVar3 != 0;
  pvVar11 = *(void **)(param_1 + 0xd0);
  bVar3 = *(byte *)(param_1 + 0x2d);
  NullCheck(pvVar11);
  *(byte *)((long)pvVar11 + 0xad) = bVar3 & 1;
  pvVar11 = *(void **)(param_1 + 0xd0);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  NullCheck(pvVar11);
  *(undefined8 *)((long)pvVar11 + 0xb8) = uVar12;
  *(undefined8 *)((long)pvVar11 + 0xb0) = uVar8;
  pvVar11 = *(void **)(param_1 + 0xd0);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  NullCheck(pvVar11);
  *(undefined8 *)((long)pvVar11 + 200) = uVar12;
  *(undefined8 *)((long)pvVar11 + 0xc0) = uVar8;
  pvVar11 = *(void **)(param_1 + 0xd0);
  NullCheck(pvVar11);
  iVar6 = *(int *)((long)pvVar11 + 0xec);
  iVar5 = OVRPassthroughLayer_get_overlayShape_mBE7B3DAAB0F23246C5ED2A3F9E4FD3A0C6C120B7(param_1,0);
  if (iVar6 != iVar5) {
    pOVar10 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(param_1 + 0xd0);
    NullCheck(pOVar10);
    iVar6 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                      (pOVar10,(MethodInfo *)0x0);
    if (0 < iVar6) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_System_Collections_IEnumerator_Reset__
                 ,0);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_WithUsages__
                );
      OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
                (param_1,0,0);
    }
    pvVar11 = *(void **)(param_1 + 0xd0);
    uVar7 = OVRPassthroughLayer_get_overlayShape_mBE7B3DAAB0F23246C5ED2A3F9E4FD3A0C6C120B7
                      (param_1,0);
    NullCheck(pvVar11);
    *(undefined4 *)((long)pvVar11 + 0xec) = uVar7;
  }
  pvVar11 = *(void **)(param_1 + 0xd0);
  NullCheck(pvVar11);
  bVar3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar11);
  pvVar11 = *(void **)(param_1 + 0xd0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar8 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
  if ((bVar4 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pvVar9 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar9);
    if ((*(byte *)((long)pvVar9 + 0x101) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar4 = OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B
                        (0);
      bVar4 = bVar4 & 1;
      goto LAB_02da27e0;
    }
  }
  bVar4 = 0;
LAB_02da27e0:
  NullCheck(pvVar11);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar11,bVar4 != 0);
  pvVar11 = *(void **)(param_1 + 0xd0);
  NullCheck(pvVar11);
  bVar4 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar11,0);
  if ((bVar3 & 1) != (bVar4 & 1)) {
    pvVar11 = *(void **)(param_1 + 0xd0);
    NullCheck(pvVar11);
    bVar3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar11,0);
    if ((bVar3 & 1) == 0) {
      OVRPassthroughLayer_DestroySurfaceGeometries_mE9931884A6CBBBD8E058F382F951ACF92B4B1C68
                (param_1,1,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x10c) = 1;
    }
  }
  return;
}


