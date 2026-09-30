/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_create
ENTRY_POINT: 08135ce8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_create
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x29;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = unaff_x22;
  auVar5._0_8_ = unaff_x21;
code_r0x08135ce8:
                    /* catch() { ... } // from try @ 08135710 with catch @ 08135ce8 */
  puVar1 = (undefined8 *)FUN_03cf1348(param_1,param_2,param_3);
  param_1 = unaff_x23;
                    /* catch() { ... } // from try @ 08135ca8 with catch @ 08135cec */
  do {
                    /* catch() { ... } // from try @ 08135b84 with catch @ 08135d00 */
                    /* catch() { ... } // from try @ 08135ca0 with catch @ 08135d04 */
                    /* catch() { ... } // from try @ 08135b28 with catch @ 08135d08 */
                    /* catch() { ... } // from try @ 08135a70 with catch @ 08135d0c */
                    /* catch() { ... } // from try @ 08135b58 with catch @ 08135d10 */
    (*(code *)*puVar1)(param_1,auVar5._0_8_,auVar5._8_8_,puVar1[1]);
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch() { ... } // from try @ 08135c98 with catch @ 08135d14 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135c24:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 08135c94 with catch @ 08135d18 */
                    /* catch() { ... } // from try @ 08135c90 with catch @ 08135d1c */
      if (unaff_x20 == (long *)0x0) {
        return;
      }
                    /* catch() { ... } // from try @ 08135c8c with catch @ 08135d20 */
      lVar2 = *unaff_x20;
                    /* catch() { ... } // from try @ 08135b6c with catch @ 08135d24 */
                    /* catch() { ... } // from try @ 08135ac4 with catch @ 08135d28 */
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch() { ... } // from try @ 08135ab4 with catch @ 08135d2c */
      if (uVar3 == 0) goto LAB_08135d50;
                    /* catch() { ... } // from try @ 08135ad8 with catch @ 08135d30 */
                    /* catch() { ... } // from try @ 08135a94 with catch @ 08135d34 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_08135d38;
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08135c80;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135c80:
    auVar5 = (*(code *)*puVar1)();
    param_1 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = *param_1;
    param_2 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 == 0) break;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      if (uVar3 == 0) goto LAB_08135ce0;
    }
                    /* catch() { ... } // from try @ 08135a44 with catch @ 08135cf0 */
                    /* catch() { ... } // from try @ 08135a80 with catch @ 08135cf4 */
                    /* catch() { ... } // from try @ 08135a30 with catch @ 08135cf8 */
                    /* catch() { ... } // from try @ 08135a58 with catch @ 08135cfc */
    puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
  } while( true );
LAB_08135ce0:
  param_3 = 2;
  unaff_x23 = param_1;
  goto code_r0x08135ce8;
  while( true ) {
                    /* catch() { ... } // from try @ 081359e8 with catch @ 08135d44 */
    uVar3 = uVar3 - 1;
                    /* catch() { ... } // from try @ 081356ec with catch @ 08135d48 */
    piVar4 = piVar4 + 4;
                    /* catch() { ... } // from try @ 08135c9c with catch @ 08135d4c
                       catch() { ... } // from try @ 08135ca4 with catch @ 08135d4c */
    if (uVar3 == 0) break;
LAB_08135d38:
                    /* catch() { ... } // from try @ 081359a8 with catch @ 08135d38 */
                    /* catch() { ... } // from try @ 081356a8 with catch @ 08135d3c */
                    /* catch() { ... } // from try @ 081359fc with catch @ 08135d40 */
    if (*(long *)(piVar4 + -2) == *unaff_x29) {
                    /* catch() { ... } // from try @ 081356b4 with catch @ 08135d60 */
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
                    /* catch() { ... } // from try @ 08135950 with catch @ 08135d50 */
                    /* catch() { ... } // from try @ 08135c88 with catch @ 08135d54 */
                    /* catch() { ... } // from try @ 08135c84 with catch @ 08135d58 */
  puVar1 = (undefined8 *)FUN_03cf1348();
                    /* catch() { ... } // from try @ 081356c0 with catch @ 08135d5c */
LAB_08135d6c:
  (*(code *)*puVar1)();
  return;
}


