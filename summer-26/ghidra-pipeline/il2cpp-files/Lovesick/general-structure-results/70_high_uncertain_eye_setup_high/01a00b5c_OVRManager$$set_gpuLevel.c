/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 01a00b5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_gpuLevel(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    fVar3 = 1.0;
    if (param_1 < 0.0) {
      fVar3 = -1.0;
    }
    fVar2 = (float)FUN_0265f96c(ABS(param_1),*(long *)(param_2 + 0x20),0);
    FUN_02698b6c(0,fVar3 * fVar2 * DAT_028aa044,0,0);
    if (*(long *)(param_2 + 0x28) != 0) {
      FUN_019efae0(&local_50,*(undefined4 *)(*(long *)(param_2 + 0x28) + 0x10),1,0);
      lVar1 = *(long *)(param_2 + 0x30);
      uStack_78 = uStack_48;
      local_80 = local_50;
      uStack_68 = uStack_38;
      uStack_70 = uStack_40;
      local_60 = local_30;
      if (lVar1 != 0) {
        uStack_a8 = uStack_48;
        local_b0 = local_50;
        uStack_98 = uStack_38;
        uStack_a0 = uStack_40;
        local_90 = local_30;
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),&local_b0,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


