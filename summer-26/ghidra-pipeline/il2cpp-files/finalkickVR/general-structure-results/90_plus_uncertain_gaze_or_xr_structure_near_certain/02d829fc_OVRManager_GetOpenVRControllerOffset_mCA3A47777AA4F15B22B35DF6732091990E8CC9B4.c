/*
FUNCTION_NAME: OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4
ENTRY_POINT: 02d829fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4
               (undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *this;
  undefined4 in_s3;
  float fStack_144;
  float local_138;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_70;
  float local_68;
  uint local_64;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4::
    s_Il2CppMethodInitialized = 1;
  }
  OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
  uStack_b8 = (undefined4)uStack_d4;
  uStack_48 = uStack_b8;
  local_50 = local_dc;
  local_38 = (undefined4)((ulong)uStack_c8 >> 0x20);
  fStack_3c = (float)uStack_c8;
  local_40 = fStack_cc;
  uStack_44 = uStack_d0;
  if ((param_2 == 4) || (param_2 == 5)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    if (*(int *)(lVar3 + 0x100) == 2) {
      local_64 = (uint)(param_2 != 4);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      this = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
              (lVar3 + 0x60);
      NullCheck(this);
      lVar3 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::GetAddressAt
                        (this,(long)(int)local_64);
      if (*(long *)(lVar3 + 0x40) == 1) {
        if (param_2 == 4) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          local_70 = *(undefined8 *)(lVar3 + 0x104);
          local_68 = *(float *)(lVar3 + 0x10c);
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          local_70 = *(undefined8 *)(lVar3 + 0x110);
          local_68 = *(float *)(lVar3 + 0x118);
        }
        local_138 = (float)local_70;
        fStack_144 = (float)((ulong)local_70 >> 0x20);
        uStack_44 = HBAO__get_presets(local_138,fStack_144,local_68,(MethodInfo *)0x0);
        if (param_2 == 4) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          local_90 = *(undefined8 *)(lVar3 + 0x11c);
          local_88 = *(undefined4 *)(lVar3 + 0x124);
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          local_90 = *(undefined8 *)(lVar3 + 0x128);
          local_88 = *(undefined4 *)(lVar3 + 0x130);
        }
        local_50 = local_90;
        uStack_48 = local_88;
        local_40 = fStack_144;
        fStack_3c = local_68;
        local_38 = in_s3;
      }
    }
  }
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  *param_1 = local_50;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_38,fStack_3c);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_40,uStack_44);
  return;
}


