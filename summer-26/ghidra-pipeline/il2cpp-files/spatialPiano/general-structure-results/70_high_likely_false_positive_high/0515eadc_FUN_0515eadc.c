/*
FUNCTION_NAME: FUN_0515eadc
ENTRY_POINT: 0515eadc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0515eadc(long param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_06bba158 & 1) == 0) {
    FUN_02f08768(UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo);
    FUN_02f08768(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    FUN_02f08768(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067cafa0);
    DAT_06bba158 = 1;
  }
  puVar1 = 
  UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
  ;
  puVar2 = 
  UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
  ;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) < 1)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar5 = 0;
    do {
      FUN_03a7fbac(&local_c8,param_1,iVar5,*(undefined8 *)puVar1);
      puStack_58 = puStack_c0;
      local_60 = local_c8;
      local_50 = local_b8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar4 = FUN_0515e838(&local_60);
      iVar5 = iVar5 + 1;
      iVar8 = iVar4 + iVar8;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  puVar1 = PTR_DAT_067cafa0;
  if (*param_2 != '\0') {
    puStack_58 = *(undefined8 **)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar5 = FUN_0515e838(&local_60);
    iVar8 = iVar5 + iVar8;
  }
  plVar6 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_04f77edc(plVar6,iVar8,0);
  puVar3 = UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo;
  puVar1 = UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_TypeInfo;
  local_38 = 0;
  local_48 = 0;
  if (param_1 != 0) {
    FUN_03a80bc0(&local_90,param_1,
                 *(undefined8 *)
                  UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    local_c8 = 0;
    puStack_c0 = &local_90;
    while (uVar7 = FUN_04af497c(&local_90,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0515e8cc(&local_b0,plVar6,&local_38,&local_48);
    }
    FUN_04af4978(&local_90,*(undefined8 *)puVar1);
  }
  if (*param_2 != '\0') {
    puStack_58 = *(undefined8 **)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0515e8cc(&local_60,plVar6,&local_38,&local_48);
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  return;
}


