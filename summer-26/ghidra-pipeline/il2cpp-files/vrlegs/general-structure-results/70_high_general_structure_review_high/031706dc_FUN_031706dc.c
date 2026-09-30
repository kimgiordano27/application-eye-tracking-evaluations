/*
FUNCTION_NAME: FUN_031706dc
ENTRY_POINT: 031706dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_031706dc(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [128];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (DAT_0412bedf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cd7db8);
    FUN_01ab69ac(PTR_DAT_03cd7dc0);
    FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(System_Collections_Generic_IReadOnlyList<SubAssetKey>_TypeInfo);
    DAT_0412bedf = '\x01';
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_03cd7db8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_0314f870(uVar8,param_1 + 2,0);
    puVar3 = PTR_DAT_03cd7dc0;
    uVar9 = param_1[0xb];
    if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7dc0);
    }
    FUN_0317a108(uVar9,uVar8,&local_b0,0);
    plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,5);
    puVar4 = System_Func<VisualElementFocusChangeTarget>_TypeInfo;
    uStack_e8 = uStack_a8;
    local_f0 = local_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    lVar6 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<VisualElementFocusChangeTarget>_TypeInfo,
                               &local_f0);
    if (plVar5 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_03170a98:
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar6);
        puVar2 = PTR_DAT_03cbeda8;
        local_1b4 = (undefined4)uVar8;
        lVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_1b4);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_03170a98;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar6);
          local_1b8 = (undefined4)((ulong)uVar8 >> 0x20);
          lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_1b8);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_03170a98;
          if (2 < *(uint *)(plVar5 + 3)) {
            plVar5[6] = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 6,lVar6);
            uStack_128 = *(undefined8 *)(param_2 + 0x24);
            local_130 = *(undefined8 *)(param_2 + 0x1c);
            uStack_f8 = *(undefined8 *)(param_2 + 0x54);
            uStack_100 = *(undefined8 *)(param_2 + 0x4c);
            uStack_108 = *(undefined8 *)(param_2 + 0x44);
            local_110 = *(undefined8 *)(param_2 + 0x3c);
            uStack_118 = *(undefined8 *)(param_2 + 0x34);
            uStack_120 = *(undefined8 *)(param_2 + 0x2c);
            lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_130);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_03170a98;
            if (3 < *(uint *)(plVar5 + 3)) {
              plVar5[7] = lVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 7,lVar6);
              memcpy(auStack_1b0,param_1 + 0xe,0x80);
              lVar6 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<UserRoomTaskPostData>_TypeInfo,
                                         auStack_1b0);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
              goto LAB_03170a98;
              if (4 < *(uint *)(plVar5 + 3)) {
                plVar5[8] = lVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 8,lVar6);
                uVar8 = FUN_025be8f4(*(undefined8 *)
                                      System_Collections_Generic_IReadOnlyList<SubAssetKey>_TypeInfo
                                     ,plVar5,0);
                FUN_0311e224(uVar8,0);
                if (DAT_0412bd97 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cd7db8);
                  FUN_01ab69ac(PTR_DAT_03cd7dc0);
                  DAT_0412bd97 = '\x01';
                }
                uVar8 = *(undefined8 *)(param_2 + 0xc);
                if (*(int *)(*(long *)PTR_DAT_03cd7db8 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_0314f870(uVar8,param_1 + 2,0);
                uVar9 = *param_1;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)puVar3);
                }
                FUN_0317a19c(uVar9,uVar8,param_2 + 0x1c,0);
                if (*(long *)(lVar1 + 0x28) == local_68) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


