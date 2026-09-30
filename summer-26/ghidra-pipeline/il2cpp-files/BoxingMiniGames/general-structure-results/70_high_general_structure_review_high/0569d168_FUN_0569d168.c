/*
FUNCTION_NAME: FUN_0569d168
ENTRY_POINT: 0569d168
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_0569d168(long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_258 [160];
  undefined1 auStack_1b8 [152];
  undefined1 auStack_120 [160];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  
  if ((DAT_07edc5b4 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a00f20);
    FUN_03642964(PTR_DAT_079f4558);
    DAT_07edc5b4 = 1;
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
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  lVar7 = thunk_FUN_0367fd24(param_2,lVar7);
  if (lVar7 != 0) {
    FUN_0569b710(param_1,lVar7,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x178));
    return;
  }
  lVar7 = thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_07a00f20);
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_079f4558);
    if (plVar5 == (long *)0x0) {
      FUN_05e39984();
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar3) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar11 = 0;
      pvVar8 = (void *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (-1 < *(int *)((long)pvVar8 + -0x10)) {
          uVar4 = *(undefined8 *)((long)pvVar8 + -8);
          memcpy(auStack_1b8,pvVar8,0x98);
          memset(auStack_120,0,0xa0);
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150);
          memcpy(auStack_258,auStack_1b8,0x98);
          FUN_043ec5f4(auStack_120,uVar4,auStack_258,uVar9);
          memcpy(auStack_258,auStack_120,0xa0);
          lVar10 = thunk_FUN_0367fa58(*(undefined8 *)
                                       (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),
                                      auStack_258);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar10 != 0) &&
             (lVar6 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar5[(long)(int)param_3 + 4] = lVar10;
          thunk_FUN_036b7ad0(plVar5 + (long)(int)param_3 + 4,lVar10);
          param_3 = param_3 + 1;
        }
        uVar11 = uVar11 + 1;
        pvVar8 = (void *)((long)pvVar8 + 0xa8);
      } while (uVar3 != uVar11);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (0 < iVar2) {
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar11 = 0;
      pvVar8 = (void *)(lVar10 + 0x30);
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>__BumpVersion:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (-1 < *(int *)((long)pvVar8 + -0x10)) {
          uVar9 = *(undefined8 *)((long)pvVar8 + -8);
          memcpy(auStack_120,pvVar8,0x98);
          memcpy(auStack_258,auStack_120,0x98);
          uVar4 = thunk_FUN_0367fa58(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                                     auStack_258);
          local_80 = 0;
          uStack_78 = 0;
          FUN_05db1ecc(&local_80,uVar9,uVar4,0);
          if (*(uint *)(lVar7 + 0x18) <= param_3)
          goto UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>__BumpVersion;
          lVar1 = lVar7 + (long)(int)param_3 * 0x10;
          lVar6 = (long)(int)param_3;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar1 + 0x28) = uStack_78;
          *(undefined8 *)(lVar1 + 0x20) = local_80;
          thunk_FUN_036b7ad0(lVar7 + 0x20 + lVar6 * 0x10,0);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        uVar11 = uVar11 + 1;
        pvVar8 = (void *)((long)pvVar8 + 0xa8);
      } while ((long)uVar11 < (long)iVar2);
    }
  }
  return;
}


