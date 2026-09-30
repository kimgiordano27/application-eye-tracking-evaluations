/*
FUNCTION_NAME: FUN_03a0d1c4
ENTRY_POINT: 03a0d1c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_03a0d1c4(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_24;
  
                    /* try { // try from 03a0d1dc to 03b0d1df has its CatchHandler @ 03a0d1f0 */
  if (0x80000000 < param_3) {
    local_24 = param_3;
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_6395);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_6396);
    uVar6 = FUN_033f1b08(uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_6397);
    FUN_034f48f0(uVar2,uVar3,uVar5,uVar6,0);
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_6463);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar5);
  }
                    /* try { // try from 03a0d1e0 to 03b0d1e3 has its CatchHandler @ 03a0d1fc */
  if (param_4 < 4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = FUN_039fa2e4(param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_039fbdac(param_2,0);
      if ((uVar1 & 1) != 0) {
        FUN_039ffd8c(param_2,param_3,param_4,0);
        return;
      }
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_6366);
      uVar5 = FUN_033f1b08(uVar5,0);
    }
    else {
      uVar5 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar5 = FUN_01f08890(uVar5,1);
      plVar4 = (long *)thunk_FUN_01ecaf38(param_1,0);
      FUN_01bc50c0();
      uVar6 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
      FUN_01bc50c0(uVar5);
      FUN_01bc56ec(uVar5,uVar6);
      FUN_01bc5408(uVar5,0,uVar6);
      uVar6 = thunk_FUN_01efb3a4(StringLiteral_6401);
      uVar5 = FUN_033f1a90(uVar6,uVar5,0);
    }
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_6463);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar5);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__);
  FUN_034f7db4(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01efb3a4(StringLiteral_6463);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


