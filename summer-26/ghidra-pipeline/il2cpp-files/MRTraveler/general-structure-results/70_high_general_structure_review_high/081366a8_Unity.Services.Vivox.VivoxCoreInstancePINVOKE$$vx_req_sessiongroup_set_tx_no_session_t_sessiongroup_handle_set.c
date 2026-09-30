/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
ENTRY_POINT: 081366a8
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

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  
  puVar2 = PTR_DAT_08f033b0;
  puVar1 = PTR_DAT_08f033a8;
  puVar3 = PTR_DAT_08e80c38;
  if ((DAT_09428dd3 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f033c8);
    FUN_03c8f898(PTR_DAT_08e83348);
    FUN_03c8f898(PTR_DAT_08e80c38);
    FUN_03c8f898(PTR_DAT_08e819d0);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e80c40);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08f033d0);
    FUN_03c8f898(PTR_DAT_08f033b0);
    FUN_03c8f898(PTR_DAT_08f033a8);
    FUN_03c8f898(PTR_DAT_08ebf818);
    FUN_03c8f898(PTR_DAT_08e698c0);
    FUN_03c8f898(PTR_DAT_08e7d5f8);
    FUN_03c8f898(PTR_DAT_08ebf820);
    DAT_09428dd3 = 1;
  }
  puVar5 = PTR_DAT_08f033d0;
  puVar4 = PTR_DAT_08f033c8;
  lVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_0555d828(lVar6,*(undefined8 *)puVar2);
  plVar7 = (long *)thunk_FUN_03cf5138(param_4,*(undefined8 *)puVar3);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = thunk_FUN_06f73d88(param_2,*(undefined8 *)PTR_DAT_08ebf820,0), (uVar8 & 1) != 0)) {
    lVar14 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e80c40) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_08136844;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e80c40,0);
LAB_08136844:
    plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar3 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar15 = *plVar7;
      lVar14 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_081368ac;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,0);
LAB_081368ac:
      uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar7 == (long *)0x0) {
          return lVar6;
        }
        lVar14 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 == 0) goto LAB_081369a8;
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_08136990;
      }
      lVar15 = *plVar7;
      lVar14 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0813690c;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,1);
LAB_0813690c:
      uVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_081371c4(param_1,uVar10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar6,param_3,uVar10,*(undefined8 *)puVar5);
    } while( true );
  }
  puVar3 = PTR_DAT_08e819d0;
  plVar7 = (long *)thunk_FUN_03cf5138(param_4,*(undefined8 *)PTR_DAT_08e819d0);
  if (plVar7 == (long *)0x0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_081371c4(param_1,param_4);
    if (lVar6 != 0) {
      FUN_0555e3a8(lVar6,param_3,uVar10,*(undefined8 *)puVar5);
      return lVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar8 = thunk_FUN_06f73d88(param_2,*(undefined8 *)PTR_DAT_08ebf818,0);
  if ((uVar8 & 1) != 0) {
    lVar15 = *plVar7;
    lVar14 = *(long *)puVar3;
    uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_08136a60;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,9);
LAB_08136a60:
    plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar1 = PTR_DAT_08e7d5f8;
    puVar3 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar15 = *plVar7;
      lVar14 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_08136ad8;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,0);
LAB_08136ad8:
      uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      puVar2 = PTR_DAT_08e6a288;
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar7 == (long *)0x0) {
          return lVar6;
        }
        lVar14 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 == 0) goto LAB_08136c58;
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_08136c40;
      }
      lVar15 = *plVar7;
      lVar14 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_08136b38;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,1);
LAB_08136b38:
      plVar11 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_08e83348 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      plVar12 = (long *)thunk_FUN_03cf5388();
      plVar11 = (long *)*plVar12;
      lVar14 = plVar12[1];
      uVar10 = *(undefined8 *)PTR_DAT_08e698c0;
      if (plVar11 == (long *)0x0) {
        uVar13 = 0;
      }
      else {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      uVar10 = FUN_06f74e30(param_3,uVar10,uVar13,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar13 = FUN_081371c4(param_1,lVar14);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar6,uVar10,uVar13,*(undefined8 *)puVar5);
    } while( true );
  }
  lVar15 = *plVar7;
  lVar14 = *(long *)puVar3;
  uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar8 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar14) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 9) * 0x10 + 0x138);
        goto LAB_08136cdc;
      }
      uVar8 = uVar8 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,9);
LAB_08136cdc:
  plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
  puVar1 = PTR_DAT_08e83348;
  puVar3 = PTR_DAT_08e6a290;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar15 = *plVar7;
    lVar14 = *(long *)puVar3;
    uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_08136d4c;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,0);
LAB_08136d4c:
    uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    puVar2 = PTR_DAT_08e6a288;
    if ((uVar8 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
      if (plVar7 == (long *)0x0) {
        return lVar6;
      }
      lVar14 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 == 0) goto LAB_08136e84;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      goto LAB_08136e6c;
    }
    lVar15 = *plVar7;
    lVar14 = *(long *)puVar3;
    uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_08136dac;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar7,lVar14,1);
LAB_08136dac:
    plVar11 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    plVar11 = (long *)thunk_FUN_03cf5388();
    plVar12 = (long *)*plVar11;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar14 = plVar11[1];
    uVar10 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar13 = FUN_081371c4(param_1,lVar14);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0555e3a8(lVar6,uVar10,uVar13,*(undefined8 *)puVar5);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_08136990:
    if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
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
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_08136c40:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
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
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_08136e6c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_08136ea0;
    }
  }
LAB_08136e84:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_08136ea0:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return lVar6;
}


