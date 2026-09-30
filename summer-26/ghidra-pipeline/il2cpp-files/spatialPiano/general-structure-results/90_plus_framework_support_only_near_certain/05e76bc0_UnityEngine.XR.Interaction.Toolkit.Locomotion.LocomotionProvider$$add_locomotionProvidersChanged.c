/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider$$add_locomotionProvidersChanged
ENTRY_POINT: 05e76bc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionProvider__add_locomotionProvidersChanged
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_DAT_067c8f20;
  if ((DAT_06bc4094 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__);
    FUN_02f08768(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_IndexOf__);
    FUN_02f08768(Method_System_IO_Compression_GZipStream_set_Position__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_LastIndexOf__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextInfo_Substring__);
    FUN_02f08768(Method_System_IO_TextReader_Read__);
    FUN_02f08768(Method_System_Reflection_Emit_PropertyBuilder_SetValue__);
    FUN_02f08768(Method_System_IO_TextReader_Read__);
    FUN_02f08768(Method_System_IO_TextReader_ReadAsync__);
    FUN_02f08768(Method_System_IO_TextReader_Synchronized__);
    FUN_02f08768(Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__);
    FUN_02f08768(Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__);
    FUN_02f08768(Method_UnityEngine_UIElements_TextSelectingManipulator_OnSelectIndexChange__);
    FUN_02f08768(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02f08768(Method_System_IO_TextWriter_Synchronized__);
    FUN_02f08768(Method_System_IO_TextWriter_Write__);
    FUN_02f08768(Method_UnityEngine_Texture_set_dimension__);
    FUN_02f08768(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02f08768(Method_UnityEngine_Texture_set_height__);
    FUN_02f08768(Method_Mono_Security_Cryptography_SymmetricTransform_InternalTransformBlock__);
    FUN_02f08768(Method_UnityEngine_Texture_set_width__);
    FUN_02f08768(Method_System_Net_Configuration_SocketElement__ctor__);
    FUN_02f08768(Method_UnityEngine_Texture2D_GetPixelData<byte>__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Data_Common_SqlConvert_ConvertToSqlDecimal__);
    DAT_06bc4094 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_060f078c(uVar14,0,0);
  if (((uVar10 & 1) != 0) &&
     (uVar10 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x18),0), (uVar10 & 1) != 0)) {
    FUN_05e771b4(param_1);
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar14 = thunk_FUN_02f45270(*(undefined8 *)Method_System_IO_TextWriter_Write__);
    FUN_049a5c84(uVar14,*(undefined8 *)
                         Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__
                );
    *(undefined8 *)(param_1 + 0xa0) = uVar14;
  }
  else {
    FUN_049a6730(*(long *)(param_1 + 0xa0),*(undefined8 *)Method_System_IO_TextReader_Read__);
  }
  if (*(long *)(param_1 + 200) == 0) {
    uVar14 = thunk_FUN_02f45270(*(undefined8 *)Method_UnityEngine_Texture_set_height__);
    FUN_049b5ff0(uVar14,*(undefined8 *)
                         Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__);
    *(undefined8 *)(param_1 + 200) = uVar14;
  }
  else {
    FUN_049b6ab4(*(long *)(param_1 + 200),
                 *(undefined8 *)Method_UnityEngine_TextCore_Text_TextInfo_LastIndexOf__);
  }
  puVar8 = Method_UnityEngine_Texture2D_GetPixelData<byte>__;
  puVar7 = Method_System_IO_TextReader_Synchronized__;
  puVar6 = Method_System_IO_TextReader_Read__;
  puVar5 = Method_UnityEngine_TextCore_Text_TextInfo_IndexOf__;
  puVar4 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__;
  puVar3 = Method_System_Net_Configuration_SocketElement__ctor__;
  puVar2 = Method_System_Reflection_Emit_PropertyBuilder_SetValue__;
  lVar11 = *(long *)(param_1 + 0xc0);
  if (lVar11 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar11 + 0x18) <= iVar13) {
        if (*(long *)(param_1 + 0x98) == 0) {
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
          FUN_0484e604(uVar14,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
          *(undefined8 *)(param_1 + 0x98) = uVar14;
        }
        else {
          FUN_0484f0b0(*(long *)(param_1 + 0x98),
                       *(undefined8 *)Method_System_IO_Compression_GZipStream_set_Position__);
        }
        puVar6 = Method_System_IO_TextWriter_Synchronized__;
        puVar5 = Method_System_IO_TextReader_ReadAsync__;
        puVar4 = Method_System_Data_Common_SqlConvert_ConvertToSqlDecimal__;
        if (*(long *)(param_1 + 0xb8) == 0) {
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)Method_UnityEngine_Texture_set_dimension__);
          FUN_049b5ff0(uVar14,*(undefined8 *)
                               Method_UnityEngine_UIElements_TextSelectingManipulator_OnSelectIndexChange__
                      );
          *(undefined8 *)(param_1 + 0xb8) = uVar14;
        }
        else {
          FUN_049b6ab4(*(long *)(param_1 + 0xb8),
                       *(undefined8 *)Method_UnityEngine_TextCore_Text_TextInfo_Substring__);
        }
        lVar11 = *(long *)(param_1 + 0xb0);
        if (lVar11 != 0) {
          iVar13 = 0;
          goto LAB_05e76f88;
        }
        break;
      }
      lVar11 = FUN_03abf644(lVar11,iVar13,*(undefined8 *)puVar8);
      if (lVar11 == 0) break;
      uVar9 = FUN_061900e0(lVar11,0);
      if (*(long *)(param_1 + 0xa0) == 0) break;
      uVar10 = FUN_049a679c(*(long *)(param_1 + 0xa0),uVar9,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_1 + 0xa0) == 0) break;
        FUN_049a65b0(*(long *)(param_1 + 0xa0),uVar9,iVar13,*(undefined8 *)puVar5);
      }
      if (*(long *)(param_1 + 200) == 0) break;
      uVar10 = FUN_049b6b20(*(long *)(param_1 + 200),uVar9,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_1 + 200) == 0) break;
        FUN_049b692c(*(long *)(param_1 + 200),uVar9,lVar11,*(undefined8 *)puVar4);
      }
      lVar11 = *(long *)(param_1 + 0xc0);
      iVar13 = iVar13 + 1;
    } while (lVar11 != 0);
  }
  goto LAB_05e770c4;
