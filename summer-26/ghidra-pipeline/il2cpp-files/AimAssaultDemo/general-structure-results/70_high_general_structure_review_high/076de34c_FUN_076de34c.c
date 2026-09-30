/*
FUNCTION_NAME: FUN_076de34c
ENTRY_POINT: 076de34c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076de34c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_07d95d10;
  if ((DAT_08271497 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d97b18);
    FUN_0373b518(PTR_DAT_07d976b8);
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_UnlockForChanges__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_length__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271497 = 1;
  }
  lVar7 = *(long *)puVar2;
  local_58 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__;
  puVar5 = PTR_DAT_07d97b18;
  puVar4 = PTR_DAT_07d976b8;
  puVar1 = PTR_DAT_07d86548;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    local_58 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(undefined8 *)PTR_DAT_07d976b8;
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar9 = FUN_062519f8(uVar9,0);
    uVar8 = FUN_062519f8(*(undefined8 *)puVar5,0);
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *(long *)puVar6;
    }
    puVar3 = PTR_DAT_07d96228;
    lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4a0);
    if (lVar10 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar7);
        lVar7 = *(long *)puVar6;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar10 = thunk_FUN_037788cc(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_UnlockForChanges__
                                 );
      FUN_055126a8(lVar10,uVar11,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__
                   ,0);
      lVar7 = *(long *)(*(long *)puVar6 + 0xb8);
      *(long *)(lVar7 + 0x4a0) = lVar10;
      thunk_FUN_037aeb94(lVar7 + 0x4a0,lVar10);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_076d2dec(&local_58,uVar9,uVar8,lVar10);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      local_58 = *(undefined8 *)(lVar7 + 0x28);
      uVar9 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_062519f8(uVar9,0);
      uVar8 = FUN_062519f8(*(undefined8 *)puVar4,0);
      lVar7 = *(long *)puVar6;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar7);
        lVar7 = *(long *)puVar6;
      }
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x4a8);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar7);
          lVar7 = *(long *)puVar6;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_037788cc(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                                   );
        FUN_05512840(lVar10,uVar11,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_length__
                     ,0);
        lVar7 = *(long *)(*(long *)puVar6 + 0xb8);
        *(long *)(lVar7 + 0x4a8) = lVar10;
        thunk_FUN_037aeb94(lVar7 + 0x4a8,lVar10);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_076d2dec(&local_58,uVar9,uVar8,lVar10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


