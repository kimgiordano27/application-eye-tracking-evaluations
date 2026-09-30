/*
FUNCTION_NAME: FUN_04a0e478
ENTRY_POINT: 04a0e478
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04a0e478(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
                    /* try { // try from 04a0e48c to 04b0e4a3 has its CatchHandler @ 04a0e4dc */
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* try { // try from 04a0e4a4 to 04b0e4cb has its CatchHandler @ 04a0e414 */
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar1 = param_1 + (long)(int)param_3 * 0x10;
    puVar9 = (undefined8 *)(lVar1 + 0x20);
    uVar4 = *puVar9;
    if (param_4 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 04a0e4cc to 04b0e4db has its CatchHandler @ 04a0e4dc */
      lVar2 = param_1 + (long)(int)param_4 * 0x10;
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      puVar8 = (undefined8 *)(lVar2 + 0x20);
      uVar6 = *puVar8;
      if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe;
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),uVar4,uVar5,uVar6,uVar7,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar3 < 1) {
        return;
      }
      if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
        uVar4 = *puVar8;
        uVar6 = *(undefined8 *)(lVar1 + 0x28);
        uVar5 = *puVar9;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar9 = uVar4;
        thunk_FUN_0329bf60(param_1 + (long)(int)param_3 * 0x10 + 0x20,0);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar6;
          *puVar8 = uVar5;
          thunk_FUN_0329bf60(param_1 + (long)(int)param_4 * 0x10 + 0x20,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


