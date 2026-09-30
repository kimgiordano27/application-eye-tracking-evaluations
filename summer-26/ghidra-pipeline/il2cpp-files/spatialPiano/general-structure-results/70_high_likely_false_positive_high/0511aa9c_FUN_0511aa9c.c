/*
FUNCTION_NAME: FUN_0511aa9c
ENTRY_POINT: 0511aa9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


long FUN_0511aa9c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar1 = Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var;
                    /* try { // try from 0511aaac to 0521aabb has its CatchHandler @ 0511aabc */
                    /* catch() { ... } // from try @ 0511aa88 with catch @ 0511aabc
                       catch() { ... } // from try @ 0511aaac with catch @ 0511aabc */
                    /* try { // try from 0511aac0 to 0521aac3 has its CatchHandler @ 0511aacc */
  if ((DAT_06bb9e26 & 1) == 0) {
                    /* try { // try from 0511aac4 to 0521aacf has its CatchHandler @ 0511aa34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0511aac0 with catch @ 0511aacc
                        */
    FUN_02f08768(PTR_DAT_067ce588);
    FUN_02f08768(Unity_Hierarchy_HierarchyViewModel_Enumerator_var);
    FUN_02f08768(System_Net_HttpWebRequest_AuthorizationState_var);
    FUN_02f08768(Unity_AppUI_UI_Icon_UxmlSerializedData_var);
    FUN_02f08768(Unity_AppUI_UI_IconButton_UxmlSerializedData_var);
    FUN_02f08768(Unity_XR_CompositionLayers_Rendering_ImageFilters_BlitParams_var);
    FUN_02f08768(Unity_XR_CompositionLayers_Rendering_ImageFilters_MirrorViewParams_var);
    FUN_02f08768(System_Nullable<SqlBinary>_var);
    FUN_02f08768(Unity_XR_CompositionLayers_Rendering_ImageFilters_TargetParams_var);
    FUN_02f08768(Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var);
    FUN_02f08768(UnityEngine_UIElements_InlineStyleAccess_InlineRule_var);
    FUN_02f08768(UnityEngine_InputSystem_InputAction_CallbackContext_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionMap_DeviceArray_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_var);
    FUN_02f08768(UnityEngine_InputSystem_InputActionState_GlobalState_var);
    FUN_02f08768(UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_var);
    FUN_02f08768(UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_var);
    FUN_02f08768(UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_var);
    DAT_06bb9e26 = 1;
  }
  puVar4 = UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var;
  puVar2 = PTR_DAT_067ce588;
  lVar7 = FUN_02f1f61c();
  lVar8 = FUN_0511a8b4(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_067c9338;
  if ((lVar8 == 0) ||
     (uVar9 = thunk_FUN_04f6d944(lVar8,**(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8),
                                 0), (uVar9 & 1) != 0)) {
    puVar5 = UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var;
    puVar3 = System_Nullable<SqlBinary>_var;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050ad0f0(lVar7,*(undefined8 *)puVar5,0);
    lVar8 = FUN_050ad0f0(uVar10,*(undefined8 *)puVar3,0);
  }
  lVar11 = FUN_0511a8b4(*(undefined8 *)puVar4);
  if ((lVar11 == 0) ||
     (uVar9 = thunk_FUN_04f6d944(lVar11,**(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8),0),
     (uVar9 & 1) != 0)) {
    puVar4 = Unity_XR_CompositionLayers_Rendering_ImageFilters_TargetParams_var;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar11 = FUN_050ad0f0(lVar7,*(undefined8 *)puVar4,0);
  }
  switch(param_1) {
  case 0:
  case 0x10:
    puVar14 = (undefined8 *)UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_var;
    puVar15 = (undefined8 *)UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_var;
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar10 = thunk_FUN_02f45270();
    uVar12 = thunk_FUN_02f6ef30(UnityEngine_InputSystem_InputControlExtensions_ControlBuilder_var);
    FUN_05055664(uVar10,uVar12,0);
    uVar12 = thunk_FUN_02f6ef30(UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar12);
  case 2:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    goto switchD_0511acec_caseD_2;
  case 5:
  case 0x28:
    return lVar7;
  case 6:
    iVar6 = FUN_02f1f150();
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_var;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_var
        ;
      }
      goto LAB_0511ae1c;
    }
    goto switchD_0511acec_caseD_2;
  case 0xd:
    iVar6 = FUN_02f1f150();
    puVar14 = (undefined8 *)Unity_XR_CompositionLayers_Rendering_ImageFilters_BlitParams_var;
    puVar15 = (undefined8 *)
              UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var;
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)
                UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar14 = (undefined8 *)
                  UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var;
      }
LAB_0511aeb8:
      lVar7 = FUN_050ad0f0(lVar7,*puVar14,0);
      return lVar7;
    }
    break;
  case 0xe:
    puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionState_GlobalState_var;
    puVar15 = (undefined8 *)UnityEngine_UIElements_InlineStyleAccess_InlineRule_var;
    break;
  case 0x14:
    iVar6 = FUN_02f1f150();
    if (iVar6 != 6) {
      puVar14 = (undefined8 *)
                UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_var;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar14 = (undefined8 *)
                  UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_var;
      }
      goto LAB_0511aeb8;
    }
    puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_DeviceArray_var;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_DeviceArray_var;
    }
LAB_0511ae1c:
    lVar7 = Newtonsoft_Json_Utilities_ImmutableCollectionsUtils___cctor
                      (lVar7,*(undefined8 *)Unity_Hierarchy_HierarchyViewModel_Enumerator_var,
                       *puVar14,0);
    return lVar7;
  case 0x15:
    puVar14 = (undefined8 *)Unity_AppUI_UI_IconButton_UxmlSerializedData_var;
    puVar15 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var;
    break;
  case 0x1a:
    goto switchD_0511acec_caseD_1a;
  case 0x1c:
    return lVar8;
  case 0x20:
    iVar6 = FUN_02f1f150();
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_var;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar14 = (undefined8 *)UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_var
        ;
      }
      goto LAB_0511ae1c;
    }
switchD_0511acec_caseD_2:
    plVar13 = *(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    goto LAB_0511acf8;
  case 0x23:
    plVar13 = (long *)Unity_XR_CompositionLayers_Rendering_ImageFilters_MirrorViewParams_var;
    goto LAB_0511acf8;
  case 0x26:
    iVar6 = FUN_02f1f150();
    plVar13 = (long *)UnityEngine_InputSystem_InputAction_CallbackContext_var;
    if (iVar6 != 6) goto switchD_0511acec_caseD_2;
    goto LAB_0511acf8;
  case 0x27:
    iVar6 = FUN_02f1f150();
    puVar14 = (undefined8 *)Unity_AppUI_UI_Icon_UxmlSerializedData_var;
    puVar15 = (undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var;
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar14 = (undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var;
      }
      goto LAB_0511aeb8;
    }
    break;
  case 0x2d:
    plVar13 = (long *)UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_var;
LAB_0511acf8:
    lVar11 = *plVar13;
switchD_0511acec_caseD_1a:
    return lVar11;
  }
  lVar7 = FUN_0511af54(lVar11,lVar7,*puVar14,*puVar15);
  return lVar7;
}


