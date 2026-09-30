/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_reset_focus_t
ENTRY_POINT: 08135c04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_reset_focus_t
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x29;
  undefined1 auVar6 [16];
  
code_r0x08135c04:
  if (!(bool)in_ZR) goto LAB_08135bf0;
LAB_08135c08:
  puVar1 = (undefined8 *)FUN_03cf1348();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_08135d50;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135c80:
    auVar6 = (*(code *)*puVar1)();
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar3,*unaff_x26,2);
LAB_08135d00:
    (*(code *)*puVar1)(plVar3,auVar6._0_8_,auVar6._8_8_,puVar1[1]);
    param_1 = *unaff_x20;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_08135c08;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_08135bf0:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x08135c04;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x29) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135d6c:
  (*(code *)*puVar1)();
  return;
}


