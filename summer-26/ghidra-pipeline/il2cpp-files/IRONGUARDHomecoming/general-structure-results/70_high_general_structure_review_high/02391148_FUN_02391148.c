/*
FUNCTION_NAME: FUN_02391148
ENTRY_POINT: 02391148
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02391148(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_3;
  uStack_58 = param_4;
  if (*(long *)(param_8 + 0x38) == 0) {
    FUN_01ecafa0(param_8);
  }
  if (param_2 < 8) {
    uVar1 = (**(code **)**(undefined8 **)(param_8 + 0x38))();
    if ((uVar1 & 3) == 0) {
      if (uVar1 - 4 < 0x10) {
        uVar2 = FUN_04051ea0(param_2,0);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x38) + 0x10))(param_3,param_4);
        uVar4 = FUN_035b5e74(uVar4,0);
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x38) + 0x18))(&local_60);
        FUN_04052244(param_1,uVar2,0,uVar1 >> 2 & 0x3f,uVar4,uVar3,param_5,param_6,param_7,0);
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Component_GetComponent<WitDictation>__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      puVar8 = Method_UnityEngine_Component_GetComponent<Wit>__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar8);
    FUN_034f6754(uVar7,uVar4,0);
  }
  else {
    local_64 = param_2;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_64);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<WallOpener>__);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Transform>__);
    FUN_034f48f0(uVar7,uVar5,uVar4,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_8);
}


