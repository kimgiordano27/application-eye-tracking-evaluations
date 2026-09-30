/*
FUNCTION_NAME: FUN_04054344
ENTRY_POINT: 04054344
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04054344(undefined8 param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_24;
  undefined *puVar5;
  
  local_24 = param_3;
  if (param_3 < 0) {
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_DefaultEventSystem_<>c_<SendInputEvents>b__37_1__
                              );
    puVar5 = PTR_DAT_04586c80;
  }
  else if (param_4 < 0) {
    local_24 = param_4;
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                              );
    puVar5 = PTR_DAT_04586c88;
  }
  else if ((param_3 < param_2) || (param_4 == 0)) {
    local_24 = param_4 + param_3;
    if (local_24 <= param_2) {
      return;
    }
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                              );
    puVar5 = PTR_DAT_04586c98;
  }
  else {
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_24);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_DefaultEventSystem_<>c_<SendInputEvents>b__37_1__
                              );
    puVar5 = PTR_DAT_04586c90;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar5);
  FUN_034f48f0(uVar2,uVar3,uVar1,uVar4,0);
  uVar1 = thunk_FUN_01efb3a4(PTR_DAT_04586ca0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


