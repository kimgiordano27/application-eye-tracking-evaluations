/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_session_t_sessiongroup_handle_get
ENTRY_POINT: 08136028
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x08135e84) */
/* WARNING: Removing unreachable block (ram,0x08135b5c) */
/* WARNING: Removing unreachable block (ram,0x08135e90) */
/* WARNING: Removing unreachable block (ram,0x081360bc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_session_t_sessiongroup_handle_get
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar10;
  long *unaff_x27;
  long *unaff_x29;
  undefined1 auVar11 [16];
  
  if (!in_ZR) {
    if (unaff_x22 != (long *)0x0) {
      lVar10 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x081360a4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
code_r0x081360a4:
      (*(code *)*puVar4)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar6 = (long *)__cxa_begin_catch();
  lVar10 = *plVar6;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar7 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135924;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_08135924:
    (*(code *)*puVar4)();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar10);
  }
  lVar10 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08135980;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_08135980:
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_08ebf8c0;
  puVar2 = PTR_DAT_08e82e08;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081359f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_081359f8:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_08135b50;
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_08135b28;
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135a54;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08135a54:
    auVar11 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar5 = (long *)(**(code **)(*unaff_x19 + 1000))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08135ad4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,2);
LAB_08135ad4:
    (*(code *)*puVar4)(plVar5,auVar11._0_8_,auVar11._8_8_,puVar4[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x29) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135b44;
    }
  }
LAB_08135b28:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x29,0);
LAB_08135b44:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_08135b50:
  lVar10 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08135bac;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_08135bac:
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_08ebf8c0;
  puVar2 = PTR_DAT_08e82e08;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_08135c24:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_08135d50;
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08135c80:
    auVar11 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,2);
LAB_08135d00:
    (*(code *)*puVar4)(plVar5,auVar11._0_8_,auVar11._8_8_,puVar4[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x29) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x29,0);
LAB_08135d6c:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


