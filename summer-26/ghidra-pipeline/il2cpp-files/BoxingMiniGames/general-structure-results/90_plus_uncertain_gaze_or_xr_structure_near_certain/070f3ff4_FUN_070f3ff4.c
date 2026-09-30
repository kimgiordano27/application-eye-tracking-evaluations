/*
FUNCTION_NAME: FUN_070f3ff4
ENTRY_POINT: 070f3ff4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_070f3ff4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_079f4e28;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_07eec361 & 1) == 0) {
    FUN_03642964(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    FUN_03642964(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo);
    FUN_03642964(PTR_DAT_07a331a0);
    FUN_03642964(PTR_DAT_07a28fe0);
    FUN_03642964(PTR_DAT_07a28fe8);
    FUN_03642964(
                OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                );
    FUN_03642964(
                UnityEngine_Playables_PlayableSystems_DataPlayableOutputList_DataPlayableOutputEnumerator_TypeInfo
                );
    FUN_03642964(Oculus_Interaction_PointableCanvasModule_Pointer_<>c_TypeInfo);
    FUN_03642964(
                UnityEngine_Rendering_ProbeReferenceVolume_CellStreamingRequest_OnStreamingCompleteDelegate_TypeInfo
                );
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(System_Xml_Schema_XsdDateTime_Parser_TypeInfo);
    FUN_03642964(PTR_DAT_07a2e4f0);
    FUN_03642964(PTR_DAT_079fea70);
    FUN_03642964(Unity_Properties_PropertyContainer_GetPropertyVisitor_<>c_TypeInfo);
    FUN_03642964(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_BufferResourceData_TypeInfo
                );
    FUN_03642964(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassScriptInfo_TypeInfo
                );
    FUN_03642964(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_TextureResourceData_TypeInfo
                );
    FUN_03642964(UnityEngine_UIElements_Rotate_PropertyBag_AngleProperty_TypeInfo);
    DAT_07eec361 = 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar5 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo;
  puVar3 = PTR_DAT_079fea70;
  uVar10 = FUN_071c0684(uVar18,0,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_070f4824;
    uVar10 = FUN_0422a924(lVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07a28fe8);
    if ((uVar10 & 1) != 0) {
      plVar12 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
      lVar11 = thunk_FUN_071c6398(param_1,0);
      if (plVar12 == (long *)0x0) goto LAB_070f4824;
      if ((lVar11 != 0) &&
         (lVar13 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_070f482c;
      if ((int)plVar12[3] != 0) {
        plVar12[4] = lVar11;
        thunk_FUN_036b7ad0(plVar12 + 4,lVar11);
        if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07179eb8(*(undefined8 *)
                      UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_TextureResourceData_TypeInfo
                     ,plVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar18 = FUN_071dbb7c(param_2,param_3,0,0);
        return uVar18;
      }
      goto LAB_070f4828;
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_070f4824;
    FUN_0422b414(lVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07a28fe0);
  }
  puVar7 = 
  UnityEngine_Rendering_ProbeReferenceVolume_CellStreamingRequest_OnStreamingCompleteDelegate_TypeInfo
  ;
  puVar6 = Oculus_Interaction_PointableCanvasModule_Pointer_<>c_TypeInfo;
  puVar4 = OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  auVar20 = FUN_071dbb24(0);
  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_045a6e54(lVar11,*(undefined8 *)puVar6);
  uVar18 = FUN_071dc54c(&local_70,0);
  lVar13 = FUN_040cf674(param_1 + 0x18,uVar18,*(undefined8 *)puVar4);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar2);
  }
  uVar10 = FUN_071c0684(uVar18,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_071c0684(lVar13,0,0);
    uVar18 = 0;
    if ((uVar10 & 1) != 0) {
      if (lVar13 == 0) goto LAB_070f4824;
      uVar18 = FUN_071c0b08(lVar13,0);
    }
    local_80 = FUN_070fcc2c(local_70,uStack_68,*(undefined8 *)(param_1 + 0x28),uVar18,0);
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassScriptInfo_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar13 = FUN_04df9890(local_80,*(undefined8 *)
                                    Unity_Properties_PropertyContainer_GetPropertyVisitor_<>c_TypeInfo
                         );
    if (lVar13 == 0) goto LAB_070f4824;
    lVar13 = *(long *)(lVar13 + 0x10);
    auVar21 = FUN_04df990c(local_80._0_8_,local_80._8_8_,
                           *(undefined8 *)
                            UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_BufferResourceData_TypeInfo
                          );
    if (lVar11 == 0) goto LAB_070f4824;
    lVar16 = *(long *)(lVar11 + 0x10);
    lVar17 = *(long *)
              UnityEngine_Playables_PlayableSystems_DataPlayableOutputList_DataPlayableOutputEnumerator_TypeInfo
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_070f4824;
    uVar9 = *(uint *)(lVar11 + 0x18);
    if (uVar9 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar9 + 1;
      *(undefined1 (*) [16])(lVar16 + (long)(int)uVar9 * 0x10 + 0x20) = auVar21;
    }
    else {
      FUN_045a76ec(lVar11,auVar21._0_8_,auVar21._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
  puVar4 = System_Xml_Schema_XsdDateTime_Parser_TypeInfo;
  lVar16 = *(long *)System_Xml_Schema_XsdDateTime_Parser_TypeInfo;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar16 = *(long *)puVar4;
  }
  lVar17 = *(long *)(lVar16 + 0xb8);
  lVar16 = *(long *)puVar2;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  uVar18 = *(undefined8 *)(lVar17 + 8);
  *(undefined2 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(lVar16 + 0xe4);
  *(undefined8 *)(param_1 + 0x50) = uVar18;
  if (iVar1 == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_071c0684(lVar13,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      lVar16 = *(long *)puVar5;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar16 = *(long *)puVar5;
      }
      uVar18 = **(undefined8 **)(lVar16 + 0xb8);
    }
    else {
      uVar18 = FUN_03c3e428(param_1,lVar13,
                            *(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar16 = *(long *)puVar5;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar16 = *(long *)puVar5;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8);
    }
    else {
      uVar14 = FUN_070f4838(param_1,lVar13);
    }
    FUN_070f49a4(param_1,uVar18,uVar14);
    if (param_4 == 0) goto LAB_070f4824;
    lVar16 = FUN_03d18378(param_4,*(undefined8 *)PTR_DAT_07a331a0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar2);
    }
    uVar10 = FUN_071c0684(lVar16,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar16 == 0) goto LAB_070f4824;
      uVar15 = FUN_0720b104(lVar16,0);
      *(undefined8 *)(param_1 + 0x48) = uVar15;
      thunk_FUN_036b7ad0();
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_071c24dc(param_4,lVar13,0);
    if ((uVar10 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_071c24dc(uVar15,0,0);
      if ((uVar10 & 1) != 0) {
        plVar12 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
        lVar16 = thunk_FUN_071c6398(param_1,0);
        if (plVar12 == (long *)0x0) goto LAB_070f4824;
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
LAB_070f482c:
          uVar18 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar18,0);
        }
        if ((int)plVar12[3] == 0) {
LAB_070f4828:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar12[4] = lVar16;
        thunk_FUN_036b7ad0(plVar12 + 4,lVar16);
        if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07179eb8(*(undefined8 *)UnityEngine_UIElements_Rotate_PropertyBag_AngleProperty_TypeInfo
                     ,plVar12,0);
        *(undefined1 *)(param_1 + 0x3b) = 0;
        if (*(char *)(param_1 + 0x3a) == '\0') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
      }
    }
    if (*(char *)(param_1 + 0x3b) != '\0') {
      FUN_070f5214(param_1,lVar13,local_70,uStack_68,lVar11);
    }
    uVar8 = uStack_68;
    uVar15 = local_70;
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar9 = FUN_071c0684(uVar19,0,0);
      FUN_070f5368(param_1,uVar18,uVar15,uVar8,lVar11,uVar9 & 1);
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_070f5804(param_1,uVar14,local_70,uStack_68,lVar11);
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar18 = FUN_070f5bfc(lVar13);
      FUN_070f5c7c(uVar18,local_70,uStack_68,lVar11);
    }
    uVar14 = uStack_68;
    uVar18 = local_70;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    auVar20 = FUN_070f6068(uVar18,uVar14,lVar11);
  }
  uVar18 = auVar20._0_8_;
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_071c0684(uVar14,0,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) {
LAB_070f4824:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_0422aaf4(lVar11,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)
                  OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                );
  }
  uVar10 = FUN_03e5277c(uVar18,auVar20._8_8_,*(undefined8 *)PTR_DAT_07a2e4f0);
  uVar15 = uStack_68;
  uVar14 = local_70;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar18 = FUN_071dbb7c(uVar14,uVar15,0,0);
  }
  return uVar18;
}


