/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 06970e10
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


void OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(undefined8 param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_039ba604(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar2;
  in_stack_00000008 = lVar3;
  __cxa_end_catch();
  FUN_061c1960(in_stack_00000010,*unaff_x21);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar3);
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


