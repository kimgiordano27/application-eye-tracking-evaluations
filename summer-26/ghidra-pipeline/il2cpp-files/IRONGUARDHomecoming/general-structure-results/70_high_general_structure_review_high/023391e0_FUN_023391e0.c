/*
FUNCTION_NAME: FUN_023391e0
ENTRY_POINT: 023391e0
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


void FUN_023391e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_01ecafa0(param_7);
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((-1 < (int)(param_5 | param_4 | param_6)) && ((int)(param_6 + param_4) <= (int)param_3)) {
    uVar2 = FUN_0239ae24(param_2,param_3,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x18));
    uVar2 = FUN_035b5e74(uVar2,0);
    FUN_04050410(param_1,uVar2,param_4,param_5,param_6,4,0);
    return;
  }
  local_44 = param_4;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_44);
  local_48 = param_5;
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_48);
  local_4c = param_6;
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_4c);
  uVar5 = thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_TextData3D>__);
  uVar2 = FUN_0340f334(uVar5,uVar2,uVar3,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f7db4(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_7);
}


