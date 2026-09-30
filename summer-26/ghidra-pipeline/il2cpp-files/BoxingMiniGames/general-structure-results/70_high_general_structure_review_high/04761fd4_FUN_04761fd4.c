/*
FUNCTION_NAME: FUN_04761fd4
ENTRY_POINT: 04761fd4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_04761fd4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar1 != iVar2) goto Unity_Collections_NativeArray<NativePassData>__GetEnumerator;
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_0476208c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (param_2 == 0) goto LAB_0476208c;
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar3 + lVar4 + 0x20),
                 *(undefined8 *)(lVar3 + lVar4 + 0x28),*(undefined8 *)(param_2 + 0x28));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 0x1c);
Unity_Collections_NativeArray<NativePassData>__GetEnumerator:
    if (iVar1 != iVar2) {
      FUN_05e3971c(0);
      return;
    }
  }
  return;
}


