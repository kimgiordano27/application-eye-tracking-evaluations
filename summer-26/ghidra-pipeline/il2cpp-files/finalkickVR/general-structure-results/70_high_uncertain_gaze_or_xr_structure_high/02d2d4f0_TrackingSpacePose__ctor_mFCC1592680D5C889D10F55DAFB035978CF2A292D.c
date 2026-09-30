/*
FUNCTION_NAME: TrackingSpacePose__ctor_mFCC1592680D5C889D10F55DAFB035978CF2A292D
ENTRY_POINT: 02d2d4f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void TrackingSpacePose__ctor_mFCC1592680D5C889D10F55DAFB035978CF2A292D
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_139;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_58 = param_10;
  local_50 = param_9;
  local_48 = param_8;
  local_3c = param_4;
  uStack_38 = param_5;
  uStack_34 = param_6;
  uStack_30 = param_7;
  local_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  if ((TrackingSpacePose__ctor_mFCC1592680D5C889D10F55DAFB035978CF2A292D::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f32__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s16__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    TrackingSpacePose__ctor_mFCC1592680D5C889D10F55DAFB035978CF2A292D::s_Il2CppMethodInitialized = 1
    ;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d8 = (undefined8 *)0x0;
  local_e0 = local_50;
  local_48[5] = local_50;
  local_e8 = local_48[5];
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_e9 = OVRPlugin_IsPositionValid_m7062193DF7904591CA965CCE564590FCB02261D2(local_e8,0);
  local_e9 = local_e9 & 1;
  if (local_e9 == 0) {
    local_90 = local_48;
    il2cpp_codegen_initobj(&local_68,0x10);
    uStack_f8 = uStack_60;
    local_100 = local_68;
    local_a8 = local_90;
    local_a0 = local_100;
    uStack_98 = uStack_f8;
  }
  else {
    local_88 = local_48;
    local_130 = CONCAT44(uStack_28,local_2c);
    local_108 = local_24;
    local_120 = 0;
    uStack_118 = 0;
    local_128 = local_24;
    local_110 = local_130;
    Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2
              (local_2c,uStack_28,local_24,&local_120,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f32__);
    uStack_98 = uStack_118;
    local_a0 = local_120;
    local_a8 = local_88;
  }
  local_a8[1] = uStack_98;
  *local_a8 = local_a0;
  local_138 = local_48[5];
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_139 = OVRPlugin_IsOrientationValid_m479567D685BE13AED00F3E1D3C91AB1FF5472B2F(local_138,0);
  local_139 = local_139 & 1;
  if (local_139 == 0) {
    local_b8 = local_48;
    il2cpp_codegen_initobj(&local_80,0x14);
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    local_c0 = local_70;
    local_d8 = local_b8;
  }
  else {
    local_b0 = local_48;
    uStack_158 = CONCAT44(uStack_30,uStack_34);
    local_160 = CONCAT44(uStack_38,local_3c);
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    Nullable_1__ctor_mD66F35DE9BE52A35809D09B3F4B8CD1722D3ED3A
              (local_3c,uStack_38,uStack_34,uStack_30,&local_178,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s16__);
    uStack_c8 = uStack_170;
    local_d0 = local_178;
    local_c0 = local_168;
    local_d8 = local_b0;
  }
  local_d8[3] = uStack_c8;
  local_d8[2] = local_d0;
  *(undefined4 *)(local_d8 + 4) = local_c0;
  return;
}


