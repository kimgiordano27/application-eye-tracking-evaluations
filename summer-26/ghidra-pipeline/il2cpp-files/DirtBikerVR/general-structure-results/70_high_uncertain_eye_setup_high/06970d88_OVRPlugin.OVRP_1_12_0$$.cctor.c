/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 06970d88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0___cctor(ulong param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long in_stack_00000028;
  
  while( true ) {
    if ((param_1 & 1) == 0) {
      FUN_061c1960(&stack0x00000018,*unaff_x21);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (0 < iVar1) {
          Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                    (*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (in_stack_00000028 == 0) break;
    uVar3 = *(undefined8 *)(in_stack_00000028 + 0x40);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07ca310c(uVar3,0);
    param_1 = FUN_061c1964(&stack0x00000018,*unaff_x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


