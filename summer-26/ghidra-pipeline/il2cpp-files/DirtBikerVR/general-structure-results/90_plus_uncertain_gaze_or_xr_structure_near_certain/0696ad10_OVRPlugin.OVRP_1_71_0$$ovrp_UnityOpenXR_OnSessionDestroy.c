/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 0696ad10
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(ulong param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    *(undefined1 *)(unaff_x21 + 0xd9) = 1;
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9e200(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = FUN_07d1c660(*(long *)(unaff_x19 + 0x28),0);
    puVar2 = (undefined8 *)(unaff_x19 + 0x50);
    *puVar2 = uVar3;
    thunk_FUN_03afed3c(puVar2,0);
    FUN_07d1d580(&stack0x00000060,0,0);
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    in_stack_00000058 = in_stack_00000078;
    in_stack_00000050 = in_stack_00000070;
    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
              (puVar2,&stack0x00000040,0);
    FUN_07d1d580(&stack0x00000020,0,0);
    FUN_07d1d0d8(puVar2);
  }
  return;
}


