/*
FUNCTION_NAME: FUN_05d16a90
ENTRY_POINT: 05d16a90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05d16a90(float param_1,long param_2,long param_3,float *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  uint local_34;
  
  if ((DAT_07398877 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5dd8);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07398877 = 1;
  }
  local_34 = 0;
  *param_4 = 1.0;
  if ((*(int *)(param_2 + 0x84) == 2) || (local_34 = FUN_05d14a14(param_2,param_3), local_34 == 0))
  {
    fVar5 = (float)FUN_05d14658(param_2,param_3,&local_34,0);
    *param_4 = fVar5;
  }
  else {
    fVar5 = *param_4;
  }
  puVar1 = PTR_DAT_06f6d618;
  if (fVar5 < param_1) {
LAB_05d16be4:
    uVar3 = 0;
  }
  else {
    uVar3 = local_34;
    if (local_34 == 0) {
      if (*(char *)(param_2 + 0x13c) == '\0') goto LAB_05d16be4;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar3 = *(uint *)(param_2 + 0x138) & *(uint *)(param_3 + 0xe4);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x150);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = FUN_068f8810(uVar4,0,0);
    if ((((uVar3 >> 1 & 1) != 0) && ((uVar2 & 1) != 0)) &&
       (uVar2 = OVRPlugin__GetAppCpuStartToGpuEndTime
                          (uVar2,param_3,*(undefined8 *)(param_2 + 0x150)), (uVar2 & 1) == 0)) {
      uVar3 = uVar3 & 0xfffffffd;
      local_34 = uVar3;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x160);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = FUN_068f8810(uVar4,0,0);
    if (((uVar3 & 1) != 0) && ((uVar2 & 1) != 0)) {
      uVar2 = OVRPlugin__GetAppCpuStartToGpuEndTime(uVar2,param_3,*(undefined8 *)(param_2 + 0x160));
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
    }
  }
  return uVar3;
}


