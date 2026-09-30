/*
FUNCTION_NAME: FUN_03afd15c
ENTRY_POINT: 03afd15c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_03afd15c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 local_24 [2];
  int local_18;
  int local_14;
  
  if (param_2 < 0) {
    local_14 = param_2;
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_14);
    uVar2 = thunk_FUN_01efb3a4(StringLiteral_11190);
    uVar1 = FUN_03406290(uVar2,uVar1,0);
  }
  else {
    if (param_2 < 0x1fe) {
      return;
    }
    local_18 = param_2;
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar1 = thunk_FUN_01f113fc(uVar1,&local_18);
    local_24[0] = 0x1fd;
    uVar2 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    uVar2 = thunk_FUN_01f113fc(uVar2,local_24);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_11246);
    uVar1 = FUN_0340f2f0(uVar3,uVar1,uVar2,0);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01efb3a4(StringLiteral_11247);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


