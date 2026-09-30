/*
FUNCTION_NAME: FUN_05e418b8
ENTRY_POINT: 05e418b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * FUN_05e418b8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined8 *param_7,uint param_8,
                   long param_9)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auStack_3d0 [208];
  undefined1 auStack_300 [208];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [208];
  
  if ((DAT_06dc39e2 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_AddRange__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0dc78);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a0dd00);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Count__
                );
    FUN_02d965b8(PTR_DAT_06a0ddb0);
    FUN_02d965b8(Method_System_Collections_Generic_List<DiscMould>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlReflectionMember>_GetEnumerator__);
    DAT_06dc39e2 = 1;
  }
  memset(auStack_130,0,0xd0);
  uStack_138 = 0;
  local_140 = 0;
  local_148 = 0;
  if (param_9 == 0) {
    uVar11 = *param_7;
    uVar12 = param_7[1];
  }
  else {
    local_230 = 0;
    uStack_228 = 0;
    FUN_05d6ddec(&local_230,param_9,0);
    uVar11 = local_230;
    uVar12 = uStack_228;
  }
  uVar6 = FUN_05d6e1d4(param_7[2],param_7[3],0);
  uVar7 = FUN_0536c9cc(uVar6,0);
  puVar2 = PTR_DAT_06a119d0;
  if ((uVar7 & 1) != 0) {
    uStack_228 = param_7[1];
    local_230 = *param_7;
    uVar11 = thunk_FUN_02dfd288(PTR_DAT_06a119d0);
    uVar11 = thunk_FUN_02dd2d7c(uVar11,&local_230);
    FUN_02979e58(param_2);
    uStack_158 = *(undefined8 *)(param_2 + 0x18);
    local_160 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = thunk_FUN_02dfd288(puVar2);
    uVar12 = thunk_FUN_02dd2d7c(uVar12,&local_160);
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Item__
                              );
    uVar11 = FUN_0536e0dc(uVar6,uVar11,uVar12,0);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar12 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar12,uVar11,0);
    uVar11 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar12,uVar11);
  }
  if (param_1[2] != 0) {
    uVar6 = FUN_05e420e4(param_1,param_5,uVar11,uVar12);
    if (param_1[2] == 0) goto LAB_05e41e4c;
    uVar7 = FUN_04ef93a8(param_1[2],uVar6,auStack_130,
                         *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Count__);
    if ((uVar7 & 1) != 0) {
      memcpy(auStack_300,param_7,0xd0);
      FUN_05e3b17c(&local_230,auStack_130,auStack_300);
      memcpy(param_7,&local_230,0xd0);
    }
  }
  plVar8 = (long *)FUN_05e3fa04(param_1,param_7[2],param_7[3],param_3,param_4,uVar11,uVar12,param_5)
  ;
  if ((*param_1 != 0) && (plVar15 = *(long **)(*param_1 + 0x150), plVar15 != (long *)0x0)) {
    if ((plVar8 != (long *)0x0) &&
       (lVar9 = thunk_FUN_02dd3048(plVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0)) {
LAB_05e41e54:
      uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar11,0);
    }
    if (*(uint *)(plVar15 + 3) <= param_8) {
LAB_05e41e50:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar15[(long)(int)param_8 + 4] = (long)plVar8;
    LeanTween__value(plVar15 + (long)(int)param_8 + 4,plVar8);
    if (plVar8 != (long *)0x0) {
      FUN_05d899b4(plVar8,*(uint *)(param_7 + 0x13) >> 1 & 1,0);
      FUN_05d89a98(plVar8,*(uint *)(param_7 + 0x13) >> 2 & 1,0);
      uVar4 = FUN_0536c9cc(param_7[6],0);
      FUN_05d8acec(plVar8,(uVar4 ^ 0xffffffff) & 1,0);
      uVar7 = FUN_05d899a8(plVar8,0);
      if (((uVar7 & 1) == 0) && ((*(byte *)(param_7 + 0x13) >> 4 & 1) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_05d8ace0(plVar8,0);
        uVar4 = uVar4 ^ 1;
      }
      FUN_05d8acc0(plVar8,uVar4 & 1,0);
      uVar7 = FUN_05d899a8(plVar8,0);
      if ((uVar7 & 1) != 0) {
        if (*param_1 == 0) goto LAB_05e41e4c;
        FUN_05d899b4(*param_1,1,0);
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06a0dc78 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        bVar3 = false;
      }
      else {
        bVar3 = *(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_06a0dc78;
      }
      FUN_05d8ac94(plVar8,bVar3,0);
      uVar7 = FUN_05d8acb4(plVar8,0);
      if ((uVar7 & 1) != 0) {
        if (*param_1 == 0) goto LAB_05e41e4c;
        FUN_05d8de5c(*param_1,1,0);
      }
      plVar8[8] = param_7[7];
      LeanTween__value();
      plVar8[10] = param_7[8];
      LeanTween__value();
      lVar9 = param_7[0x14];
      plVar8[0x16] = param_7[0x15];
      plVar8[0x15] = lVar9;
      uVar7 = FUN_05d6f1ac(plVar8 + 0x15,0);
      if ((uVar7 & 1) == 0) {
        if (*param_1 == 0) goto LAB_05e41e4c;
        FUN_05d8dd64(*param_1,1,0);
      }
      uStack_138 = param_7[0x17];
      local_140 = param_7[0x16];
      uVar7 = FUN_05d6f1ac(&local_140,0);
      if ((uVar7 & 1) == 0) {
        lVar9 = param_7[0x16];
        plVar8[0x18] = param_7[0x17];
        plVar8[0x17] = lVar9;
      }
      uStack_138 = param_7[0x19];
      local_140 = param_7[0x18];
      uVar7 = FUN_05d6f1ac(&local_140,0);
      if ((uVar7 & 1) == 0) {
        lVar9 = param_7[0x18];
        plVar8[0x1a] = param_7[0x19];
        plVar8[0x19] = lVar9;
      }
      uVar7 = FUN_05d8ace0(plVar8,0);
      puVar2 = PTR_DAT_06a0dd00;
      if ((uVar7 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_7 + 0x11);
        if (*(int *)(*(long *)PTR_DAT_06a0dd00 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        *(undefined4 *)((long)plVar8 + 0x14) = uVar5;
        *(undefined4 *)(plVar8 + 3) = *(undefined4 *)((long)param_7 + 0x8c);
        iVar13 = *(int *)(param_7 + 0x12);
        if (iVar13 != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          *(int *)((long)plVar8 + 0x1c) = iVar13;
        }
        if (*(int *)((long)param_7 + 0x94) != 0) {
          memcpy(auStack_3d0,param_7,0xd0);
          FUN_05e42174(plVar8,auStack_3d0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06a0dd00 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        *(undefined4 *)((long)plVar8 + 0x1c) = 0xffffffff;
        *param_6 = 1;
      }
      puVar2 = 
      Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_AddRange__
      ;
      uVar7 = (ulong)param_7[10] >> 0x20;
      iVar13 = (int)((ulong)param_7[10] >> 0x20);
      if (0 < iVar13) {
        if (*param_1 == 0) goto LAB_05e41e4c;
        uVar4 = FUN_0352b3a0(*param_1 + 0x140,param_7[9],
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_AddRange__
                            );
        *(int *)(plVar8 + 0x11) = iVar13;
        *(uint *)((long)plVar8 + 0x8c) = uVar4;
        if (*param_1 == 0) goto LAB_05e41e4c;
        uVar14 = (ulong)uVar4;
        FUN_0353013c(*param_1 + 0x148,iVar13,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>__ctor__
                    );
        lVar9 = (ulong)uVar4 << 0x20;
        do {
          if ((*param_1 == 0) || (plVar15 = *(long **)(*param_1 + 0x148), plVar15 == (long *)0x0))
          goto LAB_05e41e4c;
          lVar10 = thunk_FUN_02dd3048(plVar8,*(undefined8 *)(*plVar15 + 0x40));
          if (lVar10 == 0) goto LAB_05e41e54;
          if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_05e41e50;
          plVar15 = (long *)((long)plVar15 + (lVar9 >> 0x1d) + 0x20);
          *plVar15 = (long)plVar8;
          LeanTween__value(plVar15,plVar8);
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 0x100000000;
          uVar14 = uVar14 + 1;
        } while (uVar7 != 0);
      }
      iVar13 = *(int *)((long)param_7 + 100);
      if (0 < iVar13) {
        if (*param_1 == 0) goto LAB_05e41e4c;
        uVar5 = FUN_0352b3a0(*param_1 + 0x138,param_7[0xb],*(undefined8 *)puVar2);
        *(int *)(plVar8 + 0x12) = iVar13;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar5;
      }
      if (0 < (int)((ulong)param_7[0xe] >> 0x20)) {
        FUN_036ea2b0(plVar8,param_7[0xd],param_7[0xe],
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Count__
                    );
      }
      if (0 < *(int *)((long)param_7 + 0x84)) {
        if (param_2 == 0) goto LAB_05e41e4c;
        uVar11 = FUN_05d6e1d4(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
        FUN_05e42224(plVar8,param_7,uVar11);
      }
      return plVar8;
    }
  }
LAB_05e41e4c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


