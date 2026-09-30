/*
FUNCTION_NAME: FUN_01daed24
ENTRY_POINT: 01daed24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01daed24(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_0377f701 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_<InvokeContinuation>b__20_0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
                      );
    DAT_0377f701 = 1;
  }
  if ((param_3 != 0) && (uVar2 = FUN_01d431ac(param_3,0), param_2 != (long *)0x0)) {
    lVar3 = (**(code **)(*param_2 + 0x178))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_2 + 0x198))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x1a0));
    }
    puVar1 = 
    Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_<InvokeContinuation>b__20_0__
    ;
    *(long *)(param_3 + 0xf0) = lVar3;
    uVar2 = FUN_01d3b244(param_3,0);
    lVar4 = (**(code **)(*param_2 + 0x178))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar4 == 0) {
      uVar2 = FUN_01d3b244(param_3,0);
      lVar4 = (**(code **)(*param_2 + 0x198))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x1a0));
    }
    else if (*(long *)(param_3 + 0x98) != 0) {
      *(long *)(param_3 + 0x98) = lVar4;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = 
    Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
    ;
    if (lVar5 != 0) {
      FUN_01dafa54(lVar5,param_3,0);
      plVar7 = *(long **)(param_1 + 0x10);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        FUN_017b46ec(lVar6,0);
        *(long *)(lVar6 + 0x10) = lVar3;
        *(long *)(lVar6 + 0x18) = lVar4;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x318))(plVar7,lVar6,lVar5,*(undefined8 *)(*plVar7 + 800));
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


