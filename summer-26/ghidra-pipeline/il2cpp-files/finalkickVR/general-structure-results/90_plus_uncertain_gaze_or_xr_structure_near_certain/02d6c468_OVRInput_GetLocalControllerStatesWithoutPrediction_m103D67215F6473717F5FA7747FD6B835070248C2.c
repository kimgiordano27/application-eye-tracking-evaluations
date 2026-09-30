/*
FUNCTION_NAME: OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2
ENTRY_POINT: 02d6c468
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_13;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          int param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
          undefined8 *param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uStack_744;
  undefined1 auStack_710 [52];
  ulong local_6dc;
  undefined4 local_6d4;
  undefined8 *local_6b8;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_68c;
  undefined8 local_67c;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 local_640;
  undefined8 local_620 [2];
  undefined8 uStack_60c;
  undefined8 *local_5c8;
  byte local_5bd;
  int local_5bc;
  undefined4 uStack_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 uStack_5a8;
  undefined8 local_5a0;
  undefined4 local_588;
  undefined1 auStack_580 [28];
  ulong local_564;
  undefined4 local_55c;
  undefined8 *local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined8 local_4ec;
  undefined4 uStack_4c8;
  undefined8 local_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a4;
  undefined8 local_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined8 uStack_47c;
  undefined8 *local_438;
  byte local_42d;
  int local_42c;
  undefined1 auStack_428 [88];
  undefined1 auStack_3d0 [88];
  undefined1 auStack_378 [88];
  undefined1 auStack_320 [88];
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [88];
  undefined1 auStack_218 [88];
  undefined1 auStack_1c0 [88];
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined1 auStack_a8 [88];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  int local_28;
  
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  uVar4 = _uStack_488;
  local_50 = param_10;
  local_48 = param_9;
  local_40 = param_8;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    uVar4 = _uStack_488;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    _uStack_488 = uVar4;
    uVar4 = _uStack_488;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    _uStack_488 = uVar4;
    uVar4 = _uStack_488;
    OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2::
    s_Il2CppMethodInitialized = 1;
  }
  _uStack_488 = uVar4;
  uVar6 = uStack_484;
  uStack_484 = uVar6;
  memset(auStack_a8,0,0x58);
  local_b0 = local_30;
  local_cc = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  local_c0 = CONCAT44(param_2,local_cc);
  *local_b0 = local_c0;
  *(undefined4 *)(local_b0 + 1) = param_3;
  local_d8 = local_38;
  uStack_c8 = param_2;
  local_c4 = param_3;
  local_b8 = param_3;
  local_100 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
  uStack_e8 = CONCAT44(param_4,param_3);
  local_f0 = CONCAT44(param_2,local_100);
  local_d8[1] = uStack_e8;
  *local_d8 = local_f0;
  local_108 = local_40;
  uStack_fc = param_2;
  uStack_f8 = param_3;
  uStack_f4 = param_4;
  local_124 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  local_118 = CONCAT44(param_2,local_124);
  *local_108 = local_118;
  *(undefined4 *)(local_108 + 1) = param_3;
  local_130 = local_48;
  uStack_120 = param_2;
  local_11c = param_3;
  local_110 = param_3;
  local_14c = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  local_140 = CONCAT44(param_2,local_14c);
  *local_130 = local_140;
  *(undefined4 *)(local_130 + 1) = param_3;
  uStack_148 = param_2;
  local_144 = param_3;
  local_138 = param_3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_150 = *(int *)(lVar5 + 0x100);
  if (local_150 == 1) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_154 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if (local_154 != 3) {
      return 0;
    }
    local_158 = local_28;
    if (local_28 < 3) {
      local_15c = local_28;
      if (local_28 == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xc,0);
        memcpy(auStack_1c0,auStack_218,0x58);
        memcpy(auStack_a8,auStack_1c0,0x58);
      }
      else {
        local_160 = local_28;
        if (local_28 != 2) {
          return 0;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xd,0);
        memcpy(auStack_320,auStack_378,0x58);
        memcpy(auStack_a8,auStack_320,0x58);
      }
    }
    else {
      local_164 = local_28;
      if (local_28 == 0x20) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(3,0);
        memcpy(auStack_270,auStack_2c8,0x58);
        memcpy(auStack_a8,auStack_270,0x58);
      }
      else {
        local_168 = local_28;
        if (local_28 != 0x40) {
          return 0;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(4,0);
        memcpy(auStack_3d0,auStack_428,0x58);
        memcpy(auStack_a8,auStack_3d0,0x58);
      }
    }
    local_42c = local_28;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_42d = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                          (local_42c,0);
    local_42d = local_42d & 1;
    if (local_42d != 0) {
      local_438 = local_30;
      memcpy(&local_490,auStack_a8,0x58);
      uStack_4a8 = uStack_488;
      local_4b0 = local_490;
      uStack_504 = CONCAT44(uStack_480,uStack_484);
      local_510 = local_490;
      uStack_4fc = uStack_47c;
      uStack_4a4 = uStack_504;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
      local_520 = local_4ec;
      local_518 = uStack_4c8;
      *local_438 = local_4ec;
      *(undefined4 *)(local_438 + 1) = uStack_4c8;
      local_528 = local_40;
      memcpy(auStack_580,auStack_a8,0x58);
      local_588 = local_55c;
      local_5b0 = local_55c;
      uStack_5b4 = (undefined4)(local_564 >> 0x20);
      local_5ac = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                            (local_564 & 0xffffffff,0);
      local_5a0 = CONCAT44(uStack_5b4,local_5ac);
      *local_528 = local_5a0;
      *(undefined4 *)(local_528 + 1) = local_55c;
      uStack_5a8 = uStack_5b4;
    }
    local_5bc = local_28;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_5bd = OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1
                          (local_5bc,0);
    local_5bd = local_5bd & 1;
    if (local_5bd != 0) {
      local_5c8 = local_38;
      memcpy(local_620,auStack_a8,0x58);
      local_640 = local_620[0];
      local_6a0 = local_620[0];
      uStack_68c = uStack_60c;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
      local_660 = local_67c;
      uStack_6a8 = uStack_668;
      local_5c8[1] = uStack_668;
      *local_5c8 = CONCAT44(uStack_66c,uStack_670);
      local_6b8 = local_48;
      memcpy(auStack_710,auStack_a8,0x58);
      uStack_744 = (undefined4)(local_6dc >> 0x20);
      uVar6 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (local_6dc & 0xffffffff,0);
      *local_6b8 = CONCAT44(uStack_744,uVar6);
      *(undefined4 *)(local_6b8 + 1) = local_6d4;
    }
    return 1;
  }
  return 0;
}


