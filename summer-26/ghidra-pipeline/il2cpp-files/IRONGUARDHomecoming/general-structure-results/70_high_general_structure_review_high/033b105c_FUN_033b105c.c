/*
FUNCTION_NAME: FUN_033b105c
ENTRY_POINT: 033b105c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_033b105c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  if ((DAT_04832381 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputRuntimeExtensions_DeviceCommand<InputDeviceCommand>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSettings_SetInternalFeatureFlag__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputState_Change<MouseState>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_04832381 = 1;
  }
  puVar4 = Method_UnityEngine_InputSystem_InputSettings_SetInternalFeatureFlag__;
  puVar3 = 
  Method_UnityEngine_InputSystem_LowLevel_InputRuntimeExtensions_DeviceCommand<InputDeviceCommand>__
  ;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
  puVar1 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
  ;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *(long *)
           Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
  FUN_030f35d0(&local_58,*(long *)(param_1 + 0x10),
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_InputState_Change<MouseState>__);
  while( true ) {
    uVar6 = FUN_02c7ab6c(&local_58,*(undefined8 *)puVar4);
    plVar5 = local_48;
    if ((uVar6 & 1) == 0) {
      FUN_02c7ab68(&local_58,*(undefined8 *)puVar3);
      FUN_03405678(lVar8,*(undefined8 *)puVar2,0);
      return;
    }
    if (lVar8 == 0) break;
    if (2 < *(int *)(lVar8 + 0x10)) {
      lVar8 = FUN_03405678(lVar8,*(undefined8 *)puVar1,0);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    lVar8 = FUN_03405678(lVar8,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


