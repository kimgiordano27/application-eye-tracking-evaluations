/*
FUNCTION_NAME: UnityEngine.Rendering.DebugUI.RuntimeDebugShadersMessageBox.<>c$$.cctor
ENTRY_POINT: 06da8000
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c___cctor
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  long unaff_x24;
  undefined4 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x24 + 0xd30) = 1;
  }
  puVar4 = PTR_DAT_079fe240;
  uStack000000000000001c = 0;
  lVar5 = thunk_FUN_0367fe20(*unaff_x23);
  System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__Sort(lVar5,*unaff_x22);
  lVar6 = FUN_03c4f138(param_3,1,*unaff_x21);
  puVar3 = PTR_DAT_079f4610;
  uStack000000000000001c = 0;
  if (lVar6 == 0) {
LAB_06da81f4:
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06da8478(param_3,lVar5,param_2);
joined_r0x06da8214:
    if (lVar6 != 0) goto LAB_06da8218;
  }
  else {
    uVar13 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar7 = FUN_05e31434(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_06da81f4;
    uVar13 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06da8478(uVar13,lVar5,param_2);
    uVar13 = *(undefined8 *)UnityEngine_EventSystems_IScrollHandler_TypeInfo;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar8 = (long *)FUN_05e26f18(uVar13,0);
    if (plVar8 == (long *)0x0) goto LAB_06da845c;
    uVar7 = (**(code **)(*plVar8 + 0x298))
                      (plVar8,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(*plVar8 + 0x2a0));
    if ((uVar7 & 1) != 0) {
      lVar9 = FUN_05e42ffc(*(undefined8 *)(lVar6 + 0x10),0);
      puVar3 = System_Runtime_Remoting_Channels_ISecurableChannel_TypeInfo;
      if (lVar9 == 0) goto LAB_06da845c;
      uVar13 = *(undefined8 *)System_Runtime_Remoting_Channels_ISecurableChannel_TypeInfo;
      lVar10 = thunk_FUN_0367fd24(lVar9,uVar13);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(lVar9,uVar13);
      }
      lVar10 = *(long *)puVar3;
      plVar8 = (long *)thunk_FUN_0367fd24(lVar9,lVar10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(lVar9,lVar10);
      }
      lVar9 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06da825c;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_0367cd30(plVar8,lVar10,0);
LAB_06da825c:
      uStack000000000000001c = (*(code *)*puVar11)(plVar8,puVar11[1]);
      goto joined_r0x06da8214;
    }
LAB_06da8218:
    uVar7 = FUN_05c97640(*(undefined8 *)(lVar6 + 0x18),0);
    if ((uVar7 & 1) == 0) {
      FUN_06ce465c(&stack0x0000001c,*(undefined8 *)(lVar6 + 0x18),0);
    }
    FUN_06cdc1b4();
  }
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_06da84f4(lVar9,param_2,param_3);
  if ((lVar5 != 0) &&
     (uVar13 = FUN_046dd5e8(lVar5,*(undefined8 *)System_Security_ISecurityEncodable_TypeInfo),
     lVar9 != 0)) {
    *(undefined8 *)(lVar9 + 0x90) = uVar13;
    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x90),uVar13);
    *(undefined4 *)(lVar9 + 0x38) = uStack000000000000001c;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    thunk_FUN_036b7ad0(lVar9 + 0x28,0);
    if (lVar6 == 0) {
      *(undefined2 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0xa0) = 0;
      *(uint *)(lVar9 + 0xa8) = *(uint *)(lVar9 + 0xa8) & 0xfffffffc;
      thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0xa0),0);
      *(undefined8 *)(lVar9 + 0x98) = 0;
      thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x98),0);
      FUN_06da788c(lVar9,0);
      *(uint *)(lVar9 + 0xa8) = *(uint *)(lVar9 + 0xa8) & 0xffffffdf;
    }
    else {
      *(undefined2 *)(lVar9 + 0x40) = *(undefined2 *)(lVar6 + 0x33);
      bVar1 = *(byte *)(lVar6 + 0x35);
      bVar2 = *(byte *)(lVar6 + 0x48);
      *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(lVar6 + 0x40);
      *(uint *)(lVar9 + 0xa8) =
           *(uint *)(lVar9 + 0xa8) & 0xfffffffc | (uint)bVar1 | (uint)bVar2 << 1;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(lVar6 + 0x38);
      thunk_FUN_036b7ad0();
      FUN_06da788c(lVar9,*(undefined2 *)(lVar6 + 0x31));
      lVar5 = *(long *)(lVar6 + 0x20);
      *(uint *)(lVar9 + 0xa8) =
           *(uint *)(lVar9 + 0xa8) & 0xffffffdf | (uint)*(byte *)(lVar6 + 0x30) << 5;
      puVar3 = Unity_AppUI_UI_ISelectableElement_TypeInfo;
      if (lVar5 != 0) {
        lVar6 = *(long *)Unity_AppUI_UI_ISelectableElement_TypeInfo;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar6 = *(long *)puVar3;
        }
        puVar11 = *(undefined8 **)(lVar6 + 0xb8);
        lVar10 = puVar11[1];
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar13 = *puVar11;
          lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                       UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo
                                     );
          FUN_041597c8(lVar10,uVar13,*(undefined8 *)UnityEngine_EventSystems_ISelectHandler_TypeInfo
                       ,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar8 = lVar10;
          thunk_FUN_036b7ad0(plVar8,lVar10);
        }
        uVar13 = FUN_03b8d420(lVar5,lVar10,*(undefined8 *)HomeSpace_MVVM_IScreenView_TypeInfo);
        *(undefined8 *)(lVar9 + 0x88) = uVar13;
        thunk_FUN_036b7ad0();
      }
    }
    return lVar9;
  }
LAB_06da845c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


