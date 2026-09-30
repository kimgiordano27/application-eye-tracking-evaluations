/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 027ec4ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x24;
  
  puVar1 = PTR_DAT_03cc0330;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x24;
    }
    uVar4 = **(undefined8 **)(param_2 + 0xb8);
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
    FUN_02060754(lVar3,uVar4,*(undefined8 *)PTR_DAT_03cfd400,0);
    plVar2 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *plVar2 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar3);
  }
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027ed758(uVar4,lVar3);
  thunk_FUN_01a4b338();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x20),uVar4);
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) != 0)) {
    FUN_02187b5c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


