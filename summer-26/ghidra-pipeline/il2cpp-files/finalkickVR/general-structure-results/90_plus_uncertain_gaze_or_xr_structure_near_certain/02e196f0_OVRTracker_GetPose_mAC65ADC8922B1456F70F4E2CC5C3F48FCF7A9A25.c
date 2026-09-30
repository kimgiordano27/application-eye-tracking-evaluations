/*
FUNCTION_NAME: OVRTracker_GetPose_mAC65ADC8922B1456F70F4E2CC5C3F48FCF7A9A25
ENTRY_POINT: 02e196f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_13;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRTracker_GetPose_mAC65ADC8922B1456F70F4E2CC5C3F48FCF7A9A25
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_33c;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined1 local_320 [36];
  undefined8 local_2fc;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined1 local_280 [36];
  undefined8 local_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 local_1e0 [36];
  undefined8 local_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 local_140 [36];
  undefined8 local_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  byte local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uVar3 = uStack_98;
  local_38 = param_4;
  local_2c = param_3;
  local_28 = param_2;
  if ((OVRTracker_GetPose_mAC65ADC8922B1456F70F4E2CC5C3F48FCF7A9A25::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    uVar3 = uStack_98;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    uStack_98 = uVar3;
    uVar3 = uStack_98;
    OVRTracker_GetPose_mAC65ADC8922B1456F70F4E2CC5C3F48FCF7A9A25::s_Il2CppMethodInitialized = 1;
  }
  uStack_98 = uVar3;
  uVar7 = uStack_98._4_4_;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_78._4_4_ = 0;
  uStack_70 = 0;
  uStack_70._4_4_ = 0;
  uStack_68 = 0;
  uVar3 = uStack_98;
  uStack_98._4_4_ = uVar7;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  uVar2 = uStack_70;
  uVar5 = uStack_78;
  uVar3 = uStack_98;
  uVar7 = uStack_78._4_4_;
  uStack_78 = uVar5;
  uVar6 = uStack_70._4_4_;
  uStack_70 = uVar2;
  uVar5 = uStack_78;
  uStack_78._4_4_ = uVar7;
  uVar2 = uStack_70;
  uStack_70._4_4_ = uVar6;
  local_81 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  uStack_98 = uVar3;
  uVar2 = uStack_70;
  uVar5 = uStack_78;
  uVar3 = uStack_98;
  local_81 = local_81 & 1;
  uStack_78 = uVar5;
  uStack_70 = uVar2;
  if (local_81 == 0) {
    uVar7 = uStack_78._4_4_;
    uVar6 = uStack_70._4_4_;
    uVar5 = uStack_78;
    uStack_78._4_4_ = uVar7;
    uVar2 = uStack_70;
    uStack_70._4_4_ = uVar6;
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
    uStack_98 = uVar3;
    uVar3 = uStack_98;
    param_1[1] = uVar3;
    *param_1 = local_a0;
    *(undefined8 *)((long)param_1 + 0x14) = uStack_8c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_90,uStack_98._4_4_);
  }
  else {
    local_a4 = local_2c;
    switch(local_2c) {
    case 0:
      uVar7 = uStack_78._4_4_;
      uVar6 = uStack_70._4_4_;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(5,0xffffffff);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_140,0);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      local_60 = local_11c;
      uStack_f4 = uStack_110;
      uStack_f0 = uStack_10c;
      uStack_58 = uStack_114;
      uStack_4c = (undefined4)uStack_108;
      local_48 = (undefined4)((ulong)uStack_108 >> 0x20);
      uStack_54 = uStack_f4;
      local_50 = uStack_f0;
      break;
    case 1:
      uVar7 = uStack_78._4_4_;
      uVar6 = uStack_70._4_4_;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(6,0xffffffff);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_1e0,0);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      local_60 = local_1bc;
      uStack_194 = uStack_1b0;
      uStack_190 = uStack_1ac;
      uStack_58 = uStack_1b4;
      uStack_4c = (undefined4)uStack_1a8;
      local_48 = (undefined4)((ulong)uStack_1a8 >> 0x20);
      uStack_54 = uStack_194;
      local_50 = uStack_190;
      break;
    case 2:
      uVar7 = uStack_78._4_4_;
      uVar6 = uStack_70._4_4_;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(7,0xffffffff);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_280,0);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      local_60 = local_25c;
      uStack_234 = uStack_250;
      uStack_230 = uStack_24c;
      uStack_58 = uStack_254;
      uStack_4c = (undefined4)uStack_248;
      local_48 = (undefined4)((ulong)uStack_248 >> 0x20);
      uStack_54 = uStack_234;
      local_50 = uStack_230;
      break;
    case 3:
      uVar7 = uStack_78._4_4_;
      uVar6 = uStack_70._4_4_;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(8,0xffffffff);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      uVar7 = uStack_78._4_4_;
      uStack_78 = uVar3;
      uVar6 = uStack_70._4_4_;
      uStack_70 = uVar5;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_320,0);
      uVar5 = uStack_70;
      uVar3 = uStack_78;
      local_60 = local_2fc;
      uStack_2d4 = uStack_2f0;
      uStack_2d0 = uStack_2ec;
      uStack_58 = uStack_2f4;
      uStack_4c = (undefined4)uStack_2e8;
      local_48 = (undefined4)((ulong)uStack_2e8 >> 0x20);
      uStack_54 = uStack_2d4;
      local_50 = uStack_2d0;
      break;
    default:
      uVar7 = uStack_78._4_4_;
      uVar6 = uStack_70._4_4_;
      uVar3 = uStack_78;
      uStack_78._4_4_ = uVar7;
      uVar5 = uStack_70;
      uStack_70._4_4_ = uVar6;
      OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
      param_1[1] = CONCAT44(uStack_330,uStack_334);
      *param_1 = local_33c;
      *(undefined8 *)((long)param_1 + 0x14) = uStack_328;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_32c,uStack_330);
      return;
    }
    uStack_70 = uVar5;
    uStack_78 = uVar3;
    uVar6 = uStack_70._4_4_;
    uVar7 = uStack_78._4_4_;
    uVar3 = uStack_78;
    uStack_78._4_4_ = uVar7;
    uVar5 = uStack_70;
    uStack_70._4_4_ = uVar6;
    il2cpp_codegen_initobj(&local_80,0x1c);
    uVar7 = uStack_4c;
    uVar3 = uStack_70;
    local_80 = local_60;
    uStack_78._4_4_ = SUB84(uStack_78,4);
    uStack_78 = CONCAT44(uStack_78._4_4_,uStack_58);
    uVar6 = uStack_70._4_4_;
    uStack_70 = uVar3;
    uVar3 = uStack_70;
    uStack_70._4_4_ = uVar6;
    HBAO__get_presets(0.0,180.0,0.0,(MethodInfo *)0x0);
    uVar5 = uStack_70;
    uVar3 = uStack_78;
    uVar6 = uStack_78._4_4_;
    uStack_78 = uVar3;
    uVar4 = uStack_70._4_4_;
    uStack_70 = uVar5;
    uVar3 = uStack_78;
    uStack_78._4_4_ = uVar6;
    uVar5 = uStack_70;
    uStack_70._4_4_ = uVar4;
    uVar6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(uStack_54,0);
    param_1[1] = uStack_78;
    *param_1 = local_80;
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_68,uVar7);
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_50,uVar6);
  }
  return;
}


