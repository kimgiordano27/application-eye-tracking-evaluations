/*
FUNCTION_NAME: FUN_02630360
ENTRY_POINT: 02630360
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02630600) */

long * FUN_02630360(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char local_34 [4];
  
  puVar3 = PTR_DAT_03cf2788;
  if ((DAT_04123fe8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2788);
    FUN_01ab69ac(PTR_DAT_03cf2688);
    FUN_01ab69ac(PTR_DAT_03cf22a8);
    FUN_01ab69ac(PTR_DAT_03cf26a8);
    DAT_04123fe8 = 1;
  }
  lVar4 = thunk_FUN_01a89d6c(param_1,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_03cf22a8;
  if (lVar4 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = *(undefined8 *)puVar3;
    lVar4 = thunk_FUN_01a89d6c(param_1,uVar10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(param_1,uVar10);
    }
    lVar4 = *(long *)puVar3;
    plVar5 = (long *)thunk_FUN_01a89d6c(param_1,lVar4);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(param_1,lVar4);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_026304fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,0);
LAB_026304fc:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    return plVar5;
  }
  lVar4 = *(long *)PTR_DAT_03cf22a8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
  }
  uVar10 = **(undefined8 **)(lVar4 + 0xb8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar10,local_34,0);
  puVar3 = PTR_DAT_03cf2688;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar11 = *(undefined8 *)PTR_DAT_03cf2688;
  lVar4 = thunk_FUN_01a89d6c(param_1,uVar11);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_1,uVar11);
  }
  lVar4 = *(long *)puVar3;
  plVar5 = (long *)thunk_FUN_01a89d6c(param_1,lVar4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_1,lVar4);
  }
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_02630520;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,7);
LAB_02630520:
  uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_0262e6cc(uVar11);
  plVar5 = (long *)**(long **)(*(long *)puVar2 + 0xb8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(0,uVar11);
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x310));
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cf26a8 + 0x130);
    if (bVar1 <= *(byte *)(*plVar5 + 0x130)) {
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf26a8)
      {
        plVar5 = (long *)0x0;
      }
      goto LAB_026305b4;
    }
  }
  plVar5 = (long *)0x0;
LAB_026305b4:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return plVar5;
}


