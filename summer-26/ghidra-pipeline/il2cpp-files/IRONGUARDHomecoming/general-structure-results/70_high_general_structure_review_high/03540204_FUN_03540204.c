/*
FUNCTION_NAME: FUN_03540204
ENTRY_POINT: 03540204
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_03540204(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0483310e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Flow_InvokeDelegate__);
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483310e = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar3 = Method_Unity_VisualScripting_Flow_InvokeDelegate__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
  if (-1 < param_2) {
    uVar4 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_01f51358();
    uVar4 = FUN_01f08890(*(undefined8 *)puVar2,param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_01f51358();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03532fe0();
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_0353c1c4(uVar5,uVar4);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar5);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_FixedStringMethods_CompareTo<NativeText_ReadOnly,_FixedString4096Bytes>__
                            );
  uVar6 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                            );
  FUN_034f3578(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_laneq_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


