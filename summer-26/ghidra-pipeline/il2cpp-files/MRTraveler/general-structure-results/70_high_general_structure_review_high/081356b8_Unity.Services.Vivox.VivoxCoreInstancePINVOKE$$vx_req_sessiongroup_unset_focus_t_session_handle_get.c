/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_session_handle_get
ENTRY_POINT: 081356b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08135b5c) */
/* WARNING: Removing unreachable block (ram,0x08135e84) */
/* WARNING: Removing unreachable block (ram,0x08135e78) */
/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  undefined1 auVar16 [16];
  undefined *puVar12;
  
                    /* try { // try from 081356c0 to 082356cb has its CatchHandler @ 08135d5c */
  FUN_03c8f898(PTR_DAT_08e6a290);
  *(undefined1 *)(unaff_x24 + 0xdca) = 1;
  FUN_0812c5fc();
  uVar5 = FUN_06f7ad2c();
  puVar12 = PTR_DAT_08e82e00;
  if ((uVar5 & 1) == 0) {
    if (unaff_x22 == (long *)0x0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar10 = thunk_FUN_03cf5234();
      puVar12 = PTR_DAT_08ebf8d8;
    }
    else {
                    /* try { // try from 081356e8 to 082356eb has its CatchHandler @ 08135ce4 */
      if (unaff_x21 == (long *)0x0) {
        thunk_FUN_03ce5214(PTR_DAT_08e80470);
        uVar10 = thunk_FUN_03cf5234();
        puVar12 = PTR_DAT_08ebf8e0;
      }
      else {
                    /* try { // try from 081356ec to 082356fb has its CatchHandler @ 08135d48 */
        if (unaff_x20 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x2d8))();
                    /* try { // try from 08135710 to 08235717 has its CatchHandler @ 08135ce8 */
          lVar13 = *unaff_x22;
                    /* try { // try from 08135718 to 082358c3 has its CatchHandler @ 08135474 */
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar12) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto FUN_0813575c;
              }
              uVar5 = uVar5 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348();
FUN_0813575c:
          plVar7 = (long *)(*(code *)*puVar6)();
          puVar4 = PTR_DAT_08ebf8c0;
          puVar3 = PTR_DAT_08e82e08;
          puVar2 = PTR_DAT_08e6a290;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          do {
            lVar13 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_081357d4;
                }
                uVar5 = uVar5 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_081357d4:
            uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            puVar1 = PTR_DAT_08e6a288;
            if ((uVar5 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_08135930;
              lVar13 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar5 == 0) goto LAB_08135908;
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_081358f0;
            }
            lVar13 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_08135830;
                }
                uVar5 = uVar5 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_08135830:
            auVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            plVar8 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar13 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_081358b0;
                }
                uVar5 = uVar5 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar4,2);
LAB_081358b0:
            (*(code *)*puVar6)(plVar8,auVar16._0_8_,auVar16._8_8_,puVar6[1]);
          } while( true );
        }
        thunk_FUN_03ce5214(PTR_DAT_08e80470);
        uVar10 = thunk_FUN_03cf5234();
        puVar12 = PTR_DAT_08ebf8e8;
      }
    }
    uVar11 = thunk_FUN_03ce5214(puVar12);
    FUN_0705a2f8(uVar10,uVar11,0);
  }
  else {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar10 = thunk_FUN_03cf5234();
    uVar11 = thunk_FUN_03ce5214(PTR_DAT_08ebf8c8);
    uVar9 = thunk_FUN_03ce5214(PTR_DAT_08ebf8d0);
    FUN_0705df24(uVar10,uVar11,uVar9,0);
  }
  uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f033a0);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar10,uVar11);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
LAB_081358f0:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08135924;
    }
  }
LAB_08135908:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e6a288,0);
LAB_08135924:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_08135930:
  lVar13 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_08135980;
      }
      uVar5 = uVar5 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_08135980:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_081359f8;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_081359f8:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_08135b50;
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 == 0) goto LAB_08135b28;
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08135a54;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_08135a54:
    auVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar8 = (long *)(**(code **)(*unaff_x19 + 1000))();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_08135ad4;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar4,2);
LAB_08135ad4:
    (*(code *)*puVar6)(plVar8,auVar16._0_8_,auVar16._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar15 + -2) == lVar13) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08135b44;
    }
  }
LAB_08135b28:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,0);
LAB_08135b44:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_08135b50:
  lVar13 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_08135bac;
      }
      uVar5 = uVar5 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_08135bac:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = PTR_DAT_08ebf8c0;
  puVar2 = PTR_DAT_08e82e08;
  puVar12 = PTR_DAT_08e6a290;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar12) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar12,0);
LAB_08135c24:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar7;
      lVar13 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 == 0) goto LAB_08135d50;
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_08135c80:
    auVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar8 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar3,2);
LAB_08135d00:
    (*(code *)*puVar6)(plVar8,auVar16._0_8_,auVar16._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar15 = piVar15 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar15 + -2) == lVar13) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar7,lVar13,0);
LAB_08135d6c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


