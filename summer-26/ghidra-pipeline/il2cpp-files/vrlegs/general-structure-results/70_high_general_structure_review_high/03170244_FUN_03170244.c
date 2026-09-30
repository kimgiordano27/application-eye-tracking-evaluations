/*
FUNCTION_NAME: FUN_03170244
ENTRY_POINT: 03170244
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_03170244(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 auStack_2b0 [128];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (DAT_0412bede == '\0') {
    FUN_01ab69ac(PTR_DAT_03cd7db8);
    FUN_01ab69ac(PTR_DAT_03cd7dc0);
    FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
    FUN_01ab69ac(System_Func<ValidateCommandEvent>_TypeInfo);
    FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03ce78e0);
    FUN_01ab69ac(System_Collections_Generic_IReadOnlyList<ParameterExpression>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ce7a20);
    DAT_0412bede = '\x01';
  }
  puVar6 = PTR_DAT_03cd7db8;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_03cd7db8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_0314f870(uVar11,param_1 + 2,0);
    puVar7 = PTR_DAT_03cd7dc0;
    uVar12 = param_1[0xb];
    if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7dc0);
    }
    FUN_0317a108(uVar12,uVar11,&local_b0,0);
    puVar1 = (undefined8 *)PTR_DAT_03ce78e0;
    if (*(char *)(param_2 + 0x1c) != '\0') {
      puVar1 = (undefined8 *)PTR_DAT_03ce7a20;
    }
    FUN_031121a8(&local_190,*puVar1,0);
    uStack_c8 = uStack_188;
    local_d0 = local_190;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
    uStack_108 = uStack_a8;
    local_110 = local_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    local_f0 = local_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    lVar9 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<VisualElementFocusChangeTarget>_TypeInfo,
                               &local_110);
    if (plVar8 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_031706c8:
        uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar9);
        puVar5 = PTR_DAT_03cbeda8;
        local_2b4 = (undefined4)uVar11;
        lVar9 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_2b4);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_031706c8;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 5,lVar9);
          local_2b8 = (undefined4)((ulong)uVar11 >> 0x20);
          lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,&local_2b8);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_031706c8;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 6,lVar9);
            FUN_031b46f4(auStack_210,param_2 + 0x20,0);
            memcpy(&local_190,auStack_210,0x80);
            memcpy(auStack_210,&local_190,0x80);
            puVar5 = System_Func<UserRoomTaskPostData>_TypeInfo;
            lVar9 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<UserRoomTaskPostData>_TypeInfo,
                                       auStack_210);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_031706c8;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 7,lVar9);
              uStack_228 = uStack_c8;
              local_230 = local_d0;
              uStack_218 = uStack_b8;
              uStack_220 = uStack_c0;
              lVar9 = thunk_FUN_01a89a98(*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,
                                         &local_230);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_031706c8;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = lVar9;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 8,lVar9);
                memcpy(auStack_2b0,param_1 + 0xe,0x80);
                lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,auStack_2b0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_031706c8;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = lVar9;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar8 + 9,lVar9);
                  uVar11 = FUN_025be8f4(*(undefined8 *)
                                         System_Collections_Generic_IReadOnlyList<ParameterExpression>_TypeInfo
                                        ,plVar8,0);
                  FUN_0311e224(uVar11,0);
                  if (DAT_0412bd96 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cd7db8);
                    FUN_01ab69ac(PTR_DAT_03cd7dc0);
                    DAT_0412bd96 = '\x01';
                  }
                  uVar11 = *(undefined8 *)(param_2 + 0xc);
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_0314f870(uVar11,param_1 + 2,0);
                  uVar12 = *param_1;
                  uVar2 = *(undefined4 *)(param_2 + 0x20);
                  cVar3 = *(char *)(param_2 + 0x1c);
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)puVar7);
                  }
                  FUN_03177a04(uVar12,uVar11,uVar2,cVar3 != '\0',0);
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
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


