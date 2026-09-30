/*
FUNCTION_NAME: FUN_020f7708
ENTRY_POINT: 020f7708
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_020f7708(float param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if ((DAT_0482fb5f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                      );
    DAT_0482fb5f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0211b39c(param_3,0);
  if ((param_3 != 0) && (param_2 != 0)) {
    param_1 = *(float *)(param_3 + 0xac) + param_1;
    *(float *)(param_2 + 0x130) = param_1;
    *(long *)(param_3 + 0xf0) = param_2;
    *(undefined1 *)(param_3 + 0x100) = 1;
    *(undefined1 *)(param_3 + 0xe9) = 1;
    thunk_FUN_01f51358((long *)(param_3 + 0xf0),param_2);
    iVar4 = *(int *)(param_3 + 0xa4);
    if (iVar4 == -1) {
      *(undefined4 *)(param_3 + 0xa4) = 0x7fffffff;
      FUN_021177cc(*(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                   ,param_3,0);
      iVar4 = *(int *)(param_3 + 0xa4);
    }
    fVar8 = *(float *)(param_3 + 0xa0);
    *(undefined1 *)(param_3 + 0x9c) = 0;
    *(undefined4 *)(param_3 + 0x114) = 0;
    *(undefined4 *)(param_3 + 0xac) = 0;
    *(undefined1 *)(param_3 + 0x118) = 1;
    puVar2 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
    ;
    if (*(char *)(param_3 + 0x9b) != '\0') {
      *(undefined1 *)(param_3 + 0x9b) = 0;
      FUN_021177cc(*(undefined8 *)puVar2,param_3,0);
    }
    fVar8 = param_1 + fVar8 * (float)iVar4;
    *(float *)(param_3 + 0x14) = param_1;
    *(float *)(param_3 + 0x18) = fVar8;
    if (*(float *)(param_2 + 0xa0) < fVar8) {
      *(float *)(param_2 + 0xa0) = fVar8;
    }
    lVar3 = *(long *)(param_2 + 0x128);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
      ;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = param_3;
          thunk_FUN_01f51358(plVar6,param_3);
        }
        else {
          FUN_030f2bb4(lVar3,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar3 = *(long *)(param_2 + 0x120);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar7 = *(long *)
                   Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
          ;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = param_3;
              thunk_FUN_01f51358(plVar6,param_3);
            }
            else {
              FUN_030f2bb4(lVar3,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            return param_2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


