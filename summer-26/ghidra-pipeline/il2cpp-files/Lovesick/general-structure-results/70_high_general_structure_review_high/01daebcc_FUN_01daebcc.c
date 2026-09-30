/*
FUNCTION_NAME: FUN_01daebcc
ENTRY_POINT: 01daebcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01daebcc(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_0377f700 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_<InvokeContinuation>b__20_0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
                      );
    DAT_0377f700 = 1;
  }
  if ((param_2 != 0) && (uVar2 = FUN_01d431ac(param_2,0), param_3 != (long *)0x0)) {
    lVar3 = (**(code **)(*param_3 + 0x178))(param_3,uVar2,*(undefined8 *)(*param_3 + 0x180));
    uVar2 = FUN_01d3b244(param_2,0);
    uVar2 = (**(code **)(*param_3 + 0x178))(param_3,uVar2,*(undefined8 *)(*param_3 + 0x180));
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_<InvokeContinuation>b__20_0__
                              );
    puVar1 = 
    Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
    ;
    if (lVar4 != 0) {
      FUN_01dafa54(lVar4,param_2,0);
      plVar6 = *(long **)(param_1 + 0x10);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_017b46ec(lVar5,0);
        *(long *)(lVar5 + 0x10) = lVar3;
        *(undefined8 *)(lVar5 + 0x18) = uVar2;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x318))(plVar6,lVar5,lVar4,*(undefined8 *)(*plVar6 + 800));
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


