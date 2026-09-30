/*
FUNCTION_NAME: FUN_05a45b84
ENTRY_POINT: 05a45b84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a45b84(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5
                 ,undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 undefined8 param_10)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long local_80;
  undefined8 local_78;
  
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_AddCallback__
  ;
  if ((DAT_06b81254 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_AddCallback__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
                );
    DAT_06b81254 = 1;
  }
  local_78 = 0;
  local_80 = param_2;
  thunk_FUN_02dd37b4(&local_80,param_2);
  plVar4 = (long *)FUN_02d60934(*(undefined8 *)puVar1,param_4);
  puVar1 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__;
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_047cae04(*(long *)(param_2 + 0x10),param_3,plVar4,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item__
                );
    uVar2 = FUN_0604e9ec(param_5,0);
    uVar3 = *(undefined4 *)(param_5 + 0x1c);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Rendering_Universal_PostProcessPasses__get_afterPostProcessColor
                      (uVar2,uVar3,0);
    local_78 = CONCAT44(local_78._4_4_,uVar3);
    lVar5 = FUN_05a45dd8(param_1,param_2,param_5,param_6,param_7,param_8 & 1,param_9,param_10,
                         &local_80);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_05a45dcc:
        uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar7,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_05a45dc4:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar4[4] = lVar5;
      thunk_FUN_02dd37b4(plVar4 + 4,lVar5);
      uVar8 = plVar4[3];
      if (1 < (int)uVar8) {
        uVar9 = 1;
        plVar10 = plVar4 + 5;
        do {
          lVar5 = FUN_05a45dd8(param_1,param_2,param_5,param_6,param_7,param_8 & 1,param_9,param_10,
                               &local_80);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_05a45dcc;
          if (*(uint *)(plVar4 + 3) <= uVar9) goto LAB_05a45dc4;
          *plVar10 = lVar5;
          thunk_FUN_02dd37b4(plVar10,lVar5);
          if (*(uint *)(plVar4 + 3) <= uVar9) goto LAB_05a45dc4;
          if (*(long *)(param_2 + 0x18) == 0) goto LAB_05a45dc8;
          FUN_05a4c6f0(*(long *)(param_2 + 0x18),*plVar10,1,0);
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 1;
        } while ((uVar8 & 0xffffffff) != uVar9);
      }
      return;
    }
  }
LAB_05a45dc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


