/*
FUNCTION_NAME: FUN_02f464c0
ENTRY_POINT: 02f464c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f46bfc) */
/* WARNING: Removing unreachable block (ram,0x02f46960) */
/* WARNING: Removing unreachable block (ram,0x02f46c0c) */

long * FUN_02f464c0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char local_64 [4];
  
  if ((DAT_0412ab20 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8520);
    FUN_01ab69ac(PTR_DAT_03cdb5d0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cc5398);
    FUN_01ab69ac(PTR_DAT_03d23e70);
    FUN_01ab69ac(PTR_DAT_03d23cb8);
    FUN_01ab69ac(PTR_DAT_03cc4e90);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03cbebe8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ab20 = 1;
  }
  local_64[0] = '\0';
  FUN_027e0bd8(param_1,local_64,0);
  puVar6 = PTR_DAT_03d23e70;
  puVar4 = PTR_DAT_03cc4e90;
  puVar3 = PTR_DAT_03cbebe8;
  puVar2 = PTR_DAT_03cbebc0;
  puVar1 = PTR_DAT_03cbe5e8;
  plVar10 = param_2;
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_02787b20(plVar10,0,0);
    if ((uVar8 & 1) == 0) break;
    uVar16 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_0277b678(uVar16,0);
    uVar8 = FUN_02787b20(plVar10,uVar16,0);
    if ((uVar8 & 1) == 0) break;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar9 = (long *)(**(code **)(*param_1 + 0x308))
                               (param_1,plVar10,*(undefined8 *)(*param_1 + 0x310));
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != *(long *)puVar2) goto LAB_02f46968;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar9 = (long *)FUN_01ab6d3c(plVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*param_1 + 0x318))(param_1,plVar10,plVar9,*(undefined8 *)(*param_1 + 800));
        goto LAB_02f46968;
      }
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0xb18))(plVar10,*(undefined8 *)(*plVar10 + 0xb20));
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar10 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  puVar5 = PTR_DAT_03cdb5d0;
  puVar4 = PTR_DAT_03cbed20;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    do {
      do {
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02f4670c;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar10,lVar13,0);
LAB_02f4670c:
        uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar8 & 1) == 0) {
          plVar9 = (long *)0x0;
          plVar12 = (long *)PTR_DAT_03cbed08;
          goto LAB_02f468c4;
        }
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar4;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_02f4676c;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar10,lVar13,1);
LAB_02f4676c:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        puVar11 = (undefined8 *)thunk_FUN_01a89fbc();
        plVar12 = (long *)*puVar11;
        lVar13 = *(long *)puVar1;
        if (plVar12 == (long *)0x0) {
LAB_02f467b8:
          plVar12 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar13 + 0x130)) goto LAB_02f467b8;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) !=
              lVar13) {
            plVar12 = (long *)0x0;
          }
        }
        plVar9 = (long *)puVar11[1];
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar13);
        }
        uVar8 = FUN_02787b20(plVar12,0,0);
      } while ((uVar8 & 1) == 0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = FUN_02788c98(plVar12,0);
    } while ((((uVar8 & 1) == 0) ||
             (uVar7 = (**(code **)(*plVar12 + 0x388))
                                (plVar12,param_2,*(undefined8 *)(*plVar12 + 0x390)),
             plVar9 == (long *)0x0)) || (((uVar7 ^ 1) & 1) != 0));
    plVar12 = (long *)PTR_DAT_03cbed08;
    if (*plVar9 != *(long *)puVar2) goto LAB_02f468c4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar9 = (long *)FUN_01ab6d3c(plVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
    plVar12 = (long *)PTR_DAT_03cbed08;
  } while (plVar9 == (long *)0x0);
  (**(code **)(*param_1 + 0x318))(param_1,param_2,plVar9,*(undefined8 *)(*param_1 + 800));
LAB_02f468c4:
  puVar2 = PTR_DAT_03cc4e90;
  plVar10 = (long *)thunk_FUN_01a89d6c(plVar10,*plVar12);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar12) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02f46948;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*plVar12,0);
LAB_02f46948:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (plVar9 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(*param_2 + 0x4d0));
    if ((uVar8 & 1) == 0) {
LAB_02f46b48:
      uVar8 = FUN_02788c98(param_2,0);
      puVar3 = PTR_DAT_03d23cb8;
      if ((uVar8 & 1) != 0) {
        lVar13 = *(long *)PTR_DAT_03d23cb8;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        plVar9 = (long *)(**(code **)(*param_1 + 0x308))
                                   (param_1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                                    *(undefined8 *)(*param_1 + 0x310));
        goto LAB_02f46b90;
      }
    }
    else {
      uVar16 = (**(code **)(*param_2 + 0x558))(param_2,*(undefined8 *)(*param_2 + 0x560));
      uVar17 = *(undefined8 *)PTR_DAT_03cc5398;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar17 = FUN_0277b678(uVar17,0);
      uVar8 = FUN_02786d28(uVar16,uVar17,0);
      puVar3 = PTR_DAT_03d23cb8;
      if ((uVar8 & 1) == 0) goto LAB_02f46b48;
      lVar13 = *(long *)PTR_DAT_03d23cb8;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar3;
      }
      plVar9 = (long *)(**(code **)(*param_1 + 0x308))
                                 (param_1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),
                                  *(undefined8 *)(*param_1 + 0x310));
LAB_02f46b90:
      if (plVar9 != (long *)0x0) goto LAB_02f46968;
    }
    uVar16 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_0277b678(uVar16,0);
    plVar9 = (long *)(**(code **)(*param_1 + 0x308))
                               (param_1,uVar16,*(undefined8 *)(*param_1 + 0x310));
    lVar13 = *(long *)puVar1;
    if (plVar9 != (long *)0x0) goto LAB_02f4696c;
  }
  else {
LAB_02f46968:
    lVar13 = *(long *)puVar1;
LAB_02f4696c:
    if (*(byte *)(lVar13 + 0x130) <= *(byte *)(*plVar9 + 0x130)) {
      plVar10 = plVar9;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) != lVar13)
      {
        plVar10 = (long *)0x0;
      }
      goto LAB_02f4699c;
    }
  }
  plVar10 = (long *)0x0;
LAB_02f4699c:
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02787b20(plVar10,0,0);
  puVar1 = PTR_DAT_03d23cb8;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d23cb8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar9 = (long *)FUN_02f41188(plVar10,param_2);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar16 = FUN_0278a094(plVar10,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_0267bc0c(uVar16,0,0);
    if ((uVar8 & 1) != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*param_1 + 0x318))(param_1,param_2,plVar9,*(undefined8 *)(*param_1 + 800));
    }
  }
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return plVar9;
}


