/*
FUNCTION_NAME: FUN_047da924
ENTRY_POINT: 047da924
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


void FUN_047da924(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar2 = param_1;
  if (iVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lVar10 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_047daaf0;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_047dab04;
      if (param_2 == 0) goto LAB_047daaf0;
      puVar5 = (undefined8 *)(lVar4 + lVar10);
      uStack_58 = puVar5[1];
      local_60 = *puVar5;
      local_50 = puVar5[2];
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_60,*(undefined8 *)(param_2 + 0x28));
      iVar3 = *(int *)(param_1 + 0x18);
      if ((uVar2 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((long)uVar9 < (long)iVar3);
  }
  if ((int)uVar9 < iVar3) {
    uVar12 = uVar9 & 0xffffffff;
    do {
      uVar9 = (ulong)((int)uVar9 + 1);
      do {
        iVar7 = (int)uVar9;
        uVar11 = (uint)uVar12;
        if (iVar3 <= iVar7) {
          uVar2 = (ulong)(iVar3 - uVar11);
          *(uint *)(param_1 + 0x18) = uVar11;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          goto Unity_Collections_NativeArray<ReceiverSphereCuller_SplitInfo>___ctor;
        }
        uVar9 = (ulong)iVar7;
        lVar10 = (long)iVar7 * 0x18 + 0x20;
        do {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 == 0) goto LAB_047daaf0;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) goto LAB_047dab04;
          if (param_2 == 0) goto LAB_047daaf0;
          puVar5 = (undefined8 *)(lVar4 + lVar10);
          uStack_58 = puVar5[1];
          local_60 = *puVar5;
          local_50 = puVar5[2];
          uVar2 = (**(code **)(param_2 + 0x18))
                            (*(undefined8 *)(param_2 + 0x40),&local_60,
                             *(undefined8 *)(param_2 + 0x28));
          iVar3 = *(int *)(param_1 + 0x18);
          if ((uVar2 & 1) == 0) break;
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x18;
        } while ((long)uVar9 < (long)iVar3);
        uVar8 = (uint)uVar9;
      } while (iVar3 <= (int)uVar8);
      lVar10 = *(long *)(param_1 + 0x10);
      if (lVar10 == 0) goto LAB_047daaf0;
      if ((*(uint *)(lVar10 + 0x18) <= uVar8) || (*(uint *)(lVar10 + 0x18) <= uVar11))
      goto LAB_047dab04;
      puVar6 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar10 + 0x20 + (long)(int)uVar11 * 0x18);
      uVar12 = (ulong)(uVar11 + 1);
      uVar14 = puVar6[1];
      uVar13 = *puVar6;
      puVar5[2] = puVar6[2];
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      iVar3 = *(int *)(param_1 + 0x18);
    } while( true );
  }
  uVar2 = 0;
Unity_Collections_NativeArray<ReceiverSphereCuller_SplitInfo>___ctor:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_047dab18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
LAB_047daaf0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  goto LAB_047dab18;
LAB_047dab04:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  goto LAB_047dab18;
}


