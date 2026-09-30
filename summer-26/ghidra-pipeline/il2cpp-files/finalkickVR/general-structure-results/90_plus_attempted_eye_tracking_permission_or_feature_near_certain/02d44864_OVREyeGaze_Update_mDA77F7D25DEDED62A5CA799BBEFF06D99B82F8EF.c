/*
FUNCTION_NAME: OVREyeGaze_Update_mDA77F7D25DEDED62A5CA799BBEFF06D99B82F8EF
ENTRY_POINT: 02d44864
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVREyeGaze_Update_mDA77F7D25DEDED62A5CA799BBEFF06D99B82F8EF
               (OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696 *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_30c;
  ulong local_2c0 [4];
  ulong local_29c;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 local_258;
  ulong local_250;
  undefined1 local_230 [36];
  ulong local_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [36];
  ulong local_17c;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 local_11c [36];
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 auStack_ec [28];
  float local_d0;
  byte local_c5;
  undefined1 auStack_c4 [36];
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696 *local_90;
  byte local_81;
  OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696 *local_80;
  int local_74;
  ulong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  undefined8 local_30;
  OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696 *local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((OVREyeGaze_Update_mDA77F7D25DEDED62A5CA799BBEFF06D99B82F8EF::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVREyeGaze_Update_mDA77F7D25DEDED62A5CA799BBEFF06D99B82F8EF::s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_54,0,0x24);
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  local_74 = 0;
  local_80 = local_28 + 0x30;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_81 = OVRPlugin_GetEyeGazesState_m3567E7530F9FEA062FA81DC5F7809FBD337D6F99
                       (0xffffffff,0xffffffff,local_80,0);
  local_81 = local_81 & 1;
  if (local_81 != 0) {
    local_90 = local_28 + 0x30;
    local_98 = *(void **)local_90;
    local_9c = *(undefined4 *)(local_28 + 0x20);
    NullCheck(local_98);
    local_a0 = local_9c;
    EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::GetAt((ulong)local_98);
    memcpy(auStack_54,auStack_c4,0x24);
    local_c5 = EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757(auStack_54,0);
    local_c5 = local_c5 & 1;
    if (local_c5 != 0) {
      memcpy(auStack_ec,auStack_54,0x24);
      local_f0 = local_d0;
      OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A_inline
                (local_28,local_d0,(MethodInfo *)0x0);
      local_f4 = (float)OVREyeGaze_get_Confidence_mEE7A0874F47940A338B5315508C90AAA29EF272D_inline
                                  (local_28,(MethodInfo *)0x0);
      local_f8 = *(float *)(local_28 + 0x28);
      if (local_f8 <= local_f4) {
        memcpy(local_11c,auStack_54,0x24);
        OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_1a0,0);
        local_250 = local_17c;
        uStack_154 = uStack_170;
        uStack_150 = uStack_16c;
        uStack_68 = uStack_174;
        uStack_5c = (undefined4)uStack_168;
        local_58 = (undefined4)((ulong)uStack_168 >> 0x20);
        local_1a8 = *(int *)(local_28 + 0x48);
        local_1a4 = local_1a8;
        local_74 = local_1a8;
        if (local_1a8 == 0) {
          OVRExtensions_ToHeadSpacePose_m7F667DBDB06C8F4220FD99DFA518919D373D75DA(local_230,0);
          local_70 = local_20c;
          uStack_68 = uStack_204;
          local_58 = (undefined4)((ulong)uStack_1f8 >> 0x20);
          uStack_5c = (undefined4)uStack_1f8;
          local_60 = uStack_1fc;
          uStack_64 = uStack_200;
        }
        else {
          local_1ac = local_1a8;
          local_70 = local_250;
          uStack_64 = uStack_154;
          local_60 = uStack_150;
          if (local_1a8 == 1) {
            local_258 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF();
            local_2c0[0] = local_250;
            OVRExtensions_ToWorldSpacePose_mB00CD2AC97FB573C5FA5E4093A1F7441244CA097
                      (local_2c0,local_258,0);
            local_70 = local_29c;
            uStack_68 = uStack_294;
            local_58 = (undefined4)((ulong)uStack_288 >> 0x20);
            uStack_5c = (undefined4)uStack_288;
            local_60 = uStack_28c;
            uStack_64 = uStack_290;
          }
        }
        if (((byte)local_28[0x2c] & 1) != 0) {
          pvVar1 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                     (local_28);
          NullCheck(pvVar1);
          uStack_30c = (undefined4)(local_70 >> 0x20);
          Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156
                    (local_70 & 0xffffffff,uStack_30c,uStack_68,pvVar1,0);
        }
        if (((byte)local_28[0x2d] & 1) != 0) {
          pvVar1 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                     (local_28);
          uVar3 = local_60;
          uVar4 = uStack_5c;
          uVar5 = local_58;
          uVar2 = OVREyeGaze_CalculateEyeRotation_m75B19EBA10D7555C3F89E3D1402BF692CFE6414E
                            (uStack_64,local_28,0);
          NullCheck(pvVar1);
          Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D
                    (uVar2,uVar3,uVar4,uVar5,pvVar1,0);
        }
      }
    }
  }
  return;
}


