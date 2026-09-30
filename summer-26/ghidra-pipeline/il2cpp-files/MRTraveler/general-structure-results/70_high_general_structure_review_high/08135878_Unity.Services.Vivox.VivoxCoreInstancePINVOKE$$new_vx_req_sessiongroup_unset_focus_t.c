/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_unset_focus_t
ENTRY_POINT: 08135878
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08135b5c) */
/* WARNING: Removing unreachable block (ram,0x08135e84) */
/* WARNING: Removing unreachable block (ram,0x08135e78) */
/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_unset_focus_t
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong in_x9;
  int *in_x10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = unaff_x24;
  auVar12._0_8_ = unaff_x23;
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
        goto LAB_08135788;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar5 = (undefined8 *)FUN_03cf1348(unaff_x25,param_3,2);
LAB_08135788:
      (*(code *)*puVar5)(unaff_x25,auVar12._0_8_,auVar12._8_8_,puVar5[1]);
      lVar8 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 081358c4 to 082358eb has its CatchHandler @ 08135dec */
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_081357d4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081357d4:
      uVar10 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar10 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_08135930;
        lVar8 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_08135908;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_081358f0;
      }
      lVar8 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x29) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_08135830;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348();
LAB_08135830:
      auVar12 = (*(code *)*puVar5)();
      unaff_x25 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      param_1 = *unaff_x25;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_081358f0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135924;
    }
  }
LAB_08135908:
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_08135924:
  (*(code *)*puVar5)();
LAB_08135930:
  lVar8 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_08135980;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_08135980:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_081359f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_081359f8:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_08135b50;
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_08135b28;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135a54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_08135a54:
    auVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
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
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_08135ad4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,2);
LAB_08135ad4:
    (*(code *)*puVar5)(plVar7,auVar12._0_8_,auVar12._8_8_,puVar5[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135b44;
    }
  }
LAB_08135b28:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_08135b44:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_08135b50:
  lVar8 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_08135bac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_08135bac:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_08ebf8c0;
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08135c24:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_08135d50;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_08135c80:
    auVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
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
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,2);
LAB_08135d00:
    (*(code *)*puVar5)(plVar7,auVar12._0_8_,auVar12._8_8_,puVar5[1]);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_08135d6c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


