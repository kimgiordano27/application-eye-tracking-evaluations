/*
FUNCTION_NAME: FUN_03287a08
ENTRY_POINT: 03287a08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


ulong FUN_03287a08(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = (int)param_2;
  if (iVar7 < 0) {
    uVar3 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
    uVar3 = FUN_03313b64(uVar3,0);
  }
  else {
    if (iVar7 < 100) {
      uVar2 = FUN_0328185c(param_1,param_2,0);
      return uVar2;
    }
    if (iVar7 < 0x25c3) {
      return param_2 & 0xffffffff;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar3 = FUN_03295560(0);
    uVar4 = thunk_FUN_01c273e8(BRPotionSpawner_<DespawnAfterTime>d__9_TypeInfo);
    uVar4 = FUN_03313b64(uVar4,0);
    puVar1 = PTR_DAT_0422fd80;
    local_24 = 1;
    uVar5 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar5 = thunk_FUN_01c49334(uVar5,&local_24);
    local_28 = 0x25c2;
    uVar6 = thunk_FUN_01c273e8(puVar1);
    uVar6 = thunk_FUN_01c49334(uVar6,&local_28);
    uVar3 = FUN_03153858(uVar3,uVar4,uVar5,uVar6,0);
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar4 = thunk_FUN_01c496e0();
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                            );
  FUN_03243400(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar3);
}


