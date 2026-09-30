/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$ovrp_SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 06979ecc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_88_0__ovrp_SetSimultaneousHandsAndControllersEnabled
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  uVar2 = FUN_065c0764(param_2,*param_1);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
  }
  FUN_07c4adbc(uVar2,0);
  fVar3 = (float)FUN_07ca88b8(0);
  puVar1 = PTR_DAT_08486760;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
    if (fStack000000000000002c < fVar3) {
      thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),&stack0x0000002c);
      in_stack_00000028 = fVar3;
      thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
      uVar2 = FUN_065ce798(*(undefined8 *)PTR_DAT_084b7578);
      uVar2 = FUN_065c0764(uVar2,*(undefined8 *)PTR_DAT_084b7560,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4adbc(uVar2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


