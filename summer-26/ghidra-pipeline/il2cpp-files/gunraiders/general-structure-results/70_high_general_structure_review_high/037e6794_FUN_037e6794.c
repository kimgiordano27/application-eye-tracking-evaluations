/*
FUNCTION_NAME: FUN_037e6794
ENTRY_POINT: 037e6794
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_8
*/


void FUN_037e6794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__;
  puVar1 = PTR_DAT_042367c0;
  if ((DAT_04538f71 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<string[]>>__);
    FUN_01c5d288(
                Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<RoomStatsManager_PhotonRoomInfo[]>>__
                );
    FUN_01c5d288(
                Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<RoomStatsManager_RegionLobbyStat[]>>__
                );
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__);
    FUN_01c5d288(PTR_DAT_042367c0);
    FUN_01c5d288(Method_System_Configuration_IgnoreSection_get_Properties__);
    DAT_04538f71 = 1;
  }
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032ab88c(uVar3,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  FUN_037b2444(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  *(undefined8 *)(param_1 + 0xb0) = param_8;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03884424(uVar3,10,0);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<RoomStatsManager_PhotonRoomInfo[]>>__
                            );
  FUN_03313b6c(uVar3,0);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<string[]>>__
                            );
  FUN_03313b6c(uVar3,0);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03884424(uVar3,10,0);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneral<RoomStatsManager_RegionLobbyStat[]>>__
                            );
  FUN_03313b6c(uVar3,0);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = param_6;
  *(undefined8 *)(param_1 + 0x98) = param_7;
  puVar1 = Method_System_Configuration_IgnoreSection_get_Properties__;
  lVar4 = *(long *)Method_System_Configuration_IgnoreSection_get_Properties__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x68);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + 0x20);
      uVar3 = FUN_0388492c(*(undefined8 *)(param_1 + 0x20),0);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      uVar3 = FUN_038cd750(0);
      *(undefined8 *)(param_1 + 0xc0) = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


