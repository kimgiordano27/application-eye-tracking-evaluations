/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 04f593f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_useIPDInPositionTracking(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = System_Collections_Generic_Dictionary<Vector3,_ValueTuple<Vector3,_Vector3>>_TypeInfo;
  puVar1 = PTR_DAT_06312520;
  if ((DAT_066c9a8f & 1) == 0) {
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<Vector3,_ValueTuple<Vector3,_Vector3>>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_Dictionary<ulong,_Guid>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066c9a8f = 1;
  }
  FUN_04af0224(param_1,*(undefined8 *)puVar2);
  lVar4 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(param_1 + 200);
  *(undefined1 *)(param_1 + 0x168) = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_05c8e378(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    FUN_04f594b8(param_1,*(undefined8 *)(param_1 + 200));
    iVar3 = FUN_04f5df80(param_1,*(undefined8 *)(param_1 + 200),0);
    *(int *)(param_1 + 0x178) = iVar3;
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x168) = 1;
    }
  }
  return;
}


