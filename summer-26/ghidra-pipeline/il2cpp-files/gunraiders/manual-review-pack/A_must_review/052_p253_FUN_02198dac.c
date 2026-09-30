/*
FUNCTION_NAME: FUN_02198dac
ENTRY_POINT: 02198dac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_02198dac(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_0452fe23 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04239578);
    FUN_01c5d288(VoxelBusters_CoreLibrary_ExternalServiceProvider_TypeInfo);
    FUN_01c5d288(UnityEngine_XR_Eyes_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
    FUN_01c5d288(UnityEngine_ProBuilder_Face_TypeInfo);
    FUN_01c5d288(System_FieldAccessException_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_Dictionary<string,_Index>_TypeInfo);
    FUN_01c5d288(FriendSystem_TypeInfo);
    FUN_01c5d288(System_Reflection_FieldInfo_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
    FUN_01c5d288(AeLa_EasyFeedback_Utility_FileAttachment_TypeInfo);
    FUN_01c5d288(System_IO_FileNotFoundException_TypeInfo);
    FUN_01c5d288(System_IO_FileStream_TypeInfo);
    FUN_01c5d288(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_01c5d288(FriendsData_TypeInfo);
    FUN_01c5d288(System_Net_FileWebRequestCreator_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_Universal_FilmGrainLookupParameter_TypeInfo);
    FUN_01c5d288(MS_Internal_Xml_XPath_Filter_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_Genuine_CodeHash_FilterGroup_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_Genuine_CodeHash_FilteringData_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_Finger_TypeInfo);
    FUN_01c5d288(System_Net_FtpControlStream_TypeInfo);
    FUN_01c5d288(System_Runtime_Serialization_FixupHolder_TypeInfo);
    FUN_01c5d288(UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollector_var);
    FUN_01c5d288(UnityEngine_Rendering_FloatParameter_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_FocusInEvent_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_Focusable_TypeInfo);
    FUN_01c5d288(PTR_DAT_0423acc0);
    FUN_01c5d288(UnityEngine_Font_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_FontDefinition_TypeInfo);
    FUN_01c5d288(UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo);
    FUN_01c5d288(System_Net_FtpWebRequestCreator_TypeInfo);
    FUN_01c5d288(System_Net_FtpWebResponse_TypeInfo);
    FUN_01c5d288(UnityEngine_Experimental_Rendering_FormatUsage_TypeInfo);
    DAT_0452fe23 = 1;
  }
  uVar2 = FUN_0214d5ec(param_1,0);
  puVar1 = PTR_DAT_0423acc0;
  if (uVar2 < 0x862a6950) {
    if (uVar2 < 0x42399156) {
      if (uVar2 < 0x1e12710a) {
        puVar5 = (undefined8 *)UnityEngine_Rendering_Universal_FilmGrainLookupParameter_TypeInfo;
        if (uVar2 == 0xe993828) goto LAB_02199308;
        puVar5 = (undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo;
        if (uVar2 != 0x198af249) {
          puVar5 = (undefined8 *)UnityEngine_UIElements_Focusable_TypeInfo;
          if (uVar2 != 0x1e127109) goto LAB_02199468;
          goto LAB_02199444;
        }
      }
      else if (uVar2 < 0x2e2b12c8) {
        puVar5 = (undefined8 *)System_IO_FileNotFoundException_TypeInfo;
        if (uVar2 != 0x2b3e1a14) {
          puVar5 = (undefined8 *)UnityEngine_UIElements_FocusInEvent_TypeInfo;
          if (uVar2 != 0x2e2b12c7) goto LAB_02199468;
LAB_021993c4:
          uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
          puVar5 = (undefined8 *)System_Net_FtpControlStream_TypeInfo;
          goto joined_r0x02199170;
        }
      }
      else {
        puVar5 = (undefined8 *)UnityEngine_UIElements_FontDefinition_TypeInfo;
        if (uVar2 != 0x34202e38) {
          puVar5 = (undefined8 *)System_Net_FileWebRequestCreator_TypeInfo;
          if (uVar2 != 0x42399155) goto LAB_02199468;
          goto LAB_02199308;
        }
      }
    }
    else if (uVar2 < 0x63c5dcd6) {
      if (uVar2 < 0x55a5b3ec) {
        puVar5 = (undefined8 *)System_Collections_Generic_Dictionary<string,_Index>_TypeInfo;
        if (uVar2 != 0x4717fc8c) {
          puVar5 = (undefined8 *)System_FieldAccessException_TypeInfo;
          if (uVar2 != 0x55a5b3eb) goto LAB_02199468;
LAB_02199308:
          uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
          puVar5 = (undefined8 *)FriendSystem_TypeInfo;
          goto joined_r0x02199170;
        }
      }
      else {
        puVar5 = (undefined8 *)UnityEngine_XR_Eyes_TypeInfo;
        if (uVar2 != 0x58644560) {
          puVar5 = (undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo;
          if (uVar2 != 0x63c5dcd5) goto LAB_02199468;
          goto LAB_02199308;
        }
      }
    }
    else {
      if (0x7007efad < uVar2) {
        if (uVar2 == 0x862a694f) {
          uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)PTR_DAT_0423acc0,0);
          if ((uVar3 & 1) != 0) {
            return *(undefined8 *)puVar1;
          }
          goto LAB_02199468;
        }
        puVar5 = (undefined8 *)RootMotion_FinalIK_Finger_TypeInfo;
        if (uVar2 != 0x759ba9c4) goto LAB_02199468;
        goto LAB_02199308;
      }
      puVar5 = (undefined8 *)AeLa_EasyFeedback_Utility_FileAttachment_TypeInfo;
      if (uVar2 != 0x66936dd2) {
        puVar5 = (undefined8 *)System_IO_FileStream_TypeInfo;
        if (uVar2 != 0x7007efad) goto LAB_02199468;
LAB_02199390:
        uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
        puVar5 = (undefined8 *)System_Net_FtpWebResponse_TypeInfo;
        goto joined_r0x02199170;
      }
    }
LAB_021993ec:
    uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
    puVar5 = (undefined8 *)System_Collections_Generic_Dictionary<string,_Index>_TypeInfo;
  }
  else {
    if (0xcca6a115 < uVar2) {
      if (uVar2 < 0xe90bbc78) {
        if (uVar2 < 0xe59fccf2) {
          puVar5 = (undefined8 *)UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo;
          if (uVar2 == 0xdf819ab3) goto LAB_02199444;
          puVar5 = (undefined8 *)
                   UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollector_var;
          if (uVar2 != 0xe59fccf1) goto LAB_02199468;
        }
        else {
          puVar5 = (undefined8 *)CodeStage_AntiCheat_Genuine_CodeHash_FilterGroup_TypeInfo;
          if (uVar2 == 0xe6aa2fbd) goto LAB_021993c4;
          puVar5 = (undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo;
          if (uVar2 != 0xe90bbc77) goto LAB_02199468;
        }
      }
      else if (uVar2 < 0xf11601d7) {
        puVar5 = (undefined8 *)UnityEngine_Font_TypeInfo;
        if (uVar2 == 0xed3376ad) goto LAB_02199390;
        puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_ExternalServiceProvider_TypeInfo;
        if (uVar2 != 0xf11601d6) goto LAB_02199468;
      }
      else {
        puVar5 = (undefined8 *)MS_Internal_Xml_XPath_Filter_TypeInfo;
        if (uVar2 == 0xf8e38ffc) goto LAB_02199444;
        puVar5 = (undefined8 *)CodeStage_AntiCheat_Genuine_CodeHash_FilteringData_TypeInfo;
        if (uVar2 != 0xff65b61f) goto LAB_02199468;
      }
      goto LAB_021993ec;
    }
    if (uVar2 < 0x9affc269) {
      puVar5 = (undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo;
      if (uVar2 != 0x8852cf4c) {
        puVar5 = (undefined8 *)UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo;
        if (uVar2 != 0x96023b49) {
          puVar5 = (undefined8 *)UnityEngine_Rendering_FloatParameter_TypeInfo;
          if (uVar2 != 0x9affc268) goto LAB_02199468;
LAB_02199160:
          uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
          puVar5 = (undefined8 *)System_Net_FtpWebRequestCreator_TypeInfo;
          goto joined_r0x02199170;
        }
        goto LAB_021993ec;
      }
    }
    else {
      if (uVar2 < 0xa784ec0d) {
        puVar5 = (undefined8 *)UnityEngine_ProBuilder_Face_TypeInfo;
        if (uVar2 != 0xa3dc348f) {
          puVar5 = (undefined8 *)UnityEngine_Experimental_Rendering_FormatUsage_TypeInfo;
          if (uVar2 != 0xa784ec0c) goto LAB_02199468;
          goto LAB_02199160;
        }
        goto LAB_021993ec;
      }
      puVar5 = (undefined8 *)System_Runtime_Serialization_FixupHolder_TypeInfo;
      if (uVar2 != 0xba5b2c39) {
        puVar5 = (undefined8 *)System_Reflection_FieldInfo_TypeInfo;
        if (uVar2 != 0xcca6a115) goto LAB_02199468;
        goto LAB_02199308;
      }
    }
LAB_02199444:
    uVar3 = thunk_FUN_03152714(param_1,*puVar5,0);
    puVar5 = (undefined8 *)FriendsData_TypeInfo;
  }
joined_r0x02199170:
  if ((uVar3 & 1) != 0) {
    return *puVar5;
  }
LAB_02199468:
  local_38 = *(undefined8 *)PTR_DAT_04239578;
  local_28 = 0x40;
  uStack_30 = 0xffffffffffffffff;
  uVar4 = FUN_03307544(&local_38,0);
  return uVar4;
}


