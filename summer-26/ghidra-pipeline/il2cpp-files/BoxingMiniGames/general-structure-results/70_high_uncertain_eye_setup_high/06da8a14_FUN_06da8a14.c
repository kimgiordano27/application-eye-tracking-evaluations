/*
FUNCTION_NAME: FUN_06da8a14
ENTRY_POINT: 06da8a14
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_06da8a14(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined1 auStack_1f0 [208];
  ulong local_120;
  undefined8 uStack_118;
  undefined *puVar9;
  
  if ((DAT_07eead54 & 1) == 0) {
    FUN_03642964(HomeSpace_MVVM_IScreenView_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo);
    FUN_03642964(Sirenix_Serialization_ISerializationPolicy_TypeInfo);
    FUN_03642964(PTR_DAT_079fe240);
    FUN_03642964(System_Xml_XmlQualifiedName___TypeInfo);
    FUN_03642964(System_Text_DecoderExceptionFallbackBuffer_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_ISerializationSurrogate_TypeInfo);
    FUN_03642964(System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo);
    FUN_03642964(System_Security_ISecurityEncodable_TypeInfo);
    FUN_03642964(DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo);
    FUN_03642964(PadsWorkout_IScoringController_TypeInfo);
    FUN_03642964(PTR_DAT_07a06fc8);
    FUN_03642964(PTR_DAT_079f4a08);
    FUN_03642964(PTR_DAT_07a01d58);
    FUN_03642964(System_IServiceProvider_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_ISerializableJsonDictionary_TypeInfo);
    FUN_03642964(PTR_DAT_07a2c350);
    FUN_03642964(Unity_Properties_ISetElementProperty_TypeInfo);
    FUN_03642964(Unity_Properties_ISetPropertyBagVisitor_TypeInfo);
    FUN_03642964(PTR_DAT_079fcf20);
    FUN_03642964(NAudio_CoreAudioApi_Interfaces_ISimpleAudioVolume_TypeInfo);
    FUN_03642964(System_Globalization_ISimpleCollator_TypeInfo);
    FUN_03642964(PTR_DAT_07a2c348);
    DAT_07eead54 = 1;
  }
  memset(auStack_1f0,0,0xd0);
  uVar4 = FUN_05c97640(param_1[9],0);
  puVar3 = System_Runtime_Serialization_ISerializationSurrogate_TypeInfo;
  puVar2 = PTR_DAT_07a01d58;
  puVar9 = PTR_DAT_079f4610;
  if ((uVar4 & 1) == 0) {
    uVar13 = param_1[9];
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_03642f6c(uVar13,0,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
    uVar4 = FUN_05e30794(uVar13,0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,5);
      if (lVar5 == 0) goto LAB_06da91f4;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_06da91f8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)Unity_Properties_ISetPropertyBagVisitor_TypeInfo;
      thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_06da91f8;
      *(undefined8 *)(lVar5 + 0x28) = param_1[9];
      thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x28));
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da91f8;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)NAudio_CoreAudioApi_Interfaces_ISimpleAudioVolume_TypeInfo;
      thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x30));
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_06da91f8;
      *(undefined8 *)(lVar5 + 0x38) = *param_1;
      thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x38));
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_06da91f8;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)System_Globalization_ISimpleCollator_TypeInfo;
      thunk_FUN_036b7ad0();
      uVar13 = FUN_05c98834(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
      }
      FUN_07179300(uVar13,0);
      lVar5 = *(long *)(puVar9 + 0xe0);
      goto LAB_06da8d04;
    }
    uVar14 = *(undefined8 *)System_Xml_XmlQualifiedName___TypeInfo;
    if (*(int *)(*(long *)(puVar9 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar7 = (long *)FUN_05e26f18(uVar14,0);
    if (plVar7 == (long *)0x0) goto LAB_06da91f4;
    uVar4 = (**(code **)(*plVar7 + 0x298))(plVar7,uVar13,*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar4 & 1) == 0) {
      uVar13 = thunk_FUN_036aa1c8(PTR_DAT_079f4a08);
      uVar13 = FUN_03642a4c(uVar13,5);
      FUN_03156bd4();
      uVar14 = thunk_FUN_036aa1c8(PTR_DAT_079fdaa8);
      FUN_03154bd8(uVar13,0,uVar14);
      FUN_03154bd8(uVar13,1,param_1[9]);
      uVar14 = thunk_FUN_036aa1c8(NAudio_CoreAudioApi_Interfaces_ISimpleAudioVolume_TypeInfo);
      FUN_03154bd8(uVar13,2,uVar14);
      FUN_03154bd8(uVar13,3,*param_1);
      uVar14 = thunk_FUN_036aa1c8(System_Xml_Schema_XmlSchema___TypeInfo);
      FUN_03154bd8(uVar13,4,uVar14);
      uVar13 = FUN_05c98834(uVar13,0);
      goto LAB_06da9218;
    }
  }
  else {
    uVar4 = FUN_05c97640(param_1[1],0);
    uVar13 = 0;
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(PTR_DAT_079f4610 + 0xe0);
LAB_06da8d04:
      uVar13 = *(undefined8 *)System_Text_DecoderExceptionFallbackBuffer_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e26f18(uVar13,0);
    }
  }
  uVar14 = *param_1;
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fe240);
  FUN_06da84f4(lVar5,uVar14,uVar13);
  puVar9 = UnityEngine_UIElements_ISerializableJsonDictionary_TypeInfo;
  if (lVar5 == 0) goto LAB_06da91f4;
  *(undefined8 *)(lVar5 + 0x98) = param_1[7];
  thunk_FUN_036b7ad0();
  *(undefined8 *)(lVar5 + 0xa0) = param_1[8];
  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0xa0));
  local_120 = 0;
  uStack_118 = 0;
  *(uint *)(lVar5 + 0xa8) =
       *(uint *)(lVar5 + 0xa8) & 0xfffffffc | (uint)*(byte *)(param_1 + 0xb) |
       (uint)*(byte *)((long)param_1 + 0x59) << 1;
  FUN_06cdc1b4(&local_120,param_1[10],0);
  *(undefined8 *)(lVar5 + 0x30) = uStack_118;
  *(ulong *)(lVar5 + 0x28) = local_120;
  thunk_FUN_036b7ad0(lVar5 + 0x28,0);
  lVar6 = *(long *)puVar9;
  uVar13 = param_1[6];
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar6 = *(long *)puVar9;
  }
  puVar2 = HomeSpace_MVVM_IScreenView_TypeInfo;
  puVar10 = *(undefined8 **)(lVar6 + 0xb8);
  lVar15 = puVar10[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar10 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
    }
    uVar14 = *puVar10;
    lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                 UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                               );
    FUN_041597c8(lVar15,uVar14,*(undefined8 *)System_IServiceProvider_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
    *plVar7 = lVar15;
    thunk_FUN_036b7ad0(plVar7,lVar15);
  }
  uVar13 = FUN_03b8d420(uVar13,lVar15,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar5 + 0x88) = uVar13;
  thunk_FUN_036b7ad0();
  uVar4 = FUN_05c97640(param_1[3],0);
  if ((uVar4 & 1) == 0) {
    local_120 = local_120 & 0xffffffff00000000;
    FUN_06ce465c(&local_120,param_1[3],0);
    *(undefined4 *)(lVar5 + 0x38) = (undefined4)local_120;
  }
  uVar4 = FUN_05c97640(param_1[1],0);
  if ((uVar4 & 1) == 0) {
    local_120 = 0;
    uStack_118 = 0;
    FUN_06cdc1b4(&local_120,param_1[1],0);
    FUN_0427d840(lVar5 + 0x48,local_120,uStack_118,
                 *(undefined8 *)Sirenix_Serialization_ISerializationPolicy_TypeInfo);
  }
  puVar9 = Sirenix_Serialization_ISerializationPolicy_TypeInfo;
  lVar6 = param_1[2];
  if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
    uVar4 = 0;
    uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar4) goto LAB_06da91f8;
      local_120 = 0;
      uStack_118 = 0;
      FUN_06cdc1b4(&local_120,*(undefined8 *)(lVar6 + 0x20 + uVar4 * 8),0);
      FUN_0427d840(lVar5 + 0x48,local_120,uStack_118,*(undefined8 *)puVar9);
      uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  uVar4 = FUN_05c97640(param_1[4],0);
  if ((uVar4 & 1) != 0) {
LAB_06da9008:
    uVar4 = FUN_05c97640(param_1[5],0);
    if ((uVar4 & 1) == 0) {
      if (param_1[5] == 0) goto LAB_06da91f4;
      uVar13 = FUN_05c9c354(param_1[5],0);
      uVar4 = thunk_FUN_05c963c0(uVar13,*(undefined8 *)PTR_DAT_07a2c348,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_05c963c0(uVar13,*(undefined8 *)PTR_DAT_07a2c350,0);
        if ((uVar4 & 1) == 0) {
          uVar14 = param_1[4];
          uVar13 = thunk_FUN_036aa1c8(Oculus_Interaction_ISnapPoseDelegate_TypeInfo);
          puVar9 = System_ISpanFormattable_TypeInfo;
          goto LAB_06da9330;
        }
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_120 = local_120 & 0xffffffffffff0000;
      FUN_04932ae8(&local_120,uVar13,*(undefined8 *)PTR_DAT_07a06fc8);
      FUN_06da788c(lVar5,local_120 & 0xffff);
    }
    puVar9 = DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo;
    if (param_1[0xc] == 0) {
      return lVar5;
    }
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)PadsWorkout_IScoringController_TypeInfo);
    System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__Sort
              (lVar6,*(undefined8 *)puVar9);
    puVar9 = System_Runtime_Remoting_Channels_IServerChannelSinkProvider_TypeInfo;
    lVar15 = param_1[0xc];
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar1) {
        uVar17 = 0;
        do {
          if (uVar1 <= uVar17) goto LAB_06da91f8;
          lVar16 = *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
          if (lVar16 == 0) goto LAB_06da91f4;
          uVar4 = FUN_05c97640(*(undefined8 *)(lVar16 + 0x10),0);
          if ((uVar4 & 1) != 0) {
            uVar14 = *param_1;
            uVar13 = thunk_FUN_036aa1c8(System_ComponentModel_ISite_TypeInfo);
            uVar13 = FUN_05c8d7b8(uVar13,uVar14,0);
            goto LAB_06da9218;
          }
          FUN_06dada10(auStack_1f0,lVar16);
          if (lVar6 == 0) goto LAB_06da91f4;
          lVar16 = *(long *)(lVar6 + 0x10);
          lVar12 = *(long *)puVar9;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_06da91f4;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar1 * 0xd0;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            memcpy((void *)(lVar16 + 0x20),auStack_1f0,0xd0);
            thunk_FUN_036b7ad0(lVar16 + 0x20,0);
          }
          else {
            uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
            memcpy(&local_120,auStack_1f0,0xd0);
            FUN_046db640(lVar6,&local_120,uVar13);
          }
          uVar1 = *(uint *)(lVar15 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar1);
      }
      if (lVar6 != 0) {
        uVar13 = FUN_046dd5e8(lVar6,*(undefined8 *)System_Security_ISecurityEncodable_TypeInfo);
        *(undefined8 *)(lVar5 + 0x90) = uVar13;
        thunk_FUN_036b7ad0();
        return lVar5;
      }
    }
LAB_06da91f4:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (param_1[4] == 0) goto LAB_06da91f4;
  uVar13 = FUN_05c9c354(param_1[4],0);
  uVar4 = thunk_FUN_05c963c0(uVar13,*(undefined8 *)Unity_Properties_ISetElementProperty_TypeInfo,0);
  if ((uVar4 & 1) != 0) {
    uVar13 = 0;
LAB_06da8ff0:
    local_120 = local_120 & 0xffffffffffff0000;
    FUN_04932ae8(&local_120,uVar13,*(undefined8 *)PTR_DAT_07a06fc8);
    *(undefined2 *)(lVar5 + 0x40) = (undefined2)local_120;
    goto LAB_06da9008;
  }
  uVar4 = thunk_FUN_05c963c0(uVar13,*(undefined8 *)PTR_DAT_079fcf20,0);
  if ((uVar4 & 1) != 0) {
    uVar13 = 1;
    goto LAB_06da8ff0;
  }
  uVar14 = param_1[4];
  uVar13 = thunk_FUN_036aa1c8(Unity_AppUI_UI_ISizeableElement_TypeInfo);
  puVar9 = Oculus_Interaction_Body_Input_ISkeletonMapping_TypeInfo;
LAB_06da9330:
  uVar8 = thunk_FUN_036aa1c8(puVar9);
  uVar13 = FUN_05c981c8(uVar13,uVar14,uVar8,0);
LAB_06da9218:
  thunk_FUN_036aa1c8(PTR_DAT_079f7680);
  uVar14 = thunk_FUN_0367fe20();
  FUN_05e177c8(uVar14,uVar13,0);
  uVar13 = thunk_FUN_036aa1c8(System_Runtime_Serialization_ISerializationSurrogate_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar14,uVar13);
}


