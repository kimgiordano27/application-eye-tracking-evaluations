/*
FUNCTION_NAME: FUN_05bae770
ENTRY_POINT: 05bae770
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_21
*/


void FUN_05bae770(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = 
  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__;
  if ((DAT_066d501e & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<HID_HIDDeviceDescriptor>__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<InputActionAsset_ReadFileJson>__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<InputActionMap_BindingOverrideListJson>__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<InputActionMap_ReadFileJson>__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJson>__);
    FUN_02b3c81c(
                Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_JsonUtility_FromJson<InputDeviceDescription_DeviceDescriptionJson>__
                );
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson<XInputController_Capabilities>__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_FromJson__);
    FUN_02b3c81c(Method_UnityEngine_JsonUtility_ToJson__);
    FUN_02b3c81c(Method_LitJson_JsonWriter__ctor__);
    FUN_02b3c81c(Method_LitJson_JsonWriter_DoValidation__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonWriter_AutoComplete__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonWriter_CalculateLevelsToComplete__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__
                );
    DAT_066d501e = 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (param_2 == 0) {
    if (lVar4 != 0) {
      FUN_0452f2dc(lVar4,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_JsonUtility_FromJson<InputActionMap_BindingOverrideListJson>__
                  );
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_05baea90;
      iVar3 = FUN_0452da78(lVar4,*(undefined8 *)
                                  Method_UnityEngine_JsonUtility_FromJson<InputDeviceDescription_DeviceDescriptionJson>__
                          );
      if (iVar3 == 0) {
        puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *puVar6 = 0;
        thunk_FUN_02bb0e9c(puVar6,0);
      }
    }
  }
  else {
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_02b79644(*(undefined8 *)Method_LitJson_JsonWriter_DoValidation__);
      FUN_0452d044(uVar5,*(undefined8 *)
                          Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>__
                  );
      puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_02bb0e9c(puVar6,uVar5);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_05baea90;
    }
    FUN_0452ddac(lVar4,param_1,param_2,*(undefined8 *)Method_UnityEngine_JsonUtility_FromJson__);
  }
  lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
  if (param_3 == 0) {
    if (lVar4 != 0) {
      FUN_0452f2dc(lVar4,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_JsonUtility_FromJson<InputActionMap_ReadFileJson>__);
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_05baea90;
      iVar3 = FUN_0452da78(**(long **)(*(long *)puVar1 + 0xb8),
                           *(undefined8 *)
                            Method_UnityEngine_JsonUtility_FromJson<XInputController_Capabilities>__
                          );
      if (iVar3 == 0) {
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
        thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
      }
    }
  }
  else {
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_02b79644(*(undefined8 *)Method_LitJson_JsonWriter__ctor__);
      FUN_0452d044(uVar5,*(undefined8 *)
                          Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJson>__);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
      thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) {
LAB_05baea90:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    FUN_0452ddac(lVar4,param_1,param_3,*(undefined8 *)Method_UnityEngine_JsonUtility_ToJson__);
  }
  puVar2 = Method_Newtonsoft_Json_JsonWriter_CalculateLevelsToComplete__;
  plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
  if (plVar8[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_JsonUtility_FromJson<InputActionAsset_ReadFileJson>__
                              );
    FUN_05baea94(uVar5,0,*(undefined8 *)puVar2);
    plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  puVar1 = Method_Newtonsoft_Json_JsonWriter_AutoComplete__;
  if (*plVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_JsonUtility_FromJson<HID_HIDDeviceDescriptor>__);
    FUN_05baeb44(uVar7,0,*(undefined8 *)puVar1);
  }
  FUN_05baebf8(uVar5,uVar7);
  return;
}


