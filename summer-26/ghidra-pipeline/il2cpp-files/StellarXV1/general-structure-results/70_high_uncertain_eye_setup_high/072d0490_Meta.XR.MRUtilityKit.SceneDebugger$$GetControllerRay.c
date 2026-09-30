/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetControllerRay
ENTRY_POINT: 072d0490
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetControllerRay(long param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar2 = FUN_07343588(uVar3,0);
  if (lVar2 != 0) {
    uVar3 = FUN_07343428(lVar2,0);
    bVar1 = thunk_FUN_074e4840(uVar3,*unaff_x20,0);
    *(byte *)(unaff_x19 + 0xb8) = bVar1 & 1;
    FUN_069abb84();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


