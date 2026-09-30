/*
FUNCTION_NAME: FUN_0685a570
ENTRY_POINT: 0685a570
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0685a570(float param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_071d6b4d & 1) == 0) {
    FUN_02f07e70(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_113_0_TypeInfo);
    DAT_071d6b4d = 1;
  }
  plVar1 = *(long **)(param_2 + 0x3d0);
  if (plVar1 != (long *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x7e8))(plVar1,*(undefined8 *)(*plVar1 + 0x7f0));
    plVar1 = *(long **)(param_2 + 0x3d0);
    if (plVar1 != (long *)0x0) {
      fVar3 = (float)(**(code **)(*plVar1 + 0x8f8))(plVar1,*(undefined8 *)(*plVar1 + 0x900));
      if (*(long *)(param_2 + 0x3d0) != 0) {
        fVar4 = (float)FUN_047106f0(*(long *)(param_2 + 0x3d0),
                                    *(undefined8 *)OVRPlugin_OVRP_1_113_0_TypeInfo);
        if (*(long *)(param_2 + 0x3d0) != 0) {
          fVar5 = (float)FUN_04710798(*(long *)(param_2 + 0x3d0),
                                      *(undefined8 *)
                                       OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
          plVar1 = *(long **)(param_2 + 0x3d0);
          if (plVar1 != (long *)0x0) {
            if (fVar5 <= fVar4) {
              fVar3 = -fVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0685a658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x7f8))
                      (fVar2 - fVar3 * param_1,plVar1,*(undefined8 *)(*plVar1 + 0x800));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


