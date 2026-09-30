/*
FUNCTION_NAME: FUN_033b1254
ENTRY_POINT: 033b1254
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


void FUN_033b1254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_04832382 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputRuntimeExtensions_DeviceCommand<InputDeviceCommand>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSettings_SetInternalFeatureFlag__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputState_Change<MouseState>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
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
    DAT_04832382 = 1;
  }
  puVar6 = Method_UnityEngine_InputSystem_LowLevel_InputState_Change<MouseState>__;
  puVar5 = Method_UnityEngine_InputSystem_InputSettings_SetInternalFeatureFlag__;
  puVar4 = 
  Method_UnityEngine_InputSystem_LowLevel_InputRuntimeExtensions_DeviceCommand<InputDeviceCommand>__
  ;
  puVar3 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
  puVar1 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
  ;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)
            Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
  FUN_030f35d0(&local_98,*(long *)(param_1 + 0x10),
               *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_InputState_Change<MouseState>__);
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  while( true ) {
    uVar8 = FUN_02c7ab6c(&local_80,*(undefined8 *)puVar5);
    plVar7 = local_70;
    if ((uVar8 & 1) == 0) {
      FUN_02c7ab68(&local_80,*(undefined8 *)puVar4);
      FUN_0340eee0(lVar11,*(undefined8 *)puVar3,param_2,*(undefined8 *)puVar2,0);
      return;
    }
    if (lVar11 == 0) break;
    if (3 < *(int *)(lVar11 + 0x10)) {
      lVar11 = FUN_03405678(lVar11,*(undefined8 *)puVar1,0);
    }
    uVar9 = FUN_0340eee0(lVar11,*(undefined8 *)puVar3,param_2,*(undefined8 *)puVar6,0);
    uVar10 = FUN_03405678(param_2,*(undefined8 *)puVar6,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar10,uVar10);
    }
    uVar10 = (**(code **)(*plVar7 + 0x248))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x250));
    lVar11 = FUN_03405678(uVar9,uVar10,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


