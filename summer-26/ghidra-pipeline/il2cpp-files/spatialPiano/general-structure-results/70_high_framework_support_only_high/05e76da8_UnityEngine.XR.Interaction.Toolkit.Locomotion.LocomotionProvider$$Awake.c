/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider$$Awake
ENTRY_POINT: 05e76da8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionProvider__Awake(void)

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
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  int iVar14;
  undefined8 unaff_x20;
  
  FUN_049a5c84();
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  if (*(long *)(unaff_x19 + 200) == 0) {
    uVar12 = thunk_FUN_02f45270(*(undefined8 *)Method_UnityEngine_Texture_set_height__);
    FUN_049b5ff0(uVar12,*(undefined8 *)
                         Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__);
    *(undefined8 *)(unaff_x19 + 200) = uVar12;
  }
  else {
    FUN_049b6ab4(*(long *)(unaff_x19 + 200),
                 *(undefined8 *)Method_UnityEngine_TextCore_Text_TextInfo_LastIndexOf__);
  }
  puVar8 = Method_UnityEngine_Texture2D_GetPixelData<byte>__;
  puVar7 = Method_System_IO_TextReader_Synchronized__;
  puVar6 = Method_System_IO_TextReader_Read__;
  puVar5 = Method_UnityEngine_TextCore_Text_TextInfo_IndexOf__;
  puVar4 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__;
  puVar3 = Method_System_Net_Configuration_SocketElement__ctor__;
  puVar2 = Method_System_Reflection_Emit_PropertyBuilder_SetValue__;
  lVar10 = *(long *)(unaff_x19 + 0xc0);
  if (lVar10 != 0) {
    iVar14 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar14) {
        if (*(long *)(unaff_x19 + 0x98) == 0) {
          uVar12 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_94_0_TypeInfo);
          FUN_0484e604(uVar12,*(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
          *(undefined8 *)(unaff_x19 + 0x98) = uVar12;
        }
        else {
          FUN_0484f0b0(*(long *)(unaff_x19 + 0x98),
                       *(undefined8 *)Method_System_IO_Compression_GZipStream_set_Position__);
        }
        puVar6 = Method_System_IO_TextWriter_Synchronized__;
        puVar5 = Method_System_IO_TextReader_ReadAsync__;
        puVar4 = Method_System_Data_Common_SqlConvert_ConvertToSqlDecimal__;
        if (*(long *)(unaff_x19 + 0xb8) == 0) {
          uVar12 = thunk_FUN_02f45270(*(undefined8 *)Method_UnityEngine_Texture_set_dimension__);
          FUN_049b5ff0(uVar12,*(undefined8 *)
                               Method_UnityEngine_UIElements_TextSelectingManipulator_OnSelectIndexChange__
                      );
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar12;
        }
        else {
          FUN_049b6ab4(*(long *)(unaff_x19 + 0xb8),
                       *(undefined8 *)Method_UnityEngine_TextCore_Text_TextInfo_Substring__);
        }
        lVar10 = *(long *)(unaff_x19 + 0xb0);
        if (lVar10 != 0) {
          iVar14 = 0;
          goto LAB_05e76f88;
        }
        break;
      }
      lVar10 = FUN_03abf644(lVar10,iVar14,*(undefined8 *)puVar8);
      if (lVar10 == 0) break;
      uVar9 = FUN_061900e0(lVar10,0);
      if (*(long *)(unaff_x19 + 0xa0) == 0) break;
      uVar11 = FUN_049a679c(*(long *)(unaff_x19 + 0xa0),uVar9,*(undefined8 *)puVar6);
      if ((uVar11 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0xa0) == 0) break;
        FUN_049a65b0(*(long *)(unaff_x19 + 0xa0),uVar9,iVar14,*(undefined8 *)puVar5);
      }
      if (*(long *)(unaff_x19 + 200) == 0) break;
      uVar11 = FUN_049b6b20(*(long *)(unaff_x19 + 200),uVar9,*(undefined8 *)puVar7);
      if ((uVar11 & 1) == 0) {
        if (*(long *)(unaff_x19 + 200) == 0) break;
        FUN_049b692c(*(long *)(unaff_x19 + 200),uVar9,lVar10,*(undefined8 *)puVar4);
      }
      lVar10 = *(long *)(unaff_x19 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (lVar10 != 0);
  }
  goto LAB_05e770c4;
LAB_05e76f88:
  do {
    if (*(int *)(lVar10 + 0x18) <= iVar14) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    lVar10 = FUN_03abf644(lVar10,iVar14,*(undefined8 *)puVar3);
    if (lVar10 != 0) {
      if (*(long *)(unaff_x19 + 200) == 0) break;
      uVar9 = *(undefined4 *)(lVar10 + 0x28);
      uVar11 = FUN_049b6b20(*(long *)(unaff_x19 + 200),uVar9,*(undefined8 *)puVar7);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(unaff_x19 + 200) == 0) break;
        uVar12 = FUN_049b688c(*(long *)(unaff_x19 + 200),uVar9,*(undefined8 *)puVar6);
        lVar13 = *(long *)(unaff_x19 + 0xb0);
        *(long *)(lVar10 + 0x18) = unaff_x19;
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        if ((lVar13 == 0) ||
           (lVar13 = FUN_03abf644(lVar13,iVar14,*(undefined8 *)puVar3), lVar13 == 0)) break;
        uVar12 = *(undefined8 *)(lVar13 + 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_05e8085c(uVar12,0);
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        uVar11 = FUN_0484f11c(*(long *)(unaff_x19 + 0x98),uVar9,*(undefined8 *)puVar2);
        if ((uVar11 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x98) == 0) break;
                    /* try { // try from 05e77044 to 05f778c7 has its CatchHandler @ 05e77044
                       catch() { ... } // from try @ 05e77044 with catch @ 05e77044
                       catch() { ... } // from try @ 05e778ec with catch @ 05e77044
                       catch() { ... } // from try @ 05e77e34 with catch @ 05e77044
                       catch() { ... } // from try @ 05e77e60 with catch @ 05e77044 */
          FUN_0484ef30(*(long *)(unaff_x19 + 0x98),uVar9,iVar14,
                       *(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
        }
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar13 = FUN_03abf644(*(long *)(unaff_x19 + 0xb0),iVar14,*(undefined8 *)puVar3),
           lVar13 == 0)) break;
        iVar1 = *(int *)(lVar13 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*(long *)(unaff_x19 + 0xb8) == 0) break;
          uVar11 = FUN_049b6b20(*(long *)(unaff_x19 + 0xb8),iVar1,*(undefined8 *)puVar5);
          if ((uVar11 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0xb8) == 0) break;
            FUN_049b692c(*(long *)(unaff_x19 + 0xb8),iVar1,lVar10,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__);
          }
        }
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0xb0);
    iVar14 = iVar14 + 1;
  } while (lVar10 != 0);
LAB_05e770c4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


