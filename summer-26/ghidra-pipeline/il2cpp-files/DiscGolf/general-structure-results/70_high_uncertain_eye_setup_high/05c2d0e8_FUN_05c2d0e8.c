/*
FUNCTION_NAME: FUN_05c2d0e8
ENTRY_POINT: 05c2d0e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c2d0e8(int *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  int local_c4;
  undefined1 local_c0 [16];
  long local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06dc279e & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TryAdd__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TryGetValue__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_List<NetworkObject>>_ContainsKey__
                );
    FUN_02d965b8(PTR_DAT_069fc2e8);
    FUN_02d965b8(PTR_DAT_06a0d410);
    FUN_02d965b8(PTR_DAT_06a216c8);
    FUN_02d965b8(PTR_DAT_06a216d0);
    FUN_02d965b8(PTR_DAT_06a216d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0eb58);
    FUN_02d965b8(PTR_DAT_06a216e0);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__
                );
    FUN_02d965b8(PTR_DAT_069fb9e8);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_Remove__
                );
    FUN_02d965b8(PTR_DAT_06a0db58);
    DAT_06dc279e = 1;
  }
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_Remove__;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_ContainsKey__;
  puVar4 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  puVar2 = PTR_DAT_069fb9e8;
  uStack_98 = 0;
  lVar17 = *(long *)(param_1 + 0xc);
  local_a0 = 0;
  local_90 = 0;
  local_a4 = 0;
  local_c0._8_8_ = 0;
  local_b0 = 0;
  local_c0._0_8_ = 0;
  local_c4 = 0;
  if (*param_1 == 0) {
    local_c0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    goto LAB_05c2d32c;
  }
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  LeanTween__value(piVar8,0);
  puVar3 = PTR_DAT_069fc2e8;
  param_1[0x10] = 200;
  uVar9 = FUN_02d966a4(*(undefined8 *)puVar3,0x400);
  *(undefined8 *)(param_1 + 0x12) = uVar9;
  LeanTween__value();
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0eb58);
  FUN_0549bcb4(uVar9,0);
  *(undefined8 *)(param_1 + 0x14) = uVar9;
  LeanTween__value(param_1 + 0x14,uVar9);
  while( true ) {
    if (*(int *)(*(long *)PTR_DAT_06a0d410 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0554b51c(param_1 + 8,0);
    plVar10 = *(long **)(param_1 + 10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = (**(code **)(*plVar10 + 0x2d8))
                       (plVar10,*(undefined8 *)(param_1 + 0x12),0,0x400,*(undefined8 *)(param_1 + 8)
                        ,*(undefined8 *)(*plVar10 + 0x2e0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar18 = FUN_04819218(lVar11,0,*(undefined8 *)PTR_DAT_06a216e0);
    local_c0 = auVar18;
    uVar12 = FUN_04b88bc4(local_c0,*(undefined8 *)PTR_DAT_06a216d8);
    if ((uVar12 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x16) = local_c0;
      LeanTween__value(param_1 + 0x16,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<uint,_List<NetworkObject>>_ContainsKey__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031de4a4(param_1 + 2,local_c0,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TryAdd__
                  );
      return;
    }
LAB_05c2d32c:
    iVar7 = FUN_04b88c0c(local_c0,*(undefined8 *)PTR_DAT_06a216d0);
    if (iVar7 == 0) {
      uVar9 = FUN_05c286f4(0xb,0,0,0);
      uVar13 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar13);
    }
    plVar15 = (long *)(param_1 + 0x14);
    plVar10 = (long *)*plVar15;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*plVar10 + 0x388))
              (plVar10,*(undefined8 *)(param_1 + 0x12),0,iVar7,*(undefined8 *)(*plVar10 + 0x390));
    local_a4 = 0;
    local_b0 = 0;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                               );
    FUN_05ce7754(lVar11,0);
    plVar10 = (long *)*plVar15;
    if (plVar10 == (long *)0x0) break;
    bVar1 = false;
    while( true ) {
      uVar9 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
      plVar10 = (long *)*plVar15;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar13 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
      uVar12 = FUN_05c28870(uVar9,&local_a4,uVar13,&local_b0,0);
      if ((uVar12 & 1) == 0) break;
      if (local_b0 == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar9 = FUN_05ccbaa0(lVar11,*(undefined8 *)PTR_DAT_06a0db58,0);
        uVar12 = FUN_0536c9cc(uVar9,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_054e5e7c(uVar9,&local_c4,0);
          if ((uVar12 & 1) != 0) goto LAB_05c2d564;
        }
        local_c4 = 0;
LAB_05c2d564:
        plVar10 = (long *)*plVar15;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar14 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
        iVar7 = local_c4;
        if (lVar14 - ((long)local_a4 + (long)local_c4) < 1) {
          plVar10 = *(long **)(param_1 + 0x14);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar13 = *(undefined8 *)(param_1 + 10);
          uVar9 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05c2c284(uVar9,uVar13,(iVar7 - (int)uVar9) + local_a4);
        }
        else {
          plVar10 = (long *)*plVar15;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
          lVar17 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc2e8,iVar7 - (local_a4 + local_c4));
          plVar16 = (long *)(param_1 + 0xe);
          *plVar16 = lVar17;
          LeanTween__value(plVar16);
          plVar10 = (long *)*plVar15;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar9 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
          lVar17 = *plVar16;
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_055155dc(uVar9,local_a4 + local_c4,lVar17,0,*(undefined4 *)(lVar17 + 0x18),0);
        }
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        FUN_04a6c4e4(&local_80,lVar11,*(undefined8 *)(param_1 + 0xe),param_1[0x10],
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>_Add__
                    );
        *param_1 = -2;
        uStack_98 = uStack_78;
        local_a0 = local_80;
        local_90 = local_70;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        LeanTween__value(param_1 + 0xe,0);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        LeanTween__value(param_1 + 0x12,0);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        LeanTween__value(plVar15,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<uint,_List<NetworkObject>>_ContainsKey__
                    + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
        FUN_03fa0780(param_1 + 2,&local_80,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_TryGetValue__
                    );
        return;
      }
      if (bVar1) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05cedd24(lVar11,local_b0,0);
      }
      else {
        lVar14 = FUN_05370114(local_b0,0x20,0,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar14 + 0x18) < 2) {
          uVar9 = FUN_05c286f4(0xb,0,0);
          uVar13 = thunk_FUN_02dfd288(
                                     Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>__ctor__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar9,uVar13);
        }
        iVar7 = FUN_0536a4a8(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar5,1,0);
        if (iVar7 == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10)
          ;
          LeanTween__value(lVar17 + 0x50);
        }
        else {
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          iVar7 = FUN_0536a4a8(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar6,1,0);
          if (iVar7 != 0) {
            uVar9 = FUN_05c286f4(0xb,0,0);
            uVar13 = thunk_FUN_02dfd288(
                                       Method_System_Collections_Generic_Dictionary<uint,_INetworkPrefabInstanceHandler>__ctor__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar9,uVar13);
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          LeanTween__value(lVar17 + 0x50);
        }
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        iVar7 = FUN_05505268(*(undefined8 *)(lVar14 + 0x28),0);
        param_1[0x10] = iVar7;
        if (2 < *(int *)(lVar14 + 0x18)) {
          uVar9 = FUN_0536e55c(*(undefined8 *)puVar2,lVar14,2,*(int *)(lVar14 + 0x18) + -2,0);
          *(undefined8 *)(lVar17 + 0x38) = uVar9;
          LeanTween__value(lVar17 + 0x38);
        }
      }
      plVar10 = (long *)*plVar15;
      bVar1 = true;
      if (plVar10 == (long *)0x0) goto LAB_05c2d51c;
    }
  }
LAB_05c2d51c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


