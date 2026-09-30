/*
FUNCTION_NAME: Media_EncodeMrcFrame_mF9A39DCFCF88A807172CE8E1019ED4C50AF51D4F
ENTRY_POINT: 02dceb4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool Media_EncodeMrcFrame_mF9A39DCFCF88A807172CE8E1019ED4C50AF51D4F
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,int param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  bool local_21;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_4566A0DF6225A1A1F6B842F83FFBDE095C9B4FEF02CB788ADD0D24792BFF32BD
  ;
  puVar3 = 
  Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_68 = param_9;
  local_60 = param_8;
  local_58 = param_2;
  local_50 = param_1;
  local_48 = param_7;
  local_44 = param_6;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_3;
  if ((Media_EncodeMrcFrame_mF9A39DCFCF88A807172CE8E1019ED4C50AF51D4F::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
              );
    Media_EncodeMrcFrame_mF9A39DCFCF88A807172CE8E1019ED4C50AF51D4F::s_Il2CppMethodInitialized = 1;
  }
  local_70 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar12 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar10 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                     (uVar12,*puVar13,0);
  if ((bVar10 & 1) == 0) {
    local_21 = false;
  }
  else {
    bVar10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_30,0,0);
    if ((bVar10 & 1) == 0) {
      iVar11 = Media_GetMrcInputVideoBufferType_m84171F6829839074E24610A3F0BC5AD9002DA353(0);
      if (iVar11 == 1) {
        il2cpp_codegen_initobj(&local_70,8);
        local_78 = 0;
        local_7c = 0;
        if (local_40 != 0) {
          local_70 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_40,3);
          local_78 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                               (&local_70,0);
          local_7c = il2cpp_codegen_multiply<int,int>(local_44,4);
        }
        bVar10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_38,0,0);
        if ((bVar10 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uVar12 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          bVar10 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                             (uVar12,*puVar13,0);
          uVar9 = local_30;
          uVar8 = local_38;
          uVar7 = local_48;
          uVar6 = local_50;
          uVar5 = local_58;
          uVar12 = local_60;
          if ((bVar10 & 1) == 0) {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            local_80 = OVRP_1_38_0_ovrp_Media_EncodeMrcFrameWithDualTextures_m9667E4EEA7EEFEC2506FFF268C4101A40A0A37D7
                                 (uVar6,uVar9,uVar8,local_78,local_7c,uVar7,uVar12,0);
          }
          else {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
            local_80 = OVRP_1_49_0_ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime_m0D2C239FC03EDA5211A971CE9012BD533F338AAE
                                 (uVar6,uVar5,uVar9,uVar8,local_78,local_7c,uVar7,uVar12,0);
          }
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uVar12 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          bVar10 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                             (uVar12,*puVar13,0);
          uVar8 = local_30;
          uVar7 = local_48;
          uVar6 = local_50;
          uVar5 = local_58;
          uVar12 = local_60;
          if ((bVar10 & 1) == 0) {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            local_80 = OVRP_1_38_0_ovrp_Media_EncodeMrcFrame_mAC391EC4739792A81FA113F5E89B7488C8E4BD04
                                 (uVar6,uVar8,local_78,local_7c,uVar7,uVar12,0);
          }
          else {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
            local_80 = OVRP_1_49_0_ovrp_Media_EncodeMrcFrameWithPoseTime_m66579ABD32CF065C6EEEBA2A86DBB4C4107BE64D
                                 (uVar6,uVar5,uVar8,local_78,local_7c,uVar7,uVar12,0);
          }
        }
        if (local_40 != 0) {
          GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(&local_70,0);
        }
        local_21 = local_80 == 0;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
                   ,0);
        local_21 = false;
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
                 ,0);
      local_21 = false;
    }
  }
  return local_21;
}


