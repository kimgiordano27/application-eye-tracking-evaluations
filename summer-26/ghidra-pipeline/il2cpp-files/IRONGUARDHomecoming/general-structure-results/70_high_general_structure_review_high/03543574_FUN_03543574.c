/*
FUNCTION_NAME: FUN_03543574
ENTRY_POINT: 03543574
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_03543574(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0483311e & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483311e = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (-1 < param_2) {
    if (param_2 < 0xb) {
      param_2 = 10;
    }
    uVar1 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar1 = thunk_FUN_01f117cc();
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_FixedStringMethods_CompareTo<NativeText_ReadOnly,_FixedString4096Bytes>__
                            );
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                            );
  FUN_034f3578(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_n_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,uVar2);
}


