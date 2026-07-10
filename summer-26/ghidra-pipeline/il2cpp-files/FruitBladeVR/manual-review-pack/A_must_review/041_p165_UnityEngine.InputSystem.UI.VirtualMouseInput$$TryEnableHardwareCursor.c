/*
FUNCTION_NAME: UnityEngine.InputSystem.UI.VirtualMouseInput$$TryEnableHardwareCursor
ENTRY_POINT: 032791b8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_UI_VirtualMouseInput__TryEnableHardwareCursor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_50 [16];
  
  puVar3 = PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8;
  if ((DAT_03ef4fb0 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value___03cd02f0);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_Mouse_TypeInfo_03ccc140);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Count___03ccb838
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item___03ccd2b0
                );
    DAT_03ef4fb0 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  local_50 = UnityEngine_InputSystem_InputSystem__get_devices(0);
  puVar4 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item___03ccd2b0;
  puVar2 = PTR_UnityEngine_InputSystem_Mouse_TypeInfo_03ccc140;
  if (0 < local_50._12_4_) {
    iVar8 = 0;
    do {
      plVar5 = (long *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                                 (local_50,iVar8,*(undefined8 *)puVar4);
      if (plVar5 == (long *)0x0) goto LAB_032793dc;
      uVar6 = UnityEngine_InputSystem_InputDevice__get_native(plVar5,0);
      if ((uVar6 & 1) != 0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          *(long *)(param_1 + 0xf8) = (long)plVar5;
          thunk_FUN_01cc8040((long *)(param_1 + 0xf8),plVar5);
          break;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_50._12_4_);
  }
  puVar2 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  lVar9 = *(long *)(param_1 + 0xf8);
  if (lVar9 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) goto LAB_032793dc;
    uVar11 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    UnityEngine_InputSystem_InputSystem__DisableDevice(lVar9,0,0);
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x188);
      if (lVar9 == 0) goto LAB_032793dc;
      lVar10 = *(long *)(param_1 + 0xf8);
      puVar7 = (undefined4 *)
               UnityEngine_InputSystem_InputControl<Vector2>__get_value
                         (lVar9,*(undefined8 *)
                                 PTR_Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value___03cd02f0
                         );
      if (lVar10 == 0) goto LAB_032793dc;
      UnityEngine_InputSystem_Mouse__WarpCursorPosition(*puVar7,puVar7[1],lVar10,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
LAB_032793dc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar11 = 0;
  }
  UnityEngine_Behaviour__set_enabled(lVar9,uVar11,0);
  return;
}


