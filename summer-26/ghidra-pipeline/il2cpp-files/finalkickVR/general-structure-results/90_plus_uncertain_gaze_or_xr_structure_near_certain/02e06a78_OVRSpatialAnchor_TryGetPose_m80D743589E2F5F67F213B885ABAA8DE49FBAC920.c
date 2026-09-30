/*
FUNCTION_NAME: OVRSpatialAnchor_TryGetPose_m80D743589E2F5F67F213B885ABAA8DE49FBAC920
ENTRY_POINT: 02e06a78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRSpatialAnchor_TryGetPose_m80D743589E2F5F67F213B885ABAA8DE49FBAC920
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined8 uStack_23c;
  undefined8 local_22c;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  byte local_1a1;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 local_16c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 *local_108;
  undefined8 local_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 *local_b8;
  byte local_a9;
  undefined8 local_a8;
  byte local_99;
  undefined8 local_98;
  byte local_8d;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uVar3 = _uStack_224;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRSpatialAnchor_TryGetPose_m80D743589E2F5F67F213B885ABAA8DE49FBAC920::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar3 = _uStack_224;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    _uStack_224 = uVar3;
    uVar3 = _uStack_224;
    OVRSpatialAnchor_TryGetPose_m80D743589E2F5F67F213B885ABAA8DE49FBAC920::s_Il2CppMethodInitialized
         = 1;
  }
  _uStack_224 = uVar3;
  uVar2 = uStack_220;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = local_30;
  local_88 = local_30;
  uStack_220 = uVar2;
  local_80 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(local_30);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_8c = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A(0);
  local_8d = OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0
                       (local_80,local_8c,&local_60,&local_68,0);
  local_8d = local_8d & 1;
  if (local_8d != 0) {
    local_98 = local_68;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_99 = OVRPlugin_IsOrientationValid_m479567D685BE13AED00F3E1D3C91AB1FF5472B2F(local_98,0);
    local_99 = local_99 & 1;
    if (local_99 != 0) {
      local_a8 = local_68;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_a9 = OVRPlugin_IsPositionValid_m7062193DF7904591CA965CCE564590FCB02261D2(local_a8,0);
      local_a9 = local_a9 & 1;
      if (local_a9 != 0) {
        local_108 = local_38;
        uStack_128 = uStack_58;
        local_130 = local_60;
        uStack_17c = CONCAT44(local_48,uStack_4c);
        uStack_124 = uStack_54;
        uStack_120 = local_50;
        uStack_188 = uStack_58;
        local_190 = local_60;
        uStack_184 = uStack_54;
        uStack_180 = local_50;
        uStack_11c = uStack_17c;
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
        local_108[1] = CONCAT44(uStack_160,uStack_164);
        *local_108 = local_16c;
        *(undefined8 *)((long)local_108 + 0x14) = uStack_158;
        *(ulong *)((long)local_108 + 0xc) = CONCAT44(uStack_15c,uStack_160);
        local_1a0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
        local_198 = local_1a0;
        local_70 = local_1a0;
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
        local_1a1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_1a0,0);
        local_1a1 = local_1a1 & 1;
        if (local_1a1 != 0) {
          local_1b0 = local_38;
          local_1b8 = local_38;
          local_250 = *local_38;
          uStack_1d8 = (undefined4)local_38[1];
          uStack_23c = *(undefined8 *)((long)local_38 + 0x14);
          uStack_1d4 = (undefined4)*(undefined8 *)((long)local_38 + 0xc);
          uStack_1d0 = (undefined4)((ulong)*(undefined8 *)((long)local_38 + 0xc) >> 0x20);
          local_1e8 = local_70;
          uStack_248 = uStack_1d8;
          uStack_244 = uStack_1d4;
          uStack_240 = uStack_1d0;
          local_1e0 = local_250;
          uStack_1cc = uStack_23c;
          OVRExtensions_ToWorldSpacePose_mB00CD2AC97FB573C5FA5E4093A1F7441244CA097
                    (&local_250,local_70,0);
          local_1b0[1] = CONCAT44(uStack_220,uStack_224);
          *local_1b0 = local_22c;
          *(undefined8 *)((long)local_1b0 + 0x14) = uStack_218;
          *(ulong *)((long)local_1b0 + 0xc) = CONCAT44(uStack_21c,uStack_220);
        }
        return 1;
      }
    }
  }
  local_b8 = local_38;
  OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
  local_b8[1] = CONCAT44(uStack_f0,uStack_f4);
  *local_b8 = local_fc;
  *(undefined8 *)((long)local_b8 + 0x14) = uStack_e8;
  *(ulong *)((long)local_b8 + 0xc) = CONCAT44(uStack_ec,uStack_f0);
  return 0;
}


