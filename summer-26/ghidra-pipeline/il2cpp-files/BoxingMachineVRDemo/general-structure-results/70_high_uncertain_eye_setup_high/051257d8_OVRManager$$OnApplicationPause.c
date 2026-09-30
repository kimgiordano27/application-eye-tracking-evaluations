/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 051257d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  
  uVar2 = FUN_05124258();
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (unaff_w19 < (int)uVar1) {
      FUN_03aac218(lVar4,unaff_w19,uVar2,*(undefined8 *)PTR_DAT_06780f00);
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)PTR_DAT_06780ee8;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar3 = uVar2;
        thunk_FUN_02dd37b4(puVar3,uVar2);
        return;
      }
      FUN_03aac494(lVar4,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


