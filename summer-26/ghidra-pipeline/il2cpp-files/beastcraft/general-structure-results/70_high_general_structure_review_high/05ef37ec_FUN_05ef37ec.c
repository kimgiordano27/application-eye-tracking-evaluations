/*
FUNCTION_NAME: FUN_05ef37ec
ENTRY_POINT: 05ef37ec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined1  [16]
FUN_05ef37ec(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            byte param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  long local_1c0;
  long **pplStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  long local_100;
  long *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_5;
  uStack_68 = param_6;
  if ((DAT_06e9438a & 1) == 0) {
    FUN_02e3ca1c(MessagePipe_IPublisher<TKey,_TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(System_Reactive_Linq_IQueryServices_var);
    FUN_02e3ca1c(PTR_DAT_06a2ef88);
    FUN_02e3ca1c(UnityEngine_InputSystem_HID_HID_var);
    FUN_02e3ca1c(PTR_DAT_06ab5e18);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyCollection<T>_var);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyDictionary<TKey,_TValue>_var);
    FUN_02e3ca1c(MessagePipe_IAsyncRequestHandlerFilter_var);
    FUN_02e3ca1c(PTR_DAT_06ab5ea8);
    FUN_02e3ca1c(System_Collections_Generic_IReadOnlyList<T>_var);
    FUN_02e3ca1c(System_ComponentModel_Design_IReferenceService_var);
    FUN_02e3ca1c(System_ComponentModel_IChangeTracking_var);
    FUN_02e3ca1c(Fusion_IAfterUpdateRemotePrefabs_var);
    FUN_02e3ca1c(UnityEngine_ResourceManagement_ResourceProviders_IAssetBundleResource_var);
    DAT_06e9438a = 1;
  }
  puVar8 = UnityEngine_InputSystem_HID_HID_var;
  puVar7 = PTR_DAT_06a2ef88;
  local_90 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_f8 = (long *)0x0;
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x1c0) != 0) &&
     (plVar15 = *(long **)(*(long *)(param_1 + 0x1c0) + 0xb8), auVar4 = ZEXT816(0),
     auVar5 = ZEXT816(0), auVar6 = ZEXT816(0), plVar15 != (long *)0x0)) {
    iVar12 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
    piVar24 = (int *)(param_1 + 0xb8);
    iVar2 = *piVar24;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)puVar7);
    }
    puVar7 = PTR_DAT_06ab5ea8;
    iVar3 = 0;
    if (iVar12 != 0) {
      iVar3 = iVar2 / iVar12;
    }
    uVar13 = FUN_05606ea0(iVar3,1,0);
    iVar2 = 0;
    if (iVar12 != 0) {
      iVar2 = *(int *)(param_1 + 0xbc) / iVar12;
    }
    uVar14 = FUN_05606ea0(iVar2,1,0);
    uStack_118 = *(undefined8 *)(param_1 + 0xe0);
    local_120 = *(undefined8 *)(param_1 + 0xd8);
    uStack_138 = *(undefined8 *)(param_1 + 0xc0);
    local_140 = *(undefined8 *)piVar24;
    uStack_128 = *(ulong *)(param_1 + 0xd0);
    uStack_130 = *(undefined8 *)(param_1 + 200);
    local_110 = *(undefined4 *)(param_1 + 0xe8);
    uVar1 = *(undefined4 *)(param_1 + 0x210);
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    puVar11 = System_Collections_Generic_IReadOnlyList<T>_var;
    puVar10 = UnityEngine_ResourceManagement_ResourceProviders_IAssetBundleResource_var;
    puVar9 = Fusion_IAfterUpdateRemotePrefabs_var;
    puVar8 = PTR_DAT_06ab5e18;
    uStack_170 = uStack_130;
    uStack_158 = uStack_118;
    local_160 = local_120;
    local_150 = local_110;
    uStack_168 = uStack_128 & 0xffffffff;
    uStack_178 = CONCAT44((int)((ulong)uStack_138 >> 0x20),1);
    local_180 = CONCAT44(uVar14,uVar13);
    FUN_0624d1fc(&local_180,uVar1,0);
    pplStack_1b8 = (long **)uStack_178;
    local_1c0 = local_180;
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    uStack_b8 = uStack_178;
    local_c0 = local_180;
    uStack_a8 = uStack_168;
    local_b0 = uStack_170;
    uStack_98 = uStack_158;
    local_a0 = local_160;
    local_90 = local_150;
    uStack_198 = uStack_158;
    local_1a0 = local_160;
    local_190 = local_150;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uStack_1f8 = pplStack_1b8;
    local_200 = local_1c0;
    uStack_1e8 = uStack_1a8;
    uStack_1f0 = uStack_1b0;
    uStack_1d8 = uStack_198;
    local_1e0 = local_1a0;
    local_1d0 = local_190;
    local_d0 = FUN_05f2fcd8(param_2,&local_200,*(undefined8 *)puVar10,1,1,1,0);
    uStack_238 = uStack_b8;
    local_240 = local_c0;
    uStack_228 = uStack_a8;
    uStack_230 = local_b0;
    uStack_218 = uStack_98;
    local_220 = local_a0;
    local_210 = local_90;
    local_e0 = FUN_05f2fcd8(param_2,&local_240,*(undefined8 *)puVar9,1,1,1,0);
    uStack_278 = uStack_b8;
    local_280 = local_c0;
    uStack_268 = uStack_a8;
    uStack_270 = local_b0;
    uStack_258 = uStack_98;
    local_260 = local_a0;
    local_250 = local_90;
    local_f0 = FUN_05f2fcd8(param_2,&local_280,*(undefined8 *)puVar11,1,1,1,0);
    uVar16 = FUN_03a21438(0x1d,*(undefined8 *)puVar8);
    auVar4 = local_f0;
    auVar5 = local_e0;
    auVar6 = local_d0;
    if (param_2 != 0) {
      plVar15 = (long *)FUN_03a6b8e8(param_2,*(undefined8 *)
                                              System_ComponentModel_Design_IReferenceService_var,
                                     &local_100,uVar16,
                                     *(undefined8 *)System_ComponentModel_IChangeTracking_var,0x51a,
                                     *(undefined8 *)
                                      System_Collections_Generic_IReadOnlyCollection<T>_var);
      pplStack_1b8 = &local_f8;
      local_1c0 = 0;
      local_f8 = plVar15;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar16 = *param_4;
      *(undefined8 *)(local_100 + 0x18) = param_4[1];
      *(undefined8 *)(local_100 + 0x10) = uVar16;
      puVar7 = PTR_DAT_06ab07f8;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *plVar15;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06ab07f8) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_05ef3be4;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02e759c0(plVar15,*(long *)PTR_DAT_06ab07f8,0);
LAB_05ef3be4:
      (*(code *)*puVar17)(plVar15,param_4,2,puVar17[1]);
      plVar15 = local_f8;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined1 (*) [16])(local_100 + 0x20) = local_d0;
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *local_f8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto 
            Unity_Services_Economy_Internal_Models_IncrementPlayerCurrencyBalance400OneOf_<>c___ctor
            ;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02e759c0(local_f8,*(long *)puVar7,0);
Unity_Services_Economy_Internal_Models_IncrementPlayerCurrencyBalance400OneOf_<>c___ctor:
      (*(code *)*puVar17)(plVar15,local_d0,3,puVar17[1]);
      plVar15 = local_f8;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined1 (*) [16])(local_100 + 0x30) = local_e0;
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *local_f8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_05ef3cd4;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02e759c0(local_f8,*(long *)puVar7,0);
LAB_05ef3cd4:
      (*(code *)*puVar17)(plVar15,local_e0,3,puVar17[1]);
      plVar15 = local_f8;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined8 *)(local_100 + 0x58) = uStack_78;
      *(undefined8 *)(local_100 + 0x50) = local_80;
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *local_f8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_05ef3d4c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02e759c0(local_f8,*(long *)puVar7,0);
LAB_05ef3d4c:
      (*(code *)*puVar17)(plVar15,&local_80,3,puVar17[1]);
      plVar15 = local_f8;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined8 *)(local_100 + 0x48) = uStack_68;
      *(undefined8 *)(local_100 + 0x40) = local_70;
      if ((param_10 & 1) == 0) {
        if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar19 = *local_f8;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_05ef3de8;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar17 = (undefined8 *)FUN_02e759c0(local_f8,*(long *)puVar7,0);
LAB_05ef3de8:
        (*(code *)*puVar17)(plVar15,&local_70,3,puVar17[1]);
        uStack_138 = *(undefined8 *)(param_1 + 0xc0);
        local_140 = *(undefined8 *)piVar24;
        uStack_128 = *(undefined8 *)(param_1 + 0xd0);
        uStack_130 = *(undefined8 *)(param_1 + 200);
        uStack_118 = *(undefined8 *)(param_1 + 0xe0);
        local_120 = *(undefined8 *)(param_1 + 0xd8);
        local_110 = *(undefined4 *)(param_1 + 0xe8);
        if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
      }
      else {
        uStack_138 = *(undefined8 *)(param_1 + 0xc0);
        local_140 = *(undefined8 *)piVar24;
        uStack_128 = *(undefined8 *)(param_1 + 0xd0);
        uStack_130 = *(undefined8 *)(param_1 + 200);
        uStack_118 = *(undefined8 *)(param_1 + 0xe0);
        local_120 = *(undefined8 *)(param_1 + 0xd8);
        local_110 = *(undefined4 *)(param_1 + 0xe8);
      }
      *(undefined8 *)(local_100 + 0xa8) = param_3;
      *(undefined8 *)(local_100 + 0x78) = uStack_138;
      *(undefined8 *)(local_100 + 0x70) = local_140;
      *(ulong *)(local_100 + 0x88) = uStack_128;
      *(undefined8 *)(local_100 + 0x80) = uStack_130;
      *(undefined8 *)(local_100 + 0x98) = uStack_118;
      *(undefined8 *)(local_100 + 0x90) = local_120;
      *(undefined4 *)(local_100 + 0xa0) = local_110;
      thunk_FUN_02ee2be8();
      if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined8 *)(local_100 + 0xb0) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x90);
      thunk_FUN_02ee2be8();
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined8 *)(local_100 + 0xb8) = *(undefined8 *)(param_1 + 0x1c0);
      thunk_FUN_02ee2be8();
      plVar15 = local_f8;
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(int *)(local_100 + 0xc0) = iVar12;
      *(undefined1 (*) [16])(local_100 + 0x60) = local_f0;
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *local_f8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar7) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_05ef3ee0;
          }
          uVar20 = uVar20 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar20 != 0);
      }
      puVar17 = (undefined8 *)FUN_02e759c0(local_f8,*(long *)puVar7,0);
LAB_05ef3ee0:
      (*(code *)*puVar17)(plVar15,local_f0,2,puVar17[1]);
      plVar15 = local_f8;
      puVar7 = MessagePipe_IAsyncRequestHandlerFilter_var;
      lVar19 = *(long *)MessagePipe_IAsyncRequestHandlerFilter_var;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar19 = *(long *)puVar7;
      }
      puVar17 = *(undefined8 **)(lVar19 + 0xb8);
      lVar22 = puVar17[0x13];
      if (lVar22 == 0) {
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          puVar17 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar16 = *puVar17;
        lVar22 = thunk_FUN_02e78ab8(*(undefined8 *)MessagePipe_IPublisher<TKey,_TMessage>_var);
        FUN_04b21638(lVar22,uVar16,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyDictionary<TKey,_TValue>_var
                     ,0);
        plVar18 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x98);
        *plVar18 = lVar22;
        thunk_FUN_02ee2be8(plVar18,lVar22);
      }
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar19 = *plVar15;
      lVar23 = *(long *)System_Reactive_Linq_IQueryServices_var;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar19 = lVar19 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 +
                     0x138;
            goto Unity_Services_Economy_Internal_Models_InventoryResponse___ctor;
          }
          uVar20 = uVar20 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar20 != 0);
      }
      lVar19 = FUN_02e759c0(plVar15);
Unity_Services_Economy_Internal_Models_InventoryResponse___ctor:
      lVar19 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar19 + 8),lVar23);
      (**(code **)(lVar19 + 8))(plVar15,lVar22,lVar19);
      if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      auVar4 = *(undefined1 (*) [16])(local_100 + 0x40);
      plVar15 = *pplStack_1b8;
      if (plVar15 != (long *)0x0) {
        lVar19 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_06a2ef10) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_05ef4064;
            }
            uVar20 = uVar20 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar20 != 0);
        }
        puVar17 = (undefined8 *)FUN_02e759c0(plVar15,*(long *)PTR_DAT_06a2ef10,0);
LAB_05ef4064:
        (*(code *)*puVar17)(plVar15,puVar17[1]);
      }
      if (local_1c0 == 0) {
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc();
    }
  }
  local_f0 = auVar4;
  local_e0 = auVar5;
  local_d0 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


