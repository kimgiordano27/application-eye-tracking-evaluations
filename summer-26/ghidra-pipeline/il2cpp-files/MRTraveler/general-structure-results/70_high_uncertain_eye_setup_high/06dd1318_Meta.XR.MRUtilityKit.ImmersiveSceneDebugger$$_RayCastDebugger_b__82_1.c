/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<RayCastDebugger>b__82_1
ENTRY_POINT: 06dd1318
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<RayCastDebugger>b__82_1
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  
  uVar1 = (**(code **)(param_1 + 0x308))(param_2,*(undefined8 *)(param_1 + 0x310));
  uVar2 = FUN_06e136ac(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*unaff_x19 + 0x308))();
    if (lVar3 != 0) {
      uVar2 = FUN_06e168e8(lVar3,*(undefined8 *)PTR_DAT_08e86590,0);
      if ((uVar2 & 1) == 0) goto LAB_06dd1390;
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06dd138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        return uVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
LAB_06dd1390:
  return **(undefined8 **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
}


