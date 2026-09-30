/*
FUNCTION_NAME: FUN_05a7feb4
ENTRY_POINT: 05a7feb4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3
*/


uint FUN_05a7feb4(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  
  if ((DAT_066d4080 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(System_Collections_Generic_Stack<IList>_TypeInfo);
    FUN_02b3c81c(Method_System_Data_DataTableCollection_RegisterName__);
    FUN_02b3c81c(Method_System_Data_DataTable_set_Prefix__);
    FUN_02b3c81c(Method_System_Data_DataTableCollection_get_Item__);
    FUN_02b3c81c(Method_System_Data_DataTableCollection_get_Item__);
    FUN_02b3c81c(Method_System_Data_DataTableCollection_get_Item__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Converters_DataTableConverter_GetColumnDataType__);
    DAT_066d4080 = 1;
  }
  if (param_2 == 0) {
LAB_05a7ffc4:
    uVar3 = 0;
    goto 
    UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider__get_hasXRHover
    ;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 == 0) {
    uVar5 = FUN_05fb7830(param_2,0);
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    goto LAB_05a7ffdc;
  }
  if (uVar3 - 4 < 0xfffffffd) {
    local_34 = uVar3;
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)Method_System_Data_DataTableCollection_RegisterName__,
                       &local_34);
    uVar6 = FUN_04c0af28(*(undefined8 *)
                          Method_Newtonsoft_Json_Converters_DataTableConverter_GetColumnDataType__,
                         *(undefined8 *)Method_System_Data_DataTableCollection_get_Item__,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c44f60(uVar6,0);
    goto LAB_05a7ffc4;
  }
  uVar4 = FUN_05fb78bc(param_2,0);
  uVar3 = 0;
  if (uVar4 == 0)
  goto 
  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider__get_hasXRHover
  ;
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(*(long *)Method_System_Data_DataTable_set_Prefix__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = iVar1 - 1;
  if (uVar3 < 3) {
    uVar3 = *(uint *)(&DAT_01136800 + (ulong)uVar3 * 4);
  }
  else {
    uVar3 = 0;
  }
  if ((uVar3 & uVar4) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar5 = FUN_05fb7830(param_2,0);
    puVar2 = System_Collections_Generic_Stack<IList>_TypeInfo;
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    local_34 = uVar3;
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar2,&local_34);
    uVar6 = FUN_04c00984(*(undefined8 *)Method_System_Data_DataTableCollection_get_Item__,uVar6,0);
    local_38 = uVar4;
    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar2,&local_38);
    local_3c = *(undefined4 *)(param_1 + 0x50);
    uVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar2,&local_3c);
    uVar8 = FUN_04c0af28(*(undefined8 *)Method_System_Data_DataTableCollection_get_Item__,uVar8,
                         uVar9,0);
    uVar6 = FUN_04bffdac(uVar6,uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c453b4(uVar6,param_1,0);
LAB_05a7ffdc:
    FUN_05a7f8d0(param_1);
    uVar3 = 1;
  }
  else {
    uVar7 = FUN_05fb7794(param_2,uVar3,0);
    if ((uVar7 & 1) != 0) goto LAB_05a7ffdc;
    uVar3 = 0;
  }
  if (((*(int *)(param_1 + 0x50) == 1) || (*(int *)(param_1 + 0x50) == 8)) ||
     ((*(uint *)(param_1 + 0x48) | 2) == 3)) {
    uVar3 = FUN_05fb7708(param_2,0);
  }

  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider__get_hasXRHover
  :
  return uVar3 & 1;
}


