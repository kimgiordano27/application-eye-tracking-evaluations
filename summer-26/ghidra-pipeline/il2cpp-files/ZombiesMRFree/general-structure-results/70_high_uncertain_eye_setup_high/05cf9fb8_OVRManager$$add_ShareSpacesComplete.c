/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 05cf9fb8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__add_ShareSpacesComplete(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar3 = param_2;
  fVar4 = param_3;
  if ((DAT_07398752 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f74168);
    DAT_07398752 = 1;
  }
  fVar2 = (float)OVRManager__remove_SpaceQueryComplete(param_4);
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_05cf4c7c(&local_70,*(long *)(param_4 + 0x20),0);
    puVar1 = PTR_DAT_06f74168;
    if (*(long *)(param_4 + 0x20) != 0) {
      FUN_05cf59f0((param_1 - fVar2) + (float)local_70,(param_2 - fVar3) + local_70._4_4_,
                   (param_3 - fVar4) + (float)uStack_68,*(long *)(param_4 + 0x20),0);
      *(undefined1 *)(param_4 + 0xc0) = 1;
      OVRManager__remove_SpaceQueryComplete(param_4);
      local_70 = 0;
      uStack_68 = 0;
      FUN_048256d8(&local_70,*(undefined8 *)puVar1);
      *(undefined8 *)(param_4 + 0xcc) = uStack_68;
      *(undefined8 *)(param_4 + 0xc4) = local_70;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


