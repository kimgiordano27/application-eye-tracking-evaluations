/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_NO_SESSION_PORTS_AVAILABLE_get
ENTRY_POINT: 0842f4e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0842f73c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_NO_SESSION_PORTS_AVAILABLE_get
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  
  uVar3 = FUN_06fd246c(param_1,0);
  if ((((uVar3 & 1) == 0) || (uVar3 = thunk_FUN_06fd18b4(), (uVar3 & 1) != 0)) ||
     (uVar3 = thunk_FUN_06fd18b4(), (uVar3 & 1) != 0)) {
    FUN_06b6dddc();
  }
  if (unaff_x20 == 0) {
    return;
  }
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091af380) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0842f5a8;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091af380,0);
LAB_0842f5a8:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar2 = PTR_DAT_091af388;
  puVar1 = PTR_DAT_091a1508;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0842f620;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,0);
LAB_0842f620:
    uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0842f67c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar2,0);
LAB_0842f67c:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    FUN_06b6ddc8();
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0842f704;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091a14e0,0);
LAB_0842f704:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  return;
}


