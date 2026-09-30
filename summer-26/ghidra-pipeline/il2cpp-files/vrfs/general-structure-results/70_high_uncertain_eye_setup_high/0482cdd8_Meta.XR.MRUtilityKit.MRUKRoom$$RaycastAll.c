/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 0482cdd8
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_051d2ac0(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x98);
    uVar2 = FUN_051df7a8(*(long *)(unaff_x19 + 0x70),0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x38);
      *puVar4 = uVar2;
      thunk_FUN_01656ef8(puVar4,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


