/*
FUNCTION_NAME: FUN_0238f72c
ENTRY_POINT: 0238f72c
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


void FUN_0238f72c(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_54;
  uint local_48;
  uint local_44;
  
  if (*(long *)(param_8 + 0x38) == 0) {
    FUN_01ecafa0(param_8);
  }
  uVar2 = FUN_0405195c(param_1,0);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar2 & 1) != 0) {
    if ((-1 < (int)(param_5 | param_4 | param_6)) && ((int)(param_6 + param_4) <= param_3)) {
      uVar3 = FUN_035b5e74(param_2,0);
      FUN_04051128(param_1,uVar3,param_4,param_5,param_6,4,param_7,0);
      return;
    }
    local_44 = param_4;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_44);
    local_48 = param_5;
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_48);
    local_54 = param_6;
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_54);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<UniversalAdditionalCameraData>__
                              );
    uVar3 = FUN_0340f334(uVar6,uVar3,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_8);
  }
  FUN_04053ba4(param_1,0);
  return;
}


