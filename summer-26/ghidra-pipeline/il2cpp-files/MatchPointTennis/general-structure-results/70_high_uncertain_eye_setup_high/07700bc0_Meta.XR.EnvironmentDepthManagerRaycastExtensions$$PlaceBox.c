/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$PlaceBox
ENTRY_POINT: 07700bc0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__PlaceBox
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  
  FUN_062fc888(param_2,param_3,*param_1,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar3 = param_2;
  thunk_FUN_044bb4b4(puVar3,param_2);
  if (unaff_x20 != 0) {
    iVar2 = FUN_05c00fdc();
    iVar1 = 0;
    if (iVar2 != -1) {
      iVar1 = iVar2;
    }
    *(int *)(unaff_x19 + 0x40) = iVar1;
    FUN_07700c24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


