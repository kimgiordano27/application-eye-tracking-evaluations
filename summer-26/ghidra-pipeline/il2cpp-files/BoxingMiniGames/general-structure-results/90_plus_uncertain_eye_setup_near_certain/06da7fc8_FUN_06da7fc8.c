/*
FUNCTION_NAME: FUN_06da7fc8
ENTRY_POINT: 06da7fc8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_06da7fc8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  
  puVar6 = UnityEngine_UIElements_IScreenRaycaster_TypeInfo;
  puVar5 = DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo;
  puVar3 = PadsWorkout_IScoringController_TypeInfo;
  if ((DAT_07eead30 & 1) == 0) {
    FUN_03642964(HomeSpace_MVVM_IScreenView_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_IScreenRaycaster_TypeInfo);
    FUN_03642964(UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo);
    FUN_03642964(UnityEngine_EventSystems_IScrollHandler_TypeInfo);
    FUN_03642964(System_Runtime_Remoting_Channels_ISecurableChannel_TypeInfo);
    FUN_03642964(PTR_DAT_079fe240);
    FUN_03642964(System_Security_ISecurityEncodable_TypeInfo);
    FUN_03642964(DuckStream_Scoring_IScoringControllerDuckStream_TypeInfo);
    FUN_03642964(PadsWorkout_IScoringController_TypeInfo);
    FUN_03642964(UnityEngine_EventSystems_ISelectHandler_TypeInfo);
    FUN_03642964(Unity_AppUI_UI_ISelectableElement_TypeInfo);
    DAT_07eead30 = 1;
  }
  puVar4 = PTR_DAT_079fe240;
  local_44 = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__Sort
            (lVar7,*(undefined8 *)puVar5);
  lVar8 = FUN_03c4f138(param_2,1,*(undefined8 *)puVar6);
  puVar3 = PTR_DAT_079f4610;
  local_44 = 0;
  if (lVar8 == 0) {
LAB_06da81f4:
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06da8478(param_2,lVar7,param_1);
    if (lVar8 == 0) goto LAB_06da8270;
LAB_06da8218:
    uVar9 = FUN_05c97640(*(undefined8 *)(lVar8 + 0x18),0);
    if ((uVar9 & 1) == 0) {
      FUN_06ce465c(&local_44,*(undefined8 *)(lVar8 + 0x18),0);
    }
    local_60 = 0;
    uStack_58 = 0;
    FUN_06cdc1b4(&local_60,*(undefined8 *)(lVar8 + 0x28),0);
  }
  else {
    uVar15 = *(undefined8 *)(lVar8 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar9 = FUN_05e31434(uVar15,0,0);
    if ((uVar9 & 1) == 0) goto LAB_06da81f4;
    uVar15 = *(undefined8 *)(lVar8 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06da8478(uVar15,lVar7,param_1);
    uVar15 = *(undefined8 *)UnityEngine_EventSystems_IScrollHandler_TypeInfo;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar10 = (long *)FUN_05e26f18(uVar15,0);
    if (plVar10 == (long *)0x0) goto LAB_06da845c;
    uVar9 = (**(code **)(*plVar10 + 0x298))
                      (plVar10,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar9 & 1) == 0) goto LAB_06da8218;
    lVar11 = FUN_05e42ffc(*(undefined8 *)(lVar8 + 0x10),0);
    puVar3 = System_Runtime_Remoting_Channels_ISecurableChannel_TypeInfo;
    if (lVar11 == 0) goto LAB_06da845c;
    uVar15 = *(undefined8 *)System_Runtime_Remoting_Channels_ISecurableChannel_TypeInfo;
    lVar12 = thunk_FUN_0367fd24(lVar11,uVar15);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(lVar11,uVar15);
    }
    lVar12 = *(long *)puVar3;
    plVar10 = (long *)thunk_FUN_0367fd24(lVar11,lVar12);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(lVar11,lVar12);
    }
    lVar11 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06da825c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_0367cd30(plVar10,lVar12,0);
LAB_06da825c:
    local_44 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if (lVar8 != 0) goto LAB_06da8218;
LAB_06da8270:
    local_60 = 0;
    uStack_58 = 0;
  }
  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_06da84f4(lVar11,param_1,param_2);
  if ((lVar7 != 0) &&
     (uVar15 = FUN_046dd5e8(lVar7,*(undefined8 *)System_Security_ISecurityEncodable_TypeInfo),
     lVar11 != 0)) {
    *(undefined8 *)(lVar11 + 0x90) = uVar15;
    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x90),uVar15);
    *(undefined4 *)(lVar11 + 0x38) = local_44;
    *(undefined8 *)(lVar11 + 0x30) = uStack_58;
    *(undefined8 *)(lVar11 + 0x28) = local_60;
    thunk_FUN_036b7ad0(lVar11 + 0x28,0);
    if (lVar8 == 0) {
      *(undefined2 *)(lVar11 + 0x40) = 0;
      *(undefined8 *)(lVar11 + 0xa0) = 0;
      *(uint *)(lVar11 + 0xa8) = *(uint *)(lVar11 + 0xa8) & 0xfffffffc;
      thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0xa0),0);
      *(undefined8 *)(lVar11 + 0x98) = 0;
      thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x98),0);
      FUN_06da788c(lVar11,0);
      *(uint *)(lVar11 + 0xa8) = *(uint *)(lVar11 + 0xa8) & 0xffffffdf;
    }
    else {
      *(undefined2 *)(lVar11 + 0x40) = *(undefined2 *)(lVar8 + 0x33);
      bVar1 = *(byte *)(lVar8 + 0x35);
      bVar2 = *(byte *)(lVar8 + 0x48);
      *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(lVar8 + 0x40);
      *(uint *)(lVar11 + 0xa8) =
           *(uint *)(lVar11 + 0xa8) & 0xfffffffc | (uint)bVar1 | (uint)bVar2 << 1;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar8 + 0x38);
      thunk_FUN_036b7ad0();
      FUN_06da788c(lVar11,*(undefined2 *)(lVar8 + 0x31));
      lVar7 = *(long *)(lVar8 + 0x20);
      *(uint *)(lVar11 + 0xa8) =
           *(uint *)(lVar11 + 0xa8) & 0xffffffdf | (uint)*(byte *)(lVar8 + 0x30) << 5;
      puVar3 = Unity_AppUI_UI_ISelectableElement_TypeInfo;
      if (lVar7 != 0) {
        lVar8 = *(long *)Unity_AppUI_UI_ISelectableElement_TypeInfo;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar8 = *(long *)puVar3;
        }
        puVar13 = *(undefined8 **)(lVar8 + 0xb8);
        lVar12 = puVar13[1];
        if (lVar12 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar13 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar15 = *puVar13;
          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                       UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                     );
          FUN_041597c8(lVar12,uVar15,*(undefined8 *)UnityEngine_EventSystems_ISelectHandler_TypeInfo
                       ,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar10 = lVar12;
          thunk_FUN_036b7ad0(plVar10,lVar12);
        }
        uVar15 = FUN_03b8d420(lVar7,lVar12,*(undefined8 *)HomeSpace_MVVM_IScreenView_TypeInfo);
        *(undefined8 *)(lVar11 + 0x88) = uVar15;
        thunk_FUN_036b7ad0();
      }
    }
    return lVar11;
  }
LAB_06da845c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


