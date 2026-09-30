/*
FUNCTION_NAME: FUN_076e2aa4
ENTRY_POINT: 076e2aa4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076e2aa4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_082714d3 & 1) == 0) {
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<HID_HIDElementDescriptor>,_HID_HIDElementDescriptor>_Get__
                );
    FUN_0373b518(
                Method_UnityEngine_Pool_CollectionPool<List<MultiColumnCollectionHeader_SortedColumnState>,_MultiColumnCollectionHeader_SortedColumnState>_Get__
                );
    DAT_082714d3 = 1;
  }
  puVar5 = 
  Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
  ;
  puVar4 = 
  Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
  ;
  puVar3 = 
  Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
  ;
  puVar2 = 
  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
  ;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_05b40d04(&local_60,*(long *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
                );
    while (uVar6 = FUN_05e44518(&local_60,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      uStack_68 = uStack_40;
      local_70 = uStack_48;
      FUN_076e4598(&local_70);
    }
    System_Collections_Generic_EqualityComparer<Quaternion>__LastIndexOf
              (&local_60,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_05b40a68(*(long *)(param_1 + 0x20),*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_045b9518(*(long *)(param_1 + 0x28),*(undefined8 *)puVar5);
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 != 0) {
          iVar1 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_062658d0(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


