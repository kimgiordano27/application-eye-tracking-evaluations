/*
FUNCTION_NAME: FUN_0735cb9c
ENTRY_POINT: 0735cb9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


int FUN_0735cb9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  
  if ((DAT_07ef3145 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<PostProcessingComponentBase,_bool>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Value__
                );
    DAT_07ef3145 = 1;
  }
  puVar2 = Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Value__
  ;
  puVar1 = Method_System_Collections_Generic_KeyValuePair<SkeletBoneType,_List<Vector3>>_get_Key__;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      iVar5 = 0;
      local_40 = ZEXT816(0);
      do {
        auVar6 = FUN_044662c8(param_1,iVar4,*(undefined8 *)puVar1);
        local_40 = auVar6;
        iVar3 = FUN_04924498(local_40,*(undefined8 *)puVar2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar3 + iVar5;
      } while (iVar4 < *(int *)(param_1 + 0x18));
      iVar4 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar4 = iVar5;
      }
      iVar4 = iVar4 >> 2;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


