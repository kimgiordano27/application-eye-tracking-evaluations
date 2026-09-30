/*
FUNCTION_NAME: OVRPlayerController_OnDisable_m4B1B71AEAB06DFFF3674CF45A47D1CB187913019
ENTRY_POINT: 02e4dca4
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


void OVRPlayerController_OnDisable_m4B1B71AEAB06DFFF3674CF45A47D1CB187913019(Il2CppObject *param_1)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F *pAVar4;
  
  if ((OVRPlayerController_OnDisable_m4B1B71AEAB06DFFF3674CF45A47D1CB187913019::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_s16__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_760);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_761);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRPlayerController_OnDisable_m4B1B71AEAB06DFFF3674CF45A47D1CB187913019::
    s_Il2CppMethodInitialized = 1;
  }
  if (((byte)param_1[0xd5] & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar2 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    uVar3 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (uVar3,param_1,*(undefined8 *)StringLiteral_760,0);
    NullCheck(pvVar2);
    OVRDisplay_remove_RecenteredPose_m682B48FDD95FF259F50CD28C8827EDD14F715904(pvVar2,uVar3,0);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar3,0);
    if ((bVar1 & 1) != 0) {
      pvVar2 = *(void **)(param_1 + 0x80);
      pAVar4 = (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_s16__);
      Action_1__ctor_m992ECB87E90C3F7EC7889339CEA48B40EDEC5160
                (pAVar4,param_1,*(long *)StringLiteral_761,(MethodInfo *)0x0);
      NullCheck(pvVar2);
      OVRCameraRig_remove_UpdatedAnchors_m362CA0EC6662BBE7563DD98E5BE05CD6C22B2E26(pvVar2,pAVar4,0);
    }
    param_1[0xd5] = (Il2CppObject)0x0;
  }
  return;
}


