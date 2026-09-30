/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 0511e414
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar4;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
LAB_0511e3b0:
  do {
    (*(code *)*param_1)(unaff_x22,unaff_x21,unaff_x23,param_1[1]);
    uVar1 = FUN_04a3e694(&stack0x00000020,*unaff_x24);
    unaff_x21 = in_stack_00000030;
    if ((uVar1 & 1) == 0) {
      FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
      plVar4 = (long *)(unaff_x20 + 0xc0);
      if (*plVar4 != 0) {
        lVar2 = FUN_0511dc04();
        *plVar4 = lVar2;
        thunk_FUN_02dd37b4(plVar4,lVar2);
      }
      return;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0xb8);
    unaff_x23 = FUN_0511dc04();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar2 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar3 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar2 + (long)(*piVar3 + 1) * 0x10 + 0x138);
          goto LAB_0511e3b0;
        }
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x25,1);
  } while( true );
}


