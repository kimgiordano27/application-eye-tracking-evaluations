/*
FUNCTION_NAME: FUN_0622dd54
ENTRY_POINT: 0622dd54
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0622dd54(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_06b8b6e8 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_MS_Internal_Xml_XPath_XPathParser_ParseExpression__);
    FUN_02d6084c(Method_MS_Internal_Xml_XPath_XPathParser_ParseMethod__);
    FUN_02d6084c(Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_interactionLayerMask__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_selectingInteractor__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_CanHover__);
    DAT_06b8b6e8 = 1;
  }
  puVar2 = Method_MS_Internal_Xml_XPath_XPathParser_ParseMethod__;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar3 = FUN_03db9d54(param_2 + 0x18,
                       *(undefined8 *)Method_MS_Internal_Xml_XPath_XPathParser_ParseExpression__);
  iVar4 = FUN_03db8cb0(param_2 + 0x28,*(undefined8 *)puVar2);
  puVar2 = Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__;
  if (iVar3 == 0) {
    puVar8 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_selectingInteractor__
    ;
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      puVar8 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_selectingInteractor__
      ;
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = UnityEngine_UI_InputField__SendOnValueChangedAndUpdateLabel(0);
    puVar1 = PTR_DAT_0675e258;
    if ((long)(uVar5 & 0xffffffff) < (long)iVar3) {
      local_34 = iVar3;
      uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_34);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar2);
      }
      local_38 = UnityEngine_UI_InputField__SendOnValueChangedAndUpdateLabel(0);
      uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x50),&local_38);
      uVar6 = FUN_04e8e6a4(*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_CanHover__
                           ,uVar6,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
      }
      FUN_060223e8(uVar6,0);
      return;
    }
    if (iVar4 != 0) {
      FUN_0622fc78(param_1,param_2,0);
      return;
    }
    puVar8 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_interactionLayerMask__
    ;
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      puVar8 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable_set_interactionLayerMask__
      ;
    }
  }
  FUN_060223e8(*puVar8,0);
  return;
}


