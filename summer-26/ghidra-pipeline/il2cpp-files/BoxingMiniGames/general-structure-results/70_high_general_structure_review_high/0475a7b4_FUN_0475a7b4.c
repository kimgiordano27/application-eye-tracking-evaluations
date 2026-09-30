/*
FUNCTION_NAME: FUN_0475a7b4
ENTRY_POINT: 0475a7b4
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


int FUN_0475a7b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < 1) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto Unity_Collections_NativeArray<LightDataGI>__get_Item;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0475a930;
      if (param_2 == 0) goto Unity_Collections_NativeArray<LightDataGI>__get_Item;
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(param_2 + 0x28));
      iVar2 = *(int *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) break;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar10 < (long)iVar2);
  }
  if (iVar2 <= (int)uVar10) {
    return 0;
  }
  uVar4 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar7 = (uint)uVar4;
      if (iVar2 <= (int)uVar10) {
        FUN_05e3b0f4(*(undefined8 *)(param_1 + 0x10),uVar4,iVar2 - uVar7,0);
        iVar2 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar2 - uVar7;
      }
      uVar11 = -(uVar10 >> 0x1f & 1) & 0xfffffff000000000 | (uVar10 & 0xffffffff) << 4;
      uVar10 = (ulong)(int)uVar10;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto Unity_Collections_NativeArray<LightDataGI>__get_Item;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_0475a930;
        if (param_2 == 0) goto Unity_Collections_NativeArray<LightDataGI>__get_Item;
        uVar5 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar8 + uVar11 + 0x20),
                           *(undefined8 *)(lVar8 + uVar11 + 0x28),*(undefined8 *)(param_2 + 0x28));
        iVar2 = *(int *)(param_1 + 0x18);
        if ((uVar5 & 1) == 0) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x10;
      } while ((long)uVar10 < (long)iVar2);
      uVar9 = (uint)uVar10;
    } while (iVar2 <= (int)uVar9);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
Unity_Collections_NativeArray<LightDataGI>__get_Item:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar9) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_0475a930:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar1 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x10);
    puVar3 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar9 * 0x10);
    uVar12 = *puVar3;
    uVar4 = (ulong)(uVar7 + 1);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar12;
    thunk_FUN_036b7ad0(puVar1 + 1,0);
    iVar2 = *(int *)(param_1 + 0x18);
  } while( true );
}


