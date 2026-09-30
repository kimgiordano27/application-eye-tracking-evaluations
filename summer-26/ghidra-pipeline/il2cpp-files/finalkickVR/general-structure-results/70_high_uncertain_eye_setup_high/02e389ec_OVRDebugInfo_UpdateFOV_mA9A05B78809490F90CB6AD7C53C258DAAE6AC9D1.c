/*
FUNCTION_NAME: OVRDebugInfo_UpdateFOV_mA9A05B78809490F90CB6AD7C53C258DAAE6AC9D1
ENTRY_POINT: 02e389ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRDebugInfo_UpdateFOV_mA9A05B78809490F90CB6AD7C53C258DAAE6AC9D1
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRDebugInfo_UpdateFOV_mA9A05B78809490F90CB6AD7C53C258DAAE6AC9D1::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_602);
    OVRDebugInfo_UpdateFOV_mA9A05B78809490F90CB6AD7C53C258DAAE6AC9D1::s_Il2CppMethodInitialized = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  local_48 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
  NullCheck(local_48);
  OVRDisplay_GetEyeRenderDesc_m91EBAB90D5AB48FFAE40119CE89E12B46FBE0C21(&local_90,local_48,0,0);
  uStack_68 = uStack_88;
  local_70 = local_90;
  uStack_58 = uStack_78;
  local_60 = local_80;
  uStack_38 = uStack_88;
  local_40 = local_90;
  uStack_28 = uStack_78;
  local_30 = local_80;
  uStack_a8 = uStack_88;
  local_b0 = local_90;
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_b8 = uStack_88;
  uVar1 = local_b8;
  local_b8._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
  local_bc = local_b8._4_4_;
  local_c0 = local_b8._4_4_;
  local_b8 = uVar1;
  uVar1 = Box(*(Il2CppClass **)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              ,&local_c0);
  pvVar2 = (void *)String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                             (*(undefined8 *)StringLiteral_602,uVar1,0);
  *(void **)(local_18 + 0x90) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(local_18 + 0x90),pvVar2);
  return;
}


