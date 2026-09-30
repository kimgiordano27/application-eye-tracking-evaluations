/*
FUNCTION_NAME: OVRRuntimeController_Start_m409EC529686C3A57F3AADF4BB56E36789BA7F3E8
ENTRY_POINT: 02e558bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


void OVRRuntimeController_Start_m409EC529686C3A57F3AADF4BB56E36789BA7F3E8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  puVar2 = StringLiteral_780;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((OVRRuntimeController_Start_m409EC529686C3A57F3AADF4BB56E36789BA7F3E8::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_781);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_782);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRRuntimeController_Start_m409EC529686C3A57F3AADF4BB56E36789BA7F3E8::s_Il2CppMethodInitialized
         = 1;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    pvVar7 = (void *)*puVar4;
    *(void **)(param_1 + 0x40) = pvVar7;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x40),pvVar7);
  }
  else if (*(int *)(param_1 + 0x20) == 2) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    pvVar7 = *(void **)(lVar5 + 8);
    *(void **)(param_1 + 0x40) = pvVar7;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x40),pvVar7);
  }
  bVar3 = OVRRuntimeController_IsModelSupported_m7C7DCC822D4289955E679DA53DE682601CD27353
                    (param_1,*(undefined8 *)(param_1 + 0x40),0);
  *(byte *)(param_1 + 0x48) = bVar3 & 1;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    uVar6 = OVRRuntimeController_UpdateControllerModel_mEAE1CDE7A068662E65647C9E50C161D55086AA9A
                      (param_1);
    MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(param_1,uVar6,0);
  }
  uVar6 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar6,param_1,*(undefined8 *)StringLiteral_781);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar6,0);
  uVar6 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar6,param_1,*(undefined8 *)StringLiteral_782,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar6,0);
  return;
}


