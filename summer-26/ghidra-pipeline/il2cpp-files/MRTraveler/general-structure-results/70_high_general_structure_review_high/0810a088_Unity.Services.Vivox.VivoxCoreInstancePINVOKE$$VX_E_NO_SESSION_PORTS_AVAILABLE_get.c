/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_NO_SESSION_PORTS_AVAILABLE_get
ENTRY_POINT: 0810a088
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0810a37c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_NO_SESSION_PORTS_AVAILABLE_get
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  
  do {
    uVar4 = FUN_06f75284(param_1,param_2,param_3);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                    /* try { // try from 0810a0a4 to 0820a0a7 has its CatchHandler @ 0810abc4 */
                    /* try { // try from 0810a0a8 to 0820a0b7 has its CatchHandler @ 0810abd0 */
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a3c50(uVar4,0);
LAB_0810a12c:
    do {
      unaff_w25 = unaff_w25 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w25) {
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_0810a178;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0810a160;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w25) goto LAB_0810a374;
      plVar6 = *(long **)(unaff_x22 + (long)(int)unaff_w25 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_0810a370;
      uVar8 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
    } while ((uVar8 & 1) == 0);
    uVar4 = *unaff_x26;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar3 = (long *)FUN_0710fcf0(uVar4,0);
    if (plVar3 == (long *)0x0) {
LAB_0810a370:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar8 = (**(code **)(*plVar3 + 0x2c8))(plVar3,plVar6,*(undefined8 *)(*plVar3 + 0x2d0));
    if ((uVar8 & 1) == 0) goto LAB_0810a12c;
    lVar7 = (**(code **)(*plVar6 + 0x488))(plVar6,*(undefined8 *)(*plVar6 + 0x490));
    if (lVar7 == 0) goto LAB_0810a370;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0810a374:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (unaff_x19 == 0) goto LAB_0810a370;
    param_2 = *(undefined8 *)(lVar7 + 0x20);
    uVar8 = FUN_06a4e574();
    if ((uVar8 & 1) == 0) {
      FUN_06a4e36c();
      goto LAB_0810a12c;
    }
    param_3 = FUN_06a4e300();
    if ((unaff_x21 & 1) == 0) {
      uVar4 = FUN_06f75284(*(undefined8 *)PTR_DAT_08f01e18,param_2);
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
      }
      FUN_085a3c50(uVar4,0);
      goto LAB_0810a12c;
    }
    FUN_06a4f87c();
    FUN_06a4e36c();
    param_1 = *(undefined8 *)PTR_DAT_08f01e10;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0810a160:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f01e08) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0810a194;
    }
  }
LAB_0810a178:
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_0810a194:
  plVar6 = (long *)(*(code *)*puVar5)();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f01df0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0810a1fc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08f01df0,0);
LAB_0810a1fc:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  puVar2 = PTR_DAT_08f01df8;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0810a26c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_0810a26c:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0810a2c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_0810a2c8:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    FUN_08109e3c();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0810a344;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_0810a344:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


