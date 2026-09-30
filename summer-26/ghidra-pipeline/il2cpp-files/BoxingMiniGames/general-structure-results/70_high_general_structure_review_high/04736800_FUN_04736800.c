/*
FUNCTION_NAME: FUN_04736800
ENTRY_POINT: 04736800
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


long FUN_04736800(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar3 = thunk_FUN_0367fe20();
  FUN_047357a8(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_04736958;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
Unity_Collections_NativeArray<DecalEntity>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto LAB_04736958;
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined4 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_04736958;
        if (*(uint *)(lVar6 + 0x18) <= uVar9)
        goto Unity_Collections_NativeArray<DecalEntity>___ctor;
        if (lVar3 == 0) {
LAB_04736958:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar5 = *(undefined8 *)(lVar6 + lVar8 + 0x20);
        lVar7 = *(long *)(lVar3 + 0x10);
        uVar1 = *(undefined4 *)(lVar6 + lVar8 + 0x28);
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_04736958;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + 0x20) = uVar5;
          *(undefined4 *)(lVar7 + 0x28) = uVar1;
        }
        else {
          FUN_04736064(lVar3,uVar5,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar3;
}


