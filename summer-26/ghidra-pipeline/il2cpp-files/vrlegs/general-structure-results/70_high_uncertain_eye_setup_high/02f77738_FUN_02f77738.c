/*
FUNCTION_NAME: FUN_02f77738
ENTRY_POINT: 02f77738
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f779cc) */
/* WARNING: Removing unreachable block (ram,0x02f779c4) */

void FUN_02f77738(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  char local_44 [4];
  
  if ((DAT_0412acb6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d24f10);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03d25168);
    FUN_01ab69ac(PTR_DAT_03d24bf0);
    DAT_0412acb6 = 1;
  }
  puVar1 = PTR_DAT_03d1fee8;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f651a8();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f660a0(param_1,0,*(undefined8 *)PTR_DAT_03d24bf0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    local_44[0] = '\0';
    FUN_027e0bd8(uVar11,local_44,0);
    if (*(int *)(param_1 + 0xd8) < 4) {
      plVar10 = *(long **)(param_1 + 200);
      lVar8 = *(long *)(param_1 + 0xd0);
      *(undefined1 *)(param_1 + 0xa1) = 1;
      uVar4 = FUN_02f79e58(0);
      *(undefined8 *)(param_1 + 0xa8) = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      iVar12 = 6;
    }
    else {
      plVar10 = (long *)0x0;
      lVar8 = 0;
      iVar12 = 5;
    }
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
    }
    puVar2 = PTR_DAT_03d24f10;
    if ((iVar12 == 6) || (iVar12 == 0)) {
      if (lVar8 != 0) {
        lVar5 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)PTR_DAT_03d24f10);
        if (lVar5 == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02f64bf4(param_1,*(undefined8 *)PTR_DAT_03d25168,*(undefined8 *)PTR_DAT_03d24bf0);
        }
        uVar11 = *(undefined8 *)puVar2;
        lVar5 = thunk_FUN_01a89d6c(lVar8,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar8,uVar11);
        }
        lVar5 = *(long *)puVar2;
        plVar6 = (long *)thunk_FUN_01a89d6c(lVar8,lVar5);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar8,lVar5);
        }
        lVar8 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02f77930;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar6,lVar5,0);
LAB_02f77930:
        (*(code *)*puVar7)(plVar6,3,puVar7[1]);
      }
      if (plVar10 != (long *)0x0) {
        uVar11 = FUN_02f79e58(0);
        (**(code **)(*plVar10 + 1000))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x3f0));
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02f651a8();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f66c54(param_1,0,*(undefined8 *)PTR_DAT_03d24bf0);
    }
  }
  return;
}


