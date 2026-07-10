/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager$$TryGetControllerDevice
ENTRY_POINT: 036a3b78
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager__TryGetControllerDevice
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  
  puVar2 = PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8;
  if ((DAT_03ef6ed8 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_Contains<InternedString>___03cb6e98
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Count___03ccb838
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item___03ccd2b0
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_XR_XRController_TypeInfo_03ce6010);
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo_03ce3c10
                );
    DAT_03ef6ed8 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  *param_3 = 0;
  thunk_FUN_01cc8040(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  local_70 = UnityEngine_InputSystem_InputSystem__get_devices(0);
  puVar5 = PTR_UnityEngine_InputSystem_XR_XRController_TypeInfo_03ce6010;
  puVar4 = PTR_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo_03ce3c10;
  puVar3 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item___03ccd2b0;
  puVar2 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_Contains<InternedString>___03cb6e98
  ;
  if (0 < local_70._12_4_) {
    dVar10 = -1.0;
    iVar8 = 0;
    do {
      plVar6 = (long *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                                 (local_70,iVar8,*(undefined8 *)puVar3);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar7 = UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager__ShouldIgnoreXRControllerType
                            (plVar6);
          if ((uVar7 & 1) == 0) {
            auVar11 = UnityEngine_InputSystem_InputControl__get_usages(plVar6,0);
            uVar7 = UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions__Contains<InternedString>
                              (auVar11._0_8_,auVar11._8_8_,param_1,param_2,*(undefined8 *)puVar2);
            if ((uVar7 & 1) != 0) {
              if (*param_3 != 0) {
                dVar9 = (double)UnityEngine_InputSystem_InputDevice__get_lastUpdateTime(plVar6,0);
                if (dVar9 <= dVar10) goto LAB_036a3d24;
              }
              *param_3 = (long)plVar6;
              thunk_FUN_01cc8040(param_3,plVar6);
              dVar10 = (double)UnityEngine_InputSystem_InputDevice__get_lastUpdateTime(plVar6,0);
            }
          }
        }
      }
LAB_036a3d24:
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_70._12_4_);
  }
  return *param_3 != 0;
}


