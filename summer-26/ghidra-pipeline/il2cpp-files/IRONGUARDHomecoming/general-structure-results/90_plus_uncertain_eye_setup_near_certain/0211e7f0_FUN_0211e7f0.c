/*
FUNCTION_NAME: FUN_0211e7f0
ENTRY_POINT: 0211e7f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_0211e7f0(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if ((DAT_0482fc99 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_byte>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    DAT_0482fc99 = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x78) != '\0') {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0211c608();
    lVar5 = *(long *)puVar4;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar4;
  }
  uVar1 = *(uint *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if ((int)uVar1 < 1) {
    lVar5 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      uVar1 = *(uint *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    }
    if (param_3 == 0) {
      param_3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__
                                  );
      FUN_030f23f0(param_3,uVar1,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_byte>__);
    }
    puVar3 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar4;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
        if (lVar5 == 0) goto LAB_0211ea00;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0211ea00;
        if ((*(long *)(lVar5 + 0x48) == param_1) &&
           (((param_2 & 1) == 0 || (*(char *)(lVar5 + 0x110) != '\0')))) {
          if (param_3 == 0) goto LAB_0211ea00;
          lVar6 = *(long *)(param_3 + 0x10);
          lVar7 = *(long *)puVar3;
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_0211ea00;
          uVar2 = *(uint *)(param_3 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(param_3 + 0x18) = uVar2 + 1;
            *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(param_3,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
    if (param_3 == 0) {
LAB_0211ea00:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = 0;
    if (0 < *(int *)(param_3 + 0x18)) {
      lVar5 = param_3;
    }
  }
  return lVar5;
}


