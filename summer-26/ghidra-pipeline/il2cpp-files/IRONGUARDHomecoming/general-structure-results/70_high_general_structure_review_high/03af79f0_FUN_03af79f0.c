/*
FUNCTION_NAME: FUN_03af79f0
ENTRY_POINT: 03af79f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_03af79f0(int param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_1 < 0) {
    local_24 = param_1;
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_11151);
    uVar2 = FUN_03406290(uVar3,uVar2,0);
  }
  else {
    if (param_2 <= param_1) {
      return;
    }
    local_28 = param_1;
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar2 = thunk_FUN_01f113fc(uVar2,&local_28);
    local_2c = param_2;
    uVar3 = thunk_FUN_01efb3a4(puVar1);
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_2c);
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_11152);
    uVar2 = FUN_0340f2f0(uVar4,uVar2,uVar3,0);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_11153);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


