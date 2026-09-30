/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetVersion
ENTRY_POINT: 076df858
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


/* WARNING: Removing unreachable block (ram,0x076df998) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetVersion(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
code_r0x076df858:
                    /* try { // try from 076df858 to 077df86f has its CatchHandler @ 076dfa78 */
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    plVar1 = (long *)(*(code *)*puVar3)(unaff_x20,puVar3[1]);
    uVar2 = thunk_FUN_0406deb8(*unaff_x24);
                    /* try { // try from 076df880 to 077df887 has its CatchHandler @ 076dfa74 */
                    /* try { // try from 076df894 to 077df8a3 has its CatchHandler @ 076dfa68 */
    if ((unaff_x19 == 0) || (FUN_0532a918(), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 076df8b4 to 077df8bb has its CatchHandler @ 076dfa6c */
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076df7a8;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 076df8c0 to 077df8d7 has its CatchHandler @ 076dfa64 */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar1,*unaff_x25,1);
LAB_076df7a8:
    (*(code *)*puVar3)(plVar1,uVar2,puVar3[1]);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df7fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
LAB_076df7fc:
    uVar5 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076df944;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          in_x9 = (long)*piVar6;
          goto code_r0x076df858;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x23,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076df960;
    }
  }
LAB_076df944:
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df960:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  return;
}


