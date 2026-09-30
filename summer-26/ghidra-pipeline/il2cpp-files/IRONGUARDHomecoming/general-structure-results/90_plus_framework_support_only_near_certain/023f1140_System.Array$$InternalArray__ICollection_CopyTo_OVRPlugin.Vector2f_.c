/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector2f>
ENTRY_POINT: 023f1140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector2f>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  int unaff_w20;
  int unaff_w21;
  undefined *puVar4;
  
  if (in_w8 < unaff_w21) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
  }
  else {
    if ((-1 < unaff_w20) && (unaff_w20 <= in_w8 - unaff_w21)) {
      FUN_0247c25c();
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1);
}


