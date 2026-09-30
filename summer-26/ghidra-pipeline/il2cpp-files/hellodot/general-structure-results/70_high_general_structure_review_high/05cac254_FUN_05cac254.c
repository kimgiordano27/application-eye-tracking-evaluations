/*
FUNCTION_NAME: FUN_05cac254
ENTRY_POINT: 05cac254
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05cac254(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  
  puVar5 = UnityEngine_UIElements_PanelRaycaster_var;
  puVar4 = UnityEngine_UIElements_PanelEventHandler_var;
  if ((DAT_06a7a12c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_ParamArrayAttribute_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b60);
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
    DAT_06a7a12c = 1;
  }
  uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  FUN_04f7383c(param_1,0);
  puVar4 = System_ParamArrayAttribute_var;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x10);
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)System_ParamArrayAttribute_var);
    FUN_05cac76c();
    puVar6 = Google_Protobuf_ParseContext_var;
    puVar5 = Google_Apis_Requests_Parameters_ParameterUtils_var;
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar18 = 0;
      iVar14 = 0;
      do {
        sVar7 = FUN_04db48b0(param_2,iVar14,0);
        iVar16 = iVar14;
        if (sVar7 == 0x5d) {
          if (lVar10 == 0) goto LAB_05cac768;
          *(int *)(lVar10 + 0x14) = iVar14 + -1;
          sVar7 = FUN_04db48b0(param_2,*(undefined4 *)(lVar10 + 0x10),0);
          if (sVar7 != 0x5b) {
            uVar9 = FUN_04dbaed4(param_2,*(int *)(lVar10 + 0x10),iVar14 - *(int *)(lVar10 + 0x10),0)
            ;
            uVar17 = thunk_FUN_02cea894(*(undefined8 *)puVar6);
            FUN_05cac254(uVar17,uVar9);
            *(undefined8 *)(lVar10 + 0x30) = uVar17;
            if (iVar18 == 2) {
              lVar15 = *(long *)(param_1 + 0x40);
              if (lVar15 == 0) goto LAB_05cac768;
              lVar11 = *(long *)(lVar15 + 0x10);
              lVar12 = *(long *)System_Reflection_ParameterInfo_var;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_05cac768;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar17;
              }
              else {
                FUN_039683cc(lVar15,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar18 = iVar18 + -1;
          lVar10 = *(long *)(lVar10 + 0x20);
        }
        else if (sVar7 == 0x5b) {
          iVar16 = iVar14 + 1;
          sVar7 = FUN_04db48b0(param_2,iVar16,0);
          if (sVar7 != 0x5d) {
            iVar1 = iVar14;
            if (iVar18 != 0) {
              iVar1 = iVar8;
            }
            lVar15 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
            FUN_05cac76c();
            if (lVar15 == 0) goto LAB_05cac768;
            iVar18 = iVar18 + 1;
            *(int *)(lVar15 + 0x10) = iVar16;
            *(int *)(lVar15 + 0x18) = iVar18;
            *(long *)(lVar15 + 0x20) = lVar10;
            if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x28), lVar11 == 0))
            goto LAB_05cac768;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)puVar5;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_05cac768;
            uVar2 = *(uint *)(lVar11 + 0x18);
            lVar10 = lVar15;
            iVar8 = iVar1;
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar15;
              iVar16 = iVar14;
            }
            else {
              FUN_039683cc(lVar11,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              iVar16 = iVar14;
            }
          }
        }
        else if ((iVar18 == 0) && (sVar7 == 0x2c)) {
          bVar3 = true;
          goto LAB_05cac59c;
        }
        iVar14 = iVar16 + 1;
      } while (iVar14 < *(int *)(param_2 + 0x10));
    }
    bVar3 = false;
    iVar14 = iVar8;
LAB_05cac59c:
    lVar10 = FUN_04dbaed4(param_2,0,iVar14,0);
    *(long *)(param_1 + 0x18) = lVar10;
    if (lVar10 != 0) {
      iVar8 = FUN_04dbda48(lVar10,0x60,0);
      if (-1 < iVar8) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_05cac768;
        uVar9 = FUN_04dbaed4(*(long *)(param_1 + 0x18),0,iVar8,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_05cac768;
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18);
      }
      if (!bVar3) {
        return;
      }
      lVar10 = FUN_04dbd134(param_2,iVar14 + 2,0);
      *(long *)(param_1 + 0x10) = lVar10;
      if (lVar10 != 0) {
        uVar9 = FUN_04dbb798(lVar10,0x2c,0,0);
        puVar4 = System_ParsingInfo_var;
        lVar10 = *(long *)System_ParsingInfo_var;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar10);
          lVar10 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar15 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar10);
            lVar10 = *(long *)puVar4;
          }
          uVar17 = **(undefined8 **)(lVar10 + 0xb8);
          lVar15 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
          FUN_04a5701c(lVar15,uVar17,*(undefined8 *)Google_Protobuf_ParserInternalState_var,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar15;
        }
        uVar9 = FUN_033eb504(uVar9,lVar15,*(undefined8 *)PTR_DAT_065d6b60);
        lVar10 = FUN_033fb070(uVar9,*(undefined8 *)PTR_DAT_065cc608);
        uVar9 = FUN_05cac7e8(lVar10,*(undefined8 *)PTR_DAT_065df1e8);
        *(undefined8 *)(param_1 + 0x28) = uVar9;
        uVar9 = FUN_05cac7e8(lVar10,*(undefined8 *)UnityEngine_XR_ARFoundation_ARTextureInfo_var);
        *(undefined8 *)(param_1 + 0x30) = uVar9;
        uVar9 = FUN_05cac7e8(lVar10,*(undefined8 *)
                                     Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var
                            );
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) < 1) {
            return;
          }
          uVar9 = FUN_03968108(lVar10,0,*(undefined8 *)PTR_DAT_065c9878);
          *(undefined8 *)(param_1 + 0x20) = uVar9;
          return;
        }
      }
    }
  }
LAB_05cac768:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


