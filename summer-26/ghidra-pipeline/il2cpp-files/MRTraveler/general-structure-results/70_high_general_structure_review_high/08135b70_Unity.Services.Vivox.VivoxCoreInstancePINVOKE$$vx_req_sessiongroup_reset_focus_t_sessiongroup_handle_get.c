/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
ENTRY_POINT: 08135b70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x29;
  undefined1 auVar10 [16];
  
  piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
                    /* try { // try from 08135ba8 to 08235bb7 has its CatchHandler @ 08135cd4 */
      puVar4 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135bac;
    }
                    /* try { // try from 08135b84 to 08235b8f has its CatchHandler @ 08135d00 */
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_08135bac:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_08ebf8c0;
  puVar2 = PTR_DAT_08e82e08;
  puVar1 = PTR_DAT_08e6a290;
                    /* try { // try from 08135bbc to 08235bc7 has its CatchHandler @ 08135ccc */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar1,0);
LAB_08135c24:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_08135d50;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_08135c80:
    auVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,2);
LAB_08135d00:
    (*(code *)*puVar4)(plVar6,auVar10._0_8_,auVar10._8_8_,puVar4[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x29) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*unaff_x29,0);
LAB_08135d6c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


