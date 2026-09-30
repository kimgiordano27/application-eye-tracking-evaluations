/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$.cctor
ENTRY_POINT: 076df44c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076df638) */

void OVRPlugin_OVRP_0_1_3___cctor(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
  do {
                    /* catch() { ... } // from try @ 076df2f0 with catch @ 076df44c */
                    /* catch() { ... } // from try @ 076defec with catch @ 076df450 */
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
                    /* catch() { ... } // from try @ 076df0d0 with catch @ 076df454 */
    lVar4 = *in_stack_00000018;
                    /* catch() { ... } // from try @ 076df0c0 with catch @ 076df458 */
                    /* catch() { ... } // from try @ 076df2a4 with catch @ 076df45c */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 076df130 with catch @ 076df460 */
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 076df0b4 with catch @ 076df464 */
                    /* catch() { ... } // from try @ 076df1e0 with catch @ 076df468
                       catch() { ... } // from try @ 076df398 with catch @ 076df468 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 076defd4 with catch @ 076df46c */
                    /* catch() { ... } // from try @ 076df2e8 with catch @ 076df470 */
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df4a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 076df488 to 077df49f has its CatchHandler @ 076df6a8 */
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
LAB_076df4a0:
                    /* try { // try from 076df4a0 to 077df56b has its CatchHandler @ 076deca0 */
    uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076df5e4;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df504;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x23,0);
LAB_076df504:
    plVar2 = (long *)(*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    uVar3 = thunk_FUN_0406deb8(*unaff_x24);
    if ((unaff_x19 == 0) || (FUN_0532a918(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df588;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x25,0);
LAB_076df588:
    (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076df600;
    }
  }
LAB_076df5e4:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df600:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


