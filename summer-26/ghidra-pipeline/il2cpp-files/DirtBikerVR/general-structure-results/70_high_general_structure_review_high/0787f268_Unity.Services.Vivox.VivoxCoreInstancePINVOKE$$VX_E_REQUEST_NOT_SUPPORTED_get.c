/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_NOT_SUPPORTED_get
ENTRY_POINT: 0787f268
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_NOT_SUPPORTED_get(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xe08));
  FUN_03a8a718(PTR_DAT_08491e10);
  FUN_03a8a718(PTR_DAT_084902d8);
  FUN_03a8a718(PTR_DAT_08486bc0);
  *(undefined1 *)(unaff_x20 + 0x74b) = 1;
  puVar3 = PTR_DAT_08491e00;
  puVar2 = PTR_DAT_08491df8;
  puVar1 = PTR_DAT_084902d8;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (unaff_x19 != 0) {
    lVar6 = *(long *)PTR_DAT_08486bc0;
    FUN_04de90b8(&stack0x00000018);
    while (uVar4 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      uVar5 = FUN_07fc70b4(in_stack_00000028,0);
      lVar6 = FUN_065cddf0(lVar6,uVar5,*(undefined8 *)puVar1,0);
    }
    FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      FUN_065cfa04(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