LAB_05e76f88:
  do {
    if (*(int *)(lVar11 + 0x18) <= iVar13) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    lVar11 = FUN_03abf644(lVar11,iVar13,*(undefined8 *)puVar3);
    if (lVar11 != 0) {
      if (*(long *)(param_1 + 200) == 0) break;
      uVar9 = *(undefined4 *)(lVar11 + 0x28);
      uVar10 = FUN_049b6b20(*(long *)(param_1 + 200),uVar9,*(undefined8 *)puVar7);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 200) == 0) break;
        uVar14 = FUN_049b688c(*(long *)(param_1 + 200),uVar9,*(undefined8 *)puVar6);
        lVar12 = *(long *)(param_1 + 0xb0);
        *(long *)(lVar11 + 0x18) = param_1;
        *(undefined8 *)(lVar11 + 0x20) = uVar14;
        if ((lVar12 == 0) ||
           (lVar12 = FUN_03abf644(lVar12,iVar13,*(undefined8 *)puVar3), lVar12 == 0)) break;
        uVar14 = *(undefined8 *)(lVar12 + 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_05e8085c(uVar14,0);
        if (*(long *)(param_1 + 0x98) == 0) break;
        uVar10 = FUN_0484f11c(*(long *)(param_1 + 0x98),uVar9,*(undefined8 *)puVar2);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(param_1 + 0x98) == 0) break;
          FUN_0484ef30(*(long *)(param_1 + 0x98),uVar9,iVar13,
                       *(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
        }
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (lVar12 = FUN_03abf644(*(long *)(param_1 + 0xb0),iVar13,*(undefined8 *)puVar3),
           lVar12 == 0)) break;
        iVar1 = *(int *)(lVar12 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*(long *)(param_1 + 0xb8) == 0) break;
          uVar10 = FUN_049b6b20(*(long *)(param_1 + 0xb8),iVar1,*(undefined8 *)puVar5);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(param_1 + 0xb8) == 0) break;
            FUN_049b692c(*(long *)(param_1 + 0xb8),iVar1,lVar11,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__);
          }
        }
      }
    }
    lVar11 = *(long *)(param_1 + 0xb0);
    iVar13 = iVar13 + 1;
  } while (lVar11 != 0);
LAB_05e770c4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


