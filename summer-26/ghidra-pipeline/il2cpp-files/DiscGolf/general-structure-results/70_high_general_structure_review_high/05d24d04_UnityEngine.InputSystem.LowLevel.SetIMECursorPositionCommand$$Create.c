/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand$$Create
ENTRY_POINT: 05d24d04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_LowLevel_SetIMECursorPositionCommand__Create
               (undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x21;
  long lVar6;
  long *plVar7;
  long unaff_x24;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar8 = *(undefined8 **)(unaff_x24 + 400);
  if ((*(byte *)(unaff_x21 + 0xf5b) & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Key__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<int,_LobbyPlayerChanges>_get_Key__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<int,_long>_get_Value__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>__ctor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__);
    *(undefined1 *)(unaff_x21 + 0xf5b) = 1;
  }
  lVar4 = thunk_FUN_02dd3144(*puVar8);
  FUN_0552aca4(lVar4,0);
  if (lVar4 != 0) {
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = param_2;
    LeanTween__value(plVar9,param_2);
    plVar7 = (long *)(lVar4 + 0x18);
    *plVar7 = param_3;
    LeanTween__value(plVar7,param_3);
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>__ctor__;
    puVar2 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
    lVar6 = *plVar9;
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x19) == '\x01') {
        lVar6 = *(long *)
                 Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>__ctor__;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *(long *)puVar3;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
        uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Key__
                                  );
        FUN_04be213c(uVar5,lVar4,
                     *(undefined8 *)
                      Method_System_Collections_Generic_KeyValuePair<int,_LobbyPlayerChanges>_get_Key__
                     ,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05d17a30(param_1,uVar1,uVar5);
        return;
      }
      lVar4 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
      LeanTween__value((undefined8 *)(lVar6 + 0x20));
      lVar4 = *plVar7;
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05d24ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),*plVar9,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


