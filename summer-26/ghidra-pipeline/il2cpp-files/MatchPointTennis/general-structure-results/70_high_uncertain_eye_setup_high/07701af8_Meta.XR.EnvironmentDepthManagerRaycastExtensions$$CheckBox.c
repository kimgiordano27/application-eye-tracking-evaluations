/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$CheckBox
ENTRY_POINT: 07701af8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__CheckBox(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  
  if ((param_1 != 0) && (lVar1 = FUN_095259a0(param_1,0), lVar1 != 0)) {
    FUN_0952a454(lVar1,0,0);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_0952fedc(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar1 = FUN_095259a0(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
      uVar2 = FUN_0952a518(lVar1,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if ((*(long *)(unaff_x19 + 0x48) != 0) &&
         (lVar1 = FUN_095259a0(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
        FUN_0952a454(lVar1,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


