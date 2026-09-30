/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 02c5918c
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 *puVar6;
  long *unaff_x21;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0xc00);
  iVar2 = (**(code **)(param_1 + 0x1e8))(param_2,param_3,*(undefined8 *)(param_1 + 0x1f0));
  iVar2 = iVar2 + 1;
  uVar3 = FUN_017fc3f4(*puVar6,iVar2);
  puVar1 = PTR_DAT_037f90f8;
  plVar5 = (long *)**(long **)(*unaff_x21 + 0xb8);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 02c591e4 to 02d59247 has its CatchHandler @ 02c591e4
                       catch() { ... } // from try @ 02c591e4 with catch @ 02c591e4
                       catch() { ... } // from try @ 02c59284 with catch @ 02c591e4
                       catch() { ... } // from try @ 02c592e8 with catch @ 02c591e4
                       catch() { ... } // from try @ 02c59370 with catch @ 02c591e4 */
    (**(code **)(*plVar5 + 0x268))(plVar5);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = thunk_FUN_01811020(iVar2,0);
    FUN_02afb554(uVar3,0,uVar4,iVar2,0);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


