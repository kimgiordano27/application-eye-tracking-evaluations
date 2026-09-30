/*
FUNCTION_NAME: FUN_0472c934
ENTRY_POINT: 0472c934
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1
*/


int FUN_0472c934(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 0472c940 to 0482c98b has its CatchHandler @ 0472c940
                       catch() { ... } // from try @ 0472c940 with catch @ 0472c940
                       catch() { ... } // from try @ 0472c9e4 with catch @ 0472c940
                       catch() { ... } // from try @ 0472ca14 with catch @ 0472c940
                       catch() { ... } // from try @ 0472ca90 with catch @ 0472c940 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 < 1) {
    uVar8 = 0;
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0)
      goto Unity_Collections_NativeArray<Bounds>__System_Collections_IEnumerable_GetEnumerator;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0472ca90;
      if (param_2 == 0)
      goto Unity_Collections_NativeArray<Bounds>__System_Collections_IEnumerable_GetEnumerator;
                    /* try { // try from 0472c98c to 0482c9e3 has its CatchHandler @ 0472c9e4 */
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar6 + lVar10 + 0x20),
                         *(undefined8 *)(lVar6 + lVar10 + 0x28),*(undefined8 *)(param_2 + 0x28));
      iVar5 = *(int *)(param_1 + 0x18);
      if ((uVar3 & 1) != 0) break;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((long)uVar8 < (long)iVar5);
  }
  if (iVar5 <= (int)uVar8) {
    return 0;
  }
  uVar3 = uVar8 & 0xffffffff;
  do {
    uVar8 = (ulong)((int)uVar8 + 1);
    do {
      uVar9 = (uint)uVar3;
      if (iVar5 <= (int)uVar8) {
        *(uint *)(param_1 + 0x18) = uVar9;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar5 - uVar9;
      }
      uVar11 = -(uVar8 >> 0x1f & 1) & 0xfffffff000000000 | (uVar8 & 0xffffffff) << 4;
      uVar8 = (ulong)(int)uVar8;
      do {
        lVar10 = *(long *)(param_1 + 0x10);
        if (lVar10 == 0)
        goto Unity_Collections_NativeArray<Bounds>__System_Collections_IEnumerable_GetEnumerator;
        if (*(uint *)(lVar10 + 0x18) <= (uint)uVar8) goto LAB_0472ca90;
        if (param_2 == 0)
        goto Unity_Collections_NativeArray<Bounds>__System_Collections_IEnumerable_GetEnumerator;
        uVar4 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar10 + uVar11 + 0x20),
                           *(undefined8 *)(lVar10 + uVar11 + 0x28),*(undefined8 *)(param_2 + 0x28));
        iVar5 = *(int *)(param_1 + 0x18);
        if ((uVar4 & 1) == 0) break;
        uVar8 = uVar8 + 1;
        uVar11 = uVar11 + 0x10;
      } while ((long)uVar8 < (long)iVar5);
      uVar7 = (uint)uVar8;
    } while (iVar5 <= (int)uVar7);
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) {
Unity_Collections_NativeArray<Bounds>__System_Collections_IEnumerable_GetEnumerator:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((*(uint *)(lVar10 + 0x18) <= uVar7) || (*(uint *)(lVar10 + 0x18) <= uVar9)) {
LAB_0472ca90:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar1 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar7 * 0x10);
    uVar12 = *puVar1;
    puVar2 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar9 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar12;
    uVar3 = (ulong)(uVar9 + 1);
    iVar5 = *(int *)(param_1 + 0x18);
  } while( true );
}


