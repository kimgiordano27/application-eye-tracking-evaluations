/*
FUNCTION_NAME: FUN_02620f4c
ENTRY_POINT: 02620f4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026213a0) */

long * FUN_02620f4c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_44 [4];
  
  puVar5 = PTR_DAT_03cf21c0;
  if ((DAT_04123f8e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4aa0);
    FUN_01ab69ac(PTR_DAT_03cd8e48);
    FUN_01ab69ac(PTR_DAT_03cf21c0);
    FUN_01ab69ac(PTR_DAT_03ce7b90);
    FUN_01ab69ac(PTR_DAT_03ce7b00);
    FUN_01ab69ac(PTR_DAT_03cf21c8);
    FUN_01ab69ac(PTR_DAT_03cf21d0);
    FUN_01ab69ac(PTR_DAT_03cf21d8);
    FUN_01ab69ac(PTR_DAT_03cf21e0);
    FUN_01ab69ac(PTR_DAT_03cf21e8);
    FUN_01ab69ac(PTR_DAT_03cf21f0);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_04123f8e = 1;
  }
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar5;
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
  local_44[0] = '\0';
  FUN_027e0bd8(uVar9,local_44,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar5;
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x310));
  puVar6 = PTR_DAT_03cf21d0;
  puVar3 = PTR_DAT_03cbe5e8;
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cf21d0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cf21d0))
    goto LAB_02621360;
  }
  uVar15 = *(undefined8 *)PTR_DAT_03cf21c8;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar15 = FUN_0277b678(uVar15,0);
  puVar4 = PTR_DAT_03cd8e48;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar16 = *(undefined8 *)PTR_DAT_03cd8e48;
  lVar7 = thunk_FUN_01a89d6c(param_1,uVar16);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_1,uVar16);
  }
  lVar7 = *(long *)puVar4;
  plVar8 = (long *)thunk_FUN_01a89d6c(param_1,lVar7);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_1,lVar7);
  }
  lVar12 = *plVar8;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar7) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_02621180;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_02621180:
  lVar7 = (*(code *)*puVar10)(plVar8,uVar15,1,puVar10[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar7 + 0x18) == 0) {
    lVar7 = *param_1;
    bVar1 = *(byte *)(lVar7 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cc4aa0 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc4aa0)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_03ce7b90 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03ce7b90))
        {
          bVar2 = *(byte *)(*(long *)PTR_DAT_03ce7b00 + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03ce7b00
             )) goto LAB_02621398;
          plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21e8);
          FUN_0279932c(plVar8,0);
        }
        else {
          plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21e0);
          FUN_0279932c(plVar8,0);
        }
      }
      else {
        plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21d8);
        FUN_0279932c(plVar8,0);
      }
    }
    else {
      plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f0);
      FUN_0279932c(plVar8,0);
    }
  }
  else {
    if ((int)*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar8 = *(long **)(lVar7 + 0x20);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar8);
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x1c8))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x1d0));
    lVar7 = *(long *)puVar5;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar5;
    }
    plVar11 = (long *)**(long **)(lVar7 + 0xb8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar11 + 0x318))(plVar11,param_1,plVar8,*(undefined8 *)(*plVar11 + 800));
LAB_02621360:
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
    return plVar8;
  }
LAB_02621398:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


