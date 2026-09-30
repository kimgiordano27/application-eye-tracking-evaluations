/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_set_tx_no_session_t
ENTRY_POINT: 081367d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08136f40) */
/* WARNING: Removing unreachable block (ram,0x08136f30) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_set_tx_no_session_t
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x22;
  long *unaff_x29;
  
  uVar4 = thunk_FUN_06f73d88();
  puVar3 = PTR_DAT_08e819d0;
  if ((uVar4 & 1) != 0) {
    lVar8 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e80c40) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08136844;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08e80c40,0);
LAB_08136844:
    plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
    puVar3 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_081368ac;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_081368ac:
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 == 0) goto LAB_081369a8;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_08136990;
      }
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0813690c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,1);
LAB_0813690c:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_081371c4();
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8();
    } while( true );
  }
  plVar6 = (long *)thunk_FUN_03cf5138();
  if (plVar6 == (long *)0x0) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_081371c4();
    if (unaff_x22 != 0) {
      FUN_0555e3a8();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = thunk_FUN_06f73d88();
  if ((uVar4 & 1) != 0) {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar3;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_08136a60;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,9);
LAB_08136a60:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_08136ad8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_08136ad8:
      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 == 0) goto LAB_08136c58;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_08136c40;
      }
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_08136b38;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,1);
LAB_08136b38:
      plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)PTR_DAT_08e83348 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      plVar7 = (long *)thunk_FUN_03cf5388();
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      FUN_06f74e30();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_081371c4();
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8();
    } while( true );
  }
  lVar9 = *plVar6;
  lVar8 = *(long *)puVar3;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_08136cdc;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,9);
LAB_08136cdc:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  puVar1 = PTR_DAT_08e83348;
  puVar3 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar3;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08136d4c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_08136d4c:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar2 = PTR_DAT_08e6a288;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_08136e84;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_08136e6c;
    }
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar3;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_08136dac;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,1);
LAB_08136dac:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar7 = (long *)thunk_FUN_03cf5388();
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_081371c4();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0555e3a8();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_08136990:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_081369c4;
    }
  }
LAB_081369a8:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_081369c4:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_08136c40:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_08136c74;
    }
  }
LAB_08136c58:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_08136c74:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_08136e6c:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_08136ea0;
    }
  }
LAB_08136e84:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08136ea0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


