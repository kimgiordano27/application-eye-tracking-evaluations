/*
FUNCTION_NAME: FUN_05e6baa8
ENTRY_POINT: 05e6baa8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e6baa8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_066dc685 & 1) == 0) {
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_147__);
    DAT_066dc685 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x50) != 0)) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar5 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    auVar6 = FUN_0322bbc0(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                          *(undefined4 *)(param_2 + 0x18),uVar1,
                          *(undefined8 *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__);
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_147__;
    if (param_1 != 0) {
      FUN_05e78aec(param_1,param_2,uVar1,&local_60,0);
      uVar3 = FUN_0322c2fc(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar2);
      uVar3 = FUN_04dc6844(uVar3,0);
      uVar4 = *(undefined8 *)puVar2;
      *param_3 = uVar3;
      uVar3 = FUN_0322c2fc(local_60,uStack_58,uVar4);
      uVar3 = FUN_04dc6844(uVar3,0);
      *param_5 = uVar1;
      *param_4 = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


