/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 08a3f6d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPoseDebugger(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0xaa0);
  puVar4 = *(undefined8 **)(unaff_x23 + 0x1e0);
  FUN_065552a4();
  lVar2 = *unaff_x19;
  uVar1 = thunk_FUN_04983f60(*puVar3);
  FUN_09a6a910(uVar1,*puVar4,0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    *puVar3 = uVar1;
    thunk_FUN_049ee3d8(puVar3,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


