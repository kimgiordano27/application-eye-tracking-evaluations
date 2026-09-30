/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_get
ENTRY_POINT: 08136740
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x08136f40) */
/* WARNING: Removing unreachable block (ram,0x08136f30) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  
  FUN_03c8f898(PTR_DAT_08f033d0);
  FUN_03c8f898(PTR_DAT_08f033b0);
  FUN_03c8f898(PTR_DAT_08f033a8);
  FUN_03c8f898(PTR_DAT_08ebf818);
  FUN_03c8f898(PTR_DAT_08e698c0);
  FUN_03c8f898(PTR_DAT_08e7d5f8);
  FUN_03c8f898(PTR_DAT_08ebf820);
  *(undefined1 *)(unaff_x25 + 0xdd3) = 1;
  puVar4 = PTR_DAT_08f033d0;
  puVar5 = PTR_DAT_08f033c8;
  lVar6 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_0555d828(lVar6,*unaff_x22);
  plVar7 = (long *)thunk_FUN_03cf5138();
  if ((plVar7 != (long *)0x0) && (uVar8 = thunk_FUN_06f73d88(), (uVar8 & 1) != 0)) {
    lVar13 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e80c40) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08136844;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e80c40,0);
LAB_08136844:
    plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar4 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar4;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_081368ac;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,0);
LAB_081368ac:
      uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar7 == (long *)0x0) {
          return lVar6;
        }
        lVar13 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_081369a8;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_08136990;
      }
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar4;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0813690c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,1);
LAB_0813690c:
      (*(code *)*puVar9)(plVar7,puVar9[1]);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_081371c4();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar6);
    } while( true );
  }
  puVar1 = PTR_DAT_08e819d0;
  plVar7 = (long *)thunk_FUN_03cf5138();
  if (plVar7 == (long *)0x0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_081371c4();
    if (lVar6 != 0) {
      FUN_0555e3a8(lVar6);
      return lVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar8 = thunk_FUN_06f73d88();
  if ((uVar8 & 1) != 0) {
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_08136a60;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,9);
LAB_08136a60:
    plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar1 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_08136ad8;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,0);
LAB_08136ad8:
      uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      puVar2 = PTR_DAT_08e6a288;
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar7 == (long *)0x0) {
          return lVar6;
        }
        lVar13 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_08136c58;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_08136c40;
      }
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_08136b38;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,1);
LAB_08136b38:
      plVar10 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)PTR_DAT_08e83348 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      plVar10 = (long *)thunk_FUN_03cf5388();
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      }
      uVar11 = FUN_06f74e30();
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar12 = FUN_081371c4();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar6,uVar11,uVar12,*(undefined8 *)puVar4);
    } while( true );
  }
  lVar14 = *plVar7;
  lVar13 = *(long *)puVar1;
  uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar8 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar13) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 9) * 0x10 + 0x138);
        goto LAB_08136cdc;
      }
      uVar8 = uVar8 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,9);
LAB_08136cdc:
  plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
  puVar2 = PTR_DAT_08e83348;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08136d4c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,0);
LAB_08136d4c:
    uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar3 = PTR_DAT_08e6a288;
    if ((uVar8 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
      if (plVar7 == (long *)0x0) {
        return lVar6;
      }
      lVar13 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_08136e84;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      goto LAB_08136e6c;
    }
    lVar14 = *plVar7;
    lVar13 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_08136dac;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,1);
LAB_08136dac:
    plVar10 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar10 = (long *)thunk_FUN_03cf5388();
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_081371c4();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0555e3a8(lVar6,uVar11,uVar12,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_08136990:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_081369c4;
    }
  }
LAB_081369a8:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,0);
LAB_081369c4:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return lVar6;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_08136c40:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08136c74;
    }
  }
LAB_08136c58:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_08136c74:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return lVar6;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_08136e6c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08136ea0;
    }
  }
LAB_08136e84:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_08136ea0:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return lVar6;
}


