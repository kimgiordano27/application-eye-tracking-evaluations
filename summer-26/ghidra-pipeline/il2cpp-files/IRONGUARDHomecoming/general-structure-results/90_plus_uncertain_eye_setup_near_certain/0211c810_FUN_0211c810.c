/*
FUNCTION_NAME: FUN_0211c810
ENTRY_POINT: 0211c810
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0211c810(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_0482fc9a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    DAT_0482fc9a = 1;
  }
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if ((param_2 & 1) != 0) {
    lVar3 = *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
    ;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x44) == '\0') {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0211b9e0(param_1,1);
      return;
    }
  }
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xe8) = 0;
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)
               Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = param_1;
          thunk_FUN_01f51358(plVar5,param_1);
          return;
        }
        FUN_030f2bb4(lVar3,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


