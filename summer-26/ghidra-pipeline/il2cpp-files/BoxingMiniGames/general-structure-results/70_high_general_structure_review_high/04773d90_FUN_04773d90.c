/*
FUNCTION_NAME: FUN_04773d90
ENTRY_POINT: 04773d90
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


uint FUN_04773d90(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar1 = 1;
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
Unity_Collections_NativeArray<RenderStateBlock>__Equals:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto Unity_Collections_NativeArray<RenderStateBlock>__Equals;
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar2 + lVar3 + 0x20),
                         *(undefined8 *)(lVar2 + lVar3 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar1 & 1) == 0) break;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
  }
  return uVar1 & 1;
}


