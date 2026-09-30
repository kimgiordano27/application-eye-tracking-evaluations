/*
FUNCTION_NAME: FUN_0238fd9c
ENTRY_POINT: 0238fd9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0238fd9c(undefined8 param_1,long param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,long param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_01ecafa0(param_7);
  }
  uVar3 = FUN_0405195c(param_1,0);
  if ((uVar3 & 1) == 0) {
    FUN_04053ba4(param_1,0);
    return;
  }
  uVar3 = FUN_040388e8(param_2,0);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_04038918(param_2,0);
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<UniversalAdditionalLightData>__
                              );
    uVar5 = FUN_03405678(uVar5,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar5,0);
  }
  else {
    if (-1 < (int)(param_4 | param_3 | param_5)) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((int)(param_5 + param_3) <= *(int *)(param_2 + 0x18)) {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 8))();
        FUN_040511ac(param_1,param_2,param_3,param_4,param_5,uVar2,param_6,0);
        return;
      }
    }
    local_44 = param_3;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_44);
    local_48 = param_4;
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_48);
    local_4c = param_5;
    uVar6 = thunk_FUN_01efb3a4(puVar1);
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_4c);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponent<UniversalAdditionalCameraData>__
                              );
    uVar5 = FUN_0340f334(uVar7,uVar4,uVar5,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f7db4(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_7);
}


