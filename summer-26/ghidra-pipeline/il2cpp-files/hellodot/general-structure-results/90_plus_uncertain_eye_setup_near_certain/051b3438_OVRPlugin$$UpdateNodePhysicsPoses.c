/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 051b3438
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__UpdateNodePhysicsPoses(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000048 = unaff_x20[3];
  uStack0000000000000040 = unaff_x20[2];
  uStack0000000000000058 = unaff_x20[5];
  uStack0000000000000050 = unaff_x20[4];
  uStack0000000000000038 = unaff_x20[1];
  uStack0000000000000030 = *unaff_x20;
  if (*(long *)(unaff_x19 + 200) != 0) {
    FUN_05ef2cb4(*(long *)(unaff_x19 + 200),0);
    FUN_051b2c84(param_1);
    lVar2 = *(long *)(unaff_x19 + 0x130);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar4 = *(long *)PTR_DAT_066089f0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = param_1;
        }
        else {
          FUN_039683cc(lVar2,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


