/*
FUNCTION_NAME: FUN_04761c1c
ENTRY_POINT: 04761c1c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


undefined1  [16] FUN_04761c1c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_04761cd0;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_04761cd4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) {
LAB_04761cd0:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + lVar5 + 0x20),
                         *(undefined8 *)(lVar4 + lVar5 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_04761cd0;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_04761cd4;
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        goto Unity_Collections_NativeArray<NativePassData>__set_Item;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
  }
  uVar2 = 0;
  uVar3 = 0;
Unity_Collections_NativeArray<NativePassData>__set_Item:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


