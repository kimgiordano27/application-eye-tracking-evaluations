/*
FUNCTION_NAME: FUN_0477978c
ENTRY_POINT: 0477978c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


uint FUN_0477978c(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar2 = 1;
  }
  else {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
Unity_Collections_NativeArray<sbyte>__op_Implicit:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto Unity_Collections_NativeArray<sbyte>__op_Implicit;
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      uStack_58 = puVar1[1];
      local_60 = *puVar1;
      uStack_48 = puVar1[3];
      uStack_50 = puVar1[2];
      local_40 = puVar1[4];
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_60,*(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) == 0) break;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
  }
  return uVar2 & 1;
}


