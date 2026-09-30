/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 05acff2c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Raycast(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  long *unaff_x19;
  
  if (in_w8 != 0) {
    if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (in_w8 != *(int *)(*unaff_x19 + 0x20) + 1) goto LAB_05acff54;
  }
  FUN_05e22a2c(0);
LAB_05acff54:
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
  return;
}


