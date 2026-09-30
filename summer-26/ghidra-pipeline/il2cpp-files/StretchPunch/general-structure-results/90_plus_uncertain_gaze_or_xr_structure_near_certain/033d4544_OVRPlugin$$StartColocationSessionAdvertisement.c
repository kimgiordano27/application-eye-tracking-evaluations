/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 033d4544
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StartColocationSessionAdvertisement(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  
  uVar1 = FUN_033dc8d4(unaff_x19[2],0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar3 = *unaff_x19;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  plVar2 = (long *)FUN_033a87c8(uVar3,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d45a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x158))(plVar2,*(undefined8 *)(*plVar2 + 0x160));
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


