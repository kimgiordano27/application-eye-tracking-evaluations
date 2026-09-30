/*
FUNCTION_NAME: FUN_0472fc50
ENTRY_POINT: 0472fc50
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


uint FUN_0472fc50(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
Unity_Collections_NativeArray<Color>__op_Equality:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto Unity_Collections_NativeArray<Color>__op_Equality;
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      uStack_68 = puVar1[1];
      local_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      uStack_48 = puVar1[5];
      local_50 = puVar1[4];
      uStack_38 = puVar1[7];
      uStack_40 = puVar1[6];
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_70,*(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) == 0) break;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x40;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
  }
  return uVar2 & 1;
}


