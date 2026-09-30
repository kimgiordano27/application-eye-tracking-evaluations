/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 06dfae2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(long param_1,long param_2)

{
  uint uVar1;
  int in_w8;
  long in_x9;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (in_w8 == *(int *)(in_x9 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x30;
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = *(undefined8 *)(lVar2 + 0x48);
        uVar3 = *(undefined8 *)(lVar2 + 0x40);
        uVar7 = *(undefined8 *)(lVar2 + 0x28);
        uVar6 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        *(undefined8 *)(param_1 + 0x38) = uVar4;
        *(undefined8 *)(param_1 + 0x30) = uVar3;
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        thunk_FUN_03d1023c(param_1 + 0x30,0);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06dfaec4(param_1);
  return 0;
}


