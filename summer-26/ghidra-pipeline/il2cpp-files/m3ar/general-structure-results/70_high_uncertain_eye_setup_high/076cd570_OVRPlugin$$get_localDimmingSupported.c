/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 076cd570
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimmingSupported(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  
LAB_076cd4fc:
  do {
    (*(code *)*param_1)(unaff_x20,unaff_w21,unaff_w22,&stack0x00000018,param_1[1]);
    uVar1 = FUN_0725bc24(&stack0x00000020,*unaff_x24);
    unaff_w21 = in_stack_00000030;
    if ((uVar1 & 1) == 0) {
      FUN_0725bc20(&stack0x00000020,*unaff_x23);
      return;
    }
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    unaff_x20 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *unaff_x20;
    unaff_w22 = *(undefined4 *)(in_stack_00000038 + 0x14);
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar3 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_076cd4fc;
        }
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_0406ae20(unaff_x20,*unaff_x25,0);
  } while( true );
}


