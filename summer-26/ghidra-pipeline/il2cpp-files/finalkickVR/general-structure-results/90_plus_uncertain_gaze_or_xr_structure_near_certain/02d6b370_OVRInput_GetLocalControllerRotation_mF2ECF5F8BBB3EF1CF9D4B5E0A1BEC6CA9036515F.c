/*
FUNCTION_NAME: OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
ENTRY_POINT: 02d6b370
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
          (int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *this;
  undefined4 uVar7;
  undefined1 local_3b0 [48];
  undefined4 uStack_380;
  undefined8 local_34c;
  undefined8 local_330;
  undefined4 local_310;
  int local_30c;
  byte local_2f5;
  undefined4 local_2f4;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *local_2f0;
  int local_2e4;
  undefined8 local_2e0 [2];
  undefined8 uStack_2cc;
  undefined4 uStack_2b0;
  undefined8 local_27c;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 local_240;
  int local_23c;
  byte local_225;
  undefined4 local_224;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *local_220;
  int local_214;
  undefined8 local_210 [2];
  undefined8 uStack_1fc;
  undefined4 uStack_1e0;
  undefined8 local_1ac;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_170;
  int local_16c;
  byte local_155;
  undefined4 local_154;
  OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 *local_150;
  int local_144;
  undefined8 local_140 [2];
  undefined8 uStack_12c;
  undefined4 uStack_110;
  undefined8 local_dc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_34;
  undefined4 local_30;
  
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_40 = param_2;
  local_34 = param_1;
  if ((OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_84 = local_34;
  if (local_34 < 3) {
    local_88 = local_34;
    if (local_34 == 1) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_98 = *(int *)(lVar6 + 0x100);
      if (local_98 == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_9c = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(0xc,local_9c);
        local_c0 = local_dc;
        local_140[0] = local_dc;
        uStack_12c = uStack_c8;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_140,0);
        return uStack_110;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_144 = *(int *)(lVar6 + 0x100);
      if (local_144 != 2) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_154 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        local_155 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (4,5,0xc,local_154,&local_50,0);
        local_155 = local_155 & 1;
        if (local_155 == 0) {
          uVar7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                            ((MethodInfo *)0x0);
          return uVar7;
        }
        local_30 = (undefined4)local_50;
        return local_30;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_150 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                   (lVar6 + 0x60);
      NullCheck(local_150);
      lVar6 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::GetAddressAt
                        (local_150,0);
      local_30 = (undefined4)*(undefined8 *)(lVar6 + 0x58);
      return local_30;
    }
    local_8c = local_34;
    if (local_34 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_23c = *(int *)(lVar6 + 0x100);
      if (local_23c == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_240 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(0xd,local_240);
        local_260 = local_27c;
        local_2e0[0] = local_27c;
        uStack_2cc = uStack_268;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_2e0,0);
        return uStack_2b0;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_2e4 = *(int *)(lVar6 + 0x100);
      if (local_2e4 != 2) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_2f4 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        local_2f5 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (5,5,0xd,local_2f4,&local_70,0);
        local_2f5 = local_2f5 & 1;
        if (local_2f5 == 0) {
          uVar7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                            ((MethodInfo *)0x0);
          return uVar7;
        }
        local_30 = (undefined4)local_70;
        return local_30;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_2f0 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                   (lVar6 + 0x60);
      NullCheck(local_2f0);
      lVar6 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::GetAddressAt
                        (local_2f0,1);
      local_30 = (undefined4)*(undefined8 *)(lVar6 + 0x58);
      return local_30;
    }
  }
  else {
    local_90 = local_34;
    if (local_34 == 0x20) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_16c = *(int *)(lVar6 + 0x100);
      if (local_16c == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_170 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(3,local_170);
        local_190 = local_1ac;
        local_210[0] = local_1ac;
        uStack_1fc = uStack_198;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_210,0);
        return uStack_1e0;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_214 = *(int *)(lVar6 + 0x100);
      if (local_214 != 2) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_224 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        local_225 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (4,5,3,local_224,&local_60,0);
        local_225 = local_225 & 1;
        if (local_225 == 0) {
          uVar7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                            ((MethodInfo *)0x0);
          return uVar7;
        }
        local_30 = (undefined4)local_60;
        return local_30;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_220 = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
                   (lVar6 + 0x60);
      NullCheck(local_220);
      lVar6 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::GetAddressAt
                        (local_220,0);
      local_30 = (undefined4)*(undefined8 *)(lVar6 + 0x58);
      return local_30;
    }
    local_94 = local_34;
    if (local_34 == 0x40) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_30c = *(int *)(lVar6 + 0x100);
      if (local_30c == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_310 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(4,local_310);
        local_330 = local_34c;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_3b0,0);
        return uStack_380;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      if (*(int *)(lVar6 + 0x100) != 2) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        uVar7 = *(undefined4 *)(lVar6 + 0x18);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        bVar5 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                          (5,5,4,uVar7,&local_80,0);
        if ((bVar5 & 1) == 0) {
          uVar7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                            ((MethodInfo *)0x0);
          return uVar7;
        }
        local_30 = (undefined4)local_80;
        return local_30;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      this = *(OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4 **)
              (lVar6 + 0x60);
      NullCheck(this);
      lVar6 = OpenVRControllerDetailsU5BU5D_tDFFC12C99B909699F2C5AF4B57B9821FEAE93FB4::GetAddressAt
                        (this,1);
      local_30 = (undefined4)*(undefined8 *)(lVar6 + 0x58);
      return local_30;
    }
  }
  uVar7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                    ((MethodInfo *)0x0);
  return uVar7;
}


