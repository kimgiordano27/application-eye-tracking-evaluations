/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRGazeInteractor$$GetTimeToAutoDeselect
ENTRY_POINT: 05cac2a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;telemetry;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor__GetTimeToAutoDeselect(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar13;
  int iVar14;
  int iVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 *unaff_x23;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc608);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b80);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Reflection_ParameterInfo_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(Google_Apis_Requests_Parameters_ParameterUtils_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_PanelRaycaster_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9860);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_ParamsArray_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9878);
  AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_PanelEventHandler_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_ParseContext_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_ParserInternalState_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_ParsingInfo_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_ARFoundation_ARTextureInfo_var);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df1e8);
  *(undefined1 *)(unaff_x22 + 300) = 1;
  uVar8 = thunk_FUN_02cea894(*unaff_x23);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar8,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
  FUN_04f7383c();
  puVar3 = System_ParamArrayAttribute_var;
  if (unaff_x20 != 0) {
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)System_ParamArrayAttribute_var);
    FUN_05cac76c();
    puVar5 = Google_Protobuf_ParseContext_var;
    puVar4 = Google_Apis_Requests_Parameters_ParameterUtils_var;
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar7 = 0;
      iVar14 = 0;
      do {
        sVar6 = FUN_04db48b0();
        iVar15 = iVar14;
        if (sVar6 == 0x5d) {
          if (lVar9 == 0) goto LAB_05cac768;
          *(int *)(lVar9 + 0x14) = iVar14 + -1;
          sVar6 = FUN_04db48b0();
          if (sVar6 != 0x5b) {
            uVar8 = FUN_04dbaed4();
            uVar16 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
            FUN_05cac254(uVar16,uVar8);
            *(undefined8 *)(lVar9 + 0x30) = uVar16;
            if (iVar7 == 2) {
              lVar13 = *(long *)(unaff_x19 + 0x40);
              if (lVar13 == 0) goto LAB_05cac768;
              lVar10 = *(long *)(lVar13 + 0x10);
              lVar11 = *(long *)System_Reflection_ParameterInfo_var;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_05cac768;
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
              }
              else {
                FUN_039683cc(lVar13,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar7 = iVar7 + -1;
          lVar9 = *(long *)(lVar9 + 0x20);
        }
        else if (sVar6 == 0x5b) {
          iVar15 = iVar14 + 1;
          sVar6 = FUN_04db48b0();
          if (sVar6 != 0x5d) {
            lVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
            FUN_05cac76c();
            if (lVar13 == 0) goto LAB_05cac768;
            iVar7 = iVar7 + 1;
            *(int *)(lVar13 + 0x10) = iVar15;
            *(int *)(lVar13 + 0x18) = iVar7;
            *(long *)(lVar13 + 0x20) = lVar9;
            if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0)) goto LAB_05cac768;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05cac768;
            uVar1 = *(uint *)(lVar10 + 0x18);
            lVar9 = lVar13;
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
              iVar15 = iVar14;
            }
            else {
              FUN_039683cc(lVar10,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              iVar15 = iVar14;
            }
          }
        }
        else if ((iVar7 == 0) && (sVar6 == 0x2c)) {
          bVar2 = true;
          goto LAB_05cac59c;
        }
        iVar14 = iVar15 + 1;
      } while (iVar14 < *(int *)(unaff_x20 + 0x10));
    }
    bVar2 = false;
LAB_05cac59c:
    lVar9 = FUN_04dbaed4();
    *(long *)(unaff_x19 + 0x18) = lVar9;
    if (lVar9 != 0) {
      iVar7 = FUN_04dbda48(lVar9,0x60,0);
      if (-1 < iVar7) {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_05cac768;
        uVar8 = FUN_04dbaed4(*(long *)(unaff_x19 + 0x18),0,iVar7,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05cac768;
        *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x18);
      }
      if (!bVar2) {
        return;
      }
      lVar9 = FUN_04dbd134();
      *(long *)(unaff_x19 + 0x10) = lVar9;
      if (lVar9 != 0) {
        uVar8 = FUN_04dbb798(lVar9,0x2c,0,0);
        puVar3 = System_ParsingInfo_var;
        lVar9 = *(long *)System_ParsingInfo_var;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar9);
          lVar9 = *(long *)puVar3;
        }
        lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar13 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar9);
            lVar9 = *(long *)puVar3;
          }
          uVar16 = **(undefined8 **)(lVar9 + 0xb8);
          lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
          FUN_04a5701c(lVar13,uVar16,*(undefined8 *)Google_Protobuf_ParserInternalState_var,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar13;
        }
        uVar8 = FUN_033eb504(uVar8,lVar13,*(undefined8 *)PTR_DAT_065d6b60);
        lVar9 = FUN_033fb070(uVar8,*(undefined8 *)PTR_DAT_065cc608);
        uVar8 = FUN_05cac7e8(lVar9,*(undefined8 *)PTR_DAT_065df1e8);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
        uVar8 = FUN_05cac7e8(lVar9,*(undefined8 *)UnityEngine_XR_ARFoundation_ARTextureInfo_var);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
        uVar8 = FUN_05cac7e8(lVar9,*(undefined8 *)
                                    Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var
                            );
        *(undefined8 *)(unaff_x19 + 0x38) = uVar8;
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) < 1) {
            return;
          }
          uVar8 = FUN_03968108(lVar9,0,*(undefined8 *)PTR_DAT_065c9878);
          *(undefined8 *)(unaff_x19 + 0x20) = uVar8;
          return;
        }
      }
    }
  }
LAB_05cac768:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


