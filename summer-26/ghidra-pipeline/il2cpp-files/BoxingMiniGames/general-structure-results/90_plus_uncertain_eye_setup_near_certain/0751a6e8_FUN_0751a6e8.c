/*
FUNCTION_NAME: FUN_0751a6e8
ENTRY_POINT: 0751a6e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0751a9e0) */

undefined8 FUN_0751a6e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar1 = Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_bindTitle__;
  if ((DAT_07ef4b92 & 1) == 0) {
    FUN_03642964(Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_makeItem__);
    FUN_03642964(PTR_DAT_07a02168);
    FUN_03642964(PTR_DAT_079fd890);
    FUN_03642964(Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_makeTitle__);
    FUN_03642964(PTR_DAT_079fd878);
    FUN_03642964(PTR_DAT_079fdb58);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Max__);
    FUN_03642964(PTR_DAT_079fdb60);
    FUN_03642964(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    FUN_03642964(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_03642964(Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_bindTitle__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b92 = 1;
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar3,0);
  puVar2 = Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__;
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  puVar9 = (undefined8 *)(lVar3 + 0x10);
  *puVar9 = param_2;
  thunk_FUN_036b7ad0(puVar9,param_2);
  FUN_074eeee0(*puVar9,0);
  FUN_07516ab4(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar4 = FUN_03fc4cf8(*(undefined8 *)puVar2);
  FUN_07519044(param_1,*puVar9,lVar4);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar4 + 0x18) < 1) {
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb60);
    FUN_0459e7d4(uVar5,*(undefined8 *)PTR_DAT_079fdb58);
  }
  else {
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_makeTitle__
                              );
    FUN_04159c38(uVar5,lVar3,*(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>_Dispose__,0);
    uVar5 = FUN_03cb9310(lVar4,uVar5,
                         *(undefined8 *)
                          Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>_set_makeItem__);
    puVar2 = Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__;
    lVar3 = *(long *)Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isUnknown__;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar2;
    }
    puVar9 = *(undefined8 **)(lVar3 + 0xb8);
    lVar7 = puVar9[3];
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar9;
      lVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fd878);
      FUN_04159004(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_036b7ad0(plVar6,lVar7);
    }
    uVar5 = FUN_03cc7aa0(uVar5,lVar7,*(undefined8 *)PTR_DAT_079fd890);
    uVar5 = FUN_03cc668c(uVar5,*(undefined8 *)PTR_DAT_07a02168);
  }
  puVar2 = Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_03fc4778(lVar4,*(undefined8 *)puVar2);
  return uVar5;
}


