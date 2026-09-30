/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 05bf0490
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 9) * 0x10 + 0x138);
          goto LAB_05bf04dc;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(unaff_x23,*unaff_x24,9);
LAB_05bf04dc:
    uVar2 = (*(code *)*puVar1)(unaff_x23,unaff_w20);
    if ((uVar2 & 1) == 0) goto LAB_05bf0550;
    FUN_06a646dc(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,0);
    FUN_06a647b0(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018,unaff_x21,0);
    if (unaff_x22 == 0) {
LAB_05bf05a4:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar2 = FUN_069d710c(unaff_x22,0);
    if ((uVar2 & 1) == 0) {
      FUN_069d7048(unaff_x22,1,0);
      FUN_06a64938(unaff_x21,0);
    }
    while( true ) {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == 0x13) {
          return;
        }
        uVar2 = FUN_05befca0();
      } while ((uVar2 & 1) == 0);
      if (in_stack_00000028 == 0) goto LAB_05bf05a4;
      unaff_x22 = FUN_069d3b50(in_stack_00000028,0);
      unaff_x21 = in_stack_00000028;
      if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_05bf0550:
      if (unaff_x22 == 0) goto LAB_05bf05a4;
      uVar2 = FUN_069d710c(unaff_x22,0);
      if ((uVar2 & 1) != 0) {
        FUN_06a64884(unaff_x21,0);
        FUN_069d7048(unaff_x22,0,0);
      }
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x23 == (long *)0x0) goto LAB_05bf05a4;
    param_1 = *unaff_x23;
  } while( true );
}


