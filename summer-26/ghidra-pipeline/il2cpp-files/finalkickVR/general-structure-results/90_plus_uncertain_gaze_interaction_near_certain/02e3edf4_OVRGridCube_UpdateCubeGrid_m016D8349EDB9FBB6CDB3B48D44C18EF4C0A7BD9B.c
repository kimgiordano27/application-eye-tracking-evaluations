/*
FUNCTION_NAME: OVRGridCube_UpdateCubeGrid_m016D8349EDB9FBB6CDB3B48D44C18EF4C0A7BD9B
ENTRY_POINT: 02e3edf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


void OVRGridCube_UpdateCubeGrid_m016D8349EDB9FBB6CDB3B48D44C18EF4C0A7BD9B(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRGridCube_UpdateCubeGrid_m016D8349EDB9FBB6CDB3B48D44C18EF4C0A7BD9B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_640);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_641);
    OVRGridCube_UpdateCubeGrid_m016D8349EDB9FBB6CDB3B48D44C18EF4C0A7BD9B::s_Il2CppMethodInitialized
         = 1;
  }
  bVar3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2
                    (*(undefined4 *)(param_1 + 0x20),0);
  if ((bVar3 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(*(undefined8 *)StringLiteral_641);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
      if ((bVar3 & 1) == 0) {
        OVRGridCube_CreateCubeGrid_m24944530781C718BCAFF562B857D2B35582FE10E(param_1,0);
      }
      else {
        pvVar4 = *(void **)(param_1 + 0x28);
        NullCheck(pvVar4);
        GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar4,1,0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(*(undefined8 *)StringLiteral_640);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
      if ((bVar3 & 1) != 0) {
        pvVar4 = *(void **)(param_1 + 0x28);
        NullCheck(pvVar4);
        GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar4,0,0);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar4 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar4);
    bVar3 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar4,0);
    *(bool *)(param_1 + 0x32) = (bVar3 & 1) == 0;
    if ((*(byte *)(param_1 + 0x32) & 1) != (*(byte *)(param_1 + 0x31) & 1)) {
      OVRGridCube_CubeGridSwitchColor_mB3329ABEF3DC6BCC544A0167FB6F6CAAC910F948
                (param_1,*(byte *)(param_1 + 0x32) & 1,0);
    }
    *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x32) & 1;
  }
  return;
}


