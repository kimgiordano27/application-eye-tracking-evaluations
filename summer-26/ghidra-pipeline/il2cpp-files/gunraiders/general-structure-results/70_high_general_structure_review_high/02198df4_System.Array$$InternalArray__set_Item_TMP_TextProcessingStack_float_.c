/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<TMP_TextProcessingStack<float>>
ENTRY_POINT: 02198df4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;negative_framework_namespace_without_eye_use_flow
*/


undefined8 System_Array__InternalArray__set_Item<TMP_TextProcessingStack<float>>(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_01c5d288();
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
  *(undefined1 *)(unaff_x20 + 0xe23) = 1;
  uVar3 = FUN_0214d5ec();
  puVar2 = PTR_DAT_0423acc0;
  if (uVar3 < 0x862a6950) {
    if (uVar3 < 0x42399156) {
      if (uVar3 < 0x1e12710a) {
        if (uVar3 == 0xe993828) goto LAB_02199308;
        if (uVar3 != 0x198af249) {
          if (uVar3 != 0x1e127109) goto LAB_02199468;
          goto LAB_02199444;
        }
      }
      else if (uVar3 < 0x2e2b12c8) {
        if (uVar3 != 0x2b3e1a14) {
          if (uVar3 != 0x2e2b12c7) goto LAB_02199468;
LAB_021993c4:
          uVar4 = thunk_FUN_03152714();
          puVar1 = (undefined8 *)System_Net_FtpControlStream_TypeInfo;
          goto joined_r0x02199170;
        }
      }
      else if (uVar3 != 0x34202e38) {
        if (uVar3 != 0x42399155) goto LAB_02199468;
        goto LAB_02199308;
      }
    }
    else if (uVar3 < 0x63c5dcd6) {
      if (uVar3 < 0x55a5b3ec) {
        if (uVar3 != 0x4717fc8c) {
          if (uVar3 != 0x55a5b3eb) goto LAB_02199468;
LAB_02199308:
          uVar4 = thunk_FUN_03152714();
          puVar1 = (undefined8 *)FriendSystem_TypeInfo;
          goto joined_r0x02199170;
        }
      }
      else if (uVar3 != 0x58644560) {
        if (uVar3 != 0x63c5dcd5) goto LAB_02199468;
        goto LAB_02199308;
      }
    }
    else {
      if (0x7007efad < uVar3) {
        if (uVar3 == 0x862a694f) {
          uVar4 = thunk_FUN_03152714();
          if ((uVar4 & 1) != 0) {
            return *(undefined8 *)puVar2;
          }
          goto LAB_02199468;
        }
        if (uVar3 != 0x759ba9c4) goto LAB_02199468;
        goto LAB_02199308;
      }
      if (uVar3 != 0x66936dd2) {
        if (uVar3 != 0x7007efad) goto LAB_02199468;
LAB_02199390:
        uVar4 = thunk_FUN_03152714();
        puVar1 = (undefined8 *)System_Net_FtpWebResponse_TypeInfo;
        goto joined_r0x02199170;
      }
    }
LAB_021993ec:
    uVar4 = thunk_FUN_03152714();
    puVar1 = (undefined8 *)System_Collections_Generic_Dictionary<string,_Index>_TypeInfo;
  }
  else {
    if (0xcca6a115 < uVar3) {
      if (uVar3 < 0xe90bbc78) {
        if (uVar3 < 0xe59fccf2) {
          if (uVar3 == 0xdf819ab3) goto LAB_02199444;
          if (uVar3 != 0xe59fccf1) goto LAB_02199468;
        }
        else {
          if (uVar3 == 0xe6aa2fbd) goto LAB_021993c4;
          if (uVar3 != 0xe90bbc77) goto LAB_02199468;
        }
      }
      else if (uVar3 < 0xf11601d7) {
        if (uVar3 == 0xed3376ad) goto LAB_02199390;
        if (uVar3 != 0xf11601d6) goto LAB_02199468;
      }
      else {
        if (uVar3 == 0xf8e38ffc) goto LAB_02199444;
        if (uVar3 != 0xff65b61f) goto LAB_02199468;
      }
      goto LAB_021993ec;
    }
    if (uVar3 < 0x9affc269) {
      if (uVar3 != 0x8852cf4c) {
        if (uVar3 != 0x96023b49) {
          if (uVar3 != 0x9affc268) goto LAB_02199468;
LAB_02199160:
          uVar4 = thunk_FUN_03152714();
          puVar1 = (undefined8 *)System_Net_FtpWebRequestCreator_TypeInfo;
          goto joined_r0x02199170;
        }
        goto LAB_021993ec;
      }
    }
    else {
      if (uVar3 < 0xa784ec0d) {
        if (uVar3 != 0xa3dc348f) {
          if (uVar3 != 0xa784ec0c) goto LAB_02199468;
          goto LAB_02199160;
        }
        goto LAB_021993ec;
      }
      if (uVar3 != 0xba5b2c39) {
        if (uVar3 != 0xcca6a115) goto LAB_02199468;
        goto LAB_02199308;
      }
    }
LAB_02199444:
    uVar4 = thunk_FUN_03152714();
    puVar1 = (undefined8 *)FriendsData_TypeInfo;
  }
joined_r0x02199170:
  if ((uVar4 & 1) != 0) {
    return *puVar1;
  }
LAB_02199468:
  in_stack_00000008 = *(undefined8 *)PTR_DAT_04239578;
  in_stack_00000018 = 0x40;
  in_stack_00000010 = 0xffffffffffffffff;
  uVar5 = FUN_03307544(&stack0x00000008,0);
  return uVar5;
}


