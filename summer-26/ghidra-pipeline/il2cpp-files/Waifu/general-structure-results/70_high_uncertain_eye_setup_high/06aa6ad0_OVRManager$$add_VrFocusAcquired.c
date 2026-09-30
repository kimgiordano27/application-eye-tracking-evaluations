/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 06aa6ad0
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06aa6bb0) */

void OVRManager__add_VrFocusAcquired(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  do {
                    /* try { // try from 06aa6ad0 to 06ba6ad7 has its CatchHandler @ 06aa707c */
    piVar4 = (int *)(in_x10 + 8);
    do {
                    /* try { // try from 06aa6adc to 06ba6adf has its CatchHandler @ 06aa7068 */
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_06aa69dc;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
                    /* try { // try from 06aa6af0 to 06ba6afb has its CatchHandler @ 06aa7080 */
      puVar1 = (undefined8 *)FUN_0338f71c(unaff_x21,param_3,1);
LAB_06aa69dc:
      (*(code *)*puVar1)(unaff_x21,unaff_x22,puVar1[1]);
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)(unaff_x23 + 0x870)) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06aa6a28;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aa6a28:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
                    /* try { // try from 06aa6b30 to 06ba6b37 has its CatchHandler @ 06aa7088 */
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_06aa6b5c;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_06aa6b44;
      }
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)(unaff_x24 + 0x5d8)) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_06aa6a84;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aa6a84:
      unaff_x21 = (long *)(*(code *)*puVar1)();
      unaff_x22 = FUN_03398a84(*(undefined8 *)(unaff_x25 + 0x228));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_06039da8();
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      param_1 = *unaff_x21;
      param_3 = *(long *)(unaff_x26 + 0xc60);
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_06aa6b44:
    if (*(long *)(piVar4 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_06aa6b78;
    }
  }
LAB_06aa6b5c:
                    /* try { // try from 06aa6b60 to 06ba6b67 has its CatchHandler @ 06aa7098 */
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aa6b78:
  (*(code *)*puVar1)();
                    /* try { // try from 06aa6b8c to 06ba6b93 has its CatchHandler @ 06aa70a0 */
  return;
}


