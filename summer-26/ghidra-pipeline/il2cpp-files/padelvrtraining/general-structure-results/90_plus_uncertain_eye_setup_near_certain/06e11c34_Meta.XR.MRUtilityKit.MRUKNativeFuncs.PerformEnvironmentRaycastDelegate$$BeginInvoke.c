/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.PerformEnvironmentRaycastDelegate$$BeginInvoke
ENTRY_POINT: 06e11c34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_PerformEnvironmentRaycastDelegate__BeginInvoke
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  bool in_ZR;
  long in_x9;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (in_ZR) {
    uVar1 = *(uint *)(unaff_x19 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x28;
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
        *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
        *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
        *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
        thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
        *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06e11cc0();
  return 0;
}


