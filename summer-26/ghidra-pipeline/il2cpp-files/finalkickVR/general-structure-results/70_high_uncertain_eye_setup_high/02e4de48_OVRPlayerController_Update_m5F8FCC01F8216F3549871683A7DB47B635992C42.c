/*
FUNCTION_NAME: OVRPlayerController_Update_m5F8FCC01F8216F3549871683A7DB47B635992C42
ENTRY_POINT: 02e4de48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRPlayerController_Update_m5F8FCC01F8216F3549871683A7DB47B635992C42(Il2CppObject *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F *pAVar6;
  undefined4 uVar7;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRPlayerController_Update_m5F8FCC01F8216F3549871683A7DB47B635992C42::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_s16__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_760);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_761);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRPlayerController_Update_m5F8FCC01F8216F3549871683A7DB47B635992C42::s_Il2CppMethodInitialized
         = 1;
  }
  if (((byte)param_1[0xd5] & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    if ((*(byte *)(lVar3 + 0x180) & 1) == 0) {
      return;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar4 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    uVar5 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (uVar5,param_1,*(undefined8 *)StringLiteral_760,0);
    NullCheck(pvVar4);
    OVRDisplay_add_RecenteredPose_mEF2DBE487262A53AB138AAE3D51F6D9D272AD542(pvVar4,uVar5,0);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
    if ((bVar2 & 1) != 0) {
      pvVar4 = *(void **)(param_1 + 0x80);
      pAVar6 = (Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_lane_s16__);
      Action_1__ctor_m992ECB87E90C3F7EC7889339CEA48B40EDEC5160
                (pAVar6,param_1,*(long *)StringLiteral_761,(MethodInfo *)0x0);
      NullCheck(pvVar4);
      OVRCameraRig_add_UpdatedAnchors_m7F37F5EAA0B3AF5C4D14BAB445F7249AC5886FC7(pvVar4,pAVar6,0);
    }
    param_1[0xd5] = (Il2CppObject)0x1;
  }
  bVar2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(0x71,0);
  if ((bVar2 & 1) != 0) {
    uVar7 = il2cpp_codegen_subtract<float,float>
                      (*(float *)(param_1 + 0xd0),*(float *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0xd0) = uVar7;
  }
  bVar2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(0x65,0);
  if ((bVar2 & 1) != 0) {
    uVar7 = il2cpp_codegen_add<float,float>(*(float *)(param_1 + 0xd0),*(float *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0xd0) = uVar7;
  }
  return;
}


