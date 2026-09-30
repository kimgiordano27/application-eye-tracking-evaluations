/*
FUNCTION_NAME: FUN_029f53a0
ENTRY_POINT: 029f53a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f5630) */

void FUN_029f53a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char local_34 [4];
  
  if ((DAT_04127fac & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03d09990);
    FUN_01ab69ac(PTR_DAT_03d09998);
    DAT_04127fac = 1;
  }
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
    puVar1 = PTR_DAT_03cbec30;
    plVar7 = *(long **)(param_1 + 0x78);
    lVar8 = *(long *)PTR_DAT_03cbec30;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_01a47054(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    puVar2 = PTR_DAT_03ccf278;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar7;
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_03d09998;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03ccf278) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_029f54e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03ccf278,2);
LAB_029f54e0:
    (*(code *)*puVar3)(plVar7,uVar10,uVar9,puVar3[1]);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de940(*(long *)(param_1 + 0x30),0);
    uVar5 = FUN_027bcf38(*(undefined8 *)(param_1 + 0x58),0,0);
    if ((uVar5 & 1) != 0) {
      while (*(char *)(param_1 + 0x26) != '\0') {
        FUN_027e2830(1,0);
      }
      FUN_029f56b8(*(undefined8 *)(param_1 + 0x58));
      lVar8 = *(long *)puVar1;
      plVar7 = *(long **)(param_1 + 0x78);
      lVar4 = *(long *)(lVar8 + 0x38);
      if (lVar4 == 0) {
        FUN_01a47054(lVar8);
        lVar4 = *(long *)(lVar8 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar8 = *plVar7;
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_03d09990;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_029f55ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,2);
LAB_029f55ec:
      (*(code *)*puVar3)(plVar7,uVar10,uVar9,puVar3[1]);
    }
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return;
}


