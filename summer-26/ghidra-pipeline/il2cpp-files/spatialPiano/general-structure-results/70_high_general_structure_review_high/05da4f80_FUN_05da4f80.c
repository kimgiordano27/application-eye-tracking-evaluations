/*
FUNCTION_NAME: FUN_05da4f80
ENTRY_POINT: 05da4f80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

int FUN_05da4f80(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if ((DAT_06bc3ae8 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_OVRSceneManager_CheckIfClassificationsAreValid__);
    FUN_02f08768(Method_UnityEngine_Quaternion_get_Item__);
    FUN_02f08768(Method_System_Xml_QueryOutputWriter_Close__);
    FUN_02f08768(Method_System_Xml_QueryOutputWriter_WriteStartElement__);
    DAT_06bc3ae8 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (iVar4 == 2) {
LAB_05da5044:
    iVar4 = 2;
    if ((param_2 & 1) != 0) {
      iVar4 = 3;
    }
joined_r0x05da5048:
    if ((param_4 & 1) == 0) {
      return iVar4;
    }
    if (iVar4 == 1) {
UnityEngine_XR_ARFoundation_ARRaycastManager___cctor:
      if (*(int *)(*(long *)Method_OVRSceneManager_CheckIfClassificationsAreValid__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_05da4e40();
      if ((uVar5 & 1) == 0) {
        iVar4 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_5(0);
        if (3 < iVar4) {
          return 1;
        }
        iVar4 = *(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4);
        puVar1 = (undefined8 *)Method_System_Xml_QueryOutputWriter_WriteStartElement__;
      }
      else {
        iVar4 = *(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4);
        puVar1 = (undefined8 *)Method_UnityEngine_Quaternion_get_Item__;
      }
      goto joined_r0x05da50c0;
    }
  }
  else {
    if (iVar4 == 1) {
      if ((param_4 & 1) == 0) {
        return 1;
      }
      goto UnityEngine_XR_ARFoundation_ARRaycastManager___cctor;
    }
    if (iVar4 == 0) {
      if (*(int *)(*(long *)Method_OVRSceneManager_CheckIfClassificationsAreValid__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_05da4e40();
      if ((uVar5 & 1) != 0) goto LAB_05da5044;
      uVar2 = FUN_05da5460();
      iVar4 = 2;
      if ((param_2 & 1) != 0) {
        iVar4 = 3;
      }
      if (((param_2 & param_3 | uVar2) & 1) != 0) {
        iVar4 = 1;
      }
      goto joined_r0x05da5048;
    }
    iVar4 = 0;
    if ((param_4 & 1) == 0) {
      return 0;
    }
  }
  iVar3 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_5(0);
  if (iVar4 != 3) {
    return iVar4;
  }
  if (3 < iVar3) {
    return 3;
  }
  iVar4 = *(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4);
  puVar1 = (undefined8 *)Method_System_Xml_QueryOutputWriter_Close__;
joined_r0x05da50c0:
  if (iVar4 == 0) {
    thunk_FUN_02f6670c();
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(*puVar1,0);
  return 0;
}


