/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LeaderboardEntry_GetUser
ENTRY_POINT: 035f1998
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


bool Oculus_Platform_CAPI__ovr_LeaderboardEntry_GetUser(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((param_1 & 1) == 0) {
    uStack000000000000000c = 0xdc00;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000000c);
    in_stack_00000008 = 0xdfff;
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x00000008);
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar3 = FUN_033f1b0c(uVar5,uVar3,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_43__);
    FUN_034f3578(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_59__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  if (*(int *)(unaff_x19 + 0x38) < 1) {
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x30) + 0x10);
      *(int *)(unaff_x19 + 0x38) = iVar1;
      *(undefined4 *)(unaff_x19 + 0x3c) = 0xffffffff;
      return iVar1 != 0;
    }
  }
  else {
    FUN_01bc4c70(*unaff_x22);
    uVar6 = FUN_034fde88(unaff_w21,unaff_w20,0);
    FUN_035f0c24(uVar6,uVar6 & 0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


