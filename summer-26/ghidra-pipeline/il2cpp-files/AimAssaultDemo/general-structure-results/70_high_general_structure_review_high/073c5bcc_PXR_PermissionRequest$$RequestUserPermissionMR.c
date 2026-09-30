/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 073c5bcc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


long * PXR_PermissionRequest__RequestUserPermissionMR(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong in_x9;
  int *in_x10;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000030;
  
code_r0x073c5bcc:
                    /* try { // try from 073c5bcc to 074c5d9f has its CatchHandler @ 073c5bcc
                       catch() { ... } // from try @ 073c5bcc with catch @ 073c5bcc
                       catch() { ... } // from try @ 073c5efc with catch @ 073c5bcc
                       catch() { ... } // from try @ 073c5fa4 with catch @ 073c5bcc
                       catch() { ... } // from try @ 073c5fac with catch @ 073c5bcc
                       catch() { ... } // from try @ 073c6080 with catch @ 073c5bcc */
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_073c5bc0;
LAB_073c5bd8:
  puVar1 = (undefined8 *)FUN_0377596c(unaff_x20,param_3,4);
  do {
    (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
    if ((uVar2 & 1) != 0) {
LAB_073c5c1c:
      FUN_05d64e94(&stack0x00000020,*unaff_x21);
      return unaff_x20;
    }
    uVar2 = FUN_05d64e98(&stack0x00000020,*unaff_x22);
    if ((uVar2 & 1) == 0) {
      unaff_x20 = (long *)0x0;
      goto LAB_073c5c1c;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *in_stack_00000030;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000030;
    if (in_x9 == 0) goto LAB_073c5bd8;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_073c5bc0:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x073c5bcc;
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
  } while( true );
}


