/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$RaycastInternal
ENTRY_POINT: 08a28518
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__RaycastInternal(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0b32c31a & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac525c0);
    DAT_0b32c31a = 1;
  }
  puVar1 = PTR_DAT_0ac525c0;
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    lVar3 = FUN_08dc2b6c(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_04983e64(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar3,uVar6);
      }
    }
    lVar3 = FUN_04980500((long *)(param_1 + 0x10),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


