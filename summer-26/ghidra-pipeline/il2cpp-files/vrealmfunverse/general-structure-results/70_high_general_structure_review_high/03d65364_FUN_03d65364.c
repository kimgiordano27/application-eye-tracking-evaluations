/*
FUNCTION_NAME: FUN_03d65364
ENTRY_POINT: 03d65364
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_03d65364(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  
  if ((DAT_066c478a & 1) == 0) {
    FUN_02b3c81c(&DAT_06443940);
    DAT_066c478a = 1;
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
  if ((int)param_3 < 0) {
    FUN_04d9c908(0);
  }
  iVar1 = FUN_04d941cc(param_2,0);
  iVar2 = FUN_03d64c84(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
  }
  lVar5 = thunk_FUN_02b79548(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_02b4c898(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar4 = (long *)FUN_04d8a7b0(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03d657a8;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_04d9c940(0);
          }
        }
        plVar10 = (long *)thunk_FUN_02b79548(param_2,*(undefined8 *)PTR_DAT_06313048);
        if (plVar10 == (long *)0x0) {
          FUN_04d9c940();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03d6564c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar5,0);
LAB_03d6564c:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02b76218(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_03d656e0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar5,0);
LAB_03d656e0:
              (*(code *)*puVar3)(&local_78,plVar4,iVar2,puVar3[1]);
              uStack_88 = uStack_70;
              local_90 = local_78;
              local_80 = local_68;
              lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28)
                                 ,&local_90);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar10[(long)(int)param_3 + 4] = lVar5;
              thunk_FUN_02bb0e9c(plVar10 + (long)(int)param_3 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto AYellowpaper_SerializedCollections_SerializedDictionary<int,_object>___ctor;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar10,lVar6,5);
AYellowpaper_SerializedCollections_SerializedDictionary<int,_object>___ctor:
                    /* WARNING: Could not recover jumptable at 0x03d6563c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_03d657a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


