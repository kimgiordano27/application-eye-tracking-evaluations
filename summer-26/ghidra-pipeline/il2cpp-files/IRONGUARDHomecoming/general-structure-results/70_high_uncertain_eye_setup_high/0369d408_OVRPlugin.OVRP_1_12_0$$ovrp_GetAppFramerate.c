/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetAppFramerate
ENTRY_POINT: 0369d408
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  fVar2 = *(float *)(param_2 + 0x44);
  if (param_1 < 0.0) {
    fVar2 = -*(float *)(param_2 + 0x44);
  }
  FUN_040672cc(0,fVar2 * DAT_00c925e8,0,0);
  if (*(long *)(param_2 + 0x58) != 0) {
    FUN_03690b40(&local_70,*(undefined4 *)(*(long *)(param_2 + 0x58) + 0x10),3,0);
    lVar1 = *(long *)(param_2 + 0x68);
    if (lVar1 != 0) {
      uStack_38 = uStack_68;
      local_40 = local_70;
      uStack_28 = uStack_58;
      uStack_30 = uStack_60;
      local_20 = local_50;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&local_40,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


