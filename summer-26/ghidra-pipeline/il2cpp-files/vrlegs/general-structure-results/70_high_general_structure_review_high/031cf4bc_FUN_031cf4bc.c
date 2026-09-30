/*
FUNCTION_NAME: FUN_031cf4bc
ENTRY_POINT: 031cf4bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x031cf9b0) */
/* WARNING: Removing unreachable block (ram,0x031cf9c0) */

void FUN_031cf4bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_0412c385 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7768);
    FUN_01ab69ac(System_Predicate<KeyValuePair<string,_SVGPropertySheet>>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdb120);
    FUN_01ab69ac(
                System_Collections_Generic_Queue<DeferredSynchronizeInvoke_UnityAsyncResult>_TypeInfo
                );
    FUN_01ab69ac(Unity_Properties_PropertyBag<SerializedArrayView>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_PropertyBag<SerializedObjectView>_TypeInfo);
    DAT_0412c385 = 1;
  }
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo;
  puVar2 = PTR_DAT_03cdb120;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cdb120 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cdb120))
    {
      if (*(int *)(*(long *)System_Predicate<KeyValuePair<string,_SVGPropertySheet>>_TypeInfo + 0xe0
                  ) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar7 = (long *)FUN_031c83f0(param_2,0);
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(param_2);
      }
      lVar13 = param_2[2];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      local_70 = FUN_031cdd00(lVar13,plVar7,&local_f0,&local_108);
      local_118 = FUN_0366a7bc(local_70,0);
      FUN_03668734(local_118,0);
      FUN_020d91b0(&local_108,
                   *(undefined8 *)
                    System_Collections_Generic_Queue<DeferredSynchronizeInvoke_UnityAsyncResult>_TypeInfo
                  );
      FUN_031cde14(param_1,plVar7,&local_f0,param_3,param_4,param_5,param_6,param_7);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031cf724;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_031cf724:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      return;
    }
  }
  if (*(int *)(*(long *)System_Predicate<KeyValuePair<string,_SVGPropertySheet>>_TypeInfo + 0xe0) ==
      0) {
    thunk_FUN_01a58e78();
  }
  plVar7 = (long *)FUN_031c83f0(param_2,0);
  uVar6 = FUN_0310d940(2,0);
  FUN_020d8ef0(&local_130,1,uVar6,0,
               *(undefined8 *)Unity_Properties_PropertyBag<SerializedArrayView>_TypeInfo);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_031cd77c(plVar7,&local_130,&local_1b0);
  puVar4 = System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo;
  puVar2 = PTR_DAT_03cd7768;
  if (0 < (int)local_128) {
    iVar12 = 0;
    do {
      FUN_01f5258c(&local_130,iVar12,&local_1c8,*(undefined8 *)puVar4);
      uVar5 = local_1c0;
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = *param_2;
      lVar13 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_031cf840;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(param_2,lVar13,1);
LAB_031cf840:
      (*(code *)*puVar8)(param_2,uVar5,puVar8[1]);
      FUN_01f5258c(&local_130,iVar12,&local_1c8,*(undefined8 *)puVar4);
      uVar5 = local_1c8;
      FUN_01f5258c(&local_130,iVar12,&local_1c8,*(undefined8 *)puVar4);
      uVar6 = local_1b8;
      lVar9 = *param_2;
      lVar13 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031cf8cc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(param_2,lVar13,0);
LAB_031cf8cc:
      (*(code *)*puVar8)(param_2,uVar5,uVar6,puVar8[1]);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_128);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_031cde14(param_1,plVar7,&local_1b0,param_3,param_4,param_5,param_6,param_7);
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_031cf97c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_031cf97c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


