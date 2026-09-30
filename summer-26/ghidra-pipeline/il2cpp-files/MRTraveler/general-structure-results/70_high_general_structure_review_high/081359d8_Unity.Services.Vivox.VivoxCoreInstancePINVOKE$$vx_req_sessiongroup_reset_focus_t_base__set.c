/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_t_base__set
ENTRY_POINT: 081359d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08135b5c) */
/* WARNING: Removing unreachable block (ram,0x08135e90) */
/* WARNING: Removing unreachable block (ram,0x08135e84) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_t_base__set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar10 [16];
  
code_r0x081359d8:
  if (!(bool)in_ZR) goto LAB_081359c4;
LAB_081359dc:
  puVar4 = (undefined8 *)FUN_03cf1348();
                    /* try { // try from 081359e8 to 082359f3 has its CatchHandler @ 08135d44 */
  do {
                    /* try { // try from 081359fc to 08235a23 has its CatchHandler @ 08135d40 */
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_08135b50;
      lVar8 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 == 0) goto LAB_08135b28;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135a54;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 08135a30 to 08235a3f has its CatchHandler @ 08135cf8 */
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
                    /* try { // try from 08135a44 to 08235a4b has its CatchHandler @ 08135cf0 */
LAB_08135a54:
                    /* try { // try from 08135a58 to 08235a63 has its CatchHandler @ 08135cfc */
    auVar10 = (*(code *)*puVar4)();
    plVar6 = (long *)(**(code **)(*unaff_x19 + 1000))();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_081359ac;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x26,2);
LAB_081359ac:
    (*(code *)*puVar4)(plVar6,auVar10._0_8_,auVar10._8_8_,puVar4[1]);
    param_1 = *unaff_x21;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_081359dc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_081359c4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x081359d8;
    }
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x29) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135b44;
    }
  }
LAB_08135b28:
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_08135b44:
  (*(code *)*puVar4)();
LAB_08135b50:
  lVar8 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08135bac;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
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
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_08135c24:
    uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 == 0) goto LAB_08135d50;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08135c80:
    auVar10 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,2);
LAB_08135d00:
    (*(code *)*puVar4)(plVar7,auVar10._0_8_,auVar10._8_8_,puVar4[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x29) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x29,0);
LAB_08135d6c:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


