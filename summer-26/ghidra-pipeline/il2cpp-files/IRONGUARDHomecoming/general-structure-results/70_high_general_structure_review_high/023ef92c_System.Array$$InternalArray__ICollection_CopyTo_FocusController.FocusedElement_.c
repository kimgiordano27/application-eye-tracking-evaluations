/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<FocusController.FocusedElement>
ENTRY_POINT: 023ef92c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__ICollection_CopyTo<FocusController_FocusedElement>
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_01ecafa0();
  }
  if (param_5 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar1,uVar2,0);
    goto LAB_023efa48;
  }
  if (unaff_w21 < 0) {
LAB_023ef9a0:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
  }
  else {
    if (*(int *)(param_5 + 0x18) < unaff_w21) goto LAB_023ef9a0;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(param_5 + 0x18) - unaff_w21)) {
      FUN_0247b760(param_2,param_3,param_4,param_5,unaff_w21,unaff_w20,
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
LAB_023efa48:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1);
}


