/*
FUNCTION_NAME: Oculus.Interaction.OVR.Input.OVRButtonActiveState$$.ctor
ENTRY_POINT: 03519c3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_OVR_Input_OVRButtonActiveState___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  undefined4 unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if ((unaff_w22 < 0x18) && (unaff_w21 < 0x3c)) {
    if (unaff_w19 < 1000) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = FUN_0358132c(unaff_w22,unaff_w21,unaff_w20,0);
      return lVar2 + (ulong)unaff_w19 * 10000;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar3 = FUN_03532f80(0);
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_035ac8e0(uVar4,0);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    uStack000000000000000c = 0;
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = 999;
    uVar6 = thunk_FUN_01efb3a4(puVar1);
    uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x00000008);
    uVar3 = FUN_0340f474(uVar3,uVar4,uVar5,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_5__);
  }
  else {
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_49__);
    uVar3 = FUN_035ac8e0(uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar4 = 0;
  }
  FUN_034f3578(uVar5,uVar4,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_50__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar3);
}


