/*
FUNCTION_NAME: FUN_05753288
ENTRY_POINT: 05753288
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_05753288(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined8 local_58;
  
  if ((DAT_07edc832 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a00f20);
    FUN_03642964(PTR_DAT_079f4558);
    DAT_07edc832 = 1;
  }
  local_68 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(3,0);
  }
  iVar2 = thunk_FUN_03651f18(param_2,0);
  if (iVar2 != 1) {
    FUN_05e390e4(7,0);
  }
  iVar2 = thunk_FUN_03651ed8(param_2,0,0);
  if (iVar2 != 0) {
    FUN_05e390e4(6,0);
  }
  uVar3 = FUN_05e310c0(param_2,0);
  if (uVar3 < param_3) {
    FUN_05e3994c(0);
  }
  iVar2 = FUN_05e310c0(param_2,0);
  if ((int)(iVar2 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_05e390e4(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0367c9fc(lVar8);
  }
  lVar8 = thunk_FUN_0367fd24(param_2,lVar8);
  if (lVar8 != 0) {
    System_ArraySegment<DecalSubDrawCall>___ctor
              (param_1,lVar8,param_3,
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x178));
    return;
  }
  lVar8 = thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_07a00f20);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_079f4558);
    if (plVar6 == (long *)0x0) {
      FUN_05e39984();
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (-1 < *(int *)(puVar11 + -2)) {
          local_f0 = puVar11[4];
          uStack_108 = puVar11[1];
          local_110 = *puVar11;
          uStack_f8 = puVar11[3];
          uStack_100 = puVar11[2];
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_e0 = local_110;
          uStack_d8 = uStack_108;
          uStack_d0 = uStack_100;
          uStack_c8 = uStack_f8;
          local_c0 = local_f0;
          FUN_043f0518(&local_b0,puVar11[-1],&local_110,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
          uStack_108 = uStack_a8;
          local_110 = local_b0;
          uStack_f8 = uStack_98;
          uStack_100 = local_a0;
          uStack_e8 = uStack_88;
          local_f0 = local_90;
          lVar9 = thunk_FUN_0367fa58(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),
                                     &local_110);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar4,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar6[(long)(int)param_3 + 4] = lVar9;
          thunk_FUN_036b7ad0(plVar6 + (long)(int)param_3 + 4,lVar9);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 7;
      } while (uVar3 != uVar10);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (0 < iVar2) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto System_ArraySegment<DrawBatch>__get_Array;
        if (-1 < *(int *)(puVar11 + -2)) {
          local_58 = puVar11[-1];
          uVar4 = thunk_FUN_0367fa58(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),&local_58
                                    );
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
System_ArraySegment<DrawBatch>__get_Array:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uStack_108 = puVar11[1];
          local_110 = *puVar11;
          uStack_f8 = puVar11[3];
          uStack_100 = puVar11[2];
          local_f0 = puVar11[4];
          local_b0 = local_110;
          uStack_a8 = uStack_108;
          local_a0 = uStack_100;
          uStack_98 = uStack_f8;
          local_90 = local_f0;
          uVar5 = thunk_FUN_0367fa58(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                                     &local_110);
          local_80 = 0;
          uStack_78 = 0;
          FUN_05db1ecc(&local_80,uVar4,uVar5,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto System_ArraySegment<DrawBatch>__get_Array;
          lVar1 = lVar8 + (long)(int)param_3 * 0x10;
          lVar7 = (long)(int)param_3;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar1 + 0x28) = uStack_78;
          *(undefined8 *)(lVar1 + 0x20) = local_80;
          thunk_FUN_036b7ad0(lVar8 + 0x20 + lVar7 * 0x10,0);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 7;
      } while ((long)uVar10 < (long)iVar2);
    }
  }
  return;
}


