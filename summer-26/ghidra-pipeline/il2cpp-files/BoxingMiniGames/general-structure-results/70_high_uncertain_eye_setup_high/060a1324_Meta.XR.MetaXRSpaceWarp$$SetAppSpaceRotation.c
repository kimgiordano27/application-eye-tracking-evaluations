/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpaceRotation
ENTRY_POINT: 060a1324
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpaceRotation(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  
  FUN_060a18c8(param_1,param_2,&stack0x00000020);
  if (*(char *)(unaff_x19 + 0x111) != '\0') {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_060a1368:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x7c) == '\0') {
      lVar1 = *(long *)(unaff_x19 + 0xa0);
      if (lVar1 == 0) goto LAB_060a1368;
      uVar2 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      *(undefined4 *)(unaff_x19 + 0xec) = uVar2;
    }
  }
  return;
}


