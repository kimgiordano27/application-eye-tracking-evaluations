/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01ca4b94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_AppPerfFrameStats>(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 *unaff_x25;
  undefined8 uVar4;
  
  puVar1 = StringLiteral_809;
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    puVar2 = (undefined8 *)
             FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x25,*(undefined8 *)StringLiteral_809);
    uVar4 = *puVar2;
    uVar3 = puVar2[2];
    unaff_x24[1] = puVar2[1];
    *unaff_x24 = uVar4;
    unaff_x24[2] = uVar3;
    if (*(long *)(unaff_x22 + 0x20) != 0) {
      puVar2 = (undefined8 *)
               FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x23,*(undefined8 *)puVar1);
      uVar4 = *puVar2;
      uVar3 = puVar2[2];
      unaff_x21[1] = puVar2[1];
      *unaff_x21 = uVar4;
      unaff_x21[2] = uVar3;
      if (*(long *)(unaff_x22 + 0x20) != 0) {
        puVar2 = (undefined8 *)
                 FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x20,*(undefined8 *)puVar1);
        uVar4 = *puVar2;
        uVar3 = puVar2[2];
        unaff_x19[1] = puVar2[1];
        *unaff_x19 = uVar4;
        unaff_x19[2] = uVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


