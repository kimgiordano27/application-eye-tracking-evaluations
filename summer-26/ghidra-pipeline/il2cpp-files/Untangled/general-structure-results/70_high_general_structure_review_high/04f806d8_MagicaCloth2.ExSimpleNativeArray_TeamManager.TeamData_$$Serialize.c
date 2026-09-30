/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<TeamManager.TeamData>$$Serialize
ENTRY_POINT: 04f806d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<TeamManager_TeamData>__Serialize
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = (param_5 - param_6) + 1;
  if (iVar1 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar2 = param_2 + (long)(int)param_5 * 0x10;
      uVar3 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),param_3
                         ,param_4,*(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar3 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (iVar1 <= (int)param_5);
  }
  return 0xffffffff;
}


