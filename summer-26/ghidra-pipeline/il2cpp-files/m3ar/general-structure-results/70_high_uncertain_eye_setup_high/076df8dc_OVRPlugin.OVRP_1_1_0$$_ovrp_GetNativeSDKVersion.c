/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetNativeSDKVersion
ENTRY_POINT: 076df8dc
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

void OVRPlugin_OVRP_1_1_0___ovrp_GetNativeSDKVersion(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int in_w9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
code_r0x076df8dc:
                    /* try { // try from 076df8dc to 077df8ff has its CatchHandler @ 076dfa70 */
  puVar1 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)(unaff_x20,unaff_x21,puVar1[1]);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076df7fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
LAB_076df7fc:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
                    /* try { // try from 076df914 to 077df91b has its CatchHandler @ 076dfa84 */
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_076df944;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076df860;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x23,0);
LAB_076df860:
    unaff_x20 = (long *)(*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    unaff_x21 = thunk_FUN_0406deb8(*unaff_x24);
    if ((unaff_x19 == 0) || (FUN_0532a918(), unaff_x20 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          in_w9 = *piVar4;
          goto code_r0x076df8dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(unaff_x20,*unaff_x25,1);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
                    /* try { // try from 076df93c to 077df973 has its CatchHandler @ 076dfa80 */
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
                    /* try { // try from 076df92c to 077df933 has its CatchHandler @ 076dfa7c */
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_076df960;
    }
  }
LAB_076df944:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df960:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


