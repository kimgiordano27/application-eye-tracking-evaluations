/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 06de19d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *unaff_x19;
  
  uVar1 = FUN_070b2abc(param_1,param_2,0);
  plVar3 = (long *)*unaff_x19;
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    return uVar2 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


