/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_sessiongroup_handle_set
ENTRY_POINT: 0813574c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08135b5c) */
/* WARNING: Removing unreachable block (ram,0x08135e84) */
/* WARNING: Removing unreachable block (ram,0x08135e78) */
/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_sessiongroup_handle_set
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x27;
  undefined1 auVar12 [16];
  
  plVar5 = (long *)(*(code *)*param_1)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_081357d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_081357d4:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar1 = PTR_DAT_08e6a288;
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_08135930;
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_08135908;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135830;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_08135830:
    auVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_081358b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,2);
LAB_081358b0:
    (*(code *)*puVar6)(plVar7,auVar12._0_8_,auVar12._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135924;
    }
  }
LAB_08135908:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_08135924:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_08135930:
  lVar8 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_08135980;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_08135980:
  plVar5 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_081359f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_081359f8:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_08135b50;
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_08135b28;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135a54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_08135a54:
    auVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar7 = (long *)(**(code **)(*unaff_x19 + 1000))();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_08135ad4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,2);
LAB_08135ad4:
    (*(code *)*puVar6)(plVar7,auVar12._0_8_,auVar12._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135b44;
    }
  }
LAB_08135b28:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_08135b44:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_08135b50:
  lVar8 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_08135bac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_08135bac:
  plVar5 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_08135c24:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_08135d50;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_08135c80:
    auVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,2);
LAB_08135d00:
    (*(code *)*puVar6)(plVar7,auVar12._0_8_,auVar12._8_8_,puVar6[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_08135d6c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


