/*
FUNCTION_NAME: FUN_0359b210
ENTRY_POINT: 0359b210
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0359b210(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_58;
  
  if ((DAT_066c3694 & 1) == 0) {
    FUN_02b3c81c(&DAT_06443940);
    DAT_066c3694 = 1;
  }
  local_58 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(3,0);
  }
  iVar1 = thunk_FUN_02b4ba0c(param_2,0);
  if (iVar1 != 1) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(7,0);
  }
  iVar1 = thunk_FUN_02b4b9cc(param_2,0,0);
  if (iVar1 != 0) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(6,0);
  }
  uVar2 = FUN_04d941cc(param_2,0);
  if (uVar2 < param_3) {
    FUN_04d9c908(0);
  }
  iVar1 = FUN_04d941cc(param_2,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_0435c6cc(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - param_3) < iVar3) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    lVar8 = thunk_FUN_02b79548(param_2,lVar8);
    if (lVar8 != 0) {
      System_Collections_Generic_List<SerializedKeyValuePair<object,_int>>__Sort
                (param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
      return;
    }
    plVar4 = (long *)thunk_FUN_02b79548(param_2,*(undefined8 *)PTR_DAT_06313048);
    if (plVar4 == (long *)0x0) {
      FUN_04d9c940();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar9 = 0;
        puVar10 = (undefined8 *)(lVar8 + 0x28);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(puVar10 + -1)) {
            uStack_78 = puVar10[1];
            local_80 = *puVar10;
            uStack_70 = local_80;
            uStack_68 = uStack_78;
            lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40),
                               &local_80);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar4[(long)(int)param_3 + 4] = lVar5;
            thunk_FUN_02bb0e9c(plVar4 + (long)(int)param_3 + 4,lVar5);
            param_3 = param_3 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


