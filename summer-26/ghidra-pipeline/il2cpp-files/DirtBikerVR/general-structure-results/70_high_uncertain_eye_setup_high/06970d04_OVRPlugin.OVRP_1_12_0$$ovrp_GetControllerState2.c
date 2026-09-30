/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 06970d04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x2a8));
  FUN_03a8a718(PTR_DAT_084b72b0);
  FUN_03a8a718(PTR_DAT_084b72b8);
                    /* try { // try from 06970d2c to 06a711a3 has its CatchHandler @ 06970d2c
                       catch() { ... } // from try @ 06970d2c with catch @ 06970d2c
                       catch() { ... } // from try @ 06971250 with catch @ 06970d2c
                       catch() { ... } // from try @ 06971290 with catch @ 06970d2c
                       catch() { ... } // from try @ 06971330 with catch @ 06970d2c */
  FUN_03a8a718(PTR_DAT_08486738);
  *(undefined1 *)(unaff_x20 + 0xf9) = 1;
  puVar4 = PTR_DAT_084b72a0;
  puVar3 = PTR_DAT_084b7298;
  puVar2 = PTR_DAT_08486738;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04de90b8(&stack0x00000018,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_084b72b8);
    while (uVar5 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = *(undefined8 *)(in_stack_00000028 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07ca310c(uVar7,0);
    }
    FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar3);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


